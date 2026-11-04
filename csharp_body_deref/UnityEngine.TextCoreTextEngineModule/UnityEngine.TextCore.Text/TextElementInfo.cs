// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextElementInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000046")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
internal struct TextElementInfo
{
	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x0")]
	public uint character;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x4")]
	public int index;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x8")]
	public TextElementType elementType;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0xC")]
	public int stringLength;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x10")]
	public TextElement textElement;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0x18")]
	public Glyph alternativeGlyph;

	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x20")]
	public FontAsset fontAsset;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x28")]
	public SpriteAsset spriteAsset;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x30")]
	public Material material;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x38")]
	public int materialReferenceIndex;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x3C")]
	public bool isUsingAlternateTypeface;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x40")]
	public float pointSize;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x44")]
	public int lineNumber;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x48")]
	public int vertexIndex;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x4C")]
	public TextVertex vertexTopLeft;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x74")]
	public TextVertex vertexBottomLeft;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x9C")]
	public TextVertex vertexTopRight;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0xC4")]
	public TextVertex vertexBottomRight;

	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0xEC")]
	public Vector3 topLeft;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0xF8")]
	public Vector3 bottomLeft;

	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x104")]
	public Vector3 topRight;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x110")]
	public Vector3 bottomRight;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x11C")]
	public float origin;

	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x120")]
	public float ascender;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x124")]
	public float baseLine;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x128")]
	public float descender;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x12C")]
	internal float adjustedAscender;

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x130")]
	internal float adjustedDescender;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x134")]
	internal float adjustedHorizontalAdvance;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x138")]
	public float xAdvance;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x13C")]
	public float aspectRatio;

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x140")]
	public float scale;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0x144")]
	public Color32 color;

	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0x148")]
	public Color32 underlineColor;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x14C")]
	public int underlineVertexIndex;

	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x150")]
	public Color32 strikethroughColor;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x154")]
	public int strikethroughVertexIndex;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x158")]
	public Color32 highlightColor;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x15C")]
	public HighlightState highlightState;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x170")]
	public FontStyles style;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x174")]
	public bool isVisible;

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x3045FE0", Offset = "0x30445E0", VA = "0x183045FE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
