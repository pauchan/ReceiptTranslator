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


#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Microsoft.Graphics.Canvas.h>
#include <winrt/Microsoft.Graphics.Canvas.Text.h>
#include <string>
#include <fstream>
#include <vector>
#include <winrt/Windows.UI.h>

using namespace winrt::Microsoft::Graphics::Canvas::Text;
using namespace winrt::Microsoft::Graphics::Canvas;

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Storage;
using namespace Windows::Graphics::Imaging;
using namespace Windows::Media::Ocr;

std::vector<uint8_t> CreateBitmapWithText(int width, int height, const std::wstring& text)
{
    CanvasDevice device = CanvasDevice::GetSharedDevice();
    CanvasRenderTarget renderTarget(device, static_cast<float>(width), static_cast<float>(height), 96.0f); // 96 DPI

    CanvasDrawingSession drawingSession = renderTarget.CreateDrawingSession();
    auto white = Windows::UI::Colors::White();
    drawingSession.Clear(white);

    CanvasTextFormat textFormat;
    textFormat.FontSize(32);
    textFormat.HorizontalAlignment(CanvasHorizontalAlignment::Center);
    textFormat.VerticalAlignment(CanvasVerticalAlignment::Center);

    drawingSession.DrawText(text, Rect(0, 0, static_cast<float>(width), static_cast<float>(height)), Windows::UI::Colors::Black(), textFormat);
    drawingSession.Close();

    auto stream = winrt::Windows::Storage::Streams::InMemoryRandomAccessStream();
    renderTarget.SaveAsync(stream, CanvasBitmapFileFormat::Png).get();
    

    // Convert stream to pixel data
    BitmapDecoder decoder = BitmapDecoder::CreateAsync(stream).get();

    auto pixelDataProvider = decoder.GetPixelDataAsync().get();
    auto comArray = pixelDataProvider.DetachPixelData();
    std::vector<uint8_t> buffer(comArray.size());
    return buffer;
}

void analyzeImage(const std::string imagePath)
{
    StorageFile file = StorageFile::GetFileFromPathAsync(winrt::to_hstring(imagePath)).get();

    winrt::Windows::Storage::Streams::IRandomAccessStream stream = file.OpenAsync(FileAccessMode::Read).get();

    BitmapDecoder decoder = BitmapDecoder::CreateAsync(stream).get();

    SoftwareBitmap softwareBitmap = decoder.GetSoftwareBitmapAsync().get();

    BitmapPixelFormat format = softwareBitmap.BitmapPixelFormat();
    BitmapTransform trasnform = BitmapTransform();
    auto pixelData = decoder.GetPixelDataAsync(BitmapPixelFormat::Bgra8, BitmapAlphaMode::Premultiplied, trasnform, ExifOrientationMode::RespectExifOrientation, ColorManagementMode::ColorManageToSRgb).get();

    OcrEngine ocrEngine = Windows::Media::Ocr::OcrEngine::TryCreateFromLanguage(Windows::Globalization::Language(L"ja"));

    OcrResult ocrResult = ocrEngine.RecognizeAsync(softwareBitmap).get();


    auto fileStream = stream.GetInputStreamAt(0);
    auto reader = winrt::Windows::Storage::Streams::DataReader::DataReader(fileStream);
    reader.LoadAsync(static_cast<uint32_t>(stream.Size())).get();

    std::vector<uint8_t> buffer(static_cast<size_t>(stream.Size()));
    reader.ReadBytes(buffer);



    for (auto line : ocrResult.Lines())
    {


        for (auto word : line.Words())
        {
            auto translatedWord = L"test";   // translate(word);
            auto rect = word.BoundingRect();

            auto bitmapData = CreateBitmapWithText(rect.Height, rect.Width, translatedWord);

            int nPixelsSize = rect.Height * rect.Width * 4;
            int firstPixel = (rect.Y * rect.Width + rect.X) * 4;
            for (int i = firstPixel,j=0; j < nPixelsSize; i += 4,j+=4)
            {
                buffer[i] = bitmapData[j];
                buffer[i + 1] = bitmapData[j + 1];
                buffer[i + 2] = bitmapData[j + 2];
            }


            //std::wcout << word.Text().c_str() << L" ";
        }

    }

    //auto filename = imagePath + L"output" + L".png";
    //auto filename = imagePath + L"output" + L".png"; 

    auto filename = imagePath + "output" + ".png";

    std::ofstream file2(filename, std::ios::binary);
    file2.write(reinterpret_cast<const char*>(buffer.data()), buffer.size());

}

int main()
{
    init_apartment();
    _setmode(_fileno(stdout), _O_U16TEXT);

    std::filesystem::path currentPath = std::filesystem::current_path();

    for (const auto& entry : std::filesystem::directory_iterator(currentPath))
    {
        std::wcout << entry.path().filename().c_str() << std::endl;
        if (entry.path().extension() == ".png")
        {
            analyzeImage(entry.path().string());
        }
    }

    return 0;
}
