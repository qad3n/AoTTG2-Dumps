// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.IPerformanceStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200001F")]
public interface IPerformanceStatus
{
	[Token(Token = "0x17000041")]
	PerformanceMetrics PerformanceMetrics
	{
		[Token(Token = "0x60000CF")]
		get;
	}

	[Token(Token = "0x17000042")]
	FrameTiming FrameTiming
	{
		[Token(Token = "0x60000D0")]
		get;
	}

	[Token(Token = "0x14000007")]
	event PerformanceBottleneckChangeHandler PerformanceBottleneckChangeEvent;
}
