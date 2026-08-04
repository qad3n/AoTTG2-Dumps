// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsJsonPrinter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x200020A")]
public static class fsJsonPrinter
{
	[Token(Token = "0x6001264")]
	[Address(RVA = "0x4D7F2C0", Offset = "0x4D7F2C0", VA = "0x4D7F2C0")]
	private static void InsertSpacing(TextWriter stream, int count)
	{
	}

	[Token(Token = "0x6001265")]
	[Address(RVA = "0x4D7F330", Offset = "0x4D7F330", VA = "0x4D7F330")]
	private static string EscapeString(string str)
	{
		return null;
	}

	[Token(Token = "0x6001266")]
	[Address(RVA = "0x4D7F690", Offset = "0x4D7F690", VA = "0x4D7F690")]
	private static void BuildCompressedString(fsData data, TextWriter stream)
	{
	}

	[Token(Token = "0x6001267")]
	[Address(RVA = "0x4D7FE60", Offset = "0x4D7FE60", VA = "0x4D7FE60")]
	private static void BuildPrettyString(fsData data, TextWriter stream, int depth)
	{
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x4D80A50", Offset = "0x4D80A50", VA = "0x4D80A50")]
	public static void PrettyJson(fsData data, TextWriter outputStream)
	{
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x4D80A60", Offset = "0x4D80A60", VA = "0x4D80A60")]
	public static string PrettyJson(fsData data)
	{
		return null;
	}

	[Token(Token = "0x600126A")]
	[Address(RVA = "0x4D80C60", Offset = "0x4D80C60", VA = "0x4D80C60")]
	public static void CompressedJson(fsData data, StreamWriter outputStream)
	{
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x4D7AF70", Offset = "0x4D7AF70", VA = "0x4D7AF70")]
	public static string CompressedJson(fsData data)
	{
		return null;
	}

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x4D7FD20", Offset = "0x4D7FD20", VA = "0x4D7FD20")]
	private static string ConvertDoubleToString(double d)
	{
		return null;
	}
}
