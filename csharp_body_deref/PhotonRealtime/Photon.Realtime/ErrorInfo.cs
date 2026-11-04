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
	[Address(RVA = "0x1D14630", Offset = "0x1D12C30", VA = "0x181D14630")]
	public ErrorInfo(EventData eventData)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x1D145F0", Offset = "0x1D12BF0", VA = "0x181D145F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
