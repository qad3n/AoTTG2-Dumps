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
		[Address(RVA = "0x5738C80", Offset = "0x5737C80", VA = "0x5738C80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x5738D00", Offset = "0x5737D00", VA = "0x5738D00")]
	private void Start()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x5738DD0", Offset = "0x5737DD0", VA = "0x5738DD0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x5738DA0", Offset = "0x5737DA0", VA = "0x5738DA0")]
	public void ConnectNow()
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x5738E00", Offset = "0x5737E00", VA = "0x5738E00", Slot = "11")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x5738E10", Offset = "0x5737E10", VA = "0x5738E10", Slot = "12")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x5738F50", Offset = "0x5737F50", VA = "0x5738F50", Slot = "10")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x5738F60", Offset = "0x5737F60", VA = "0x5738F60", Slot = "13")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x5738F70", Offset = "0x5737F70", VA = "0x5738F70", Slot = "15")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x57390B0", Offset = "0x57380B0", VA = "0x57390B0", Slot = "14")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x5739230", Offset = "0x5738230", VA = "0x5739230", Slot = "16")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x5739240", Offset = "0x5738240", VA = "0x5739240", Slot = "4")]
	public void OnConnected()
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x5739250", Offset = "0x5738250", VA = "0x5739250", Slot = "5")]
	public void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x5739330", Offset = "0x5738330", VA = "0x5739330", Slot = "6")]
	public void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x5739440", Offset = "0x5738440", VA = "0x5739440", Slot = "7")]
	public void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x5739450", Offset = "0x5738450", VA = "0x5739450", Slot = "8")]
	public void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x5739460", Offset = "0x5738460", VA = "0x5739460", Slot = "9")]
	public void OnCustomAuthenticationFailed(string debugMessage)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x5739470", Offset = "0x5738470", VA = "0x5739470")]
	public ConnectAndJoin()
	{
	}
}
