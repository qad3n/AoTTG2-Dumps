// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchDrawCommandIndirect
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003B4")]
public struct BatchDrawCommandIndirect
{
	[Token(Token = "0x4000BA6")]
	[FieldOffset(Offset = "0x0")]
	public BatchDrawCommandFlags flags;

	[Token(Token = "0x4000BA7")]
	[FieldOffset(Offset = "0x4")]
	public BatchID batchID;

	[Token(Token = "0x4000BA8")]
	[FieldOffset(Offset = "0x8")]
	public BatchMaterialID materialID;

	[Token(Token = "0x4000BA9")]
	[FieldOffset(Offset = "0xC")]
	public ushort splitVisibilityMask;

	[Token(Token = "0x4000BAA")]
	[FieldOffset(Offset = "0xE")]
	public ushort lightmapIndex;

	[Token(Token = "0x4000BAB")]
	[FieldOffset(Offset = "0x10")]
	public int sortingPosition;

	[Token(Token = "0x4000BAC")]
	[FieldOffset(Offset = "0x14")]
	public uint visibleOffset;

	[Token(Token = "0x4000BAD")]
	[FieldOffset(Offset = "0x18")]
	public BatchMeshID meshID;

	[Token(Token = "0x4000BAE")]
	[FieldOffset(Offset = "0x1C")]
	public MeshTopology topology;

	[Token(Token = "0x4000BAF")]
	[FieldOffset(Offset = "0x20")]
	public GraphicsBufferHandle visibleInstancesBufferHandle;

	[Token(Token = "0x4000BB0")]
	[FieldOffset(Offset = "0x24")]
	public uint visibleInstancesBufferWindowOffset;

	[Token(Token = "0x4000BB1")]
	[FieldOffset(Offset = "0x28")]
	public uint visibleInstancesBufferWindowSizeBytes;

	[Token(Token = "0x4000BB2")]
	[FieldOffset(Offset = "0x2C")]
	public GraphicsBufferHandle indirectArgsBufferHandle;

	[Token(Token = "0x4000BB3")]
	[FieldOffset(Offset = "0x30")]
	public uint indirectArgsBufferOffset;
}
