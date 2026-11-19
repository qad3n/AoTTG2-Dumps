// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000102")]
[GenerateTestsForBurstCompatibility]
public struct UnsafeAtomicCounter32
{
	[Token(Token = "0x40004A2")]
	[FieldOffset(Offset = "0x0")]
	public unsafe int* Counter;

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x638C580", Offset = "0x638B580", VA = "0x638C580")]
	public unsafe UnsafeAtomicCounter32(void* ptr)
	{
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x638C590", Offset = "0x638B590", VA = "0x638C590")]
	public void Reset(int value = 0)
	{
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x638C5A0", Offset = "0x638B5A0", VA = "0x638C5A0")]
	public int Add(int value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x638C5E0", Offset = "0x638B5E0", VA = "0x638C5E0")]
	public int Sub(int value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x638C620", Offset = "0x638B620", VA = "0x638C620")]
	public int AddSat(int value, int max = 2147483647)
	{
		return default(int);
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x638C690", Offset = "0x638B690", VA = "0x638C690")]
	public int SubSat(int value, int min = -2147483648)
	{
		return default(int);
	}
}
