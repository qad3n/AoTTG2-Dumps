// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.BitField32
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000036")]
[DebuggerTypeProxy(typeof(BitField32DebugView))]
[GenerateTestsForBurstCompatibility]
public struct BitField32
{
	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x0")]
	public uint Value;

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x635EE90", Offset = "0x635DE90", VA = "0x635EE90")]
	public BitField32(uint initialValue = 0u)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x635EEA0", Offset = "0x635DEA0", VA = "0x635EEA0")]
	public void Clear()
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x635EEB0", Offset = "0x635DEB0", VA = "0x635EEB0")]
	public void SetBits(int pos, bool value)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x635EEC0", Offset = "0x635DEC0", VA = "0x635EEC0")]
	public void SetBits(int pos, bool value, int numBits)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x635EEF0", Offset = "0x635DEF0", VA = "0x635EEF0")]
	public uint GetBits(int pos, int numBits = 1)
	{
		return default(uint);
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x635EF00", Offset = "0x635DF00", VA = "0x635EF00")]
	public bool IsSet(int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x635EF10", Offset = "0x635DF10", VA = "0x635EF10")]
	public bool TestNone(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x635EF30", Offset = "0x635DF30", VA = "0x635EF30")]
	public bool TestAny(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x635EF50", Offset = "0x635DF50", VA = "0x635EF50")]
	public bool TestAll(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x635EF70", Offset = "0x635DF70", VA = "0x635EF70")]
	public int CountBits()
	{
		return default(int);
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x635EFB0", Offset = "0x635DFB0", VA = "0x635EFB0")]
	public int CountLeadingZeros()
	{
		return default(int);
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x635EFF0", Offset = "0x635DFF0", VA = "0x635EFF0")]
	public int CountTrailingZeros()
	{
		return default(int);
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x635F030", Offset = "0x635E030", VA = "0x635F030")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckArgs(int pos, int numBits)
	{
	}
}
