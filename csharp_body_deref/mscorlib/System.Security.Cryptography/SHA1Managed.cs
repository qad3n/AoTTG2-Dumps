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

[Token(Token = "0x200032E")]
[ComVisible(true)]
public class SHA1Managed : SHA1
{
	[Token(Token = "0x4000D79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000D7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private long _count;

	[Token(Token = "0x4000D7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private uint[] _stateSHA1;

	[Token(Token = "0x4000D7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private uint[] _expandedBuffer;

	[Token(Token = "0x6001AB1")]
	[Address(RVA = "0x19C9730", Offset = "0x19C7D30", VA = "0x1819C9730")]
	public SHA1Managed()
	{
	}

	[Token(Token = "0x6001AB2")]
	[Address(RVA = "0x19C8B70", Offset = "0x19C7170", VA = "0x1819C8B70", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001AB3")]
	[Address(RVA = "0x19C8B50", Offset = "0x19C7150", VA = "0x1819C8B50", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001AB4")]
	[Address(RVA = "0x19C8B60", Offset = "0x19C7160", VA = "0x1819C8B60", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001AB5")]
	[Address(RVA = "0x19AE570", Offset = "0x19ACB70", VA = "0x1819AE570")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001AB6")]
	[Address(RVA = "0x19C95D0", Offset = "0x19C7BD0", VA = "0x1819C95D0")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001AB7")]
	[Address(RVA = "0x19C9340", Offset = "0x19C7940", VA = "0x1819C9340")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001AB8")]
	[Address(RVA = "0x19C8C80", Offset = "0x19C7280", VA = "0x1819C8C80")]
	private unsafe static void SHATransform(uint* expandedBuffer, uint* state, byte* block)
	{
	}

	[Token(Token = "0x6001AB9")]
	[Address(RVA = "0x19C8BD0", Offset = "0x19C71D0", VA = "0x1819C8BD0")]
	private unsafe static void SHAExpand(uint* x)
	{
	}
}
