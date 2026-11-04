// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32
// Update status: NEW in this game update
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
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	public unsafe UnsafeAtomicCounter32(void* ptr)
	{
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x29BDFA0", Offset = "0x29BC5A0", VA = "0x1829BDFA0")]
	public void Reset(int value = 0)
	{
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x29BDF50", Offset = "0x29BC550", VA = "0x1829BDF50")]
	public int Add(int value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x29BE020", Offset = "0x29BC620", VA = "0x1829BE020")]
	public int Sub(int value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x29BDEE0", Offset = "0x29BC4E0", VA = "0x1829BDEE0")]
	public int AddSat(int value, int max = 2147483647)
	{
		return default(int);
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x29BDFB0", Offset = "0x29BC5B0", VA = "0x1829BDFB0")]
	public int SubSat(int value, int min = -2147483648)
	{
		return default(int);
	}
}
