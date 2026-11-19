// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.MeshInstanceDesc
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x200004E")]
public struct MeshInstanceDesc
{
	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x0")]
	public Mesh mesh;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x8")]
	public int subMeshIndex;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0xC")]
	public Matrix4x4 localToWorldMatrix;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x4C")]
	public uint mask;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x50")]
	public uint instanceID;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x54")]
	public bool enableTriangleCulling;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x55")]
	public bool frontTriangleCounterClockwise;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x56")]
	public bool opaqueGeometry;

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x678C010", Offset = "0x678B010", VA = "0x678C010")]
	public MeshInstanceDesc(Mesh mesh, int subMeshIndex = 0)
	{
	}
}
