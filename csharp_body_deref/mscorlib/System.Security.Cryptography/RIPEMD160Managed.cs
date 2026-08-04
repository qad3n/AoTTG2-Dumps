// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RIPEMD160Managed
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002F6")]
[ComVisible(true)]
public class RIPEMD160Managed : RIPEMD160
{
	[Token(Token = "0x4000D4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000D4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private long _count;

	[Token(Token = "0x4000D4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private uint[] _stateMD160;

	[Token(Token = "0x4000D4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private uint[] _blockDWords;

	[Token(Token = "0x60019BF")]
	[Address(RVA = "0x3B32B60", Offset = "0x3B32B60", VA = "0x3B32B60")]
	public RIPEMD160Managed()
	{
	}

	[Token(Token = "0x60019C0")]
	[Address(RVA = "0x3B3B260", Offset = "0x3B3B260", VA = "0x3B3B260", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x60019C1")]
	[Address(RVA = "0x3B3B2F0", Offset = "0x3B3B2F0", VA = "0x3B3B2F0", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x60019C2")]
	[Address(RVA = "0x3B3B4A0", Offset = "0x3B3B4A0", VA = "0x3B3B4A0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x60019C3")]
	[Address(RVA = "0x3B3B200", Offset = "0x3B3B200", VA = "0x3B3B200")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x60019C4")]
	[Address(RVA = "0x3B3B300", Offset = "0x3B3B300", VA = "0x3B3B300")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x60019C5")]
	[Address(RVA = "0x3B3B4B0", Offset = "0x3B3B4B0", VA = "0x3B3B4B0")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x60019C6")]
	[Address(RVA = "0x3B3B660", Offset = "0x3B3B660", VA = "0x3B3B660")]
	private unsafe static void MDTransform(uint* blockDWords, uint* state, byte* block)
	{
	}

	[Token(Token = "0x60019C7")]
	[Address(RVA = "0x3B3CC40", Offset = "0x3B3CC40", VA = "0x3B3CC40")]
	private static uint F(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x60019C8")]
	[Address(RVA = "0x3B3CC50", Offset = "0x3B3CC50", VA = "0x3B3CC50")]
	private static uint G(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x60019C9")]
	[Address(RVA = "0x3B3CC60", Offset = "0x3B3CC60", VA = "0x3B3CC60")]
	private static uint H(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x60019CA")]
	[Address(RVA = "0x3B3CC70", Offset = "0x3B3CC70", VA = "0x3B3CC70")]
	private static uint I(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x60019CB")]
	[Address(RVA = "0x3B3CC80", Offset = "0x3B3CC80", VA = "0x3B3CC80")]
	private static uint J(uint x, uint y, uint z)
	{
		return default(uint);
	}
}
