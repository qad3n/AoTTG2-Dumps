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
	[Address(RVA = "0x3A50730", Offset = "0x3A50730", VA = "0x3A50730")]
	public MD4Managed()
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x3A50830", Offset = "0x3A50830", VA = "0x3A50830", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x3A508D0", Offset = "0x3A508D0", VA = "0x3A508D0", Slot = "18")]
	protected override void HashCore(byte[] array, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x3A51060", Offset = "0x3A51060", VA = "0x3A51060", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x3A51270", Offset = "0x3A51270", VA = "0x3A51270")]
	private byte[] Padding(int nLength)
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x3A512D0", Offset = "0x3A512D0", VA = "0x3A512D0")]
	private uint F(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x3A512E0", Offset = "0x3A512E0", VA = "0x3A512E0")]
	private uint G(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x3A512F0", Offset = "0x3A512F0", VA = "0x3A512F0")]
	private uint H(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x3A51300", Offset = "0x3A51300", VA = "0x3A51300")]
	private uint ROL(uint x, byte n)
	{
		return default(uint);
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x3A51310", Offset = "0x3A51310", VA = "0x3A51310")]
	private void FF(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x3A51330", Offset = "0x3A51330", VA = "0x3A51330")]
	private void GG(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x3A51360", Offset = "0x3A51360", VA = "0x3A51360")]
	private void HH(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x3A51190", Offset = "0x3A51190", VA = "0x3A51190")]
	private void Encode(byte[] output, uint[] input)
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x3A51380", Offset = "0x3A51380", VA = "0x3A51380")]
	private void Decode(uint[] output, byte[] input, int index)
	{
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x3A509F0", Offset = "0x3A509F0", VA = "0x3A509F0")]
	private void MD4Transform(uint[] state, byte[] block, int index)
	{
	}
}
