using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000026")]
public class FindFriendsOptions
{
	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x10")]
	public bool CreatedOnGs;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x11")]
	public bool Visible;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x12")]
	public bool Open;

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x3BD82E0", Offset = "0x3BD82E0", VA = "0x3BD82E0")]
	internal int ToIntFlags()
	{
		return default(int);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x3BD9540", Offset = "0x3BD9540", VA = "0x3BD9540")]
	public FindFriendsOptions()
	{
	}
}
