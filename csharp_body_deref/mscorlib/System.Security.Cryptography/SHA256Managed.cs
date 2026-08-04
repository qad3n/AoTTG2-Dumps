// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.SHA256Managed
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000301")]
[ComVisible(true)]
public class SHA256Managed : SHA256
{
	[Token(Token = "0x4000D70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000D71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private long _count;

	[Token(Token = "0x4000D72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private uint[] _stateSHA256;

	[Token(Token = "0x4000D73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private uint[] _W;

	[Token(Token = "0x4000D74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly uint[] _K;

	[Token(Token = "0x6001A55")]
	[Address(RVA = "0x3B453A0", Offset = "0x3B453A0", VA = "0x3B453A0")]
	public SHA256Managed()
	{
	}

	[Token(Token = "0x6001A56")]
	[Address(RVA = "0x3B45610", Offset = "0x3B45610", VA = "0x3B45610", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001A57")]
	[Address(RVA = "0x3B45650", Offset = "0x3B45650", VA = "0x3B45650", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A58")]
	[Address(RVA = "0x3B45840", Offset = "0x3B45840", VA = "0x3B45840", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001A59")]
	[Address(RVA = "0x3B45590", Offset = "0x3B45590", VA = "0x3B45590")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001A5A")]
	[Address(RVA = "0x3B45660", Offset = "0x3B45660", VA = "0x3B45660")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A5B")]
	[Address(RVA = "0x3B45850", Offset = "0x3B45850", VA = "0x3B45850")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001A5C")]
	[Address(RVA = "0x3B45A00", Offset = "0x3B45A00", VA = "0x3B45A00")]
	private unsafe static void SHATransform(uint* expandedBuffer, uint* state, byte* block)
	{
	}

	[Token(Token = "0x6001A5D")]
	[Address(RVA = "0x3B467D0", Offset = "0x3B467D0", VA = "0x3B467D0")]
	private static uint RotateRight(uint x, int n)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A5E")]
	[Address(RVA = "0x3B46760", Offset = "0x3B46760", VA = "0x3B46760")]
	private static uint Ch(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A5F")]
	[Address(RVA = "0x3B467C0", Offset = "0x3B467C0", VA = "0x3B467C0")]
	private static uint Maj(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A60")]
	[Address(RVA = "0x3B467E0", Offset = "0x3B467E0", VA = "0x3B467E0")]
	private static uint sigma_0(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A61")]
	[Address(RVA = "0x3B46830", Offset = "0x3B46830", VA = "0x3B46830")]
	private static uint sigma_1(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A62")]
	[Address(RVA = "0x3B46770", Offset = "0x3B46770", VA = "0x3B46770")]
	private static uint Sigma_0(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A63")]
	[Address(RVA = "0x3B46710", Offset = "0x3B46710", VA = "0x3B46710")]
	private static uint Sigma_1(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A64")]
	[Address(RVA = "0x3B465A0", Offset = "0x3B465A0", VA = "0x3B465A0")]
	private unsafe static void SHA256Expand(uint* x)
	{
	}
}
