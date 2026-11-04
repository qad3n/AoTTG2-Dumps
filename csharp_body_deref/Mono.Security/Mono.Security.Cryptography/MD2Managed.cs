using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x200004A")]
public class MD2Managed : MD2
{
	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0x28")]
	private byte[] state;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x30")]
	private byte[] checksum;

	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x38")]
	private byte[] buffer;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x40")]
	private int count;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x48")]
	private byte[] x;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte[] PI_SUBST;

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x1934850", Offset = "0x1932E50", VA = "0x181934850")]
	private byte[] Padding(int nLength)
	{
		return null;
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x1934960", Offset = "0x1932F60", VA = "0x181934960")]
	public MD2Managed()
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x1934540", Offset = "0x1932B40", VA = "0x181934540", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x1934320", Offset = "0x1932920", VA = "0x181934320", Slot = "18")]
	protected override void HashCore(byte[] array, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x1934400", Offset = "0x1932A00", VA = "0x181934400", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x19345B0", Offset = "0x1932BB0", VA = "0x1819345B0")]
	private void MD2Transform(byte[] state, byte[] checksum, byte[] block, int index)
	{
	}
}
