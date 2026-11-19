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

[Token(Token = "0x2000307")]
[ComVisible(true)]
public class SHA1Managed : SHA1
{
	[Token(Token = "0x4000CD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000CDA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private long _count;

	[Token(Token = "0x4000CDB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private uint[] _stateSHA1;

	[Token(Token = "0x4000CDC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private uint[] _expandedBuffer;

	[Token(Token = "0x6001A8E")]
	[Address(RVA = "0x534DA10", Offset = "0x534CA10", VA = "0x534DA10")]
	public SHA1Managed()
	{
	}

	[Token(Token = "0x6001A8F")]
	[Address(RVA = "0x534DBB0", Offset = "0x534CBB0", VA = "0x534DBB0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001A90")]
	[Address(RVA = "0x534DC40", Offset = "0x534CC40", VA = "0x534DC40", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A91")]
	[Address(RVA = "0x534DE00", Offset = "0x534CE00", VA = "0x534DE00", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001A92")]
	[Address(RVA = "0x534DB50", Offset = "0x534CB50", VA = "0x534DB50")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001A93")]
	[Address(RVA = "0x534DC50", Offset = "0x534CC50", VA = "0x534DC50")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A94")]
	[Address(RVA = "0x534DE10", Offset = "0x534CE10", VA = "0x534DE10")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001A95")]
	[Address(RVA = "0x534DFC0", Offset = "0x534CFC0", VA = "0x534DFC0")]
	private unsafe static void SHATransform(uint* expandedBuffer, uint* state, byte* block)
	{
	}

	[Token(Token = "0x6001A96")]
	[Address(RVA = "0x534ECE0", Offset = "0x534DCE0", VA = "0x534ECE0")]
	private unsafe static void SHAExpand(uint* x)
	{
	}
}
