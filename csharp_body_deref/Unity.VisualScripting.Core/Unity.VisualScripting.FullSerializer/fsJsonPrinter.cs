using System.IO;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000211")]
public static class fsJsonPrinter
{
	[Token(Token = "0x600128F")]
	[Address(RVA = "0x4A59CB0", Offset = "0x4A59CB0", VA = "0x4A59CB0")]
	private static void InsertSpacing(TextWriter stream, int count)
	{
	}

	[Token(Token = "0x6001290")]
	[Address(RVA = "0x4A59D20", Offset = "0x4A59D20", VA = "0x4A59D20")]
	private static string EscapeString(string str)
	{
		return null;
	}

	[Token(Token = "0x6001291")]
	[Address(RVA = "0x4A5A080", Offset = "0x4A5A080", VA = "0x4A5A080")]
	private static void BuildCompressedString(fsData data, TextWriter stream)
	{
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x4A5A850", Offset = "0x4A5A850", VA = "0x4A5A850")]
	private static void BuildPrettyString(fsData data, TextWriter stream, int depth)
	{
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x4A5B440", Offset = "0x4A5B440", VA = "0x4A5B440")]
	public static void PrettyJson(fsData data, TextWriter outputStream)
	{
	}

	[Token(Token = "0x6001294")]
	[Address(RVA = "0x4A5B450", Offset = "0x4A5B450", VA = "0x4A5B450")]
	public static string PrettyJson(fsData data)
	{
		return null;
	}

	[Token(Token = "0x6001295")]
	[Address(RVA = "0x4A5B650", Offset = "0x4A5B650", VA = "0x4A5B650")]
	public static void CompressedJson(fsData data, StreamWriter outputStream)
	{
	}

	[Token(Token = "0x6001296")]
	[Address(RVA = "0x4A55AB0", Offset = "0x4A55AB0", VA = "0x4A55AB0")]
	public static string CompressedJson(fsData data)
	{
		return null;
	}

	[Token(Token = "0x6001297")]
	[Address(RVA = "0x4A5A710", Offset = "0x4A5A710", VA = "0x4A5A710")]
	private static string ConvertDoubleToString(double d)
	{
		return null;
	}
}
