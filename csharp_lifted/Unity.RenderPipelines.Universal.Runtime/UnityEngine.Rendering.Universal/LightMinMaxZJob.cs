// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.LightMinMaxZJob
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20001B7")]
[BurstCompile]
internal struct LightMinMaxZJob : IJobFor
{
	[Token(Token = "0x4000968")]
	[FieldOffset(Offset = "0x0")]
	public Fixed2<float4x4> worldToViews;

	[Token(Token = "0x4000969")]
	[FieldOffset(Offset = "0x80")]
	[ReadOnly]
	public NativeArray<VisibleLight> lights;

	[Token(Token = "0x400096A")]
	[FieldOffset(Offset = "0x90")]
	public NativeArray<float2> minMaxZs;

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x6692DD0", Offset = "0x6691DD0", VA = "0x6692DD0", Slot = "4")]
	public void Execute(int index)
	{
	}
}
