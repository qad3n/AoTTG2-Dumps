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
	[Address(RVA = "0x4E627A0", Offset = "0x4E627A0", VA = "0x4E627A0")]
	public SHA512Managed()
	{
	}

	[Token(Token = "0x6001A7E")]
	[Address(RVA = "0x4E62A60", Offset = "0x4E62A60", VA = "0x4E62A60", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001A7F")]
	[Address(RVA = "0x4E62AA0", Offset = "0x4E62AA0", VA = "0x4E62AA0", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A80")]
	[Address(RVA = "0x4E62CA0", Offset = "0x4E62CA0", VA = "0x4E62CA0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001A81")]
	[Address(RVA = "0x4E62990", Offset = "0x4E62990", VA = "0x4E62990")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001A82")]
	[Address(RVA = "0x4E62AB0", Offset = "0x4E62AB0", VA = "0x4E62AB0")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A83")]
	[Address(RVA = "0x4E62CB0", Offset = "0x4E62CB0", VA = "0x4E62CB0")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001A84")]
	[Address(RVA = "0x4E62E60", Offset = "0x4E62E60", VA = "0x4E62E60")]
	private unsafe static void SHATransform(ulong* expandedBuffer, ulong* state, byte* block)
	{
	}

	[Token(Token = "0x6001A85")]
	[Address(RVA = "0x4E63D60", Offset = "0x4E63D60", VA = "0x4E63D60")]
	private static ulong RotateRight(ulong x, int n)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A86")]
	[Address(RVA = "0x4E63CD0", Offset = "0x4E63CD0", VA = "0x4E63CD0")]
	private static ulong Ch(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A87")]
	[Address(RVA = "0x4E63D40", Offset = "0x4E63D40", VA = "0x4E63D40")]
	private static ulong Maj(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A88")]
	[Address(RVA = "0x4E63CE0", Offset = "0x4E63CE0", VA = "0x4E63CE0")]
	private static ulong Sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A89")]
	[Address(RVA = "0x4E63C70", Offset = "0x4E63C70", VA = "0x4E63C70")]
	private static ulong Sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A8A")]
	[Address(RVA = "0x4E63D70", Offset = "0x4E63D70", VA = "0x4E63D70")]
	private static ulong sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A8B")]
	[Address(RVA = "0x4E63DD0", Offset = "0x4E63DD0", VA = "0x4E63DD0")]
	private static ulong sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001A8C")]
	[Address(RVA = "0x4E63B00", Offset = "0x4E63B00", VA = "0x4E63B00")]
	private unsafe static void SHA512Expand(ulong* x)
	{
	}
}
