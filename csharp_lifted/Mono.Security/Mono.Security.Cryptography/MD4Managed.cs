using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000039")]
public class MD4Managed : MD4
{
	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x28")]
	private uint[] state;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x30")]
	private byte[] buffer;

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x38")]
	private uint[] count;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0x40")]
	private uint[] x;

	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0x48")]
	private byte[] digest;

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x52C9030", Offset = "0x52C8030", VA = "0x52C9030")]
	public MD4Managed()
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x52C9130", Offset = "0x52C8130", VA = "0x52C9130", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x52C91D0", Offset = "0x52C81D0", VA = "0x52C91D0", Slot = "18")]
	protected override void HashCore(byte[] array, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x52C9940", Offset = "0x52C8940", VA = "0x52C9940", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x52C9B40", Offset = "0x52C8B40", VA = "0x52C9B40")]
	private byte[] Padding(int nLength)
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x52C9BA0", Offset = "0x52C8BA0", VA = "0x52C9BA0")]
	private uint F(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x52C9BB0", Offset = "0x52C8BB0", VA = "0x52C9BB0")]
	private uint G(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x52C9BC0", Offset = "0x52C8BC0", VA = "0x52C9BC0")]
	private uint H(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x52C9BD0", Offset = "0x52C8BD0", VA = "0x52C9BD0")]
	private uint ROL(uint x, byte n)
	{
		return default(uint);
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x52C9BE0", Offset = "0x52C8BE0", VA = "0x52C9BE0")]
	private void FF(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x52C9C00", Offset = "0x52C8C00", VA = "0x52C9C00")]
	private void GG(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x52C9C30", Offset = "0x52C8C30", VA = "0x52C9C30")]
	private void HH(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x52C9A70", Offset = "0x52C8A70", VA = "0x52C9A70")]
	private void Encode(byte[] output, uint[] input)
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x52C9C50", Offset = "0x52C8C50", VA = "0x52C9C50")]
	private void Decode(uint[] output, byte[] input, int index)
	{
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x52C92F0", Offset = "0x52C82F0", VA = "0x52C92F0")]
	private void MD4Transform(uint[] state, byte[] block, int index)
	{
	}
}
