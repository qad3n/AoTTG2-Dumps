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

[Token(Token = "0x2000325")]
[ComVisible(true)]
public class RIPEMD160Managed : RIPEMD160
{
	[Token(Token = "0x4000D57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000D58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private long _count;

	[Token(Token = "0x4000D59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private uint[] _stateMD160;

	[Token(Token = "0x4000D5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private uint[] _blockDWords;

	[Token(Token = "0x6001A27")]
	[Address(RVA = "0x19B0A80", Offset = "0x19AF080", VA = "0x1819B0A80")]
	public RIPEMD160Managed()
	{
	}

	[Token(Token = "0x6001A28")]
	[Address(RVA = "0x19AE600", Offset = "0x19ACC00", VA = "0x1819AE600", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001A29")]
	[Address(RVA = "0x19AE540", Offset = "0x19ACB40", VA = "0x1819AE540", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A2A")]
	[Address(RVA = "0x19AE550", Offset = "0x19ACB50", VA = "0x1819AE550", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001A2B")]
	[Address(RVA = "0x19AE570", Offset = "0x19ACB70", VA = "0x1819AE570")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001A2C")]
	[Address(RVA = "0x19B0920", Offset = "0x19AEF20", VA = "0x1819B0920")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A2D")]
	[Address(RVA = "0x19B0730", Offset = "0x19AED30", VA = "0x1819B0730")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001A2E")]
	[Address(RVA = "0x19AE670", Offset = "0x19ACC70", VA = "0x1819AE670")]
	private unsafe static void MDTransform(uint* blockDWords, uint* state, byte* block)
	{
	}

	[Token(Token = "0x6001A2F")]
	[Address(RVA = "0x19AE510", Offset = "0x19ACB10", VA = "0x1819AE510")]
	private static uint F(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A30")]
	[Address(RVA = "0x19AE520", Offset = "0x19ACB20", VA = "0x1819AE520")]
	private static uint G(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A31")]
	[Address(RVA = "0x19AE530", Offset = "0x19ACB30", VA = "0x1819AE530")]
	private static uint H(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A32")]
	[Address(RVA = "0x19AE560", Offset = "0x19ACB60", VA = "0x1819AE560")]
	private static uint I(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A33")]
	[Address(RVA = "0x19AE660", Offset = "0x19ACC60", VA = "0x1819AE660")]
	private static uint J(uint x, uint y, uint z)
	{
		return default(uint);
	}
}
