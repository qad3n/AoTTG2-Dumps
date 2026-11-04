// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.StreamCompressionModel
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;
using Unity.Burst;

namespace Unity.Collections;

[Token(Token = "0x20000DB")]
[GenerateTestsForBurstCompatibility]
public struct StreamCompressionModel
{
	[Token(Token = "0x20000DC")]
	private static class SharedStaticCompressionModel
	{
		[Token(Token = "0x400043F")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly SharedStatic<StreamCompressionModel> Default;
	}

	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly byte[] k_BucketSizes;

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly uint[] k_BucketOffsets;

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly int[] k_FirstBucketCandidate;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly byte[] k_DefaultModelData;

	[Token(Token = "0x4000437")]
	internal const int k_AlphabetSize = 16;

	[Token(Token = "0x4000438")]
	internal const int k_MaxHuffmanSymbolLength = 6;

	[Token(Token = "0x4000439")]
	internal const int k_MaxContexts = 1;

	[Token(Token = "0x400043A")]
	[FieldOffset(Offset = "0x0")]
	private byte m_Initialized;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x2")]
	internal unsafe fixed ushort encodeTable[16];

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x22")]
	internal unsafe fixed ushort decodeTable[64];

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0xA2")]
	internal unsafe fixed byte bucketSizes[16];

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0xB4")]
	internal unsafe fixed uint bucketOffsets[16];

	[Token(Token = "0x1700012C")]
	public static StreamCompressionModel Default
	{
		[Token(Token = "0x6000A1E")]
		[Address(RVA = "0x29BACC0", Offset = "0x29B92C0", VA = "0x1829BACC0")]
		get
		{
			return default(StreamCompressionModel);
		}
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x29BA560", Offset = "0x29B8B60", VA = "0x1829BA560")]
	private static void Initialize()
	{
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x29BA220", Offset = "0x29B8820", VA = "0x1829BA220")]
	private static void GenerateHuffmanCodes(NativeArray<byte> symbolCodes, int symbolCodesOffset, NativeArray<byte> symbolLengths, int symbolLengthsOffset, int alphabetSize, int maxCodeLength)
	{
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x29BAAA0", Offset = "0x29B90A0", VA = "0x1829BAAA0")]
	private static uint ReverseBits(uint value, int num_bits)
	{
		return default(uint);
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x29BA440", Offset = "0x29B8A40", VA = "0x1829BA440")]
	private static void GenerateHuffmanDecodeTable(NativeArray<ushort> decodeTable, int decodeTableOffset, NativeArray<byte> symbolLengths, NativeArray<byte> symbolCodes, int alphabetSize, int maxCodeLength)
	{
	}

	[Token(Token = "0x6000A23")]
	[Address(RVA = "0x29B9F50", Offset = "0x29B8550", VA = "0x1829B9F50")]
	public readonly int CalculateBucket(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x29BA4F0", Offset = "0x29B8AF0", VA = "0x1829BA4F0")]
	public readonly int GetCompressedSizeInBits(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x29BA0B0", Offset = "0x29B86B0", VA = "0x1829BA0B0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckAlphabetSize(int alphabetSize)
	{
	}

	[Token(Token = "0x6000A26")]
	[Address(RVA = "0x29BA1B0", Offset = "0x29B87B0", VA = "0x1829BA1B0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckSymbolLength(NativeArray<byte> symbolLengths, int symbolLengthsOffset, int symbol, int length)
	{
	}

	[Token(Token = "0x6000A27")]
	[Address(RVA = "0x29BA040", Offset = "0x29B8640", VA = "0x1829BA040")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckAlphabetAndMaxCodeLength(int alphabetSize, int maxCodeLength)
	{
	}

	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x29BA150", Offset = "0x29B8750", VA = "0x1829BA150")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckExceedMaxCodeLength(int length, int maxCodeLength)
	{
	}
}
