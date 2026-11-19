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

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x52ED8D0", Offset = "0x52EC8D0", VA = "0x52ED8D0")]
	public MD4Managed()
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x52ED9D0", Offset = "0x52EC9D0", VA = "0x52ED9D0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x52EDA70", Offset = "0x52ECA70", VA = "0x52EDA70", Slot = "18")]
	protected override void HashCore(byte[] array, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x52EE1E0", Offset = "0x52ED1E0", VA = "0x52EE1E0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x52EE3E0", Offset = "0x52ED3E0", VA = "0x52EE3E0")]
	private byte[] Padding(int nLength)
	{
		return null;
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x52EE440", Offset = "0x52ED440", VA = "0x52EE440")]
	private uint F(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x52EE450", Offset = "0x52ED450", VA = "0x52EE450")]
	private uint G(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x52EE460", Offset = "0x52ED460", VA = "0x52EE460")]
	private uint H(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x52EE470", Offset = "0x52ED470", VA = "0x52EE470")]
	private uint ROL(uint x, byte n)
	{
		return default(uint);
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x52EE480", Offset = "0x52ED480", VA = "0x52EE480")]
	private void FF(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x52EE4A0", Offset = "0x52ED4A0", VA = "0x52EE4A0")]
	private void GG(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x52EE4D0", Offset = "0x52ED4D0", VA = "0x52EE4D0")]
	private void HH(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x52EE310", Offset = "0x52ED310", VA = "0x52EE310")]
	private void Encode(byte[] output, uint[] input)
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x52EE4F0", Offset = "0x52ED4F0", VA = "0x52EE4F0")]
	private void Decode(uint[] output, byte[] input, int index)
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x52EDB90", Offset = "0x52ECB90", VA = "0x52EDB90")]
	private void MD4Transform(uint[] state, byte[] block, int index)
	{
	}
}
