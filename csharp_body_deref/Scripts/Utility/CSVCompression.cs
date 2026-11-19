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

[Token(Token = "0x200091D")]
internal class CSVCompression
{
	[Token(Token = "0x4002DF3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] Alphabet;

	[Token(Token = "0x600564E")]
	[Address(RVA = "0x5CE8710", Offset = "0x5CE7710", VA = "0x5CE8710")]
	public static object[] Compress(string source, int deltaRows, char containerDelimiter = ';', char rowDelimiter = ',')
	{
		return null;
	}

	[Token(Token = "0x600564F")]
	[Address(RVA = "0x5CE9220", Offset = "0x5CE8220", VA = "0x5CE9220")]
	public static string Decompress(byte[] source, JSONNode symbolTable, int deltaRows, char containerDelimiter = ';', char rowDelimiter = ',')
	{
		return null;
	}

	[Token(Token = "0x6005650")]
	[Address(RVA = "0x5CE8E80", Offset = "0x5CE7E80", VA = "0x5CE8E80")]
	private static void CompressDelta(string[][] outputArr, int deltaRows)
	{
	}

	[Token(Token = "0x6005651")]
	[Address(RVA = "0x5CE99A0", Offset = "0x5CE89A0", VA = "0x5CE99A0")]
	private static void CompressSymbol(string[][] outputArr, Dictionary<string, string> symbolTable)
	{
	}

	[Token(Token = "0x6005652")]
	[Address(RVA = "0x5CE9750", Offset = "0x5CE8750", VA = "0x5CE9750")]
	private static void DecompressDelta(string[][] outputArr, int deltaRows)
	{
	}

	[Token(Token = "0x6005653")]
	[Address(RVA = "0x5CEA530", Offset = "0x5CE9530", VA = "0x5CEA530")]
	private static void DecompressSymbol(string[][] outputArr, JSONNode symbolTable)
	{
	}

	[Token(Token = "0x6005654")]
	[Address(RVA = "0x5CEA240", Offset = "0x5CE9240", VA = "0x5CEA240")]
	private static string ToBase62(int index)
	{
		return null;
	}

	[Token(Token = "0x6005655")]
	[Address(RVA = "0x5CEA6D0", Offset = "0x5CE96D0", VA = "0x5CEA6D0")]
	public CSVCompression()
	{
	}
}
