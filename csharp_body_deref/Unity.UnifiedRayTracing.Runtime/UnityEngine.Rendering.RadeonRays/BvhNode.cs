// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.BvhNode
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x2000017")]
internal struct BvhNode
{
	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x0")]
	public uint child0;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x4")]
	public uint child1;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x8")]
	public uint parent;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0xC")]
	public uint update;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x10")]
	public float3 aabb0_min;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x1C")]
	public float3 aabb0_max;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x28")]
	public float3 aabb1_min;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x34")]
	public float3 aabb1_max;
}
