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
