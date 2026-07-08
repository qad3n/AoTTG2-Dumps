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
	[Address(RVA = "0x4E5F880", Offset = "0x4E5F880", VA = "0x4E5F880")]
	public SHA256Managed()
	{
	}

	[Token(Token = "0x6001A56")]
	[Address(RVA = "0x4E5FAF0", Offset = "0x4E5FAF0", VA = "0x4E5FAF0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001A57")]
	[Address(RVA = "0x4E5FB30", Offset = "0x4E5FB30", VA = "0x4E5FB30", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A58")]
	[Address(RVA = "0x4E5FD20", Offset = "0x4E5FD20", VA = "0x4E5FD20", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001A59")]
	[Address(RVA = "0x4E5FA70", Offset = "0x4E5FA70", VA = "0x4E5FA70")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001A5A")]
	[Address(RVA = "0x4E5FB40", Offset = "0x4E5FB40", VA = "0x4E5FB40")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A5B")]
	[Address(RVA = "0x4E5FD30", Offset = "0x4E5FD30", VA = "0x4E5FD30")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001A5C")]
	[Address(RVA = "0x4E5FEE0", Offset = "0x4E5FEE0", VA = "0x4E5FEE0")]
	private unsafe static void SHATransform(uint* expandedBuffer, uint* state, byte* block)
	{
	}

	[Token(Token = "0x6001A5D")]
	[Address(RVA = "0x4E60CB0", Offset = "0x4E60CB0", VA = "0x4E60CB0")]
	private static uint RotateRight(uint x, int n)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A5E")]
	[Address(RVA = "0x4E60C40", Offset = "0x4E60C40", VA = "0x4E60C40")]
	private static uint Ch(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A5F")]
	[Address(RVA = "0x4E60CA0", Offset = "0x4E60CA0", VA = "0x4E60CA0")]
	private static uint Maj(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A60")]
	[Address(RVA = "0x4E60CC0", Offset = "0x4E60CC0", VA = "0x4E60CC0")]
	private static uint sigma_0(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A61")]
	[Address(RVA = "0x4E60D10", Offset = "0x4E60D10", VA = "0x4E60D10")]
	private static uint sigma_1(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A62")]
	[Address(RVA = "0x4E60C50", Offset = "0x4E60C50", VA = "0x4E60C50")]
	private static uint Sigma_0(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A63")]
	[Address(RVA = "0x4E60BF0", Offset = "0x4E60BF0", VA = "0x4E60BF0")]
	private static uint Sigma_1(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001A64")]
	[Address(RVA = "0x4E60A80", Offset = "0x4E60A80", VA = "0x4E60A80")]
	private unsafe static void SHA256Expand(uint* x)
	{
	}
}
