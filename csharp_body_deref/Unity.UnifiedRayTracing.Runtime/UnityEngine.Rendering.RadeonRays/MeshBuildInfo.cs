// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.MeshBuildInfo
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x200000F")]
internal struct MeshBuildInfo
{
	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x0")]
	public GraphicsBuffer vertices;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x8")]
	public int verticesStartOffset;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0xC")]
	public uint vertexCount;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x10")]
	public uint vertexStride;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x14")]
	public int baseVertex;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x18")]
	public GraphicsBuffer triangleIndices;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x20")]
	public int indicesStartOffset;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x24")]
	public int baseIndex;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x28")]
	public IndexFormat indexFormat;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x2C")]
	public uint triangleCount;
}
