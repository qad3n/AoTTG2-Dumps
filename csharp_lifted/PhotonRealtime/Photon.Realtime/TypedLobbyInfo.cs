// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.TypedLobbyInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000036")]
public class TypedLobbyInfo : TypedLobby
{
	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x1C")]
	public int PlayerCount;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x20")]
	public int RoomCount;

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x56BB890", Offset = "0x56BA890", VA = "0x56BB890", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x56B7000", Offset = "0x56B6000", VA = "0x56B7000")]
	public TypedLobbyInfo()
	{
	}
}
