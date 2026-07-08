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
	[Address(RVA = "0x4BB4510", Offset = "0x4BB4510", VA = "0x4BB4510")]
	public static bool Approximately(float a, float b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4BB4540", Offset = "0x4BB4540", VA = "0x4BB4540")]
	public static Color32 HexCharsToColor(char[] hexChars, int tagCount)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x4BB4BE0", Offset = "0x4BB4BE0", VA = "0x4BB4BE0")]
	public static Color32 HexCharsToColor(char[] hexChars, int startIndex, int length)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4BB4BC0", Offset = "0x4BB4BC0", VA = "0x4BB4BC0")]
	public static uint HexToInt(char hex)
	{
		return default(uint);
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4BB4EA0", Offset = "0x4BB4EA0", VA = "0x4BB4EA0")]
	public static float ConvertToFloat(char[] chars, int startIndex, int length)
	{
		return default(float);
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x4BB4F10", Offset = "0x4BB4F10", VA = "0x4BB4F10")]
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
	[Address(RVA = "0x4BB5080", Offset = "0x4BB5080", VA = "0x4BB5080")]
	internal static void InsertOpeningTextStyle(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x4BB5710", Offset = "0x4BB5710", VA = "0x4BB5710")]
	internal static void InsertClosingTextStyle(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4BB57F0", Offset = "0x4BB57F0", VA = "0x4BB57F0")]
	public static bool ReplaceOpeningStyleTag(ref TextBackingContainer sourceText, int srcIndex, out int srcOffset, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x4BB5C00", Offset = "0x4BB5C00", VA = "0x4BB5C00")]
	private static bool ReplaceOpeningStyleTag(ref uint[] sourceText, int srcIndex, out int srcOffset, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x4BB5E60", Offset = "0x4BB5E60", VA = "0x4BB5E60")]
	public static void ReplaceClosingStyleTag(ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x4BB5F70", Offset = "0x4BB5F70", VA = "0x4BB5F70")]
	internal static void InsertOpeningStyleTag(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x4BB6040", Offset = "0x4BB6040", VA = "0x4BB6040")]
	internal static void InsertClosingStyleTag(ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x4BB5170", Offset = "0x4BB5170", VA = "0x4BB5170")]
	private static void InsertTextStyleInTextProcessingArray(ref TextProcessingElement[] charBuffer, ref int writeIndex, uint[] styleDefinition, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x4BB5A50", Offset = "0x4BB5A50", VA = "0x4BB5A50")]
	public static TextStyle GetStyle(TextGenerationSettings generationSetting, int hashCode)
	{
		return null;
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x4BB5D30", Offset = "0x4BB5D30", VA = "0x4BB5D30")]
	public static int GetStyleHashCode(ref uint[] text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x4BB5920", Offset = "0x4BB5920", VA = "0x4BB5920")]
	public static int GetStyleHashCode(ref TextBackingContainer text, int index, out int closeIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x4BB6120", Offset = "0x4BB6120", VA = "0x4BB6120")]
	public static uint GetUTF16(uint[] text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x4BB65C0", Offset = "0x4BB65C0", VA = "0x4BB65C0")]
	public static uint GetUTF16(TextBackingContainer text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x4BB6200", Offset = "0x4BB6200", VA = "0x4BB6200")]
	public static uint GetUTF32(uint[] text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x4BB66A0", Offset = "0x4BB66A0", VA = "0x4BB66A0")]
	public static uint GetUTF32(TextBackingContainer text, int i)
	{
		return default(uint);
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x4BB6830", Offset = "0x4BB6830", VA = "0x4BB6830")]
	public static void FillCharacterVertexBuffers(int i, bool convertToLinearSpace, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x4BB7B50", Offset = "0x4BB7B50", VA = "0x4BB7B50")]
	public static void FillSpriteVertexBuffers(int i, bool convertToLinearSpace, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x4BB8BB0", Offset = "0x4BB8BB0", VA = "0x4BB8BB0")]
	public static void AdjustLineOffset(int startIndex, int endIndex, float offset, TextInfo textInfo)
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x4BB8E00", Offset = "0x4BB8E00", VA = "0x4BB8E00")]
	public static void ResizeLineExtents(int size, TextInfo textInfo)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x4BB9060", Offset = "0x4BB9060", VA = "0x4BB9060")]
	public static FontStyles LegacyStyleToNewStyle(FontStyle fontStyle)
	{
		return default(FontStyles);
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x4BB9070", Offset = "0x4BB9070", VA = "0x4BB9070")]
	public static TextAlignment LegacyAlignmentToNewAlignment(TextAnchor anchor)
	{
		return default(TextAlignment);
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x4BB9090", Offset = "0x4BB9090", VA = "0x4BB9090")]
	public static uint ConvertToUTF32(uint highSurrogate, uint lowSurrogate)
	{
		return default(uint);
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x4BB90A0", Offset = "0x4BB90A0", VA = "0x4BB90A0")]
	public static int GetMarkupTagHashCode(TextBackingContainer styleDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x4BB6390", Offset = "0x4BB6390", VA = "0x4BB6390")]
	public static int GetMarkupTagHashCode(uint[] styleDefinition, int readIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x4BB6570", Offset = "0x4BB6570", VA = "0x4BB6570")]
	public static char ToUpperASCIIFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x4BB91F0", Offset = "0x4BB91F0", VA = "0x4BB91F0")]
	public static uint ToUpperASCIIFast(uint c)
	{
		return default(uint);
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x4BB9250", Offset = "0x4BB9250", VA = "0x4BB9250")]
	public static char ToUpperFast(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x4BB92A0", Offset = "0x4BB92A0", VA = "0x4BB92A0")]
	public static int GetAttributeParameters(char[] chars, int startIndex, int length, ref float[] parameters)
	{
		return default(int);
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x4BB9370", Offset = "0x4BB9370", VA = "0x4BB9370")]
	public static bool IsBitmapRendering(GlyphRenderMode glyphRenderMode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x4BB93A0", Offset = "0x4BB93A0", VA = "0x4BB93A0")]
	public static bool IsBaseGlyph(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x4BB9490", Offset = "0x4BB9490", VA = "0x4BB9490")]
	public static Color MinAlpha(this Color c1, Color c2)
	{
		return default(Color);
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x4BB7960", Offset = "0x4BB7960", VA = "0x4BB7960")]
	internal static Color32 GammaToLinear(Color32 c)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x4BB94B0", Offset = "0x4BB94B0", VA = "0x4BB94B0")]
	private static byte GammaToLinear(byte value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x4BB9540", Offset = "0x4BB9540", VA = "0x4BB9540")]
	public static bool IsValidUTF16(TextBackingContainer text, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x4BB9600", Offset = "0x4BB9600", VA = "0x4BB9600")]
	public static bool IsValidUTF32(TextBackingContainer text, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x4BB9770", Offset = "0x4BB9770", VA = "0x4BB9770")]
	internal static bool IsHangul(uint c)
	{
		return default(bool);
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x4BB97C0", Offset = "0x4BB97C0", VA = "0x4BB97C0")]
	internal static bool IsCJK(uint c)
	{
		return default(bool);
	}
}
