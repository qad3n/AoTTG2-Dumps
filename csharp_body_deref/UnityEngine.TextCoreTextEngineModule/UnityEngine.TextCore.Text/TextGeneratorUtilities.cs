// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextGeneratorUtilities
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x304A860", Offset = "0x3048E60", VA = "0x18304A860")]
	public static bool Approximately(float a, float b)
	{
		return default(bool);
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x304CAD0", Offset = "0x304B0D0", VA = "0x18304CAD0")]
	public static Color32 HexCharsToColor(char[] hexChars, int startIndex, int tagCount)
	{
		return default(Color32);
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x2D66100", Offset = "0x2D64700", VA = "0x182D66100")]
	public static uint HexToInt(char hex)
	{
		return default(uint);
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x304A9F0", Offset = "0x3048FF0", VA = "0x18304A9F0")]
	public static float ConvertToFloat(char[] chars, int startIndex, int length)
	{
		return default(float);
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x304A890", Offset = "0x3048E90", VA = "0x18304A890")]
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
	[Address(RVA = "0x304D1C0", Offset = "0x304B7C0", VA = "0x18304D1C0")]
	internal static void InsertOpeningTextStyle(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x304CFF0", Offset = "0x304B5F0", VA = "0x18304CFF0")]
	internal static void InsertClosingTextStyle(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x304DE50", Offset = "0x304C450", VA = "0x18304DE50")]
	public static bool ReplaceOpeningStyleTag(ref TextBackingContainer sourceText, int srcIndex, out int srcOffset, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x304E040", Offset = "0x304C640", VA = "0x18304E040")]
	private static bool ReplaceOpeningStyleTag(ref uint[] sourceText, int srcIndex, out int srcOffset, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x304DD20", Offset = "0x304C320", VA = "0x18304DD20")]
	public static void ReplaceClosingStyleTag(ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x304D0E0", Offset = "0x304B6E0", VA = "0x18304D0E0")]
	internal static void InsertOpeningStyleTag(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x304CEF0", Offset = "0x304B4F0", VA = "0x18304CEF0")]
	internal static void InsertClosingStyleTag(ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x304D2B0", Offset = "0x304B8B0", VA = "0x18304D2B0")]
	private static void InsertTextStyleInTextProcessingArray(ref TextProcessingElement[] charBuffer, ref int writeIndex, uint[] styleDefinition, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x304C420", Offset = "0x304AA20", VA = "0x18304C420")]
	public static TextStyle GetStyle(TextGenerationSettings generationSetting, int hashCode)
	{
		return null;
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x304C350", Offset = "0x304A950", VA = "0x18304C350")]
	public static int GetStyleHashCode(ref uint[] text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x304C280", Offset = "0x304A880", VA = "0x18304C280")]
	public static int GetStyleHashCode(ref TextBackingContainer text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x304C5F0", Offset = "0x304ABF0", VA = "0x18304C5F0")]
	public static uint GetUTF16(uint[] text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x304C4E0", Offset = "0x304AAE0", VA = "0x18304C4E0")]
	public static uint GetUTF16(TextBackingContainer text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x304C6E0", Offset = "0x304ACE0", VA = "0x18304C6E0")]
	public static uint GetUTF32(uint[] text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x304C880", Offset = "0x304AE80", VA = "0x18304C880")]
	public static uint GetUTF32(TextBackingContainer text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x304AA80", Offset = "0x3049080", VA = "0x18304AA80")]
	public static void FillCharacterVertexBuffers(int i, bool convertToLinearSpace, TextGenerationSettings generationSettings, TextInfo textInfo, bool needToRound)
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x304B4E0", Offset = "0x3049AE0", VA = "0x18304B4E0")]
	public static void FillSpriteVertexBuffers(int i, bool convertToLinearSpace, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x304A470", Offset = "0x3048A70", VA = "0x18304A470")]
	public static void AdjustLineOffset(int startIndex, int endIndex, float offset, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x304E230", Offset = "0x304C830", VA = "0x18304E230")]
	public static void ResizeLineExtents(int size, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x304DCB0", Offset = "0x304C2B0", VA = "0x18304DCB0")]
	public static FontStyles LegacyStyleToNewStyle(FontStyle fontStyle)
	{
		return default(FontStyles);
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x304DC30", Offset = "0x304C230", VA = "0x18304DC30")]
	public static TextAlignment LegacyAlignmentToNewAlignment(TextAnchor anchor)
	{
		return default(TextAlignment);
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x304C090", Offset = "0x304A690", VA = "0x18304C090")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static HorizontalAlignment GetHorizontalAlignment(TextAnchor anchor)
	{
		return default(HorizontalAlignment);
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x304CA80", Offset = "0x304B080", VA = "0x18304CA80")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static VerticalAlignment GetVerticalAlignment(TextAnchor anchor)
	{
		return default(VerticalAlignment);
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x304AA70", Offset = "0x3049070", VA = "0x18304AA70")]
	public static uint ConvertToUTF32(uint highSurrogate, uint lowSurrogate)
	{
		return default(uint);
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x304C1B0", Offset = "0x304A7B0", VA = "0x18304C1B0")]
	public static int GetMarkupTagHashCode(TextBackingContainer styleDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x304C0E0", Offset = "0x304A6E0", VA = "0x18304C0E0")]
	public static int GetMarkupTagHashCode(uint[] styleDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x304E460", Offset = "0x304CA60", VA = "0x18304E460")]
	public static char ToUpperASCIIFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x304E4C0", Offset = "0x304CAC0", VA = "0x18304E4C0")]
	public static uint ToUpperASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x304E520", Offset = "0x304CB20", VA = "0x18304E520")]
	public static char ToUpperFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x304BFC0", Offset = "0x304A5C0", VA = "0x18304BFC0")]
	public static int GetAttributeParameters(char[] chars, int startIndex, int length, ref float[] parameters)
	{
		return default(int);
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x304D8F0", Offset = "0x304BEF0", VA = "0x18304D8F0")]
	public static bool IsBitmapRendering(GlyphRenderMode glyphRenderMode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x304D7D0", Offset = "0x304BDD0", VA = "0x18304D7D0")]
	public static bool IsBaseGlyph(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x304DCE0", Offset = "0x304C2E0", VA = "0x18304DCE0")]
	public static Color MinAlpha(this Color c1, Color c2)
	{
		return default(Color);
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x304BE90", Offset = "0x304A490", VA = "0x18304BE90")]
	internal static Color32 GammaToLinear(Color32 c)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x304BF10", Offset = "0x304A510", VA = "0x18304BF10")]
	private static byte GammaToLinear(byte value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x304DB30", Offset = "0x304C130", VA = "0x18304DB30")]
	public static bool IsValidUTF16(TextBackingContainer text, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x304DBB0", Offset = "0x304C1B0", VA = "0x18304DBB0")]
	public static bool IsValidUTF32(TextBackingContainer text, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x304DA50", Offset = "0x304C050", VA = "0x18304DA50")]
	internal static bool IsEmoji(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x304D9D0", Offset = "0x304BFD0", VA = "0x18304D9D0")]
	internal static bool IsEmojiPresentationForm(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x304DAD0", Offset = "0x304C0D0", VA = "0x18304DAD0")]
	internal static bool IsHangul(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x304D920", Offset = "0x304BF20", VA = "0x18304D920")]
	internal static bool IsCJK(uint c)
	{
		return default(bool);
	}
}
