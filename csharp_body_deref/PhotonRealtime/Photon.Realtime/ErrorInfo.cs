// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.ErrorInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000020")]
public class ErrorInfo
{
	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x10")]
	public readonly string Info;

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x56B7260", Offset = "0x56B6260", VA = "0x56B7260")]
	public ErrorInfo(EventData eventData)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x56B7F60", Offset = "0x56B6F60", VA = "0x56B7F60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
