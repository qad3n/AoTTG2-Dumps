// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.Entry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000582")]
internal class Entry
{
	[Token(Token = "0x4001304")]
	[FieldOffset(Offset = "0x10")]
	public EntryType type;

	[Token(Token = "0x4001305")]
	[FieldOffset(Offset = "0x12")]
	public EntryFlags flags;

	[Token(Token = "0x4001306")]
	[FieldOffset(Offset = "0x18")]
	public NativeSlice<Vertex> vertices;

	[Token(Token = "0x4001307")]
	[FieldOffset(Offset = "0x28")]
	public NativeSlice<ushort> indices;

	[Token(Token = "0x4001308")]
	[FieldOffset(Offset = "0x38")]
	public Texture texture;

	[Token(Token = "0x4001309")]
	[FieldOffset(Offset = "0x40")]
	public float textScale;

	[Token(Token = "0x400130A")]
	[FieldOffset(Offset = "0x44")]
	public float fontSharpness;

	[Token(Token = "0x400130B")]
	[FieldOffset(Offset = "0x48")]
	public VectorImage gradientsOwner;

	[Token(Token = "0x400130C")]
	[FieldOffset(Offset = "0x50")]
	public Material material;

	[Token(Token = "0x400130D")]
	[FieldOffset(Offset = "0x58")]
	public MaterialPropertyBlock userProps;

	[Token(Token = "0x400130E")]
	[FieldOffset(Offset = "0x60")]
	public Action immediateCallback;

	[Token(Token = "0x400130F")]
	[FieldOffset(Offset = "0x68")]
	public TextureId textureId;

	[Token(Token = "0x4001310")]
	[FieldOffset(Offset = "0x70")]
	public Entry nextSibling;

	[Token(Token = "0x4001311")]
	[FieldOffset(Offset = "0x78")]
	public Entry firstChild;

	[Token(Token = "0x4001312")]
	[FieldOffset(Offset = "0x80")]
	public Entry lastChild;

	[Token(Token = "0x6002951")]
	[Address(RVA = "0x6B82020", Offset = "0x6B81020", VA = "0x6B82020")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002952")]
	[Address(RVA = "0x6B81F50", Offset = "0x6B80F50", VA = "0x6B81F50")]
	public Entry()
	{
	}
}
