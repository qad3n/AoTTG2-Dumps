// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.VertexBufferChunk
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000043")]
internal struct VertexBufferChunk
{
	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x0")]
	public GraphicsBuffer vertices;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x8")]
	public int verticesStartOffset;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0xC")]
	public uint vertexCount;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x10")]
	public uint vertexStride;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x14")]
	public int baseVertex;
}
