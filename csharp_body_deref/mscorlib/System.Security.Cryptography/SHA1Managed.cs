using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002FF")]
[ComVisible(true)]
public class SHA1Managed : SHA1
{
	[Token(Token = "0x4000D6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000D6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private long _count;

	[Token(Token = "0x4000D6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private uint[] _stateSHA1;

	[Token(Token = "0x4000D6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private uint[] _expandedBuffer;

	[Token(Token = "0x6001A49")]
	[Address(RVA = "0x4E5E700", Offset = "0x4E5E700", VA = "0x4E5E700")]
	public SHA1Managed()
	{
	}

	[Token(Token = "0x6001A4A")]
	[Address(RVA = "0x4E5E8A0", Offset = "0x4E5E8A0", VA = "0x4E5E8A0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001A4B")]
	[Address(RVA = "0x4E5E930", Offset = "0x4E5E930", VA = "0x4E5E930", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A4C")]
	[Address(RVA = "0x4E5EAE0", Offset = "0x4E5EAE0", VA = "0x4E5EAE0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001A4D")]
	[Address(RVA = "0x4E5E840", Offset = "0x4E5E840", VA = "0x4E5E840")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001A4E")]
	[Address(RVA = "0x4E5E940", Offset = "0x4E5E940", VA = "0x4E5E940")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A4F")]
	[Address(RVA = "0x4E5EAF0", Offset = "0x4E5EAF0", VA = "0x4E5EAF0")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001A50")]
	[Address(RVA = "0x4E5ECA0", Offset = "0x4E5ECA0", VA = "0x4E5ECA0")]
	private unsafe static void SHATransform(uint* expandedBuffer, uint* state, byte* block)
	{
	}

	[Token(Token = "0x6001A51")]
	[Address(RVA = "0x4E5F830", Offset = "0x4E5F830", VA = "0x4E5F830")]
	private unsafe static void SHAExpand(uint* x)
	{
	}
}
