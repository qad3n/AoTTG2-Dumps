// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.LineInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000024")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
internal struct LineInfo
{
	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x0")]
	internal int controlCharacterCount;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x4")]
	public int characterCount;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x8")]
	public int visibleCharacterCount;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0xC")]
	public int visibleSpaceCount;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x10")]
	public int spaceCount;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x14")]
	public int wordCount;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x18")]
	public int firstCharacterIndex;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x1C")]
	public int firstVisibleCharacterIndex;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x20")]
	public int lastCharacterIndex;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x24")]
	public int lastVisibleCharacterIndex;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x28")]
	public float length;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x2C")]
	public float lineHeight;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x30")]
	public float ascender;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x34")]
	public float baseline;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x38")]
	public float descender;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x3C")]
	public float maxAdvance;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x40")]
	public float width;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x44")]
	public float marginLeft;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x48")]
	public float marginRight;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x4C")]
	public TextAlignment alignment;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x50")]
	public Extents lineExtents;
}
