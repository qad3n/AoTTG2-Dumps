// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextGenerationSettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200004B")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
internal class TextGenerationSettings : IEquatable<TextGenerationSettings>
{
	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal static Func<bool> IsEditorTextRenderingModeBitmap;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal static Func<bool> IsEditorTextRenderingModeRaster;

	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0x10")]
	private RenderedText m_RenderedText;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x30")]
	private string m_CachedRenderedText;

	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0x38")]
	public Rect screenRect;

	[Token(Token = "0x40002D0")]
	[FieldOffset(Offset = "0x48")]
	public FontAsset fontAsset;

	[Token(Token = "0x40002D1")]
	[FieldOffset(Offset = "0x50")]
	public FontStyles fontStyle;

	[Token(Token = "0x40002D2")]
	[FieldOffset(Offset = "0x58")]
	public TextSettings textSettings;

	[Token(Token = "0x40002D3")]
	[FieldOffset(Offset = "0x60")]
	public TextAlignment textAlignment;

	[Token(Token = "0x40002D4")]
	[FieldOffset(Offset = "0x64")]
	public TextOverflowMode overflowMode;

	[Token(Token = "0x40002D5")]
	public const float wordWrappingRatio = 0.4f;

	[Token(Token = "0x40002D6")]
	[FieldOffset(Offset = "0x68")]
	public Color color;

	[Token(Token = "0x40002D7")]
	[FieldOffset(Offset = "0x78")]
	public bool shouldConvertToLinearSpace;

	[Token(Token = "0x40002D8")]
	[FieldOffset(Offset = "0x7C")]
	public int fontSize;

	[Token(Token = "0x40002D9")]
	public const bool autoSize = false;

	[Token(Token = "0x40002DA")]
	public const float fontSizeMin = 0f;

	[Token(Token = "0x40002DB")]
	public const float fontSizeMax = 0f;

	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly List<OTL_FeatureTag> fontFeatures;

	[Token(Token = "0x40002DD")]
	[FieldOffset(Offset = "0x80")]
	public bool emojiFallbackSupport;

	[Token(Token = "0x40002DE")]
	[FieldOffset(Offset = "0x81")]
	public bool richText;

	[Token(Token = "0x40002DF")]
	[FieldOffset(Offset = "0x82")]
	public bool isRightToLeft;

	[Token(Token = "0x40002E0")]
	[FieldOffset(Offset = "0x84")]
	public float extraPadding;

	[Token(Token = "0x40002E1")]
	[FieldOffset(Offset = "0x88")]
	public bool parseControlCharacters;

	[Token(Token = "0x40002E2")]
	[FieldOffset(Offset = "0x89")]
	public bool isPlaceholder;

	[Token(Token = "0x40002E3")]
	public const bool tagNoParsing = false;

	[Token(Token = "0x40002E4")]
	[FieldOffset(Offset = "0x8C")]
	public float characterSpacing;

	[Token(Token = "0x40002E5")]
	[FieldOffset(Offset = "0x90")]
	public float wordSpacing;

	[Token(Token = "0x40002E6")]
	public const float lineSpacing = 0f;

	[Token(Token = "0x40002E7")]
	[FieldOffset(Offset = "0x94")]
	public float paragraphSpacing;

	[Token(Token = "0x40002E8")]
	public const float lineSpacingMax = 0f;

	[Token(Token = "0x40002E9")]
	[FieldOffset(Offset = "0x98")]
	public TextWrappingMode textWrappingMode;

	[Token(Token = "0x40002EA")]
	public const int maxVisibleCharacters = 99999;

	[Token(Token = "0x40002EB")]
	public const int maxVisibleWords = 99999;

	[Token(Token = "0x40002EC")]
	public const int maxVisibleLines = 99999;

	[Token(Token = "0x40002ED")]
	public const int firstVisibleCharacter = 0;

	[Token(Token = "0x40002EE")]
	public const bool useMaxVisibleDescender = false;

	[Token(Token = "0x40002EF")]
	[FieldOffset(Offset = "0x9C")]
	public TextFontWeight fontWeight;

	[Token(Token = "0x40002F0")]
	[FieldOffset(Offset = "0xA0")]
	public bool isIMGUI;

	[Token(Token = "0x40002F1")]
	public const float charWidthMaxAdj = 0f;

	[Token(Token = "0x40002F2")]
	[FieldOffset(Offset = "0xA4")]
	public float pixelsPerPoint;

	[Token(Token = "0x1700006B")]
	public RenderedText renderedText
	{
		[Token(Token = "0x600022A")]
		[Address(RVA = "0x5608C0", Offset = "0x55EEC0", VA = "0x1805608C0")]
		get
		{
			return default(RenderedText);
		}
		[Token(Token = "0x600022B")]
		[Address(RVA = "0x304A320", Offset = "0x3048920", VA = "0x18304A320")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public string text
	{
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x304A2A0", Offset = "0x30488A0", VA = "0x18304A2A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x304A360", Offset = "0x3048960", VA = "0x18304A360")]
		set
		{
		}
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x304A220", Offset = "0x3048820", VA = "0x18304A220")]
	public TextGenerationSettings()
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x3048710", Offset = "0x3046D10", VA = "0x183048710", Slot = "4")]
	public bool Equals(TextGenerationSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x3048AB0", Offset = "0x30470B0", VA = "0x183048AB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x3048BB0", Offset = "0x30471B0", VA = "0x183048BB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x304A300", Offset = "0x3048900", VA = "0x18304A300")]
	public static bool operator !=(TextGenerationSettings left, TextGenerationSettings right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x3048E90", Offset = "0x3047490", VA = "0x183048E90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
