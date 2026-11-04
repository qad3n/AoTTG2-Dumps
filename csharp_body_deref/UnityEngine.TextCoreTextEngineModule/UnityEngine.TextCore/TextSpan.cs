// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.TextSpan
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.TextCore.Text;

namespace UnityEngine.TextCore;

[Token(Token = "0x2000007")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal struct TextSpan
{
	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x0")]
	public int startIndex;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x4")]
	public int length;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr fontAsset;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x10")]
	public IntPtr gradientAsset;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x18")]
	public int fontSize;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x1C")]
	public Color32 color;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x20")]
	public FontStyles fontStyle;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x24")]
	public TextFontWeight fontWeight;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x28")]
	public int mspace;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x2C")]
	public RichTextTagParser.TagUnitType mspaceUnitType;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x30")]
	public int cspace;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x34")]
	public RichTextTagParser.TagUnitType cspaceUnitType;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x38")]
	public int linkID;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x3C")]
	public HorizontalAlignment alignment;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x40")]
	public Color32 highlightColor;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x44")]
	public Vector4 highlightPadding;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x54")]
	public GlyphMetrics spriteMetrics;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x68")]
	public EntityId spriteID;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x6C")]
	public bool spriteTint;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x70")]
	public float spriteScale;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x74")]
	public Color32 spriteColor;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x78")]
	public int margin;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x7C")]
	public MarginDirection marginDirection;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x80")]
	public RichTextTagParser.TagUnitType marginUnitType;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x84")]
	public int lineHeight;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x88")]
	public RichTextTagParser.TagUnitType lineHeightUnitType;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x8C")]
	public int indent;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x90")]
	public RichTextTagParser.TagUnitType indentUnitType;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x94")]
	public int vOffset;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x98")]
	public RichTextTagParser.TagUnitType vOffsetUnitType;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x9C")]
	public sbyte subscriptNestingLevel;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x9D")]
	public sbyte superscriptNestingLevel;

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x3023860", Offset = "0x3021E60", VA = "0x183023860", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
