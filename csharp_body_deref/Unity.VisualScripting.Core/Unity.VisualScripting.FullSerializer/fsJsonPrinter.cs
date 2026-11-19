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
	[Address(RVA = "0x6868160", Offset = "0x6867160", VA = "0x6868160")]
	private static void InsertSpacing(TextWriter stream, int count)
	{
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x68681D0", Offset = "0x68671D0", VA = "0x68681D0")]
	private static string EscapeString(string str)
	{
		return null;
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x6868510", Offset = "0x6867510", VA = "0x6868510")]
	private static void BuildCompressedString(fsData data, TextWriter stream)
	{
	}

	[Token(Token = "0x600129F")]
	[Address(RVA = "0x6868C80", Offset = "0x6867C80", VA = "0x6868C80")]
	private static void BuildPrettyString(fsData data, TextWriter stream, int depth)
	{
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x6869520", Offset = "0x6868520", VA = "0x6869520")]
	public static void PrettyJson(fsData data, TextWriter outputStream)
	{
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x6869530", Offset = "0x6868530", VA = "0x6869530")]
	public static string PrettyJson(fsData data)
	{
		return null;
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x68696E0", Offset = "0x68686E0", VA = "0x68696E0")]
	public static void CompressedJson(fsData data, StreamWriter outputStream)
	{
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x68641F0", Offset = "0x68631F0", VA = "0x68641F0")]
	public static string CompressedJson(fsData data)
	{
		return null;
	}

	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x6868B40", Offset = "0x6867B40", VA = "0x6868B40")]
	private static string ConvertDoubleToString(double d)
	{
		return null;
	}
}
