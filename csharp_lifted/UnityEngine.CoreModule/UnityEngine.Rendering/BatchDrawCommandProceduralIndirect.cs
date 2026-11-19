// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchDrawCommandProceduralIndirect
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003B6")]
public struct BatchDrawCommandProceduralIndirect
{
	[Token(Token = "0x4000BC1")]
	[FieldOffset(Offset = "0x0")]
	public BatchDrawCommandFlags flags;

	[Token(Token = "0x4000BC2")]
	[FieldOffset(Offset = "0x4")]
	public BatchID batchID;

	[Token(Token = "0x4000BC3")]
	[FieldOffset(Offset = "0x8")]
	public BatchMaterialID materialID;

	[Token(Token = "0x4000BC4")]
	[FieldOffset(Offset = "0xC")]
	public ushort splitVisibilityMask;

	[Token(Token = "0x4000BC5")]
	[FieldOffset(Offset = "0xE")]
	public ushort lightmapIndex;

	[Token(Token = "0x4000BC6")]
	[FieldOffset(Offset = "0x10")]
	public int sortingPosition;

	[Token(Token = "0x4000BC7")]
	[FieldOffset(Offset = "0x14")]
	public uint visibleOffset;

	[Token(Token = "0x4000BC8")]
	[FieldOffset(Offset = "0x18")]
	public MeshTopology topology;

	[Token(Token = "0x4000BC9")]
	[FieldOffset(Offset = "0x1C")]
	public GraphicsBufferHandle indexBufferHandle;

	[Token(Token = "0x4000BCA")]
	[FieldOffset(Offset = "0x20")]
	public GraphicsBufferHandle visibleInstancesBufferHandle;

	[Token(Token = "0x4000BCB")]
	[FieldOffset(Offset = "0x24")]
	public uint visibleInstancesBufferWindowOffset;

	[Token(Token = "0x4000BCC")]
	[FieldOffset(Offset = "0x28")]
	public uint visibleInstancesBufferWindowSizeBytes;

	[Token(Token = "0x4000BCD")]
	[FieldOffset(Offset = "0x2C")]
	public GraphicsBufferHandle indirectArgsBufferHandle;

	[Token(Token = "0x4000BCE")]
	[FieldOffset(Offset = "0x30")]
	public uint indirectArgsBufferOffset;
}
