// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter64
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000103")]
[GenerateTestsForBurstCompatibility]
public struct UnsafeAtomicCounter64
{
	[Token(Token = "0x40004A3")]
	[FieldOffset(Offset = "0x0")]
	public unsafe long* Counter;

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	public unsafe UnsafeAtomicCounter64(void* ptr)
	{
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x29BE140", Offset = "0x29BC740", VA = "0x1829BE140")]
	public void Reset(long value = 0L)
	{
	}

	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x29BE0F0", Offset = "0x29BC6F0", VA = "0x1829BE0F0")]
	public long Add(long value)
	{
		return default(long);
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x29BE1D0", Offset = "0x29BC7D0", VA = "0x1829BE1D0")]
	public long Sub(long value)
	{
		return default(long);
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x29BE080", Offset = "0x29BC680", VA = "0x1829BE080")]
	public long AddSat(long value, long max = 9223372036854775807L)
	{
		return default(long);
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x29BE150", Offset = "0x29BC750", VA = "0x1829BE150")]
	public long SubSat(long value, long min = -9223372036854775808L)
	{
		return default(long);
	}
}
