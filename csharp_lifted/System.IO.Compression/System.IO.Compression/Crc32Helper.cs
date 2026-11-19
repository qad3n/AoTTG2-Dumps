// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.Crc32Helper
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x200003D")]
internal static class Crc32Helper
{
	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly uint[] s_crcTable_0;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x8")]
	private static readonly uint[] s_crcTable_1;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x10")]
	private static readonly uint[] s_crcTable_2;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x18")]
	private static readonly uint[] s_crcTable_3;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x20")]
	private static readonly uint[] s_crcTable_4;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x28")]
	private static readonly uint[] s_crcTable_5;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x30")]
	private static readonly uint[] s_crcTable_6;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x38")]
	private static readonly uint[] s_crcTable_7;

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x5F75230", Offset = "0x5F74230", VA = "0x5F75230")]
	public static uint UpdateCrc32(uint crc32, byte[] buffer, int offset, int length)
	{
		return default(uint);
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x5F75B50", Offset = "0x5F74B50", VA = "0x5F75B50")]
	private static uint ManagedCrc32(uint crc32, byte[] buffer, int offset, int length)
	{
		return default(uint);
	}
}
