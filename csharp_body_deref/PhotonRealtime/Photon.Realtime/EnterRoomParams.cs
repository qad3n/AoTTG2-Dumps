using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000028")]
public class EnterRoomParams
{
	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x10")]
	public string RoomName;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x18")]
	public RoomOptions RoomOptions;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x20")]
	public TypedLobby Lobby;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x28")]
	public Hashtable PlayerProperties;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x30")]
	public string Password;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x38")]
	public string SessionID;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x40")]
	public string Hash;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x48")]
	protected internal bool OnGameServer;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x49")]
	protected internal JoinMode JoinMode;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x50")]
	public string[] ExpectedUsers;

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x3BCC110", Offset = "0x3BCC110", VA = "0x3BCC110")]
	public EnterRoomParams()
	{
	}
}
