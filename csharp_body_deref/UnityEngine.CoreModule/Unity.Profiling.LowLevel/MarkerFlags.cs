// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.LowLevel.MarkerFlags
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Profiling.LowLevel;

[Token(Token = "0x2000032")]
[Flags]
public enum MarkerFlags : ushort
{
	[Token(Token = "0x4000072")]
	Default = 0,
	[Token(Token = "0x4000073")]
	Script = 2,
	[Token(Token = "0x4000074")]
	ScriptInvoke = 0x20,
	[Token(Token = "0x4000075")]
	ScriptDeepProfiler = 0x40,
	[Token(Token = "0x4000076")]
	AvailabilityEditor = 4,
	[Token(Token = "0x4000077")]
	AvailabilityNonDevelopment = 8,
	[Token(Token = "0x4000078")]
	Warning = 0x10,
	[Token(Token = "0x4000079")]
	Counter = 0x80,
	[Token(Token = "0x400007A")]
	SampleGPU = 0x100,
	[Token(Token = "0x400007B")]
	VerbosityDebug = 0x400,
	[Token(Token = "0x400007C")]
	VerbosityInternal = 0x800,
	[Token(Token = "0x400007D")]
	VerbosityExternal = VerbosityDebug | VerbosityInternal,
	[Token(Token = "0x400007E")]
	VerbosityAdvanced = 0x1000
}
