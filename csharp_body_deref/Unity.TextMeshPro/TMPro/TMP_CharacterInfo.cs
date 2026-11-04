// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_CharacterInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.TextCore;

namespace TMPro;

[Token(Token = "0x2000018")]
[DebuggerDisplay("Unicode '{character}'  ({((uint)character).ToString(\"X\")})")]
public struct TMP_CharacterInfo
{
	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x0")]
	public TMP_TextElementType elementType;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x4")]
	public char character;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x8")]
	public int index;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0xC")]
	public int stringLength;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x10")]
	public TMP_TextElement textElement;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x18")]
	public Glyph alternativeGlyph;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x20")]
	public TMP_FontAsset fontAsset;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x28")]
	public Material material;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x30")]
	public int materialReferenceIndex;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x34")]
	public bool isUsingAlternateTypeface;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x38")]
	public float pointSize;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x3C")]
	public int lineNumber;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x40")]
	public int pageNumber;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x44")]
	public int vertexIndex;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x48")]
	public TMP_Vertex vertex_BL;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x70")]
	public TMP_Vertex vertex_TL;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x98")]
	public TMP_Vertex vertex_TR;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0xC0")]
	public TMP_Vertex vertex_BR;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0xE8")]
	public Vector3 topLeft;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0xF4")]
	public Vector3 bottomLeft;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x100")]
	public Vector3 topRight;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x10C")]
	public Vector3 bottomRight;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x118")]
	public float origin;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x11C")]
	public float xAdvance;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x120")]
	public float ascender;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x124")]
	public float baseLine;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x128")]
	public float descender;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x12C")]
	internal float adjustedAscender;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x130")]
	internal float adjustedDescender;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x134")]
	internal float adjustedHorizontalAdvance;

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x138")]
	public float aspectRatio;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x13C")]
	public float scale;

	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x140")]
	public Color32 color;

	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x144")]
	public Color32 underlineColor;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x148")]
	public int underlineVertexIndex;

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x14C")]
	public Color32 strikethroughColor;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x150")]
	public int strikethroughVertexIndex;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x154")]
	public Color32 highlightColor;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x158")]
	public HighlightState highlightState;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x16C")]
	public FontStyles style;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x170")]
	public bool isVisible;
}
