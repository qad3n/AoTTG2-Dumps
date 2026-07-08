using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000027")]
public class OpJoinRandomRoomParams
{
	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x10")]
	public Hashtable ExpectedCustomRoomProperties;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x18")]
	public byte ExpectedMaxPlayers;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x19")]
	public MatchmakingMode MatchingType;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x20")]
	public TypedLobby TypedLobby;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x28")]
	public string SqlLobbyFilter;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x30")]
	public string[] ExpectedUsers;

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x3BCC100", Offset = "0x3BCC100", VA = "0x3BCC100")]
	public OpJoinRandomRoomParams()
	{
	}
}
