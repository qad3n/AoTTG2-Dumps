// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.UtilityScripts.ConnectAndJoin
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/UtilityScripts/ConnectAndJoin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Photon.Voice.Unity.UtilityScripts;

[Token(Token = "0x200001A")]
[RequireComponent(typeof(VoiceConnection))]
public class ConnectAndJoin : MonoBehaviour, IConnectionCallbacks, IMatchmakingCallbacks
{
	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x20")]
	private VoiceConnection voiceConnection;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x28")]
	public bool RandomRoom;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x29")]
	[SerializeField]
	private bool autoConnect;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x2A")]
	[SerializeField]
	private bool publishUserId;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x30")]
	public string RoomName;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x38")]
	private readonly EnterRoomParams enterRoomParams;

	[Token(Token = "0x1700004B")]
	public bool IsConnected
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x1D89810", Offset = "0x1D87E10", VA = "0x181D89810")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x1D896B0", Offset = "0x1D87CB0", VA = "0x181D896B0")]
	private void Start()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x1D89280", Offset = "0x1D87880", VA = "0x181D89280")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x1D88FF0", Offset = "0x1D875F0", VA = "0x181D88FF0")]
	public void ConnectNow()
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x1D89130", Offset = "0x1D87730", VA = "0x181D89130", Slot = "12")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x1D893D0", Offset = "0x1D879D0", VA = "0x181D893D0", Slot = "15")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x1D89520", Offset = "0x1D87B20", VA = "0x181D89520", Slot = "14")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "16")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public void OnConnected()
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x1D89020", Offset = "0x1D87620", VA = "0x181D89020", Slot = "5")]
	public void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x1D892B0", Offset = "0x1D878B0", VA = "0x181D892B0", Slot = "6")]
	public void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	public void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	public void OnCustomAuthenticationFailed(string debugMessage)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x1D89750", Offset = "0x1D87D50", VA = "0x181D89750")]
	public ConnectAndJoin()
	{
	}
}
