// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchDrawCommand
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003B3")]
public struct BatchDrawCommand
{
	[Token(Token = "0x4000B9B")]
	[FieldOffset(Offset = "0x0")]
	public BatchDrawCommandFlags flags;

	[Token(Token = "0x4000B9C")]
	[FieldOffset(Offset = "0x4")]
	public BatchID batchID;

	[Token(Token = "0x4000B9D")]
	[FieldOffset(Offset = "0x8")]
	public BatchMaterialID materialID;

	[Token(Token = "0x4000B9E")]
	[FieldOffset(Offset = "0xC")]
	public ushort splitVisibilityMask;

	[Token(Token = "0x4000B9F")]
	[FieldOffset(Offset = "0xE")]
	public ushort lightmapIndex;

	[Token(Token = "0x4000BA0")]
	[FieldOffset(Offset = "0x10")]
	public int sortingPosition;

	[Token(Token = "0x4000BA1")]
	[FieldOffset(Offset = "0x14")]
	public uint visibleOffset;

	[Token(Token = "0x4000BA2")]
	[FieldOffset(Offset = "0x18")]
	public uint visibleCount;

	[Token(Token = "0x4000BA3")]
	[FieldOffset(Offset = "0x1C")]
	public BatchMeshID meshID;

	[Token(Token = "0x4000BA4")]
	[FieldOffset(Offset = "0x20")]
	public ushort submeshIndex;

	[Token(Token = "0x4000BA5")]
	[FieldOffset(Offset = "0x22")]
	public ushort activeMeshLod;
}
