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

[Token(Token = "0x200030D")]
[ComVisible(true)]
public class SHA512Managed : SHA512
{
	[Token(Token = "0x4000CE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000CE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ulong _count;

	[Token(Token = "0x4000CE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ulong[] _stateSHA512;

	[Token(Token = "0x4000CEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private ulong[] _W;

	[Token(Token = "0x4000CEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ulong[] _K;

	[Token(Token = "0x6001AC2")]
	[Address(RVA = "0x5351B90", Offset = "0x5350B90", VA = "0x5351B90")]
	public SHA512Managed()
	{
	}

	[Token(Token = "0x6001AC3")]
	[Address(RVA = "0x5351E50", Offset = "0x5350E50", VA = "0x5351E50", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001AC4")]
	[Address(RVA = "0x5351E90", Offset = "0x5350E90", VA = "0x5351E90", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001AC5")]
	[Address(RVA = "0x5352070", Offset = "0x5351070", VA = "0x5352070", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001AC6")]
	[Address(RVA = "0x5351D80", Offset = "0x5350D80", VA = "0x5351D80")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001AC7")]
	[Address(RVA = "0x5351EA0", Offset = "0x5350EA0", VA = "0x5351EA0")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001AC8")]
	[Address(RVA = "0x5352080", Offset = "0x5351080", VA = "0x5352080")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001AC9")]
	[Address(RVA = "0x5352230", Offset = "0x5351230", VA = "0x5352230")]
	private unsafe static void SHATransform(ulong* expandedBuffer, ulong* state, byte* block)
	{
	}

	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x53530E0", Offset = "0x53520E0", VA = "0x53530E0")]
	private static ulong RotateRight(ulong x, int n)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ACB")]
	[Address(RVA = "0x5353060", Offset = "0x5352060", VA = "0x5353060")]
	private static ulong Ch(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ACC")]
	[Address(RVA = "0x53530D0", Offset = "0x53520D0", VA = "0x53530D0")]
	private static ulong Maj(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ACD")]
	[Address(RVA = "0x5353070", Offset = "0x5352070", VA = "0x5353070")]
	private static ulong Sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ACE")]
	[Address(RVA = "0x5353000", Offset = "0x5352000", VA = "0x5353000")]
	private static ulong Sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ACF")]
	[Address(RVA = "0x53530F0", Offset = "0x53520F0", VA = "0x53530F0")]
	private static ulong sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001AD0")]
	[Address(RVA = "0x5353150", Offset = "0x5352150", VA = "0x5353150")]
	private static ulong sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001AD1")]
	[Address(RVA = "0x5352E80", Offset = "0x5351E80", VA = "0x5352E80")]
	private unsafe static void SHA512Expand(ulong* x)
	{
	}
}
