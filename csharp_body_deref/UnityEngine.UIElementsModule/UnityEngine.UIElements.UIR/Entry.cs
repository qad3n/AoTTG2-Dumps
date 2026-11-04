// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.Entry
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000597")]
internal class Entry
{
	[Token(Token = "0x40013C2")]
	[FieldOffset(Offset = "0x10")]
	public EntryType type;

	[Token(Token = "0x40013C3")]
	[FieldOffset(Offset = "0x12")]
	public EntryFlags flags;

	[Token(Token = "0x40013C4")]
	[FieldOffset(Offset = "0x18")]
	public NativeSlice<Vertex> vertices;

	[Token(Token = "0x40013C5")]
	[FieldOffset(Offset = "0x28")]
	public NativeSlice<ushort> indices;

	[Token(Token = "0x40013C6")]
	[FieldOffset(Offset = "0x38")]
	public Texture texture;

	[Token(Token = "0x40013C7")]
	[FieldOffset(Offset = "0x40")]
	public float textScale;

	[Token(Token = "0x40013C8")]
	[FieldOffset(Offset = "0x44")]
	public float fontSharpness;

	[Token(Token = "0x40013C9")]
	[FieldOffset(Offset = "0x48")]
	public VectorImage gradientsOwner;

	[Token(Token = "0x40013CA")]
	[FieldOffset(Offset = "0x50")]
	public Material material;

	[Token(Token = "0x40013CB")]
	[FieldOffset(Offset = "0x58")]
	public MaterialPropertyBlock userProps;

	[Token(Token = "0x40013CC")]
	[FieldOffset(Offset = "0x60")]
	public Action immediateCallback;

	[Token(Token = "0x40013CD")]
	[FieldOffset(Offset = "0x68")]
	public TextureId textureId;

	[Token(Token = "0x40013CE")]
	[FieldOffset(Offset = "0x70")]
	public Entry nextSibling;

	[Token(Token = "0x40013CF")]
	[FieldOffset(Offset = "0x78")]
	public Entry firstChild;

	[Token(Token = "0x40013D0")]
	[FieldOffset(Offset = "0x80")]
	public Entry lastChild;

	[Token(Token = "0x60029B2")]
	[Address(RVA = "0x318ECE0", Offset = "0x318D2E0", VA = "0x18318ECE0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60029B3")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Entry()
	{
	}
}
