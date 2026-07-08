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
	[Address(RVA = "0x4E60E10", Offset = "0x4E60E10", VA = "0x4E60E10")]
	public SHA384Managed()
	{
	}

	[Token(Token = "0x6001A6A")]
	[Address(RVA = "0x4E610D0", Offset = "0x4E610D0", VA = "0x4E610D0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001A6B")]
	[Address(RVA = "0x4E61110", Offset = "0x4E61110", VA = "0x4E61110", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A6C")]
	[Address(RVA = "0x4E61310", Offset = "0x4E61310", VA = "0x4E61310", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001A6D")]
	[Address(RVA = "0x4E61000", Offset = "0x4E61000", VA = "0x4E61000")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001A6E")]
	[Address(RVA = "0x4E61120", Offset = "0x4E61120", VA = "0x4E61120")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A6F")]
	[Address(RVA = "0x4E61320", Offset = "0x4E61320", VA = "0x4E61320")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001A70")]
	[Address(RVA = "0x4E614D0", Offset = "0x4E614D0", VA = "0x4E614D0")]
	private unsafe static void SHATransform(ulong* expandedBuffer, ulong* state, byte* block)
	{
	}

	[Token(Token = "0x6001A71")]
	[Address(RVA = "0x4E62620", Offset = "0x4E62620", VA = "0x4E62620")]
	private static ulong RotateRight(ulong x, int n)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A72")]
	[Address(RVA = "0x4E62590", Offset = "0x4E62590", VA = "0x4E62590")]
	private static ulong Ch(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A73")]
	[Address(RVA = "0x4E62600", Offset = "0x4E62600", VA = "0x4E62600")]
	private static ulong Maj(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A74")]
	[Address(RVA = "0x4E625A0", Offset = "0x4E625A0", VA = "0x4E625A0")]
	private static ulong Sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A75")]
	[Address(RVA = "0x4E62530", Offset = "0x4E62530", VA = "0x4E62530")]
	private static ulong Sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A76")]
	[Address(RVA = "0x4E62630", Offset = "0x4E62630", VA = "0x4E62630")]
	private static ulong sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A77")]
	[Address(RVA = "0x4E62690", Offset = "0x4E62690", VA = "0x4E62690")]
	private static ulong sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A78")]
	[Address(RVA = "0x4E623C0", Offset = "0x4E623C0", VA = "0x4E623C0")]
	private unsafe static void SHA384Expand(ulong* x)
	{
	}
}
