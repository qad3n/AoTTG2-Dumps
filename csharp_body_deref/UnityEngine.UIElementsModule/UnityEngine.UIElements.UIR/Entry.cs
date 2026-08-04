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
	[Address(RVA = "0x4F8A7A0", Offset = "0x4F8A7A0", VA = "0x4F8A7A0")]
	public Entry()
	{
	}
}
