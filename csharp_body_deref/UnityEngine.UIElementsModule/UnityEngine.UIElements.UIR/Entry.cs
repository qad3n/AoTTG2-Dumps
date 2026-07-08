using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200049E")]
internal class Entry
{
	[Token(Token = "0x4000E2B")]
	[FieldOffset(Offset = "0x10")]
	public EntryType type;

	[Token(Token = "0x4000E2C")]
	[FieldOffset(Offset = "0x18")]
	public NativeSlice<Vertex> vertices;

	[Token(Token = "0x4000E2D")]
	[FieldOffset(Offset = "0x28")]
	public NativeSlice<ushort> indices;

	[Token(Token = "0x4000E2E")]
	[FieldOffset(Offset = "0x38")]
	public Texture texture;

	[Token(Token = "0x4000E2F")]
	[FieldOffset(Offset = "0x40")]
	public float textScale;

	[Token(Token = "0x4000E30")]
	[FieldOffset(Offset = "0x44")]
	public float fontSharpness;

	[Token(Token = "0x4000E31")]
	[FieldOffset(Offset = "0x48")]
	public VectorImage gradientsOwner;

	[Token(Token = "0x4000E32")]
	[FieldOffset(Offset = "0x50")]
	public Material material;

	[Token(Token = "0x4000E33")]
	[FieldOffset(Offset = "0x58")]
	public Action immediateCallback;

	[Token(Token = "0x4000E34")]
	[FieldOffset(Offset = "0x60")]
	public Entry nextSibling;

	[Token(Token = "0x4000E35")]
	[FieldOffset(Offset = "0x68")]
	public Entry firstChild;

	[Token(Token = "0x6001CAD")]
	[Address(RVA = "0x4C62E70", Offset = "0x4C62E70", VA = "0x4C62E70")]
	public Entry()
	{
	}
}
