using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000039")]
public struct ImageHandle
{
	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x0")]
	public ImageType Type;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x8")]
	public long Id;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x10")]
	public uint Size;

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x232F4D0", Offset = "0x232F4D0", VA = "0x232F4D0")]
	public static ImageHandle User(long id)
	{
		return default(ImageHandle);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x232F4F0", Offset = "0x232F4F0", VA = "0x232F4F0")]
	public static ImageHandle User(long id, uint size)
	{
		return default(ImageHandle);
	}
}
