// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.LowLevel.Unsafe.ScheduleMode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Jobs.LowLevel.Unsafe;

[Token(Token = "0x2000014")]
public enum ScheduleMode
{
	[Token(Token = "0x4000014")]
	Run = 0,
	[Token(Token = "0x4000015")]
	[Obsolete("Batched is obsolete, use Parallel or Single depending on job type. (UnityUpgradable) -> Parallel", false)]
	Batched = 1,
	[Token(Token = "0x4000016")]
	Parallel = 1,
	[Token(Token = "0x4000017")]
	Single = 2
}
