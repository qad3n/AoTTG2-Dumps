// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.TypedLobbyInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3ECF250", Offset = "0x3ECF250", VA = "0x3ECF250", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x3ECA990", Offset = "0x3ECA990", VA = "0x3ECA990")]
	public TypedLobbyInfo()
	{
	}
}
