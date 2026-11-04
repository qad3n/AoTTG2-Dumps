// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchDrawCommandProceduralIndirect
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200037A")]
public struct BatchDrawCommandProceduralIndirect
{
	[Token(Token = "0x4000A3D")]
	[FieldOffset(Offset = "0x0")]
	public BatchDrawCommandFlags flags;

	[Token(Token = "0x4000A3E")]
	[FieldOffset(Offset = "0x4")]
	public BatchID batchID;

	[Token(Token = "0x4000A3F")]
	[FieldOffset(Offset = "0x8")]
	public BatchMaterialID materialID;

	[Token(Token = "0x4000A40")]
	[FieldOffset(Offset = "0xC")]
	public ushort splitVisibilityMask;

	[Token(Token = "0x4000A41")]
	[FieldOffset(Offset = "0xE")]
	public ushort lightmapIndex;

	[Token(Token = "0x4000A42")]
	[FieldOffset(Offset = "0x10")]
	public int sortingPosition;

	[Token(Token = "0x4000A43")]
	[FieldOffset(Offset = "0x14")]
	public uint visibleOffset;

	[Token(Token = "0x4000A44")]
	[FieldOffset(Offset = "0x18")]
	public MeshTopology topology;

	[Token(Token = "0x4000A45")]
	[FieldOffset(Offset = "0x1C")]
	public GraphicsBufferHandle indexBufferHandle;

	[Token(Token = "0x4000A46")]
	[FieldOffset(Offset = "0x20")]
	public GraphicsBufferHandle visibleInstancesBufferHandle;

	[Token(Token = "0x4000A47")]
	[FieldOffset(Offset = "0x24")]
	public uint visibleInstancesBufferWindowOffset;

	[Token(Token = "0x4000A48")]
	[FieldOffset(Offset = "0x28")]
	public uint visibleInstancesBufferWindowSizeBytes;

	[Token(Token = "0x4000A49")]
	[FieldOffset(Offset = "0x2C")]
	public GraphicsBufferHandle indirectArgsBufferHandle;

	[Token(Token = "0x4000A4A")]
	[FieldOffset(Offset = "0x30")]
	public uint indirectArgsBufferOffset;
}
