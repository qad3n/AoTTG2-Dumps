// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.IPerformanceStatus
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000028")]
public interface IPerformanceStatus
{
	[Token(Token = "0x17000060")]
	PerformanceMetrics PerformanceMetrics
	{
		[Token(Token = "0x6000137")]
		get;
	}

	[Token(Token = "0x17000061")]
	FrameTiming FrameTiming
	{
		[Token(Token = "0x6000138")]
		get;
	}

	[Token(Token = "0x14000007")]
	event PerformanceBottleneckChangeHandler PerformanceBottleneckChangeEvent;
}
