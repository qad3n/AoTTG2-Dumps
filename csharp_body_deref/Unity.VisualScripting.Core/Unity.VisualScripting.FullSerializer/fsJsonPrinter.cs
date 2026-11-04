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

[Token(Token = "0x2000211")]
public static class fsJsonPrinter
{
	[Token(Token = "0x600129C")]
	[Address(RVA = "0x2E69310", Offset = "0x2E67910", VA = "0x182E69310")]
	private static void InsertSpacing(TextWriter stream, int count)
	{
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x2E68F00", Offset = "0x2E67500", VA = "0x182E68F00")]
	private static string EscapeString(string str)
	{
		return null;
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x2E67FA0", Offset = "0x2E665A0", VA = "0x182E67FA0")]
	private static void BuildCompressedString(fsData data, TextWriter stream)
	{
	}

	[Token(Token = "0x600129F")]
	[Address(RVA = "0x2E684E0", Offset = "0x2E66AE0", VA = "0x182E684E0")]
	private static void BuildPrettyString(fsData data, TextWriter stream, int depth)
	{
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x2E69390", Offset = "0x2E67990", VA = "0x182E69390")]
	public static void PrettyJson(fsData data, TextWriter outputStream)
	{
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x2E693A0", Offset = "0x2E679A0", VA = "0x182E693A0")]
	public static string PrettyJson(fsData data)
	{
		return null;
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x2E68C40", Offset = "0x2E67240", VA = "0x182E68C40")]
	public static void CompressedJson(fsData data, StreamWriter outputStream)
	{
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x2E68C50", Offset = "0x2E67250", VA = "0x182E68C50")]
	public static string CompressedJson(fsData data)
	{
		return null;
	}

	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x2E68D90", Offset = "0x2E67390", VA = "0x182E68D90")]
	private static string ConvertDoubleToString(double d)
	{
		return null;
	}
}
