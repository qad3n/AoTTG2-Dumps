// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.ErrorInfoCallbacksContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200001F")]
internal class ErrorInfoCallbacksContainer : List<IErrorInfoCallback>, IErrorInfoCallback
{
	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x28")]
	private LoadBalancingClient client;

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x1D14570", Offset = "0x1D12B70", VA = "0x181D14570")]
	public ErrorInfoCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x1D143D0", Offset = "0x1D129D0", VA = "0x181D143D0", Slot = "35")]
	public void OnErrorInfo(ErrorInfo errorInfo)
	{
	}
}
