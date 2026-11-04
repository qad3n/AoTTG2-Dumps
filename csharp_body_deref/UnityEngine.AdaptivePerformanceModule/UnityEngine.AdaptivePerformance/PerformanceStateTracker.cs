// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.PerformanceStateTracker
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000019")]
internal class PerformanceStateTracker
{
	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x10")]
	private Queue<float> m_Samples;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x18")]
	private int m_SampleCapacity;

	[Token(Token = "0x17000038")]
	public float Trend
	{
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0xE8F460", Offset = "0xE8DA60", VA = "0x180E8F460")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x2B5B5F0", Offset = "0x2B59BF0", VA = "0x182B5B5F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x2E92BB0", Offset = "0x2E911B0", VA = "0x182E92BB0")]
	public PerformanceStateTracker(int sampleCapacity)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x2E92860", Offset = "0x2E90E60", VA = "0x182E92860")]
	public StateAction Update()
	{
		return default(StateAction);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x2E86790", Offset = "0x2E84D90", VA = "0x182E86790", Slot = "4")]
	protected virtual float GetEffectiveTargetFrameRate()
	{
		return default(float);
	}
}
