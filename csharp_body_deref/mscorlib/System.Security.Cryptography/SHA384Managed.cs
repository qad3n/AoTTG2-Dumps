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

[Token(Token = "0x2000332")]
[ComVisible(true)]
public class SHA384Managed : SHA384
{
	[Token(Token = "0x4000D82")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000D83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ulong _count;

	[Token(Token = "0x4000D84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ulong[] _stateSHA384;

	[Token(Token = "0x4000D85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private ulong[] _W;

	[Token(Token = "0x4000D86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ulong[] _K;

	[Token(Token = "0x6001AD1")]
	[Address(RVA = "0x19CC9A0", Offset = "0x19CAFA0", VA = "0x1819CC9A0")]
	public SHA384Managed()
	{
	}

	[Token(Token = "0x6001AD2")]
	[Address(RVA = "0x19CB340", Offset = "0x19C9940", VA = "0x1819CB340", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001AD3")]
	[Address(RVA = "0x19CB1F0", Offset = "0x19C97F0", VA = "0x1819CB1F0", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x19CB200", Offset = "0x19C9800", VA = "0x1819CB200", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001AD5")]
	[Address(RVA = "0x19CB210", Offset = "0x19C9810", VA = "0x1819CB210")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001AD6")]
	[Address(RVA = "0x19CC750", Offset = "0x19CAD50", VA = "0x1819CC750")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001AD7")]
	[Address(RVA = "0x19CC560", Offset = "0x19CAB60", VA = "0x1819CC560")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001AD8")]
	[Address(RVA = "0x19CB510", Offset = "0x19C9B10", VA = "0x1819CB510")]
	private unsafe static void SHATransform(ulong* expandedBuffer, ulong* state, byte* block)
	{
	}

	[Token(Token = "0x6001AD9")]
	[Address(RVA = "0x19CB3B0", Offset = "0x19C99B0", VA = "0x1819CB3B0")]
	private static ulong RotateRight(ulong x, int n)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ADA")]
	[Address(RVA = "0x19CB1E0", Offset = "0x19C97E0", VA = "0x1819CB1E0")]
	private static ulong Ch(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ADB")]
	[Address(RVA = "0x19CB3A0", Offset = "0x19C99A0", VA = "0x1819CB3A0")]
	private static ulong Maj(ulong x, ulong y, ulong z)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ADC")]
	[Address(RVA = "0x19CC460", Offset = "0x19CAA60", VA = "0x1819CC460")]
	private static ulong Sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ADD")]
	[Address(RVA = "0x19CC4E0", Offset = "0x19CAAE0", VA = "0x1819CC4E0")]
	private static ulong Sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ADE")]
	[Address(RVA = "0x19CCA80", Offset = "0x19CB080", VA = "0x1819CCA80")]
	private static ulong sigma_0(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001ADF")]
	[Address(RVA = "0x19CCAF0", Offset = "0x19CB0F0", VA = "0x1819CCAF0")]
	private static ulong sigma_1(ulong x)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001AE0")]
	[Address(RVA = "0x19CB3D0", Offset = "0x19C99D0", VA = "0x1819CB3D0")]
	private unsafe static void SHA384Expand(ulong* x)
	{
	}
}
