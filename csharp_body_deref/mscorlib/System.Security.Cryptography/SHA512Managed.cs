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

[Token(Token = "0x2000334")]
[ComVisible(true)]
public class SHA512Managed : SHA512
{
	[Token(Token = "0x4000D87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000D88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ulong _count;

	[Token(Token = "0x4000D89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ulong[] _stateSHA512;

	[Token(Token = "0x4000D8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private ulong[] _W;

	[Token(Token = "0x4000D8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ulong[] _K;

	[Token(Token = "0x6001AE5")]
	[Address(RVA = "0x19CE420", Offset = "0x19CCA20", VA = "0x1819CE420")]
	public SHA512Managed()
	{
	}

	[Token(Token = "0x6001AE6")]
	[Address(RVA = "0x19CCDF0", Offset = "0x19CB3F0", VA = "0x1819CCDF0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001AE7")]
	[Address(RVA = "0x19CCCA0", Offset = "0x19CB2A0", VA = "0x1819CCCA0", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001AE8")]
	[Address(RVA = "0x19CCCB0", Offset = "0x19CB2B0", VA = "0x1819CCCB0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001AE9")]
	[Address(RVA = "0x19CCCC0", Offset = "0x19CB2C0", VA = "0x1819CCCC0")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001AEA")]
	[Address(RVA = "0x19CE1D0", Offset = "0x19CC7D0", VA = "0x1819CE1D0")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001AEB")]
	[Address(RVA = "0x19CDFE0", Offset = "0x19CC5E0", VA = "0x1819CDFE0")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001AEC")]
	[Address(RVA = "0x19CCF90", Offset = "0x19CB590", VA = "0x1819CCF90")]
	private unsafe static void SHATransform(ulong* expandedBuffer, ulong* state, byte* block)
	{
	}

	[Token(Token = "0x6001AED")]
	[Address(RVA = "0x19CB3B0", Offset = "0x19C99B0", VA = "0x1819CB3B0")]
	private static ulong RotateRight(ulong x, int n)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001AEE")]
	[Address(RVA = "0x19CB1E0", Offset = "0x19C97E0", VA = "0x1819CB1E0")]
	private static ulong Ch(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001AEF")]
	[Address(RVA = "0x19CB3A0", Offset = "0x19C99A0", VA = "0x1819CB3A0")]
	private static ulong Maj(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001AF0")]
	[Address(RVA = "0x19CDEE0", Offset = "0x19CC4E0", VA = "0x1819CDEE0")]
	private static ulong Sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001AF1")]
	[Address(RVA = "0x19CDF60", Offset = "0x19CC560", VA = "0x1819CDF60")]
	private static ulong Sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001AF2")]
	[Address(RVA = "0x19CE500", Offset = "0x19CCB00", VA = "0x1819CE500")]
	private static ulong sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001AF3")]
	[Address(RVA = "0x19CE570", Offset = "0x19CCB70", VA = "0x1819CE570")]
	private static ulong sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001AF4")]
	[Address(RVA = "0x19CCE50", Offset = "0x19CB450", VA = "0x1819CCE50")]
	private unsafe static void SHA512Expand(ulong* x)
	{
	}
}
