// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.InstanceInfo
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x200001A")]
internal struct InstanceInfo
{
	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x0")]
	public int blasOffset;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x4")]
	public int instanceMask;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x8")]
	public int vertexOffset;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0xC")]
	public int indexOffset;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x10")]
	public uint disableTriangleCulling;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x14")]
	public uint invertTriangleCulling;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x18")]
	public uint userInstanceID;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x1C")]
	public int isOpaque;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x20")]
	public Transform worldToLocalTransform;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x50")]
	public Transform localToWorldTransform;
}
