// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter64
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x638C700", Offset = "0x638B700", VA = "0x638C700")]
	public unsafe UnsafeAtomicCounter64(void* ptr)
	{
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x638C710", Offset = "0x638B710", VA = "0x638C710")]
	public void Reset(long value = 0L)
	{
	}

	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x638C720", Offset = "0x638B720", VA = "0x638C720")]
	public long Add(long value)
	{
		return default(long);
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x638C760", Offset = "0x638B760", VA = "0x638C760")]
	public long Sub(long value)
	{
		return default(long);
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x638C7B0", Offset = "0x638B7B0", VA = "0x638C7B0")]
	public long AddSat(long value, long max = 9223372036854775807L)
	{
		return default(long);
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x638C830", Offset = "0x638B830", VA = "0x638C830")]
	public long SubSat(long value, long min = -9223372036854775808L)
	{
		return default(long);
	}
}
