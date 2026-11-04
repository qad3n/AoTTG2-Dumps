// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerEfficiencyTracker
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200001A")]
internal class AdaptivePerformanceScalerEfficiencyTracker
{
	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x10")]
	private AdaptivePerformanceScaler m_Scaler;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x18")]
	private float m_LastAverageGpuFrameTime;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x1C")]
	private float m_LastAverageCpuFrameTime;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x20")]
	private bool m_IsApplied;

	[Token(Token = "0x17000039")]
	public bool IsRunning
	{
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x2E8C780", Offset = "0x2E8AD80", VA = "0x182E8C780")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x2E8C250", Offset = "0x2E8A850", VA = "0x182E8C250")]
	public void Start(AdaptivePerformanceScaler scaler, bool isApply)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x2E8C4F0", Offset = "0x2E8AAF0", VA = "0x182E8C4F0")]
	public void Stop()
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public AdaptivePerformanceScalerEfficiencyTracker()
	{
	}
}
