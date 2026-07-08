using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000038")]
public class TypedLobbyInfo : TypedLobby
{
	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x1C")]
	public int PlayerCount;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x20")]
	public int RoomCount;

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x3BD9900", Offset = "0x3BD9900", VA = "0x3BD9900", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x3BD5040", Offset = "0x3BD5040", VA = "0x3BD5040")]
	public TypedLobbyInfo()
	{
	}
}
