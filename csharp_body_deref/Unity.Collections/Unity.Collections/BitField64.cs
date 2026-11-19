// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.BitField64
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000038")]
[DebuggerTypeProxy(typeof(BitField64DebugView))]
[GenerateTestsForBurstCompatibility]
public struct BitField64
{
	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x0")]
	public ulong Value;

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x635F3F0", Offset = "0x635E3F0", VA = "0x635F3F0")]
	public BitField64(ulong initialValue = 0uL)
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x635F400", Offset = "0x635E400", VA = "0x635F400")]
	public void Clear()
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x635F410", Offset = "0x635E410", VA = "0x635F410")]
	public void SetBits(int pos, bool value)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x635F430", Offset = "0x635E430", VA = "0x635F430")]
	public void SetBits(int pos, bool value, int numBits = 1)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x635F460", Offset = "0x635E460", VA = "0x635F460")]
	public ulong GetBits(int pos, int numBits = 1)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x635F480", Offset = "0x635E480", VA = "0x635F480")]
	public bool IsSet(int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x635F490", Offset = "0x635E490", VA = "0x635F490")]
	public bool TestNone(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x635F4B0", Offset = "0x635E4B0", VA = "0x635F4B0")]
	public bool TestAny(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x635F4D0", Offset = "0x635E4D0", VA = "0x635F4D0")]
	public bool TestAll(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x635F4F0", Offset = "0x635E4F0", VA = "0x635F4F0")]
	public int CountBits()
	{
		return default(int);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x635F550", Offset = "0x635E550", VA = "0x635F550")]
	public int CountLeadingZeros()
	{
		return default(int);
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x635F5A0", Offset = "0x635E5A0", VA = "0x635F5A0")]
	public int CountTrailingZeros()
	{
		return default(int);
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x635F600", Offset = "0x635E600", VA = "0x635F600")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckArgs(int pos, int numBits)
	{
	}
}
