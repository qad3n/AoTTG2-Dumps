// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchDrawCommand
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000377")]
public struct BatchDrawCommand
{
	[Token(Token = "0x4000A17")]
	[FieldOffset(Offset = "0x0")]
	public BatchDrawCommandFlags flags;

	[Token(Token = "0x4000A18")]
	[FieldOffset(Offset = "0x4")]
	public BatchID batchID;

	[Token(Token = "0x4000A19")]
	[FieldOffset(Offset = "0x8")]
	public BatchMaterialID materialID;

	[Token(Token = "0x4000A1A")]
	[FieldOffset(Offset = "0xC")]
	public ushort splitVisibilityMask;

	[Token(Token = "0x4000A1B")]
	[FieldOffset(Offset = "0xE")]
	public ushort lightmapIndex;

	[Token(Token = "0x4000A1C")]
	[FieldOffset(Offset = "0x10")]
	public int sortingPosition;

	[Token(Token = "0x4000A1D")]
	[FieldOffset(Offset = "0x14")]
	public uint visibleOffset;

	[Token(Token = "0x4000A1E")]
	[FieldOffset(Offset = "0x18")]
	public uint visibleCount;

	[Token(Token = "0x4000A1F")]
	[FieldOffset(Offset = "0x1C")]
	public BatchMeshID meshID;

	[Token(Token = "0x4000A20")]
	[FieldOffset(Offset = "0x20")]
	public ushort submeshIndex;

	[Token(Token = "0x4000A21")]
	[FieldOffset(Offset = "0x22")]
	public ushort activeMeshLod;
}
