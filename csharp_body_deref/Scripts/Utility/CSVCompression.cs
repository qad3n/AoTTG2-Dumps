using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Utility;

[Token(Token = "0x20006DF")]
internal class CSVCompression
{
	[Token(Token = "0x4002120")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] Alphabet;

	[Token(Token = "0x6004433")]
	[Address(RVA = "0x4059230", Offset = "0x4059230", VA = "0x4059230")]
	public static object[] Compress(string source, int deltaRows, char containerDelimiter = ';', char rowDelimiter = ',')
	{
		return null;
	}

	[Token(Token = "0x6004434")]
	[Address(RVA = "0x4059C10", Offset = "0x4059C10", VA = "0x4059C10")]
	public static string Decompress(byte[] source, JSONNode symbolTable, int deltaRows, char containerDelimiter = ';', char rowDelimiter = ',')
	{
		return null;
	}

	[Token(Token = "0x6004435")]
	[Address(RVA = "0x40599E0", Offset = "0x40599E0", VA = "0x40599E0")]
	private static void CompressDelta(string[][] outputArr, int deltaRows)
	{
	}

	[Token(Token = "0x6004436")]
	[Address(RVA = "0x405A270", Offset = "0x405A270", VA = "0x405A270")]
	private static void CompressSymbol(string[][] outputArr, Dictionary<string, string> symbolTable)
	{
	}

	[Token(Token = "0x6004437")]
	[Address(RVA = "0x405A050", Offset = "0x405A050", VA = "0x405A050")]
	private static void DecompressDelta(string[][] outputArr, int deltaRows)
	{
	}

	[Token(Token = "0x6004438")]
	[Address(RVA = "0x405AEF0", Offset = "0x405AEF0", VA = "0x405AEF0")]
	private static void DecompressSymbol(string[][] outputArr, JSONNode symbolTable)
	{
	}

	[Token(Token = "0x6004439")]
	[Address(RVA = "0x405ABF0", Offset = "0x405ABF0", VA = "0x405ABF0")]
	private static string ToBase62(int index)
	{
		return null;
	}

	[Token(Token = "0x600443A")]
	[Address(RVA = "0x405B080", Offset = "0x405B080", VA = "0x405B080")]
	public CSVCompression()
	{
	}
}
