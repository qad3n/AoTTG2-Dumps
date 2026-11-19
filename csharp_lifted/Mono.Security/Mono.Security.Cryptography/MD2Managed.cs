using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000037")]
public class MD2Managed : MD2
{
	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x28")]
	private byte[] state;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x30")]
	private byte[] checksum;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x38")]
	private byte[] buffer;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x40")]
	private int count;

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x48")]
	private byte[] x;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte[] PI_SUBST;

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x52C8940", Offset = "0x52C7940", VA = "0x52C8940")]
	private byte[] Padding(int nLength)
	{
		return null;
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x52C8870", Offset = "0x52C7870", VA = "0x52C8870")]
	public MD2Managed()
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x52C89C0", Offset = "0x52C79C0", VA = "0x52C89C0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x52C8A20", Offset = "0x52C7A20", VA = "0x52C8A20", Slot = "18")]
	protected override void HashCore(byte[] array, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x52C8D70", Offset = "0x52C7D70", VA = "0x52C8D70", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x52C8AF0", Offset = "0x52C7AF0", VA = "0x52C8AF0")]
	private void MD2Transform(byte[] state, byte[] checksum, byte[] block, int index)
	{
	}
}
