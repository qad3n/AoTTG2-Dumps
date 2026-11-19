// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.RunningAverage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200000E")]
internal class RunningAverage
{
	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x10")]
	private float[] m_Values;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x18")]
	private int m_NumValues;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x1C")]
	private int m_LastIndex;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x20")]
	private float m_AverageValue;

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x6883D60", Offset = "0x6882D60", VA = "0x6883D60")]
	public RunningAverage(int sampleWindowSize = 100)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x6880E80", Offset = "0x687FE80", VA = "0x6880E80")]
	public int GetNumValues()
	{
		return default(int);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x6880E90", Offset = "0x687FE90", VA = "0x6880E90")]
	public int GetSampleWindowSize()
	{
		return default(int);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x6880DF0", Offset = "0x687FDF0", VA = "0x6880DF0")]
	public float GetAverageOr(float defaultValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x6880E00", Offset = "0x687FE00", VA = "0x6880E00")]
	public float GetMostRecentValueOr(float defaultValue)
	{
		return default(float);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x687F4B0", Offset = "0x687E4B0", VA = "0x687F4B0")]
	public void AddValue(float NewValue)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x6883A30", Offset = "0x6882A30", VA = "0x6883A30")]
	public void Reset()
	{
	}
}
