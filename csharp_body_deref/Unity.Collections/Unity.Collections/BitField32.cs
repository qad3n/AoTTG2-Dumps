// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.BitField32
// Update status: NEW in this game update
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
	[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
	public BitField32(uint initialValue = 0u)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0xB47950", Offset = "0xB45F50", VA = "0x180B47950")]
	public void Clear()
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x2995C00", Offset = "0x2994200", VA = "0x182995C00")]
	public void SetBits(int pos, bool value)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x2995C30", Offset = "0x2994230", VA = "0x182995C30")]
	public void SetBits(int pos, bool value, int numBits)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x2995BD0", Offset = "0x29941D0", VA = "0x182995BD0")]
	public uint GetBits(int pos, int numBits = 1)
	{
		return default(uint);
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x2995BF0", Offset = "0x29941F0", VA = "0x182995BF0")]
	public bool IsSet(int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x2995CD0", Offset = "0x29942D0", VA = "0x182995CD0")]
	public bool TestNone(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x2995CA0", Offset = "0x29942A0", VA = "0x182995CA0")]
	public bool TestAny(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x2995C70", Offset = "0x2994270", VA = "0x182995C70")]
	public bool TestAll(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x2995AF0", Offset = "0x29940F0", VA = "0x182995AF0")]
	public int CountBits()
	{
		return default(int);
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x2995B30", Offset = "0x2994130", VA = "0x182995B30")]
	public int CountLeadingZeros()
	{
		return default(int);
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x2995B80", Offset = "0x2994180", VA = "0x182995B80")]
	public int CountTrailingZeros()
	{
		return default(int);
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x2995A30", Offset = "0x2994030", VA = "0x182995A30")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckArgs(int pos, int numBits)
	{
	}
}
