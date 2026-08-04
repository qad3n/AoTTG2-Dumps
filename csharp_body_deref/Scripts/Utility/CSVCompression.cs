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

[Token(Token = "0x2000727")]
internal class CSVCompression
{
	[Token(Token = "0x4002279")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] Alphabet;

	[Token(Token = "0x600467E")]
	[Address(RVA = "0x4389B90", Offset = "0x4389B90", VA = "0x4389B90")]
	public static object[] Compress(string source, int deltaRows, char containerDelimiter = ';', char rowDelimiter = ',')
	{
		return null;
	}

	[Token(Token = "0x600467F")]
	[Address(RVA = "0x438A570", Offset = "0x438A570", VA = "0x438A570")]
	public static string Decompress(byte[] source, JSONNode symbolTable, int deltaRows, char containerDelimiter = ';', char rowDelimiter = ',')
	{
		return null;
	}

	[Token(Token = "0x6004680")]
	[Address(RVA = "0x438A340", Offset = "0x438A340", VA = "0x438A340")]
	private static void CompressDelta(string[][] outputArr, int deltaRows)
	{
	}

	[Token(Token = "0x6004681")]
	[Address(RVA = "0x438ABD0", Offset = "0x438ABD0", VA = "0x438ABD0")]
	private static void CompressSymbol(string[][] outputArr, Dictionary<string, string> symbolTable)
	{
	}

	[Token(Token = "0x6004682")]
	[Address(RVA = "0x438A9B0", Offset = "0x438A9B0", VA = "0x438A9B0")]
	private static void DecompressDelta(string[][] outputArr, int deltaRows)
	{
	}

	[Token(Token = "0x6004683")]
	[Address(RVA = "0x438B850", Offset = "0x438B850", VA = "0x438B850")]
	private static void DecompressSymbol(string[][] outputArr, JSONNode symbolTable)
	{
	}

	[Token(Token = "0x6004684")]
	[Address(RVA = "0x438B550", Offset = "0x438B550", VA = "0x438B550")]
	private static string ToBase62(int index)
	{
		return null;
	}

	[Token(Token = "0x6004685")]
	[Address(RVA = "0x438B9E0", Offset = "0x438B9E0", VA = "0x438B9E0")]
	public CSVCompression()
	{
	}
}
