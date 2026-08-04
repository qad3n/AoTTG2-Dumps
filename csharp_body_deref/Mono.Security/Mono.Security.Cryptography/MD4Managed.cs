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
	[Address(RVA = "0x3ABD3F0", Offset = "0x3ABD3F0", VA = "0x3ABD3F0")]
	public MD4Managed()
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x3ABD4F0", Offset = "0x3ABD4F0", VA = "0x3ABD4F0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x3ABD590", Offset = "0x3ABD590", VA = "0x3ABD590", Slot = "18")]
	protected override void HashCore(byte[] array, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x3ABDD20", Offset = "0x3ABDD20", VA = "0x3ABDD20", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x3ABDF30", Offset = "0x3ABDF30", VA = "0x3ABDF30")]
	private byte[] Padding(int nLength)
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x3ABDF90", Offset = "0x3ABDF90", VA = "0x3ABDF90")]
	private uint F(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x3ABDFA0", Offset = "0x3ABDFA0", VA = "0x3ABDFA0")]
	private uint G(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x3ABDFB0", Offset = "0x3ABDFB0", VA = "0x3ABDFB0")]
	private uint H(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x3ABDFC0", Offset = "0x3ABDFC0", VA = "0x3ABDFC0")]
	private uint ROL(uint x, byte n)
	{
		return default(uint);
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x3ABDFD0", Offset = "0x3ABDFD0", VA = "0x3ABDFD0")]
	private void FF(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x3ABDFF0", Offset = "0x3ABDFF0", VA = "0x3ABDFF0")]
	private void GG(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x3ABE020", Offset = "0x3ABE020", VA = "0x3ABE020")]
	private void HH(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x3ABDE50", Offset = "0x3ABDE50", VA = "0x3ABDE50")]
	private void Encode(byte[] output, uint[] input)
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x3ABE040", Offset = "0x3ABE040", VA = "0x3ABE040")]
	private void Decode(uint[] output, byte[] input, int index)
	{
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x3ABD6B0", Offset = "0x3ABD6B0", VA = "0x3ABD6B0")]
	private void MD4Transform(uint[] state, byte[] block, int index)
	{
	}
}
