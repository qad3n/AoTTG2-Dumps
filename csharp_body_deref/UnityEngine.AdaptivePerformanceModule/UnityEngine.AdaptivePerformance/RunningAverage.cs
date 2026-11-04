// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.RunningAverage
// Update status: NEW in this game update
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
	[Address(RVA = "0x2E92D70", Offset = "0x2E91370", VA = "0x182E92D70")]
	public RunningAverage(int sampleWindowSize = 100)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0xB3E0C0", Offset = "0xB3C6C0", VA = "0x180B3E0C0")]
	public int GetNumValues()
	{
		return default(int);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x92B6E0", Offset = "0x929CE0", VA = "0x18092B6E0")]
	public int GetSampleWindowSize()
	{
		return default(int);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x2E92CE0", Offset = "0x2E912E0", VA = "0x182E92CE0")]
	public float GetAverageOr(float defaultValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x2E92CF0", Offset = "0x2E912F0", VA = "0x182E92CF0")]
	public float GetMostRecentValueOr(float defaultValue)
	{
		return default(float);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x2E92C40", Offset = "0x2E91240", VA = "0x182E92C40")]
	public void AddValue(float NewValue)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x2E92D30", Offset = "0x2E91330", VA = "0x182E92D30")]
	public void Reset()
	{
	}
}
