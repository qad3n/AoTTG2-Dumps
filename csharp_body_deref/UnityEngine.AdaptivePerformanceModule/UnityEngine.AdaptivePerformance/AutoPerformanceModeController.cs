// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AutoPerformanceModeController
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200000A")]
internal class AutoPerformanceModeController
{
	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x10")]
	private string m_FeatureName;

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x2E90AF0", Offset = "0x2E8F0F0", VA = "0x182E90AF0")]
	public AutoPerformanceModeController(IPerformanceModeStatus perfModeStat)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x2E90A00", Offset = "0x2E8F000", VA = "0x182E90A00")]
	private void OnPerformanceModeChange(PerformanceMode performanceMode)
	{
	}
}
