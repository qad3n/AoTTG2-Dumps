// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.SHA256Managed
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000330")]
[ComVisible(true)]
public class SHA256Managed : SHA256
{
	[Token(Token = "0x4000D7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000D7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private long _count;

	[Token(Token = "0x4000D7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private uint[] _stateSHA256;

	[Token(Token = "0x4000D80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private uint[] _W;

	[Token(Token = "0x4000D81")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly uint[] _K;

	[Token(Token = "0x6001ABD")]
	[Address(RVA = "0x19CAF00", Offset = "0x19C9500", VA = "0x1819CAF00")]
	public SHA256Managed()
	{
	}

	[Token(Token = "0x6001ABE")]
	[Address(RVA = "0x19C9A70", Offset = "0x19C8070", VA = "0x1819C9A70", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001ABF")]
	[Address(RVA = "0x19C9960", Offset = "0x19C7F60", VA = "0x1819C9960", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001AC0")]
	[Address(RVA = "0x19C9970", Offset = "0x19C7F70", VA = "0x1819C9970", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001AC1")]
	[Address(RVA = "0x19C9980", Offset = "0x19C7F80", VA = "0x1819C9980")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001AC2")]
	[Address(RVA = "0x19CACB0", Offset = "0x19C92B0", VA = "0x1819CACB0")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001AC3")]
	[Address(RVA = "0x19CAA20", Offset = "0x19C9020", VA = "0x1819CAA20")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001AC4")]
	[Address(RVA = "0x19C9C20", Offset = "0x19C8220", VA = "0x1819C9C20")]
	private unsafe static void SHATransform(uint* expandedBuffer, uint* state, byte* block)
	{
	}

	[Token(Token = "0x6001AC5")]
	[Address(RVA = "0x19C9AE0", Offset = "0x19C80E0", VA = "0x1819C9AE0")]
	private static uint RotateRight(uint x, int n)
	{
		return default(uint);
	}

	[Token(Token = "0x6001AC6")]
	[Address(RVA = "0x19C9950", Offset = "0x19C7F50", VA = "0x1819C9950")]
	private static uint Ch(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001AC7")]
	[Address(RVA = "0x19C9AD0", Offset = "0x19C80D0", VA = "0x1819C9AD0")]
	private static uint Maj(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001AC8")]
	[Address(RVA = "0x19CAFE0", Offset = "0x19C95E0", VA = "0x1819CAFE0")]
	private static uint sigma_0(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001AC9")]
	[Address(RVA = "0x19CB040", Offset = "0x19C9640", VA = "0x1819CB040")]
	private static uint sigma_1(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x19CA940", Offset = "0x19C8F40", VA = "0x1819CA940")]
	private static uint Sigma_0(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001ACB")]
	[Address(RVA = "0x19CA9B0", Offset = "0x19C8FB0", VA = "0x1819CA9B0")]
	private static uint Sigma_1(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001ACC")]
	[Address(RVA = "0x19C9B00", Offset = "0x19C8100", VA = "0x1819C9B00")]
	private unsafe static void SHA256Expand(uint* x)
	{
	}
}
