// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextGeneratorUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.TextCore.LowLevel;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000032")]
internal static class TextGeneratorUtilities
{
	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Vector2 largePositiveVector2;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Vector2 largeNegativeVector2;

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x4EDBE40", Offset = "0x4EDBE40", VA = "0x4EDBE40")]
	public static bool Approximately(float a, float b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4EDBE70", Offset = "0x4EDBE70", VA = "0x4EDBE70")]
	public static Color32 HexCharsToColor(char[] hexChars, int tagCount)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x4EDC510", Offset = "0x4EDC510", VA = "0x4EDC510")]
	public static Color32 HexCharsToColor(char[] hexChars, int startIndex, int length)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4EDC4F0", Offset = "0x4EDC4F0", VA = "0x4EDC4F0")]
	public static uint HexToInt(char hex)
	{
		return default(uint);
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4EDC7D0", Offset = "0x4EDC7D0", VA = "0x4EDC7D0")]
	public static float ConvertToFloat(char[] chars, int startIndex, int length)
	{
		return default(float);
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x4EDC840", Offset = "0x4EDC840", VA = "0x4EDC840")]
	public static float ConvertToFloat(char[] chars, int startIndex, int length, out int lastIndex)
	{
		return default(float);
	}

	[Token(Token = "0x6000136")]
	public static void ResizeInternalArray<T>(ref T[] array)
	{
	}

	[Token(Token = "0x6000137")]
	public static void ResizeInternalArray<T>(ref T[] array, int size)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4EDC9B0", Offset = "0x4EDC9B0", VA = "0x4EDC9B0")]
	internal static void InsertOpeningTextStyle(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x4EDD040", Offset = "0x4EDD040", VA = "0x4EDD040")]
	internal static void InsertClosingTextStyle(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4EDD120", Offset = "0x4EDD120", VA = "0x4EDD120")]
	public static bool ReplaceOpeningStyleTag(ref TextBackingContainer sourceText, int srcIndex, out int srcOffset, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x4EDD530", Offset = "0x4EDD530", VA = "0x4EDD530")]
	private static bool ReplaceOpeningStyleTag(ref uint[] sourceText, int srcIndex, out int srcOffset, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x4EDD790", Offset = "0x4EDD790", VA = "0x4EDD790")]
	public static void ReplaceClosingStyleTag(ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x4EDD8A0", Offset = "0x4EDD8A0", VA = "0x4EDD8A0")]
	internal static void InsertOpeningStyleTag(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x4EDD970", Offset = "0x4EDD970", VA = "0x4EDD970")]
	internal static void InsertClosingStyleTag(ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x4EDCAA0", Offset = "0x4EDCAA0", VA = "0x4EDCAA0")]
	private static void InsertTextStyleInTextProcessingArray(ref TextProcessingElement[] charBuffer, ref int writeIndex, uint[] styleDefinition, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x4EDD380", Offset = "0x4EDD380", VA = "0x4EDD380")]
	public static TextStyle GetStyle(TextGenerationSettings generationSetting, int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x4EDD660", Offset = "0x4EDD660", VA = "0x4EDD660")]
	public static int GetStyleHashCode(ref uint[] text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x4EDD250", Offset = "0x4EDD250", VA = "0x4EDD250")]
	public static int GetStyleHashCode(ref TextBackingContainer text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x4EDDA50", Offset = "0x4EDDA50", VA = "0x4EDDA50")]
	public static uint GetUTF16(uint[] text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x4EDDEF0", Offset = "0x4EDDEF0", VA = "0x4EDDEF0")]
	public static uint GetUTF16(TextBackingContainer text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x4EDDB30", Offset = "0x4EDDB30", VA = "0x4EDDB30")]
	public static uint GetUTF32(uint[] text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x4EDDFD0", Offset = "0x4EDDFD0", VA = "0x4EDDFD0")]
	public static uint GetUTF32(TextBackingContainer text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x4EDE160", Offset = "0x4EDE160", VA = "0x4EDE160")]
	public static void FillCharacterVertexBuffers(int i, bool convertToLinearSpace, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x4EDF480", Offset = "0x4EDF480", VA = "0x4EDF480")]
	public static void FillSpriteVertexBuffers(int i, bool convertToLinearSpace, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x4EE04E0", Offset = "0x4EE04E0", VA = "0x4EE04E0")]
	public static void AdjustLineOffset(int startIndex, int endIndex, float offset, TextInfo textInfo)
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x4EE0730", Offset = "0x4EE0730", VA = "0x4EE0730")]
	public static void ResizeLineExtents(int size, TextInfo textInfo)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x4EE0990", Offset = "0x4EE0990", VA = "0x4EE0990")]
	public static FontStyles LegacyStyleToNewStyle(FontStyle fontStyle)
	{
		return default(FontStyles);
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x4EE09A0", Offset = "0x4EE09A0", VA = "0x4EE09A0")]
	public static TextAlignment LegacyAlignmentToNewAlignment(TextAnchor anchor)
	{
		return default(TextAlignment);
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x4EE09C0", Offset = "0x4EE09C0", VA = "0x4EE09C0")]
	public static uint ConvertToUTF32(uint highSurrogate, uint lowSurrogate)
	{
		return default(uint);
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x4EE09D0", Offset = "0x4EE09D0", VA = "0x4EE09D0")]
	public static int GetMarkupTagHashCode(TextBackingContainer styleDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x4EDDCC0", Offset = "0x4EDDCC0", VA = "0x4EDDCC0")]
	public static int GetMarkupTagHashCode(uint[] styleDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x4EDDEA0", Offset = "0x4EDDEA0", VA = "0x4EDDEA0")]
	public static char ToUpperASCIIFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x4EE0B20", Offset = "0x4EE0B20", VA = "0x4EE0B20")]
	public static uint ToUpperASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x4EE0B80", Offset = "0x4EE0B80", VA = "0x4EE0B80")]
	public static char ToUpperFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x4EE0BD0", Offset = "0x4EE0BD0", VA = "0x4EE0BD0")]
	public static int GetAttributeParameters(char[] chars, int startIndex, int length, ref float[] parameters)
	{
		return default(int);
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x4EE0CA0", Offset = "0x4EE0CA0", VA = "0x4EE0CA0")]
	public static bool IsBitmapRendering(GlyphRenderMode glyphRenderMode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x4EE0CD0", Offset = "0x4EE0CD0", VA = "0x4EE0CD0")]
	public static bool IsBaseGlyph(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x4EE0DC0", Offset = "0x4EE0DC0", VA = "0x4EE0DC0")]
	public static Color MinAlpha(this Color c1, Color c2)
	{
		return default(Color);
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x4EDF290", Offset = "0x4EDF290", VA = "0x4EDF290")]
	internal static Color32 GammaToLinear(Color32 c)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x4EE0DE0", Offset = "0x4EE0DE0", VA = "0x4EE0DE0")]
	private static byte GammaToLinear(byte value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x4EE0E70", Offset = "0x4EE0E70", VA = "0x4EE0E70")]
	public static bool IsValidUTF16(TextBackingContainer text, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x4EE0F30", Offset = "0x4EE0F30", VA = "0x4EE0F30")]
	public static bool IsValidUTF32(TextBackingContainer text, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x4EE10A0", Offset = "0x4EE10A0", VA = "0x4EE10A0")]
	internal static bool IsHangul(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x4EE10F0", Offset = "0x4EE10F0", VA = "0x4EE10F0")]
	internal static bool IsCJK(uint c)
	{
		return default(bool);
	}
}
