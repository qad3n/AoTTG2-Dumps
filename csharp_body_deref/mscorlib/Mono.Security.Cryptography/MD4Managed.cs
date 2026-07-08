using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000048")]
internal class MD4Managed : Mono.Security.Cryptography.MD4
{
	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x28")]
	private uint[] state;

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x30")]
	private byte[] buffer;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x38")]
	private uint[] count;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x40")]
	private uint[] x;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x48")]
	private byte[] digest;

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x4DFD570", Offset = "0x4DFD570", VA = "0x4DFD570")]
	public MD4Managed()
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x4DFD670", Offset = "0x4DFD670", VA = "0x4DFD670", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x4DFD710", Offset = "0x4DFD710", VA = "0x4DFD710", Slot = "18")]
	protected override void HashCore(byte[] array, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x4DFDEA0", Offset = "0x4DFDEA0", VA = "0x4DFDEA0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x4DFE0B0", Offset = "0x4DFE0B0", VA = "0x4DFE0B0")]
	private byte[] Padding(int nLength)
	{
		return null;
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x4DFE110", Offset = "0x4DFE110", VA = "0x4DFE110")]
	private uint F(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x4DFE120", Offset = "0x4DFE120", VA = "0x4DFE120")]
	private uint G(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x4DFE130", Offset = "0x4DFE130", VA = "0x4DFE130")]
	private uint H(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x4DFE140", Offset = "0x4DFE140", VA = "0x4DFE140")]
	private uint ROL(uint x, byte n)
	{
		return default(uint);
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x4DFE150", Offset = "0x4DFE150", VA = "0x4DFE150")]
	private void FF(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x4DFE170", Offset = "0x4DFE170", VA = "0x4DFE170")]
	private void GG(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x4DFE1A0", Offset = "0x4DFE1A0", VA = "0x4DFE1A0")]
	private void HH(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x4DFDFD0", Offset = "0x4DFDFD0", VA = "0x4DFDFD0")]
	private void Encode(byte[] output, uint[] input)
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x4DFE1C0", Offset = "0x4DFE1C0", VA = "0x4DFE1C0")]
	private void Decode(uint[] output, byte[] input, int index)
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x4DFD830", Offset = "0x4DFD830", VA = "0x4DFD830")]
	private void MD4Transform(uint[] state, byte[] block, int index)
	{
	}
}
