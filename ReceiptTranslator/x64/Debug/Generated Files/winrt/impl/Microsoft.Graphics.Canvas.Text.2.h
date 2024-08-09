// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_Microsoft_Graphics_Canvas_Text_2_H
#define WINRT_Microsoft_Graphics_Canvas_Text_2_H
#include "winrt/impl/Microsoft.Graphics.Canvas.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Text.1.h"
WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Text
{
    struct CanvasAnalyzedBidi
    {
        uint32_t ExplicitLevel;
        uint32_t ResolvedLevel;
    };
    inline bool operator==(CanvasAnalyzedBidi const& left, CanvasAnalyzedBidi const& right) noexcept
    {
        return left.ExplicitLevel == right.ExplicitLevel && left.ResolvedLevel == right.ResolvedLevel;
    }
    inline bool operator!=(CanvasAnalyzedBidi const& left, CanvasAnalyzedBidi const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasAnalyzedBreakpoint
    {
        winrt::Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition BreakBefore;
        winrt::Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition BreakAfter;
        bool IsWhitespace;
        bool IsSoftHyphen;
    };
    inline bool operator==(CanvasAnalyzedBreakpoint const& left, CanvasAnalyzedBreakpoint const& right) noexcept
    {
        return left.BreakBefore == right.BreakBefore && left.BreakAfter == right.BreakAfter && left.IsWhitespace == right.IsWhitespace && left.IsSoftHyphen == right.IsSoftHyphen;
    }
    inline bool operator!=(CanvasAnalyzedBreakpoint const& left, CanvasAnalyzedBreakpoint const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasAnalyzedGlyphOrientation
    {
        winrt::Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation GlyphOrientation;
        uint32_t AdjustedBidiLevel;
        bool IsSideways;
        bool IsRightToLeft;
    };
    inline bool operator==(CanvasAnalyzedGlyphOrientation const& left, CanvasAnalyzedGlyphOrientation const& right) noexcept
    {
        return left.GlyphOrientation == right.GlyphOrientation && left.AdjustedBidiLevel == right.AdjustedBidiLevel && left.IsSideways == right.IsSideways && left.IsRightToLeft == right.IsRightToLeft;
    }
    inline bool operator!=(CanvasAnalyzedGlyphOrientation const& left, CanvasAnalyzedGlyphOrientation const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasAnalyzedScript
    {
        int32_t ScriptIdentifier;
        winrt::Microsoft::Graphics::Canvas::Text::CanvasScriptShape Shape;
    };
    inline bool operator==(CanvasAnalyzedScript const& left, CanvasAnalyzedScript const& right) noexcept
    {
        return left.ScriptIdentifier == right.ScriptIdentifier && left.Shape == right.Shape;
    }
    inline bool operator!=(CanvasAnalyzedScript const& left, CanvasAnalyzedScript const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasCharacterRange
    {
        int32_t CharacterIndex;
        int32_t CharacterCount;
    };
    inline bool operator==(CanvasCharacterRange const& left, CanvasCharacterRange const& right) noexcept
    {
        return left.CharacterIndex == right.CharacterIndex && left.CharacterCount == right.CharacterCount;
    }
    inline bool operator!=(CanvasCharacterRange const& left, CanvasCharacterRange const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasClusterMetrics
    {
        int32_t CharacterCount;
        float Width;
        winrt::Microsoft::Graphics::Canvas::Text::CanvasClusterProperties Properties;
    };
    inline bool operator==(CanvasClusterMetrics const& left, CanvasClusterMetrics const& right) noexcept
    {
        return left.CharacterCount == right.CharacterCount && left.Width == right.Width && left.Properties == right.Properties;
    }
    inline bool operator!=(CanvasClusterMetrics const& left, CanvasClusterMetrics const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasFontProperty
    {
        winrt::Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier Identifier;
        hstring Value;
        hstring Locale;
    };
    inline bool operator==(CanvasFontProperty const& left, CanvasFontProperty const& right) noexcept
    {
        return left.Identifier == right.Identifier && left.Value == right.Value && left.Locale == right.Locale;
    }
    inline bool operator!=(CanvasFontProperty const& left, CanvasFontProperty const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasGlyph
    {
        int32_t Index;
        float Advance;
        float AdvanceOffset;
        float AscenderOffset;
    };
    inline bool operator==(CanvasGlyph const& left, CanvasGlyph const& right) noexcept
    {
        return left.Index == right.Index && left.Advance == right.Advance && left.AdvanceOffset == right.AdvanceOffset && left.AscenderOffset == right.AscenderOffset;
    }
    inline bool operator!=(CanvasGlyph const& left, CanvasGlyph const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasGlyphMetrics
    {
        float LeftSideBearing;
        float AdvanceWidth;
        float RightSideBearing;
        float TopSideBearing;
        float AdvanceHeight;
        float BottomSideBearing;
        float VerticalOrigin;
        winrt::Windows::Foundation::Rect DrawBounds;
    };
    inline bool operator==(CanvasGlyphMetrics const& left, CanvasGlyphMetrics const& right) noexcept
    {
        return left.LeftSideBearing == right.LeftSideBearing && left.AdvanceWidth == right.AdvanceWidth && left.RightSideBearing == right.RightSideBearing && left.TopSideBearing == right.TopSideBearing && left.AdvanceHeight == right.AdvanceHeight && left.BottomSideBearing == right.BottomSideBearing && left.VerticalOrigin == right.VerticalOrigin && left.DrawBounds == right.DrawBounds;
    }
    inline bool operator!=(CanvasGlyphMetrics const& left, CanvasGlyphMetrics const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasGlyphShaping
    {
        winrt::Microsoft::Graphics::Canvas::Text::CanvasGlyphJustification Justification;
        bool IsClusterStart;
        bool IsDiacritic;
        bool IsZeroWidthSpace;
    };
    inline bool operator==(CanvasGlyphShaping const& left, CanvasGlyphShaping const& right) noexcept
    {
        return left.Justification == right.Justification && left.IsClusterStart == right.IsClusterStart && left.IsDiacritic == right.IsDiacritic && left.IsZeroWidthSpace == right.IsZeroWidthSpace;
    }
    inline bool operator!=(CanvasGlyphShaping const& left, CanvasGlyphShaping const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasJustificationOpportunity
    {
        float ExpansionMinimum;
        float ExpansionMaximum;
        float CompressionMaximum;
        uint8_t ExpansionPriority;
        uint8_t CompressionPriority;
        bool AllowResidualExpansion;
        bool AllowResidualCompression;
        bool ApplyToLeadingEdge;
        bool ApplyToTrailingEdge;
    };
    inline bool operator==(CanvasJustificationOpportunity const& left, CanvasJustificationOpportunity const& right) noexcept
    {
        return left.ExpansionMinimum == right.ExpansionMinimum && left.ExpansionMaximum == right.ExpansionMaximum && left.CompressionMaximum == right.CompressionMaximum && left.ExpansionPriority == right.ExpansionPriority && left.CompressionPriority == right.CompressionPriority && left.AllowResidualExpansion == right.AllowResidualExpansion && left.AllowResidualCompression == right.AllowResidualCompression && left.ApplyToLeadingEdge == right.ApplyToLeadingEdge && left.ApplyToTrailingEdge == right.ApplyToTrailingEdge;
    }
    inline bool operator!=(CanvasJustificationOpportunity const& left, CanvasJustificationOpportunity const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasLineMetrics
    {
        int32_t CharacterCount;
        int32_t TrailingWhitespaceCount;
        int32_t TerminalNewlineCount;
        float Height;
        float Baseline;
        bool IsTrimmed;
        float LeadingWhitespaceBefore;
        float LeadingWhitespaceAfter;
    };
    inline bool operator==(CanvasLineMetrics const& left, CanvasLineMetrics const& right) noexcept
    {
        return left.CharacterCount == right.CharacterCount && left.TrailingWhitespaceCount == right.TrailingWhitespaceCount && left.TerminalNewlineCount == right.TerminalNewlineCount && left.Height == right.Height && left.Baseline == right.Baseline && left.IsTrimmed == right.IsTrimmed && left.LeadingWhitespaceBefore == right.LeadingWhitespaceBefore && left.LeadingWhitespaceAfter == right.LeadingWhitespaceAfter;
    }
    inline bool operator!=(CanvasLineMetrics const& left, CanvasLineMetrics const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasScriptProperties
    {
        hstring IsoScriptCode;
        int32_t IsoScriptNumber;
        int32_t ClusterLookahead;
        hstring JustificationCharacter;
        bool RestrictCaretToClusters;
        bool UsesWordDividers;
        bool IsDiscreteWriting;
        bool IsBlockWriting;
        bool IsDistributedWithinCluster;
        bool IsConnectedWriting;
        bool IsCursiveWriting;
    };
    inline bool operator==(CanvasScriptProperties const& left, CanvasScriptProperties const& right) noexcept
    {
        return left.IsoScriptCode == right.IsoScriptCode && left.IsoScriptNumber == right.IsoScriptNumber && left.ClusterLookahead == right.ClusterLookahead && left.JustificationCharacter == right.JustificationCharacter && left.RestrictCaretToClusters == right.RestrictCaretToClusters && left.UsesWordDividers == right.UsesWordDividers && left.IsDiscreteWriting == right.IsDiscreteWriting && left.IsBlockWriting == right.IsBlockWriting && left.IsDistributedWithinCluster == right.IsDistributedWithinCluster && left.IsConnectedWriting == right.IsConnectedWriting && left.IsCursiveWriting == right.IsCursiveWriting;
    }
    inline bool operator!=(CanvasScriptProperties const& left, CanvasScriptProperties const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasTextLayoutRegion
    {
        int32_t CharacterIndex;
        int32_t CharacterCount;
        winrt::Windows::Foundation::Rect LayoutBounds;
    };
    inline bool operator==(CanvasTextLayoutRegion const& left, CanvasTextLayoutRegion const& right) noexcept
    {
        return left.CharacterIndex == right.CharacterIndex && left.CharacterCount == right.CharacterCount && left.LayoutBounds == right.LayoutBounds;
    }
    inline bool operator!=(CanvasTextLayoutRegion const& left, CanvasTextLayoutRegion const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasTypographyFeature
    {
        winrt::Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName Name;
        uint32_t Parameter;
    };
    inline bool operator==(CanvasTypographyFeature const& left, CanvasTypographyFeature const& right) noexcept
    {
        return left.Name == right.Name && left.Parameter == right.Parameter;
    }
    inline bool operator!=(CanvasTypographyFeature const& left, CanvasTypographyFeature const& right) noexcept
    {
        return !(left == right);
    }
    struct CanvasUnicodeRange
    {
        uint32_t First;
        uint32_t Last;
    };
    inline bool operator==(CanvasUnicodeRange const& left, CanvasUnicodeRange const& right) noexcept
    {
        return left.First == right.First && left.Last == right.Last;
    }
    inline bool operator!=(CanvasUnicodeRange const& left, CanvasUnicodeRange const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) CanvasFontFace : winrt::Microsoft::Graphics::Canvas::Text::ICanvasFontFace
    {
        CanvasFontFace(std::nullptr_t) noexcept {}
        CanvasFontFace(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::Text::ICanvasFontFace(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CanvasFontSet : winrt::Microsoft::Graphics::Canvas::Text::ICanvasFontSet
    {
        CanvasFontSet(std::nullptr_t) noexcept {}
        CanvasFontSet(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::Text::ICanvasFontSet(ptr, take_ownership_from_abi) {}
        explicit CanvasFontSet(winrt::Windows::Foundation::Uri const& uri);
        static auto GetSystemFontSet();
    };
    struct __declspec(empty_bases) CanvasNumberSubstitution : winrt::Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution
    {
        CanvasNumberSubstitution(std::nullptr_t) noexcept {}
        CanvasNumberSubstitution(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution(ptr, take_ownership_from_abi) {}
        explicit CanvasNumberSubstitution(winrt::Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod const& method);
        CanvasNumberSubstitution(winrt::Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod const& method, param::hstring const& localeName, bool ignoreEnvironmentOverrides);
    };
    struct __declspec(empty_bases) CanvasScaledFont : winrt::Microsoft::Graphics::Canvas::Text::ICanvasScaledFont
    {
        CanvasScaledFont(std::nullptr_t) noexcept {}
        CanvasScaledFont(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::Text::ICanvasScaledFont(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CanvasTextAnalyzer : winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer
    {
        CanvasTextAnalyzer(std::nullptr_t) noexcept {}
        CanvasTextAnalyzer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer(ptr, take_ownership_from_abi) {}
        CanvasTextAnalyzer(param::hstring const& text, winrt::Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection);
        CanvasTextAnalyzer(param::hstring const& text, winrt::Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection, winrt::Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution const& numberSubstitution, winrt::Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation const& verticalGlyphOrientation, uint32_t bidiLevel);
        CanvasTextAnalyzer(param::hstring const& text, winrt::Microsoft::Graphics::Canvas::Text::CanvasTextDirection const& textDirection, winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions const& options);
    };
    struct __declspec(empty_bases) CanvasTextFormat : winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat
    {
        CanvasTextFormat(std::nullptr_t) noexcept {}
        CanvasTextFormat(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat(ptr, take_ownership_from_abi) {}
        CanvasTextFormat();
        static auto GetSystemFontFamilies();
        static auto GetSystemFontFamilies(param::vector_view<hstring> const& localeList);
    };
    struct __declspec(empty_bases) CanvasTextLayout : winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextLayout
    {
        CanvasTextLayout(std::nullptr_t) noexcept {}
        CanvasTextLayout(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextLayout(ptr, take_ownership_from_abi) {}
        CanvasTextLayout(winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& textString, winrt::Microsoft::Graphics::Canvas::Text::CanvasTextFormat const& textFormat, float requestedWidth, float requestedHeight);
        static auto GetGlyphOrientationTransform(winrt::Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation const& glyphOrientation, bool isSideways, winrt::Windows::Foundation::Numerics::float2 const& position);
    };
    struct __declspec(empty_bases) CanvasTextRenderingParameters : winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters
    {
        CanvasTextRenderingParameters(std::nullptr_t) noexcept {}
        CanvasTextRenderingParameters(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters(ptr, take_ownership_from_abi) {}
        CanvasTextRenderingParameters(winrt::Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode const& textRenderingMode, winrt::Microsoft::Graphics::Canvas::Text::CanvasTextGridFit const& gridFit);
    };
    struct __declspec(empty_bases) CanvasTypography : winrt::Microsoft::Graphics::Canvas::Text::ICanvasTypography
    {
        CanvasTypography(std::nullptr_t) noexcept {}
        CanvasTypography(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::Text::ICanvasTypography(ptr, take_ownership_from_abi) {}
        CanvasTypography();
    };
}
#endif
