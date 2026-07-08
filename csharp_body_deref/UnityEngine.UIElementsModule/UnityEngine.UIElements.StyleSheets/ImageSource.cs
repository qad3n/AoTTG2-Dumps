using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000538")]
internal struct ImageSource
{
	[Token(Token = "0x4001202")]
	[FieldOffset(Offset = "0x0")]
	public Texture2D texture;

	[Token(Token = "0x4001203")]
	[FieldOffset(Offset = "0x8")]
	public Sprite sprite;

	[Token(Token = "0x4001204")]
	[FieldOffset(Offset = "0x10")]
	public VectorImage vectorImage;

	[Token(Token = "0x4001205")]
	[FieldOffset(Offset = "0x18")]
	public RenderTexture renderTexture;

	[Token(Token = "0x6001FE9")]
	[Address(RVA = "0x4C9F570", Offset = "0x4C9F570", VA = "0x4C9F570")]
	public bool IsNull()
	{
		return default(bool);
	}
}
