// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.Provider.Feature
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance.Provider;

[Token(Token = "0x2000050")]
[Flags]
public enum Feature
{
	[Token(Token = "0x4000136")]
	None = 0,
	[Token(Token = "0x4000137")]
	WarningLevel = 1,
	[Token(Token = "0x4000138")]
	TemperatureLevel = 2,
	[Token(Token = "0x4000139")]
	TemperatureTrend = 4,
	[Token(Token = "0x400013A")]
	CpuPerformanceLevel = 8,
	[Token(Token = "0x400013B")]
	GpuPerformanceLevel = 0x10,
	[Token(Token = "0x400013C")]
	PerformanceLevelControl = 0x20,
	[Token(Token = "0x400013D")]
	GpuFrameTime = 0x40,
	[Token(Token = "0x400013E")]
	CpuFrameTime = 0x80,
	[Token(Token = "0x400013F")]
	OverallFrameTime = 0x100,
	[Token(Token = "0x4000140")]
	CpuPerformanceBoost = 0x200,
	[Token(Token = "0x4000141")]
	GpuPerformanceBoost = 0x400,
	[Token(Token = "0x4000142")]
	ClusterInfo = 0x800,
	[Token(Token = "0x4000143")]
	PerformanceMode = 0x1000
}
