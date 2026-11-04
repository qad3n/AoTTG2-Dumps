// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.Provider.IDevicePerformanceLevelControl
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance.Provider;

[Token(Token = "0x2000053")]
public interface IDevicePerformanceLevelControl
{
	[Token(Token = "0x170000BC")]
	int MaxCpuPerformanceLevel
	{
		[Token(Token = "0x600026B")]
		get;
	}

	[Token(Token = "0x170000BD")]
	int MaxGpuPerformanceLevel
	{
		[Token(Token = "0x600026C")]
		get;
	}

	[Token(Token = "0x600026D")]
	bool SetPerformanceLevel(ref int cpu, ref int gpu);

	[Token(Token = "0x600026E")]
	bool EnableCpuBoost();

	[Token(Token = "0x600026F")]
	bool EnableGpuBoost();
}
