// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.OpJoinRandomRoomParams
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000025")]
public class OpJoinRandomRoomParams
{
	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x10")]
	public Hashtable ExpectedCustomRoomProperties;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x18")]
	public byte ExpectedMaxPlayers;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x19")]
	public MatchmakingMode MatchingType;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x20")]
	public TypedLobby TypedLobby;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x28")]
	public string SqlLobbyFilter;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x30")]
	public string[] ExpectedUsers;

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public OpJoinRandomRoomParams()
	{
	}
}
