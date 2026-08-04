// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.LowLevel.MarkerFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Profiling.LowLevel;

[Token(Token = "0x2000027")]
[Flags]
public enum MarkerFlags : ushort
{
	[Token(Token = "0x4000059")]
	Default = 0,
	[Token(Token = "0x400005A")]
	Script = 2,
	[Token(Token = "0x400005B")]
	ScriptInvoke = 0x20,
	[Token(Token = "0x400005C")]
	ScriptDeepProfiler = 0x40,
	[Token(Token = "0x400005D")]
	AvailabilityEditor = 4,
	[Token(Token = "0x400005E")]
	AvailabilityNonDevelopment = 8,
	[Token(Token = "0x400005F")]
	Warning = 0x10,
	[Token(Token = "0x4000060")]
	Counter = 0x80,
	[Token(Token = "0x4000061")]
	SampleGPU = 0x100
}
