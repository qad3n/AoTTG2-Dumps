// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ReflectionProbeMinMaxZJob
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001B8")]
[BurstCompile]
internal struct ReflectionProbeMinMaxZJob : IJobFor
{
	[Token(Token = "0x400096B")]
	[FieldOffset(Offset = "0x0")]
	public Fixed2<float4x4> worldToViews;

	[Token(Token = "0x400096C")]
	[FieldOffset(Offset = "0x80")]
	[ReadOnly]
	public NativeArray<VisibleReflectionProbe> reflectionProbes;

	[Token(Token = "0x400096D")]
	[FieldOffset(Offset = "0x90")]
	[ReadOnly]
	public bool reflectionProbeRotation;

	[Token(Token = "0x400096E")]
	[FieldOffset(Offset = "0x98")]
	public NativeArray<float2> minMaxZs;

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x2C922C0", Offset = "0x2C908C0", VA = "0x182C922C0", Slot = "4")]
	public void Execute(int index)
	{
	}
}
