// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Cryptography.MD2Managed
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000046")]
internal class MD2Managed : Mono.Security.Cryptography.MD2
{
	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x28")]
	private byte[] state;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x30")]
	private byte[] checksum;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x38")]
	private byte[] buffer;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x40")]
	private int count;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x48")]
	private byte[] x;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte[] PI_SUBST;

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x3AE2A20", Offset = "0x3AE2A20", VA = "0x3AE2A20")]
	private byte[] Padding(int nLength)
	{
		return null;
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x3AE2950", Offset = "0x3AE2950", VA = "0x3AE2950")]
	public MD2Managed()
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x3AE2AA0", Offset = "0x3AE2AA0", VA = "0x3AE2AA0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x3AE2B00", Offset = "0x3AE2B00", VA = "0x3AE2B00", Slot = "18")]
	protected override void HashCore(byte[] array, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x3AE2E60", Offset = "0x3AE2E60", VA = "0x3AE2E60", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x3AE2BD0", Offset = "0x3AE2BD0", VA = "0x3AE2BD0")]
	private void MD2Transform(byte[] state, byte[] checksum, byte[] block, int index)
	{
	}
}
