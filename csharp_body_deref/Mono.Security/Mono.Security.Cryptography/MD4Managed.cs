using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x200004C")]
public class MD4Managed : MD4
{
	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x28")]
	private uint[] state;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x30")]
	private byte[] buffer;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x38")]
	private uint[] count;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x40")]
	private uint[] x;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x48")]
	private byte[] digest;

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x1935D50", Offset = "0x1934350", VA = "0x181935D50")]
	public MD4Managed()
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x1935260", Offset = "0x1933860", VA = "0x181935260", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x1934DF0", Offset = "0x19333F0", VA = "0x181934DF0", Slot = "18")]
	protected override void HashCore(byte[] array, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x1934F70", Offset = "0x1933570", VA = "0x181934F70", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x1935CD0", Offset = "0x19342D0", VA = "0x181935CD0")]
	private byte[] Padding(int nLength)
	{
		return null;
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x1934D30", Offset = "0x1933330", VA = "0x181934D30")]
	private uint F(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x1934D90", Offset = "0x1933390", VA = "0x181934D90")]
	private uint G(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x1934DE0", Offset = "0x19333E0", VA = "0x181934DE0")]
	private uint H(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x1935D30", Offset = "0x1934330", VA = "0x181935D30")]
	private uint ROL(uint x, byte n)
	{
		return default(uint);
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x1934CF0", Offset = "0x19332F0", VA = "0x181934CF0")]
	private void FF(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x1934D40", Offset = "0x1933340", VA = "0x181934D40")]
	private void GG(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x1934DA0", Offset = "0x19333A0", VA = "0x181934DA0")]
	private void HH(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x1934C10", Offset = "0x1933210", VA = "0x181934C10")]
	private void Encode(byte[] output, uint[] input)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x1934B60", Offset = "0x1933160", VA = "0x181934B60")]
	private void Decode(uint[] output, byte[] input, int index)
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x1935330", Offset = "0x1933930", VA = "0x181935330")]
	private void MD4Transform(uint[] state, byte[] block, int index)
	{
	}
}
