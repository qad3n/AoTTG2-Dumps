// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.LineInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200000E")]
internal struct LineInfo
{
	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x0")]
	internal int controlCharacterCount;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x4")]
	public int characterCount;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x8")]
	public int visibleCharacterCount;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0xC")]
	public int spaceCount;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x10")]
	public int visibleSpaceCount;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x14")]
	public int wordCount;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x18")]
	public int firstCharacterIndex;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x1C")]
	public int firstVisibleCharacterIndex;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x20")]
	public int lastCharacterIndex;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x24")]
	public int lastVisibleCharacterIndex;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x28")]
	public float length;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x2C")]
	public float lineHeight;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x30")]
	public float ascender;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x34")]
	public float baseline;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x38")]
	public float descender;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x3C")]
	public float maxAdvance;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x40")]
	public float width;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x44")]
	public float marginLeft;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x48")]
	public float marginRight;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x4C")]
	public TextAlignment alignment;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x50")]
	public Extents lineExtents;
}
