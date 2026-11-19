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

[Token(Token = "0x2000309")]
[ComVisible(true)]
public class SHA256Managed : SHA256
{
	[Token(Token = "0x4000CDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4000CDE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private long _count;

	[Token(Token = "0x4000CDF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private uint[] _stateSHA256;

	[Token(Token = "0x4000CE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private uint[] _W;

	[Token(Token = "0x4000CE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly uint[] _K;

	[Token(Token = "0x6001A9A")]
	[Address(RVA = "0x534ED30", Offset = "0x534DD30", VA = "0x534ED30")]
	public SHA256Managed()
	{
	}

	[Token(Token = "0x6001A9B")]
	[Address(RVA = "0x534EFA0", Offset = "0x534DFA0", VA = "0x534EFA0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001A9C")]
	[Address(RVA = "0x534EFE0", Offset = "0x534DFE0", VA = "0x534EFE0", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001A9D")]
	[Address(RVA = "0x534F1B0", Offset = "0x534E1B0", VA = "0x534F1B0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001A9E")]
	[Address(RVA = "0x534EF20", Offset = "0x534DF20", VA = "0x534EF20")]
	private void InitializeState()
	{
	}

	[Token(Token = "0x6001A9F")]
	[Address(RVA = "0x534EFF0", Offset = "0x534DFF0", VA = "0x534EFF0")]
	private void _HashData(byte[] partIn, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001AA0")]
	[Address(RVA = "0x534F1C0", Offset = "0x534E1C0", VA = "0x534F1C0")]
	private byte[] _EndHash()
	{
		return null;
	}

	[Token(Token = "0x6001AA1")]
	[Address(RVA = "0x534F370", Offset = "0x534E370", VA = "0x534F370")]
	private unsafe static void SHATransform(uint* expandedBuffer, uint* state, byte* block)
	{
	}

	[Token(Token = "0x6001AA2")]
	[Address(RVA = "0x5350110", Offset = "0x534F110", VA = "0x5350110")]
	private static uint RotateRight(uint x, int n)
	{
		return default(uint);
	}

	[Token(Token = "0x6001AA3")]
	[Address(RVA = "0x53500A0", Offset = "0x534F0A0", VA = "0x53500A0")]
	private static uint Ch(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001AA4")]
	[Address(RVA = "0x5350100", Offset = "0x534F100", VA = "0x5350100")]
	private static uint Maj(uint x, uint y, uint z)
	{
		return default(uint);
	}

	[Token(Token = "0x6001AA5")]
	[Address(RVA = "0x5350120", Offset = "0x534F120", VA = "0x5350120")]
	private static uint sigma_0(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001AA6")]
	[Address(RVA = "0x5350170", Offset = "0x534F170", VA = "0x5350170")]
	private static uint sigma_1(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001AA7")]
	[Address(RVA = "0x53500B0", Offset = "0x534F0B0", VA = "0x53500B0")]
	private static uint Sigma_0(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001AA8")]
	[Address(RVA = "0x5350050", Offset = "0x534F050", VA = "0x5350050")]
	private static uint Sigma_1(uint x)
	{
		return default(uint);
	}

	[Token(Token = "0x6001AA9")]
	[Address(RVA = "0x534FED0", Offset = "0x534EED0", VA = "0x534FED0")]
	private unsafe static void SHA256Expand(uint* x)
	{
	}
}
