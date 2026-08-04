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

[Token(Token = "0x2000021")]
internal class ErrorInfoCallbacksContainer : List<IErrorInfoCallback>, IErrorInfoCallback
{
	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x28")]
	private LoadBalancingClient client;

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x3EBF610", Offset = "0x3EBF610", VA = "0x3EBF610")]
	public ErrorInfoCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x3ECAC80", Offset = "0x3ECAC80", VA = "0x3ECAC80", Slot = "35")]
	public void OnErrorInfo(ErrorInfo errorInfo)
	{
	}
}
