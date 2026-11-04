// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.BvhHeader
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x2000018")]
internal struct BvhHeader
{
	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x0")]
	public uint internalNodeCount;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x4")]
	public uint leafNodeCount;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x8")]
	public uint root;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0xC")]
	public uint unused;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x10")]
	public float3 globalAabbMin;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x1C")]
	public float3 globalAabbMax;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x28")]
	public uint3 unused3;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x34")]
	public uint3 unused4;
}
