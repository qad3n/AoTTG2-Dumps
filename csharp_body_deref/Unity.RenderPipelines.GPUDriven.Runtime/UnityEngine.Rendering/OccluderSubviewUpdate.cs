// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OccluderSubviewUpdate
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000032")]
public struct OccluderSubviewUpdate
{
	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x0")]
	public int subviewIndex;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x4")]
	public int depthSliceIndex;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x8")]
	public Vector2Int depthOffset;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x10")]
	public Matrix4x4 viewMatrix;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x50")]
	public Matrix4x4 invViewMatrix;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x90")]
	public Matrix4x4 gpuProjMatrix;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0xD0")]
	public Vector3 viewOffsetWorldSpace;

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x2BCE970", Offset = "0x2BCCF70", VA = "0x182BCE970")]
	public OccluderSubviewUpdate(int subviewIndex)
	{
	}
}
