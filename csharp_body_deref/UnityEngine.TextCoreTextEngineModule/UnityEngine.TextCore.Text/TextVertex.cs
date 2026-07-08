using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200001F")]
internal struct TextVertex
{
	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x0")]
	public Vector3 position;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0xC")]
	public Vector4 uv;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x1C")]
	public Vector2 uv2;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x24")]
	public Color32 color;
}
