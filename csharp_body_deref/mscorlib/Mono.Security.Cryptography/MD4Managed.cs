// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Cryptography.MD4Managed
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000066")]
internal class MD4Managed : Mono.Security.Cryptography.MD4
{
	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x28")]
	private uint[] state;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x30")]
	private byte[] buffer;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x38")]
	private uint[] count;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x40")]
	private uint[] x;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x48")]
	private byte[] digest;

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x195E9B0", Offset = "0x195CFB0", VA = "0x18195E9B0")]
	public MD4Managed()
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x1935260", Offset = "0x1933860", VA = "0x181935260", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x1934DF0", Offset = "0x19333F0", VA = "0x181934DF0", Slot = "18")]
	protected override void HashCore(byte[] array, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x195E660", Offset = "0x195CC60", VA = "0x18195E660", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x195E950", Offset = "0x195CF50", VA = "0x18195E950")]
	private byte[] Padding(int nLength)
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x1934D30", Offset = "0x1933330", VA = "0x181934D30")]
	private uint F(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x1934D90", Offset = "0x1933390", VA = "0x181934D90")]
	private uint G(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x1934DE0", Offset = "0x19333E0", VA = "0x181934DE0")]
	private uint H(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x1935D30", Offset = "0x1934330", VA = "0x181935D30")]
	private uint ROL(uint x, byte n)
	{
		return default(uint);
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x1934CF0", Offset = "0x19332F0", VA = "0x181934CF0")]
	private void FF(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x1934D40", Offset = "0x1933340", VA = "0x181934D40")]
	private void GG(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x1934DA0", Offset = "0x19333A0", VA = "0x181934DA0")]
	private void HH(ref uint a, uint b, uint c, uint d, uint x, byte s)
	{
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x1934C10", Offset = "0x1933210", VA = "0x181934C10")]
	private void Encode(byte[] output, uint[] input)
	{
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x1934B60", Offset = "0x1933160", VA = "0x181934B60")]
	private void Decode(uint[] output, byte[] input, int index)
	{
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x1935330", Offset = "0x1933930", VA = "0x181935330")]
	private void MD4Transform(uint[] state, byte[] block, int index)
	{
	}
}
