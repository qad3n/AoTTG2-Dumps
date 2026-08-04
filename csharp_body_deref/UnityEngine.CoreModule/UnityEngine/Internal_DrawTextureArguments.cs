// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Internal_DrawTextureArguments
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000B7")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
internal struct Internal_DrawTextureArguments
{
	[Token(Token = "0x40001E4")]
	[FieldOffset(Offset = "0x0")]
	public Rect screenRect;

	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0x10")]
	public Rect sourceRect;

	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0x20")]
	public int leftBorder;

	[Token(Token = "0x40001E7")]
	[FieldOffset(Offset = "0x24")]
	public int rightBorder;

	[Token(Token = "0x40001E8")]
	[FieldOffset(Offset = "0x28")]
	public int topBorder;

	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0x2C")]
	public int bottomBorder;

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0x30")]
	public Color leftBorderColor;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0x40")]
	public Color rightBorderColor;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x50")]
	public Color topBorderColor;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x60")]
	public Color bottomBorderColor;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x70")]
	public Color color;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x80")]
	public Vector4 borderWidths;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x90")]
	public Vector4 cornerRadiuses;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0xA0")]
	public bool smoothCorners;

	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0xA4")]
	public int pass;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0xA8")]
	public Texture texture;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0xB0")]
	public Material mat;
}
