// ==================== AoTTG2 cross-reference ====================
// Type: Utility.CSVCompression
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/CSVCompression.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/CSVCompression.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Utility;

[Token(Token = "0x20008B2")]
internal class CSVCompression
{
	[Token(Token = "0x4002B3C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] Alphabet;

	[Token(Token = "0x60052F7")]
	[Address(RVA = "0x232DB40", Offset = "0x232C140", VA = "0x18232DB40")]
	public static object[] Compress(string source, int deltaRows, char containerDelimiter = ';', char rowDelimiter = ',')
	{
		return null;
	}

	[Token(Token = "0x60052F8")]
	[Address(RVA = "0x232E500", Offset = "0x232CB00", VA = "0x18232E500")]
	public static string Decompress(byte[] source, JSONNode symbolTable, int deltaRows, char containerDelimiter = ';', char rowDelimiter = ',')
	{
		return null;
	}

	[Token(Token = "0x60052F9")]
	[Address(RVA = "0x232D260", Offset = "0x232B860", VA = "0x18232D260")]
	private static void CompressDelta(string[][] outputArr, int deltaRows)
	{
	}

	[Token(Token = "0x60052FA")]
	[Address(RVA = "0x232D420", Offset = "0x232BA20", VA = "0x18232D420")]
	private static void CompressSymbol(string[][] outputArr, Dictionary<string, string> symbolTable)
	{
	}

	[Token(Token = "0x60052FB")]
	[Address(RVA = "0x232E1F0", Offset = "0x232C7F0", VA = "0x18232E1F0")]
	private static void DecompressDelta(string[][] outputArr, int deltaRows)
	{
	}

	[Token(Token = "0x60052FC")]
	[Address(RVA = "0x232E3A0", Offset = "0x232C9A0", VA = "0x18232E3A0")]
	private static void DecompressSymbol(string[][] outputArr, JSONNode symbolTable)
	{
	}

	[Token(Token = "0x60052FD")]
	[Address(RVA = "0x232E8F0", Offset = "0x232CEF0", VA = "0x18232E8F0")]
	private static string ToBase62(int index)
	{
		return null;
	}

	[Token(Token = "0x60052FE")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CSVCompression()
	{
	}
}
