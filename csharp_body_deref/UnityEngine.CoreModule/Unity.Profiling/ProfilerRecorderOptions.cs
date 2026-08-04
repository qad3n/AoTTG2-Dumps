// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.ProfilerRecorderOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Profiling;

[Token(Token = "0x2000020")]
[Flags]
public enum ProfilerRecorderOptions
{
	[Token(Token = "0x400003E")]
	None = 0,
	[Token(Token = "0x400003F")]
	StartImmediately = 1,
	[Token(Token = "0x4000040")]
	KeepAliveDuringDomainReload = 2,
	[Token(Token = "0x4000041")]
	CollectOnlyOnCurrentThread = 4,
	[Token(Token = "0x4000042")]
	WrapAroundWhenCapacityReached = 8,
	[Token(Token = "0x4000043")]
	SumAllSamplesInFrame = 0x10,
	[Token(Token = "0x4000044")]
	GpuRecorder = 0x40,
	[Token(Token = "0x4000045")]
	Default = 0x18
}
