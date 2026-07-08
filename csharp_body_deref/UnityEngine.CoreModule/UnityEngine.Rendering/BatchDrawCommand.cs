using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000310")]
public struct BatchDrawCommand
{
	[Token(Token = "0x400099B")]
	[FieldOffset(Offset = "0x0")]
	public uint visibleOffset;

	[Token(Token = "0x400099C")]
	[FieldOffset(Offset = "0x4")]
	public uint visibleCount;

	[Token(Token = "0x400099D")]
	[FieldOffset(Offset = "0x8")]
	public BatchID batchID;

	[Token(Token = "0x400099E")]
	[FieldOffset(Offset = "0xC")]
	public BatchMaterialID materialID;

	[Token(Token = "0x400099F")]
	[FieldOffset(Offset = "0x10")]
	public BatchMeshID meshID;

	[Token(Token = "0x40009A0")]
	[FieldOffset(Offset = "0x14")]
	public ushort submeshIndex;

	[Token(Token = "0x40009A1")]
	[FieldOffset(Offset = "0x16")]
	public ushort splitVisibilityMask;

	[Token(Token = "0x40009A2")]
	[FieldOffset(Offset = "0x18")]
	public BatchDrawCommandFlags flags;

	[Token(Token = "0x40009A3")]
	[FieldOffset(Offset = "0x1C")]
	public int sortingPosition;
}
