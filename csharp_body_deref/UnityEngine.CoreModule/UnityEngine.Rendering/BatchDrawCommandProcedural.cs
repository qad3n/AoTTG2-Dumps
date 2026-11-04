// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchDrawCommandProcedural
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000379")]
public struct BatchDrawCommandProcedural
{
	[Token(Token = "0x4000A30")]
	[FieldOffset(Offset = "0x0")]
	public BatchDrawCommandFlags flags;

	[Token(Token = "0x4000A31")]
	[FieldOffset(Offset = "0x4")]
	public BatchID batchID;

	[Token(Token = "0x4000A32")]
	[FieldOffset(Offset = "0x8")]
	public BatchMaterialID materialID;

	[Token(Token = "0x4000A33")]
	[FieldOffset(Offset = "0xC")]
	public ushort splitVisibilityMask;

	[Token(Token = "0x4000A34")]
	[FieldOffset(Offset = "0xE")]
	public ushort lightmapIndex;

	[Token(Token = "0x4000A35")]
	[FieldOffset(Offset = "0x10")]
	public int sortingPosition;

	[Token(Token = "0x4000A36")]
	[FieldOffset(Offset = "0x14")]
	public uint visibleOffset;

	[Token(Token = "0x4000A37")]
	[FieldOffset(Offset = "0x18")]
	public uint visibleCount;

	[Token(Token = "0x4000A38")]
	[FieldOffset(Offset = "0x1C")]
	public MeshTopology topology;

	[Token(Token = "0x4000A39")]
	[FieldOffset(Offset = "0x20")]
	public GraphicsBufferHandle indexBufferHandle;

	[Token(Token = "0x4000A3A")]
	[FieldOffset(Offset = "0x24")]
	public uint baseVertex;

	[Token(Token = "0x4000A3B")]
	[FieldOffset(Offset = "0x28")]
	public uint indexOffsetBytes;

	[Token(Token = "0x4000A3C")]
	[FieldOffset(Offset = "0x2C")]
	public uint elementCount;
}
