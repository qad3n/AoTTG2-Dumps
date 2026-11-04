// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.IAdaptivePerformance
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.AdaptivePerformance.Provider;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000010")]
public interface IAdaptivePerformance
{
	[Token(Token = "0x1700002F")]
	IThermalStatus ThermalStatus
	{
		[Token(Token = "0x60000A4")]
		get;
	}

	[Token(Token = "0x17000030")]
	IPerformanceStatus PerformanceStatus
	{
		[Token(Token = "0x60000A5")]
		get;
	}

	[Token(Token = "0x17000031")]
	AdaptivePerformanceIndexer Indexer
	{
		[Token(Token = "0x60000A6")]
		get;
	}

	[Token(Token = "0x17000032")]
	IAdaptivePerformanceSettings Settings
	{
		[Token(Token = "0x60000A7")]
		get;
	}

	[Token(Token = "0x60000A8")]
	bool SupportedFeature(Feature feature);
}
