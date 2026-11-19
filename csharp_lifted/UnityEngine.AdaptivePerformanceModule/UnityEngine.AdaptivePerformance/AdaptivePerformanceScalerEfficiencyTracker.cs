// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerEfficiencyTracker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200002C")]
internal class AdaptivePerformanceScalerEfficiencyTracker
{
	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x10")]
	private AdaptivePerformanceScaler m_Scaler;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x18")]
	private float m_LastAverageGpuFrameTime;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x1C")]
	private float m_LastAverageCpuFrameTime;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x20")]
	private bool m_IsApplied;

	[Token(Token = "0x17000057")]
	public bool IsRunning
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x6886EA0", Offset = "0x6885EA0", VA = "0x6886EA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x6886EF0", Offset = "0x6885EF0", VA = "0x6886EF0")]
	public void Start(AdaptivePerformanceScaler scaler, bool isApply)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x6887230", Offset = "0x6886230", VA = "0x6887230")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x6887540", Offset = "0x6886540", VA = "0x6887540")]
	public AdaptivePerformanceScalerEfficiencyTracker()
	{
	}
}
