// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Cryptography.MD4Managed
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3AE3090", Offset = "0x3AE3090", VA = "0x3AE3090")]
	public MD4Managed()
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x3AE3190", Offset = "0x3AE3190", VA = "0x3AE3190", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x3AE3230", Offset = "0x3AE3230", VA = "0x3AE3230", Slot = "18")]
	protected override void HashCore(byte[] array, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x3AE39C0", Offset = "0x3AE39C0", VA = "0x3AE39C0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x3AE3BD0", Offset = "0x3AE3BD0", VA = "0x3AE3BD0")]
	private byte[] Padding(int nLength)
	{
		return null;
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x3AE3C30", Offset = "0x3AE3C30", VA = "0x3AE3C30")]
	private uint F(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x3AE3C40", Offset = "0x3AE3C40", VA = "0x3AE3C40")]
	private uint G(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x3AE3C50", Offset = "0x3AE3C50", VA = "0x3AE3C50")]
	private uint H(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x3AE3C60", Offset = "0x3AE3C60", VA = "0x3AE3C60")]
	private uint ROL(uint x, byte n)
	{
		return default(uint);
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x3AE3C70", Offset = "0x3AE3C70", VA = "0x3AE3C70")]
	private void FF(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x3AE3C90", Offset = "0x3AE3C90", VA = "0x3AE3C90")]
	private void GG(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x3AE3CC0", Offset = "0x3AE3CC0", VA = "0x3AE3CC0")]
	private void HH(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x3AE3AF0", Offset = "0x3AE3AF0", VA = "0x3AE3AF0")]
	private void Encode(byte[] output, uint[] input)
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x3AE3CE0", Offset = "0x3AE3CE0", VA = "0x3AE3CE0")]
	private void Decode(uint[] output, byte[] input, int index)
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x3AE3350", Offset = "0x3AE3350", VA = "0x3AE3350")]
	private void MD4Transform(uint[] state, byte[] block, int index)
	{
	}
}
