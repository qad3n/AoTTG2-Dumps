// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.PerformanceStateTracker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200002B")]
internal class PerformanceStateTracker
{
	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x10")]
	private Queue<float> m_Samples;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x18")]
	private int m_SampleCapacity;

	[Token(Token = "0x17000056")]
	public float Trend
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x6886A90", Offset = "0x6885A90", VA = "0x6886A90")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x6886AA0", Offset = "0x6885AA0", VA = "0x6886AA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x68831A0", Offset = "0x68821A0", VA = "0x68831A0")]
	public PerformanceStateTracker(int sampleCapacity)
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x6886AB0", Offset = "0x6885AB0", VA = "0x6886AB0")]
	public StateAction Update()
	{
		return default(StateAction);
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x6886E50", Offset = "0x6885E50", VA = "0x6886E50", Slot = "4")]
	protected virtual float GetEffectiveTargetFrameRate()
	{
		return default(float);
	}
}
