// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.BottleneckUtil
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000004")]
internal class BottleneckUtil
{
	[Token(Token = "0x6000003")]
	[Address(RVA = "0x687B630", Offset = "0x687A630", VA = "0x687B630")]
	public static PerformanceBottleneck DetermineBottleneck(PerformanceBottleneck prevBottleneck, float averageCpuFrameTime, float averageGpuFrametime, float averageOverallFrametime, float targetFrameTime)
	{
		return default(PerformanceBottleneck);
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x687B760", Offset = "0x687A760", VA = "0x687B760")]
	private static bool HittingFrameRateLimit(float actualFrameTime, float thresholdFactor, float targetFrameTime)
	{
		return default(bool);
	}
}
