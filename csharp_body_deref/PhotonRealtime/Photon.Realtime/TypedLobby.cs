using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000037")]
public class TypedLobby
{
	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x18")]
	public LobbyType Type;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TypedLobby Default;

	[Token(Token = "0x17000036")]
	public bool IsDefault
	{
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x3BD67A0", Offset = "0x3BD67A0", VA = "0x3BD67A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x3BD97E0", Offset = "0x3BD97E0", VA = "0x3BD97E0")]
	internal TypedLobby()
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x3BD97F0", Offset = "0x3BD97F0", VA = "0x3BD97F0")]
	public TypedLobby(string name, LobbyType type)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x3BD9820", Offset = "0x3BD9820", VA = "0x3BD9820", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
