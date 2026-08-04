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
		[Address(RVA = "0x3F4F1B0", Offset = "0x3F4F1B0", VA = "0x3F4F1B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x3F4F230", Offset = "0x3F4F230", VA = "0x3F4F230")]
	private void Start()
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3F4F300", Offset = "0x3F4F300", VA = "0x3F4F300")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x3F4F2D0", Offset = "0x3F4F2D0", VA = "0x3F4F2D0")]
	public void ConnectNow()
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3F4F330", Offset = "0x3F4F330", VA = "0x3F4F330", Slot = "11")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3F4F340", Offset = "0x3F4F340", VA = "0x3F4F340", Slot = "12")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3F4F480", Offset = "0x3F4F480", VA = "0x3F4F480", Slot = "10")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3F4F490", Offset = "0x3F4F490", VA = "0x3F4F490", Slot = "13")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3F4F4A0", Offset = "0x3F4F4A0", VA = "0x3F4F4A0", Slot = "15")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x3F4F5E0", Offset = "0x3F4F5E0", VA = "0x3F4F5E0", Slot = "14")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x3F4F760", Offset = "0x3F4F760", VA = "0x3F4F760", Slot = "16")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x3F4F770", Offset = "0x3F4F770", VA = "0x3F4F770", Slot = "4")]
	public void OnConnected()
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x3F4F780", Offset = "0x3F4F780", VA = "0x3F4F780", Slot = "5")]
	public void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x3F4F860", Offset = "0x3F4F860", VA = "0x3F4F860", Slot = "6")]
	public void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3F4F970", Offset = "0x3F4F970", VA = "0x3F4F970", Slot = "7")]
	public void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x3F4F980", Offset = "0x3F4F980", VA = "0x3F4F980", Slot = "8")]
	public void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x3F4F990", Offset = "0x3F4F990", VA = "0x3F4F990", Slot = "9")]
	public void OnCustomAuthenticationFailed(string debugMessage)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x3F4F9A0", Offset = "0x3F4F9A0", VA = "0x3F4F9A0")]
	public ConnectAndJoin()
	{
	}
}
