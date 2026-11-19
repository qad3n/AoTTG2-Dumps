// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DrawKey
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000039")]
internal struct DrawKey : IEquatable<DrawKey>
{
	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x0")]
	public BatchMeshID meshID;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x4")]
	public int submeshIndex;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x8")]
	public int activeMeshLod;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0xC")]
	public BatchMaterialID materialID;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x10")]
	public BatchDrawCommandFlags flags;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x14")]
	public int transparentInstanceId;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x18")]
	public uint overridenComponents;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x1C")]
	public RangeKey range;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x38")]
	public int lightmapIndex;

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x65C2370", Offset = "0x65C1370", VA = "0x65C2370", Slot = "4")]
	public bool Equals(DrawKey other)
	{
		return default(bool);
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x65C24D0", Offset = "0x65C14D0", VA = "0x65C24D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
