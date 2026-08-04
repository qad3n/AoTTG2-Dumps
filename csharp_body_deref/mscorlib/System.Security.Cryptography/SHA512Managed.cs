// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.SHA512Managed
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000305")]
[ComVisible(true)]
public class SHA512Managed : SHA512
{
	[Token(Token = "0x4000D7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000D7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ulong _count;

	[Token(Token = "0x4000D7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ulong[] _stateSHA512;

	[Token(Token = "0x4000D7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private ulong[] _W;

	[Token(Token = "0x4000D7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ulong[] _K;

	[Token(Token = "0x6001A7D")]
	[Address(RVA = "0x3B482C0", Offset = "0x3B482C0", VA = "0x3B482C0")]
	public SHA512Managed()
	{
	}

	[Token(Token = "0x6001A7E")]
	[Address(RVA = "0x3B48580", Offset = "0x3B48580", VA = "0x3B48580", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001A7F")]
	[Address(RVA = "0x3B485C0", Offset = "0x3B485C0", VA = "0x3B485C0", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A80")]
	[Address(RVA = "0x3B487C0", Offset = "0x3B487C0", VA = "0x3B487C0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001A81")]
	[Address(RVA = "0x3B484B0", Offset = "0x3B484B0", VA = "0x3B484B0")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001A82")]
	[Address(RVA = "0x3B485D0", Offset = "0x3B485D0", VA = "0x3B485D0")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A83")]
	[Address(RVA = "0x3B487D0", Offset = "0x3B487D0", VA = "0x3B487D0")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001A84")]
	[Address(RVA = "0x3B48980", Offset = "0x3B48980", VA = "0x3B48980")]
	private unsafe static void SHATransform(ulong* expandedBuffer, ulong* state, byte* block)
	{
	}

	[Token(Token = "0x6001A85")]
	[Address(RVA = "0x3B49880", Offset = "0x3B49880", VA = "0x3B49880")]
	private static ulong RotateRight(ulong x, int n)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A86")]
	[Address(RVA = "0x3B497F0", Offset = "0x3B497F0", VA = "0x3B497F0")]
	private static ulong Ch(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A87")]
	[Address(RVA = "0x3B49860", Offset = "0x3B49860", VA = "0x3B49860")]
	private static ulong Maj(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A88")]
	[Address(RVA = "0x3B49800", Offset = "0x3B49800", VA = "0x3B49800")]
	private static ulong Sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A89")]
	[Address(RVA = "0x3B49790", Offset = "0x3B49790", VA = "0x3B49790")]
	private static ulong Sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A8A")]
	[Address(RVA = "0x3B49890", Offset = "0x3B49890", VA = "0x3B49890")]
	private static ulong sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A8B")]
	[Address(RVA = "0x3B498F0", Offset = "0x3B498F0", VA = "0x3B498F0")]
	private static ulong sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A8C")]
	[Address(RVA = "0x3B49620", Offset = "0x3B49620", VA = "0x3B49620")]
	private unsafe static void SHA512Expand(ulong* x)
	{
	}
}
