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

[Token(Token = "0x2000022")]
public class ErrorInfo
{
	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x10")]
	public readonly string Info;

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x3ECAC00", Offset = "0x3ECAC00", VA = "0x3ECAC00")]
	public ErrorInfo(EventData eventData)
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x3ECB8D0", Offset = "0x3ECB8D0", VA = "0x3ECB8D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
