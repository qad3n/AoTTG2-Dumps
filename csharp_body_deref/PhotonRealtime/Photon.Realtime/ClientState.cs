// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.ClientState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000009")]
public enum ClientState
{
	[Token(Token = "0x4000040")]
	PeerCreated = 0,
	[Token(Token = "0x4000041")]
	Authenticating = 1,
	[Token(Token = "0x4000042")]
	Authenticated = 2,
	[Token(Token = "0x4000043")]
	JoiningLobby = 3,
	[Token(Token = "0x4000044")]
	JoinedLobby = 4,
	[Token(Token = "0x4000045")]
	DisconnectingFromMasterServer = 5,
	[Token(Token = "0x4000046")]
	[Obsolete("Renamed to DisconnectingFromMasterServer")]
	DisconnectingFromMasterserver = DisconnectingFromMasterServer,
	[Token(Token = "0x4000047")]
	ConnectingToGameServer = 6,
	[Token(Token = "0x4000048")]
	[Obsolete("Renamed to ConnectingToGameServer")]
	ConnectingToGameserver = ConnectingToGameServer,
	[Token(Token = "0x4000049")]
	ConnectedToGameServer = 7,
	[Token(Token = "0x400004A")]
	[Obsolete("Renamed to ConnectedToGameServer")]
	ConnectedToGameserver = ConnectedToGameServer,
	[Token(Token = "0x400004B")]
	Joining = 8,
	[Token(Token = "0x400004C")]
	Joined = 9,
	[Token(Token = "0x400004D")]
	Leaving = 10,
	[Token(Token = "0x400004E")]
	DisconnectingFromGameServer = 11,
	[Token(Token = "0x400004F")]
	[Obsolete("Renamed to DisconnectingFromGameServer")]
	DisconnectingFromGameserver = DisconnectingFromGameServer,
	[Token(Token = "0x4000050")]
	ConnectingToMasterServer = 12,
	[Token(Token = "0x4000051")]
	[Obsolete("Renamed to ConnectingToMasterServer.")]
	ConnectingToMasterserver = ConnectingToMasterServer,
	[Token(Token = "0x4000052")]
	Disconnecting = 13,
	[Token(Token = "0x4000053")]
	Disconnected = 14,
	[Token(Token = "0x4000054")]
	ConnectedToMasterServer = 15,
	[Token(Token = "0x4000055")]
	[Obsolete("Renamed to ConnectedToMasterServer.")]
	ConnectedToMasterserver = ConnectedToMasterServer,
	[Token(Token = "0x4000056")]
	[Obsolete("Renamed to ConnectedToMasterServer.")]
	ConnectedToMaster = ConnectedToMasterServer,
	[Token(Token = "0x4000057")]
	ConnectingToNameServer = 16,
	[Token(Token = "0x4000058")]
	ConnectedToNameServer = 17,
	[Token(Token = "0x4000059")]
	DisconnectingFromNameServer = 18,
	[Token(Token = "0x400005A")]
	ConnectWithFallbackProtocol = 19,
	[Token(Token = "0x400005B")]
	ConnectWithoutAuthOnceWss = 20
}
