// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.SHA384Managed
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000303")]
[ComVisible(true)]
public class SHA384Managed : SHA384
{
	[Token(Token = "0x4000D75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000D76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ulong _count;

	[Token(Token = "0x4000D77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ulong[] _stateSHA384;

	[Token(Token = "0x4000D78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private ulong[] _W;

	[Token(Token = "0x4000D79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ulong[] _K;

	[Token(Token = "0x6001A69")]
	[Address(RVA = "0x3B46930", Offset = "0x3B46930", VA = "0x3B46930")]
	public SHA384Managed()
	{
	}

	[Token(Token = "0x6001A6A")]
	[Address(RVA = "0x3B46BF0", Offset = "0x3B46BF0", VA = "0x3B46BF0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001A6B")]
	[Address(RVA = "0x3B46C30", Offset = "0x3B46C30", VA = "0x3B46C30", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A6C")]
	[Address(RVA = "0x3B46E30", Offset = "0x3B46E30", VA = "0x3B46E30", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001A6D")]
	[Address(RVA = "0x3B46B20", Offset = "0x3B46B20", VA = "0x3B46B20")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001A6E")]
	[Address(RVA = "0x3B46C40", Offset = "0x3B46C40", VA = "0x3B46C40")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A6F")]
	[Address(RVA = "0x3B46E40", Offset = "0x3B46E40", VA = "0x3B46E40")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001A70")]
	[Address(RVA = "0x3B46FF0", Offset = "0x3B46FF0", VA = "0x3B46FF0")]
	private unsafe static void SHATransform(ulong* expandedBuffer, ulong* state, byte* block)
	{
	}

	[Token(Token = "0x6001A71")]
	[Address(RVA = "0x3B48140", Offset = "0x3B48140", VA = "0x3B48140")]
	private static ulong RotateRight(ulong x, int n)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A72")]
	[Address(RVA = "0x3B480B0", Offset = "0x3B480B0", VA = "0x3B480B0")]
	private static ulong Ch(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A73")]
	[Address(RVA = "0x3B48120", Offset = "0x3B48120", VA = "0x3B48120")]
	private static ulong Maj(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A74")]
	[Address(RVA = "0x3B480C0", Offset = "0x3B480C0", VA = "0x3B480C0")]
	private static ulong Sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A75")]
	[Address(RVA = "0x3B48050", Offset = "0x3B48050", VA = "0x3B48050")]
	private static ulong Sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A76")]
	[Address(RVA = "0x3B48150", Offset = "0x3B48150", VA = "0x3B48150")]
	private static ulong sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A77")]
	[Address(RVA = "0x3B481B0", Offset = "0x3B481B0", VA = "0x3B481B0")]
	private static ulong sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A78")]
	[Address(RVA = "0x3B47EE0", Offset = "0x3B47EE0", VA = "0x3B47EE0")]
	private unsafe static void SHA384Expand(ulong* x)
	{
	}
}
