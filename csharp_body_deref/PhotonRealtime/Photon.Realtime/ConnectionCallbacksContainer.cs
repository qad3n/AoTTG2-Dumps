using System.Collections.Generic;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200001C")]
public class ConnectionCallbacksContainer : List<IConnectionCallbacks>, IConnectionCallbacks
{
	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x28")]
	private readonly LoadBalancingClient client;

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x3BC9A40", Offset = "0x3BC9A40", VA = "0x3BC9A40")]
	public ConnectionCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3BD3510", Offset = "0x3BD3510", VA = "0x3BD3510", Slot = "35")]
	public void OnConnected()
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3BD15E0", Offset = "0x3BD15E0", VA = "0x3BD15E0", Slot = "36")]
	public void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3BD19D0", Offset = "0x3BD19D0", VA = "0x3BD19D0", Slot = "38")]
	public void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3BD38E0", Offset = "0x3BD38E0", VA = "0x3BD38E0", Slot = "37")]
	public void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x3BD17D0", Offset = "0x3BD17D0", VA = "0x3BD17D0", Slot = "39")]
	public void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3BD0FE0", Offset = "0x3BD0FE0", VA = "0x3BD0FE0", Slot = "40")]
	public void OnCustomAuthenticationFailed(string debugMessage)
	{
	}
}
