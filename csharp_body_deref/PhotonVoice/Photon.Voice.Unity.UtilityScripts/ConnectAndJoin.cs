using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Photon.Voice.Unity.UtilityScripts;

[Token(Token = "0x200001C")]
[RequireComponent(typeof(VoiceConnection))]
public class ConnectAndJoin : MonoBehaviour, IConnectionCallbacks, IMatchmakingCallbacks
{
	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x20")]
	private VoiceConnection voiceConnection;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x28")]
	public bool RandomRoom;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x29")]
	[SerializeField]
	private bool autoConnect;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x2A")]
	[SerializeField]
	private bool publishUserId;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x30")]
	public string RoomName;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x38")]
	private readonly EnterRoomParams enterRoomParams;

	[Token(Token = "0x1700004B")]
	public bool IsConnected
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x3C5CC00", Offset = "0x3C5CC00", VA = "0x3C5CC00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x3C5CC80", Offset = "0x3C5CC80", VA = "0x3C5CC80")]
	private void Start()
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3C5CD50", Offset = "0x3C5CD50", VA = "0x3C5CD50")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x3C5CD20", Offset = "0x3C5CD20", VA = "0x3C5CD20")]
	public void ConnectNow()
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3C5CD80", Offset = "0x3C5CD80", VA = "0x3C5CD80", Slot = "11")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3C5CD90", Offset = "0x3C5CD90", VA = "0x3C5CD90", Slot = "12")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3C5CED0", Offset = "0x3C5CED0", VA = "0x3C5CED0", Slot = "10")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3C5CEE0", Offset = "0x3C5CEE0", VA = "0x3C5CEE0", Slot = "13")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3C5CEF0", Offset = "0x3C5CEF0", VA = "0x3C5CEF0", Slot = "15")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x3C5D030", Offset = "0x3C5D030", VA = "0x3C5D030", Slot = "14")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x3C5D1B0", Offset = "0x3C5D1B0", VA = "0x3C5D1B0", Slot = "16")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x3C5D1C0", Offset = "0x3C5D1C0", VA = "0x3C5D1C0", Slot = "4")]
	public void OnConnected()
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x3C5D1D0", Offset = "0x3C5D1D0", VA = "0x3C5D1D0", Slot = "5")]
	public void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x3C5D2B0", Offset = "0x3C5D2B0", VA = "0x3C5D2B0", Slot = "6")]
	public void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3C5D3C0", Offset = "0x3C5D3C0", VA = "0x3C5D3C0", Slot = "7")]
	public void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x3C5D3D0", Offset = "0x3C5D3D0", VA = "0x3C5D3D0", Slot = "8")]
	public void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x3C5D3E0", Offset = "0x3C5D3E0", VA = "0x3C5D3E0", Slot = "9")]
	public void OnCustomAuthenticationFailed(string debugMessage)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x3C5D3F0", Offset = "0x3C5D3F0", VA = "0x3C5D3F0")]
	public ConnectAndJoin()
	{
	}
}
