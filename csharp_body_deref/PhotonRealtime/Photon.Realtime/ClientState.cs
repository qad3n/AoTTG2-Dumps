using System;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200000B")]
public enum ClientState
{
	[Token(Token = "0x4000045")]
	PeerCreated = 0,
	[Token(Token = "0x4000046")]
	Authenticating = 1,
	[Token(Token = "0x4000047")]
	Authenticated = 2,
	[Token(Token = "0x4000048")]
	JoiningLobby = 3,
	[Token(Token = "0x4000049")]
	JoinedLobby = 4,
	[Token(Token = "0x400004A")]
	DisconnectingFromMasterServer = 5,
	[Token(Token = "0x400004B")]
	[Obsolete("Renamed to DisconnectingFromMasterServer")]
	DisconnectingFromMasterserver = 5,
	[Token(Token = "0x400004C")]
	ConnectingToGameServer = 6,
	[Token(Token = "0x400004D")]
	[Obsolete("Renamed to ConnectingToGameServer")]
	ConnectingToGameserver = 6,
	[Token(Token = "0x400004E")]
	ConnectedToGameServer = 7,
	[Token(Token = "0x400004F")]
	[Obsolete("Renamed to ConnectedToGameServer")]
	ConnectedToGameserver = 7,
	[Token(Token = "0x4000050")]
	Joining = 8,
	[Token(Token = "0x4000051")]
	Joined = 9,
	[Token(Token = "0x4000052")]
	Leaving = 10,
	[Token(Token = "0x4000053")]
	DisconnectingFromGameServer = 11,
	[Token(Token = "0x4000054")]
	[Obsolete("Renamed to DisconnectingFromGameServer")]
	DisconnectingFromGameserver = 11,
	[Token(Token = "0x4000055")]
	ConnectingToMasterServer = 12,
	[Token(Token = "0x4000056")]
	[Obsolete("Renamed to ConnectingToMasterServer.")]
	ConnectingToMasterserver = 12,
	[Token(Token = "0x4000057")]
	Disconnecting = 13,
	[Token(Token = "0x4000058")]
	Disconnected = 14,
	[Token(Token = "0x4000059")]
	ConnectedToMasterServer = 15,
	[Token(Token = "0x400005A")]
	[Obsolete("Renamed to ConnectedToMasterServer.")]
	ConnectedToMasterserver = 15,
	[Token(Token = "0x400005B")]
	[Obsolete("Renamed to ConnectedToMasterServer.")]
	ConnectedToMaster = 15,
	[Token(Token = "0x400005C")]
	ConnectingToNameServer = 16,
	[Token(Token = "0x400005D")]
	ConnectedToNameServer = 17,
	[Token(Token = "0x400005E")]
	DisconnectingFromNameServer = 18,
	[Token(Token = "0x400005F")]
	ConnectWithFallbackProtocol = 19,
	[Token(Token = "0x4000060")]
	ConnectWithoutAuthOnceWss = 20
}
