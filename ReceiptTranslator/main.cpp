#include "pch.h"
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Graphics.Imaging.h>
#include <winrt/Windows.Media.Ocr.h>
#include <iostream>
#include <filesystem>
#include <winrt/Windows.Globalization.h>
#include <stdio.h>
#include <fcntl.h>
#include <io.h>

using namespace winrt::Windows::Storage::Streams;
using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Storage;
using namespace Windows::Graphics::Imaging;
using namespace Windows::Media::Ocr;

void analyzeImage(const hstring imagePath)
{
    StorageFile file = StorageFile::GetFileFromPathAsync(imagePath).get();

    IRandomAccessStream stream = file.OpenAsync(FileAccessMode::Read).get();

    BitmapDecoder decoder = BitmapDecoder::CreateAsync(stream).get();

    SoftwareBitmap softwareBitmap = decoder.GetSoftwareBitmapAsync().get();

    OcrEngine ocrEngine = Windows::Media::Ocr::OcrEngine::TryCreateFromLanguage(Windows::Globalization::Language(L"ja"));

    // check who returns nullptr. Three options are:
    // 1. ocrEngine
    // 2. ocrEngine.RecognizeAsync(softwareBitmap)
    // 3. ocrEngine.RecognizeAsync(softwareBitmap).get()
    // when would get() crash? 

    OcrResult ocrResult = ocrEngine.RecognizeAsync(softwareBitmap).get();

    for (auto line : ocrResult.Lines())
    {
        for (auto word : line.Words())
        {
            auto translate = translate(word);
            auto rect = word.BoundingRect();

			std::wcout << word.Text().c_str() << L" ";
		}
        //std::wcout << line.Text().c_str() << std::endl;
    }
}

int main()
{
    init_apartment();
    _setmode(_fileno(stdout), _O_U16TEXT);


    // can't use co_await -> create lamda function 

    std::filesystem::path currentPath = std::filesystem::current_path();

    for (const auto& entry : std::filesystem::directory_iterator(currentPath))
    {
        std::wcout << entry.path().filename().c_str() << std::endl;
        if (entry.path().extension() == ".png")
        {
            analyzeImage(winrt::to_hstring(entry.path().string()));
        }
    }

    return 0;
}
