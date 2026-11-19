// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.FastEncoderStatics
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x200001B")]
internal static class FastEncoderStatics
{
	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly byte[] FastEncoderTreeStructureData;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly byte[] BFinalFastEncoderTreeStructureData;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly uint[] FastEncoderLiteralCodeInfo;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly uint[] FastEncoderDistanceCodeInfo;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly uint[] BitMask;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly byte[] ExtraLengthBits;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly byte[] ExtraDistanceBits;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x38")]
	private static readonly byte[] s_distLookup;

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x5F67980", Offset = "0x5F66980", VA = "0x5F67980")]
	private static byte[] CreateDistanceLookup()
	{
		return null;
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x5F678D0", Offset = "0x5F668D0", VA = "0x5F678D0")]
	internal static int GetSlot(int pos)
	{
		return default(int);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x5F68280", Offset = "0x5F67280", VA = "0x5F68280")]
	public static uint BitReverse(uint code, int length)
	{
		return default(uint);
	}
}
