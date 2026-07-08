using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000458")]
internal struct VectorImageVertex
{
	[Token(Token = "0x4000CF7")]
	[FieldOffset(Offset = "0x0")]
	public Vector3 position;

	[Token(Token = "0x4000CF8")]
	[FieldOffset(Offset = "0xC")]
	public Color32 tint;

	[Token(Token = "0x4000CF9")]
	[FieldOffset(Offset = "0x10")]
	public Vector2 uv;

	[Token(Token = "0x4000CFA")]
	[FieldOffset(Offset = "0x18")]
	public uint settingIndex;

	[Token(Token = "0x4000CFB")]
	[FieldOffset(Offset = "0x1C")]
	public Color32 flags;

	[Token(Token = "0x4000CFC")]
	[FieldOffset(Offset = "0x20")]
	public Vector4 circle;
}
