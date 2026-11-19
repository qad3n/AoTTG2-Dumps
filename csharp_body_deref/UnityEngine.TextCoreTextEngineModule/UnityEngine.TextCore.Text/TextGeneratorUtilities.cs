// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextGeneratorUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.TextCore.LowLevel;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000059")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
internal static class TextGeneratorUtilities
{
	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Vector2 largePositiveVector2;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Vector2 largeNegativeVector2;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x10")]
	private static readonly HashSet<uint> k_EmojiLookup;

	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x18")]
	private static readonly HashSet<uint> k_EmojiPresentationFormLookup;

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x6A48D10", Offset = "0x6A47D10", VA = "0x6A48D10")]
	public static bool Approximately(float a, float b)
	{
		return default(bool);
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x6A48D40", Offset = "0x6A47D40", VA = "0x6A48D40")]
	public static Color32 HexCharsToColor(char[] hexChars, int startIndex, int tagCount)
	{
		return default(Color32);
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x6A491B0", Offset = "0x6A481B0", VA = "0x6A491B0")]
	public static uint HexToInt(char hex)
	{
		return default(uint);
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x6A491D0", Offset = "0x6A481D0", VA = "0x6A491D0")]
	public static float ConvertToFloat(char[] chars, int startIndex, int length)
	{
		return default(float);
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x6A49230", Offset = "0x6A48230", VA = "0x6A49230")]
	public static float ConvertToFloat(char[] chars, int startIndex, int length, out int lastIndex)
	{
		return default(float);
	}

	[Token(Token = "0x6000260")]
	public static void ResizeInternalArray<T>(ref T[] array)
	{
	}

	[Token(Token = "0x6000261")]
	public static void ResizeInternalArray<T>(ref T[] array, int size)
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x6A49370", Offset = "0x6A48370", VA = "0x6A49370")]
	internal static void InsertOpeningTextStyle(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x6A499D0", Offset = "0x6A489D0", VA = "0x6A499D0")]
	internal static void InsertClosingTextStyle(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x6A49AA0", Offset = "0x6A48AA0", VA = "0x6A49AA0")]
	public static bool ReplaceOpeningStyleTag(ref TextBackingContainer sourceText, int srcIndex, out int srcOffset, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x6A49DA0", Offset = "0x6A48DA0", VA = "0x6A49DA0")]
	private static bool ReplaceOpeningStyleTag(ref uint[] sourceText, int srcIndex, out int srcOffset, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x6A49FF0", Offset = "0x6A48FF0", VA = "0x6A49FF0")]
	public static void ReplaceClosingStyleTag(ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x6A4A100", Offset = "0x6A49100", VA = "0x6A4A100")]
	internal static void InsertOpeningStyleTag(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x6A4A1D0", Offset = "0x6A491D0", VA = "0x6A4A1D0")]
	internal static void InsertClosingStyleTag(ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x6A49440", Offset = "0x6A48440", VA = "0x6A49440")]
	private static void InsertTextStyleInTextProcessingArray(ref TextProcessingElement[] charBuffer, ref int writeIndex, uint[] styleDefinition, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x6A49CF0", Offset = "0x6A48CF0", VA = "0x6A49CF0")]
	public static TextStyle GetStyle(TextGenerationSettings generationSetting, int hashCode)
	{
		return null;
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x6A49EC0", Offset = "0x6A48EC0", VA = "0x6A49EC0")]
	public static int GetStyleHashCode(ref uint[] text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x6A49BC0", Offset = "0x6A48BC0", VA = "0x6A49BC0")]
	public static int GetStyleHashCode(ref TextBackingContainer text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x6A4A2B0", Offset = "0x6A492B0", VA = "0x6A4A2B0")]
	public static uint GetUTF16(uint[] text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x6A4A6D0", Offset = "0x6A496D0", VA = "0x6A4A6D0")]
	public static uint GetUTF16(TextBackingContainer text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x6A4A390", Offset = "0x6A49390", VA = "0x6A4A390")]
	public static uint GetUTF32(uint[] text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x6A4A7B0", Offset = "0x6A497B0", VA = "0x6A4A7B0")]
	public static uint GetUTF32(TextBackingContainer text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x6A4A940", Offset = "0x6A49940", VA = "0x6A4A940")]
	public static void FillCharacterVertexBuffers(int i, bool convertToLinearSpace, TextGenerationSettings generationSettings, TextInfo textInfo, bool needToRound)
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x6A4B480", Offset = "0x6A4A480", VA = "0x6A4B480")]
	public static void FillSpriteVertexBuffers(int i, bool convertToLinearSpace, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x6A4BCC0", Offset = "0x6A4ACC0", VA = "0x6A4BCC0")]
	public static void AdjustLineOffset(int startIndex, int endIndex, float offset, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x6A4BEC0", Offset = "0x6A4AEC0", VA = "0x6A4BEC0")]
	public static void ResizeLineExtents(int size, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x6A4C0B0", Offset = "0x6A4B0B0", VA = "0x6A4C0B0")]
	public static FontStyles LegacyStyleToNewStyle(FontStyle fontStyle)
	{
		return default(FontStyles);
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x6A4C0C0", Offset = "0x6A4B0C0", VA = "0x6A4C0C0")]
	public static TextAlignment LegacyAlignmentToNewAlignment(TextAnchor anchor)
	{
		return default(TextAlignment);
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x6A4C0E0", Offset = "0x6A4B0E0", VA = "0x6A4C0E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static HorizontalAlignment GetHorizontalAlignment(TextAnchor anchor)
	{
		return default(HorizontalAlignment);
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x6A4C100", Offset = "0x6A4B100", VA = "0x6A4C100")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static VerticalAlignment GetVerticalAlignment(TextAnchor anchor)
	{
		return default(VerticalAlignment);
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x6A4C120", Offset = "0x6A4B120", VA = "0x6A4C120")]
	public static uint ConvertToUTF32(uint highSurrogate, uint lowSurrogate)
	{
		return default(uint);
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x6A4C130", Offset = "0x6A4B130", VA = "0x6A4C130")]
	public static int GetMarkupTagHashCode(TextBackingContainer styleDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x6A4A520", Offset = "0x6A49520", VA = "0x6A4A520")]
	public static int GetMarkupTagHashCode(uint[] styleDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x6A4A680", Offset = "0x6A49680", VA = "0x6A4A680")]
	public static char ToUpperASCIIFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x6A4C290", Offset = "0x6A4B290", VA = "0x6A4C290")]
	public static uint ToUpperASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x6A4C2F0", Offset = "0x6A4B2F0", VA = "0x6A4C2F0")]
	public static char ToUpperFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x6A4C340", Offset = "0x6A4B340", VA = "0x6A4C340")]
	public static int GetAttributeParameters(char[] chars, int startIndex, int length, ref float[] parameters)
	{
		return default(int);
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x6A4C410", Offset = "0x6A4B410", VA = "0x6A4C410")]
	public static bool IsBitmapRendering(GlyphRenderMode glyphRenderMode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x6A4C440", Offset = "0x6A4B440", VA = "0x6A4C440")]
	public static bool IsBaseGlyph(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x6A4C540", Offset = "0x6A4B540", VA = "0x6A4C540")]
	public static Color MinAlpha(this Color c1, Color c2)
	{
		return default(Color);
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x6A4B290", Offset = "0x6A4A290", VA = "0x6A4B290")]
	internal static Color32 GammaToLinear(Color32 c)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x6A4C560", Offset = "0x6A4B560", VA = "0x6A4C560")]
	private static byte GammaToLinear(byte value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x6A4C5F0", Offset = "0x6A4B5F0", VA = "0x6A4C5F0")]
	public static bool IsValidUTF16(TextBackingContainer text, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x6A4C6E0", Offset = "0x6A4B6E0", VA = "0x6A4C6E0")]
	public static bool IsValidUTF32(TextBackingContainer text, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x6A4C8D0", Offset = "0x6A4B8D0", VA = "0x6A4C8D0")]
	internal static bool IsEmoji(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x6A4C970", Offset = "0x6A4B970", VA = "0x6A4C970")]
	internal static bool IsEmojiPresentationForm(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x6A4CA10", Offset = "0x6A4BA10", VA = "0x6A4CA10")]
	internal static bool IsHangul(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x6A4CA60", Offset = "0x6A4BA60", VA = "0x6A4CA60")]
	internal static bool IsCJK(uint c)
	{
		return default(bool);
	}
}
