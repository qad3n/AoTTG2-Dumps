// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.SHA1Managed
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3B44220", Offset = "0x3B44220", VA = "0x3B44220")]
	public SHA1Managed()
	{
	}

	[Token(Token = "0x6001A4A")]
	[Address(RVA = "0x3B443C0", Offset = "0x3B443C0", VA = "0x3B443C0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001A4B")]
	[Address(RVA = "0x3B44450", Offset = "0x3B44450", VA = "0x3B44450", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A4C")]
	[Address(RVA = "0x3B44600", Offset = "0x3B44600", VA = "0x3B44600", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001A4D")]
	[Address(RVA = "0x3B44360", Offset = "0x3B44360", VA = "0x3B44360")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001A4E")]
	[Address(RVA = "0x3B44460", Offset = "0x3B44460", VA = "0x3B44460")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A4F")]
	[Address(RVA = "0x3B44610", Offset = "0x3B44610", VA = "0x3B44610")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001A50")]
	[Address(RVA = "0x3B447C0", Offset = "0x3B447C0", VA = "0x3B447C0")]
	private unsafe static void SHATransform(uint* expandedBuffer, uint* state, byte* block)
	{
	}

	[Token(Token = "0x6001A51")]
	[Address(RVA = "0x3B45350", Offset = "0x3B45350", VA = "0x3B45350")]
	private unsafe static void SHAExpand(uint* x)
	{
	}
}
