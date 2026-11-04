// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_LineInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000059")]
public struct TMP_LineInfo
{
	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x0")]
	internal int controlCharacterCount;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x4")]
	public int characterCount;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x8")]
	public int visibleCharacterCount;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0xC")]
	public int spaceCount;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x10")]
	public int visibleSpaceCount;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x14")]
	public int wordCount;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x18")]
	public int firstCharacterIndex;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x1C")]
	public int firstVisibleCharacterIndex;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x20")]
	public int lastCharacterIndex;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x24")]
	public int lastVisibleCharacterIndex;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x28")]
	public float length;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x2C")]
	public float lineHeight;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x30")]
	public float ascender;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x34")]
	public float baseline;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x38")]
	public float descender;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x3C")]
	public float maxAdvance;

	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x40")]
	public float width;

	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x44")]
	public float marginLeft;

	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x48")]
	public float marginRight;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x4C")]
	public HorizontalAlignmentOptions alignment;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x50")]
	public Extents lineExtents;
}
