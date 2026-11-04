// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.Intrinsics.BurstTargetCpuAttribute
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Burst.Intrinsics;

[Token(Token = "0x2000033")]
[AttributeUsage(AttributeTargets.Method, Inherited = false)]
[BurstRuntime.Preserve]
internal sealed class BurstTargetCpuAttribute : Attribute
{
	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x10")]
	public readonly BurstTargetCpu TargetCpu;

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public BurstTargetCpuAttribute(BurstTargetCpu TargetCpu)
	{
	}
}
