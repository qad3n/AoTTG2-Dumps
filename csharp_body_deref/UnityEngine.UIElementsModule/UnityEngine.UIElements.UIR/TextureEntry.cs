using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004C5")]
internal struct TextureEntry
{
	[Token(Token = "0x4000F65")]
	[FieldOffset(Offset = "0x0")]
	public Texture source;

	[Token(Token = "0x4000F66")]
	[FieldOffset(Offset = "0x8")]
	public TextureId actual;

	[Token(Token = "0x4000F67")]
	[FieldOffset(Offset = "0xC")]
	public bool replaced;
}
