// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Cryptography.MD2Managed
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000064")]
internal class MD2Managed : Mono.Security.Cryptography.MD2
{
	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x28")]
	private byte[] state;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x30")]
	private byte[] checksum;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x38")]
	private byte[] buffer;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x40")]
	private int count;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x48")]
	private byte[] x;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte[] PI_SUBST;

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x195E370", Offset = "0x195C970", VA = "0x18195E370")]
	private byte[] Padding(int nLength)
	{
		return null;
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x195E480", Offset = "0x195CA80", VA = "0x18195E480")]
	public MD2Managed()
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x1934540", Offset = "0x1932B40", VA = "0x181934540", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x195DEB0", Offset = "0x195C4B0", VA = "0x18195DEB0", Slot = "18")]
	protected override void HashCore(byte[] array, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x195DF90", Offset = "0x195C590", VA = "0x18195DF90", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x195E0D0", Offset = "0x195C6D0", VA = "0x18195E0D0")]
	private void MD2Transform(byte[] state, byte[] checksum, byte[] block, int index)
	{
	}
}
