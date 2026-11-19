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

[Token(Token = "0x20002FE")]
[ComVisible(true)]
public class RIPEMD160Managed : RIPEMD160
{
	[Token(Token = "0x4000CB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000CB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private long _count;

	[Token(Token = "0x4000CB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private uint[] _stateMD160;

	[Token(Token = "0x4000CBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private uint[] _blockDWords;

	[Token(Token = "0x6001A04")]
	[Address(RVA = "0x533C980", Offset = "0x533B980", VA = "0x533C980")]
	public RIPEMD160Managed()
	{
	}

	[Token(Token = "0x6001A05")]
	[Address(RVA = "0x5344EA0", Offset = "0x5343EA0", VA = "0x5344EA0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001A06")]
	[Address(RVA = "0x5344F30", Offset = "0x5343F30", VA = "0x5344F30", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A07")]
	[Address(RVA = "0x53450F0", Offset = "0x53440F0", VA = "0x53450F0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001A08")]
	[Address(RVA = "0x5344E40", Offset = "0x5343E40", VA = "0x5344E40")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001A09")]
	[Address(RVA = "0x5344F40", Offset = "0x5343F40", VA = "0x5344F40")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A0A")]
	[Address(RVA = "0x5345100", Offset = "0x5344100", VA = "0x5345100")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001A0B")]
	[Address(RVA = "0x53452B0", Offset = "0x53442B0", VA = "0x53452B0")]
	private unsafe static void MDTransform(uint* blockDWords, uint* state, byte* block)
	{
	}

	[Token(Token = "0x6001A0C")]
	[Address(RVA = "0x53467F0", Offset = "0x53457F0", VA = "0x53467F0")]
	private static uint F(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A0D")]
	[Address(RVA = "0x5346800", Offset = "0x5345800", VA = "0x5346800")]
	private static uint G(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A0E")]
	[Address(RVA = "0x5346810", Offset = "0x5345810", VA = "0x5346810")]
	private static uint H(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A0F")]
	[Address(RVA = "0x5346820", Offset = "0x5345820", VA = "0x5346820")]
	private static uint I(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A10")]
	[Address(RVA = "0x5346830", Offset = "0x5345830", VA = "0x5346830")]
	private static uint J(uint x, uint y, uint z)
	{
		return default(uint);
	}
}
