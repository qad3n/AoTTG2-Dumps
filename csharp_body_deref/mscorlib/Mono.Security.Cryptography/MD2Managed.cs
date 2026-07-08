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
	[Address(RVA = "0x4DFCF00", Offset = "0x4DFCF00", VA = "0x4DFCF00")]
	private byte[] Padding(int nLength)
	{
		return null;
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x4DFCE30", Offset = "0x4DFCE30", VA = "0x4DFCE30")]
	public MD2Managed()
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x4DFCF80", Offset = "0x4DFCF80", VA = "0x4DFCF80", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x4DFCFE0", Offset = "0x4DFCFE0", VA = "0x4DFCFE0", Slot = "18")]
	protected override void HashCore(byte[] array, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x4DFD340", Offset = "0x4DFD340", VA = "0x4DFD340", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x4DFD0B0", Offset = "0x4DFD0B0", VA = "0x4DFD0B0")]
	private void MD2Transform(byte[] state, byte[] checksum, byte[] block, int index)
	{
	}
}
