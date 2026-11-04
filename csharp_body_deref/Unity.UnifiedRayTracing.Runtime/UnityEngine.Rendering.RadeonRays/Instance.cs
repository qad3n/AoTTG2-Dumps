// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.Instance
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x2000019")]
internal struct Instance
{
	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x0")]
	public uint meshAccelStructOffset;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x4")]
	public uint instanceMask;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x8")]
	public uint vertexOffset;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0xC")]
	public uint meshAccelStructLeavesOffset;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x10")]
	public bool triangleCullingEnabled;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x11")]
	public bool invertTriangleCulling;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x14")]
	public uint userInstanceID;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x18")]
	public bool isOpaque;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x1C")]
	public Transform localToWorldTransform;
}
