// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.BitField64
// Update status: NEW in this game update
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
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	public BitField64(ulong initialValue = 0uL)
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x18191E0", Offset = "0x18177E0", VA = "0x1818191E0")]
	public void Clear()
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x2995FD0", Offset = "0x29945D0", VA = "0x182995FD0")]
	public void SetBits(int pos, bool value)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x2996000", Offset = "0x2994600", VA = "0x182996000")]
	public void SetBits(int pos, bool value, int numBits = 1)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x2995F80", Offset = "0x2994580", VA = "0x182995F80")]
	public ulong GetBits(int pos, int numBits = 1)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x2995FB0", Offset = "0x29945B0", VA = "0x182995FB0")]
	public bool IsSet(int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x29960A0", Offset = "0x29946A0", VA = "0x1829960A0")]
	public bool TestNone(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x2996070", Offset = "0x2994670", VA = "0x182996070")]
	public bool TestAny(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x2996040", Offset = "0x2994640", VA = "0x182996040")]
	public bool TestAll(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x2995E40", Offset = "0x2994440", VA = "0x182995E40")]
	public int CountBits()
	{
		return default(int);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x2995EA0", Offset = "0x29944A0", VA = "0x182995EA0")]
	public int CountLeadingZeros()
	{
		return default(int);
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x2995F10", Offset = "0x2994510", VA = "0x182995F10")]
	public int CountTrailingZeros()
	{
		return default(int);
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x2995D80", Offset = "0x2994380", VA = "0x182995D80")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckArgs(int pos, int numBits)
	{
	}
}
