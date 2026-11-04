// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.TransformUpdatePacket
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering;

[Token(Token = "0x200009C")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\GPUDriven\\InstanceData\\InstanceTransformUpdateDefs.cs")]
internal struct TransformUpdatePacket
{
	[Token(Token = "0x40002E2")]
	[FieldOffset(Offset = "0x0")]
	public float4 localToWorld0;

	[Token(Token = "0x40002E3")]
	[FieldOffset(Offset = "0x10")]
	public float4 localToWorld1;

	[Token(Token = "0x40002E4")]
	[FieldOffset(Offset = "0x20")]
	public float4 localToWorld2;
}
