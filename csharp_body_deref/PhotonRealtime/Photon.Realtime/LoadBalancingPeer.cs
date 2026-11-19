// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.LoadBalancingPeer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Net;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000021")]
public class LoadBalancingPeer : PhotonPeer
{
	[Token(Token = "0x40000CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private readonly Pool<ParameterDictionary> paramDictionaryPool;

	[Token(Token = "0x1700002D")]
	[Obsolete("Use RegionHandler.PingImplementation directly.")]
	protected internal static Type PingImplementation
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x56B7FA0", Offset = "0x56B6FA0", VA = "0x56B7FA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x56B7FE0", Offset = "0x56B6FE0", VA = "0x56B7FE0")]
		set
		{
		}
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x56B8030", Offset = "0x56B7030", VA = "0x56B8030")]
	public LoadBalancingPeer(ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x56AC150", Offset = "0x56AB150", VA = "0x56AC150")]
	public LoadBalancingPeer(IPhotonPeerListener listener, ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x56B82B0", Offset = "0x56B72B0", VA = "0x56B82B0")]
	[Conditional("SUPPORTED_UNITY")]
	private void ConfigUnitySockets()
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x56B8470", Offset = "0x56B7470", VA = "0x56B8470", Slot = "17")]
	public virtual bool OpGetRegions(string appId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x56B8570", Offset = "0x56B7570", VA = "0x56B8570", Slot = "18")]
	public virtual bool OpJoinLobby([Optional] TypedLobby lobby)
	{
		return default(bool);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x56B8770", Offset = "0x56B7770", VA = "0x56B8770", Slot = "19")]
	public virtual bool OpLeaveLobby()
	{
		return default(bool);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x56B88A0", Offset = "0x56B78A0", VA = "0x56B88A0")]
	private void RoomOptionsToOpParameters(Dictionary<byte, object> op, RoomOptions roomOptions, bool usePropertiesKey = false)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x56B8CD0", Offset = "0x56B7CD0", VA = "0x56B8CD0", Slot = "20")]
	public virtual bool OpCreateRoom(EnterRoomParams opParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x56B9040", Offset = "0x56B8040", VA = "0x56B9040", Slot = "21")]
	public virtual bool OpJoinRoom(EnterRoomParams opParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x56B9460", Offset = "0x56B8460", VA = "0x56B9460", Slot = "22")]
	public virtual bool OpJoinRandomRoom(OpJoinRandomRoomParams opJoinRandomRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x56B97E0", Offset = "0x56B87E0", VA = "0x56B97E0", Slot = "23")]
	public virtual bool OpJoinRandomOrCreateRoom(OpJoinRandomRoomParams opJoinRandomRoomParams, EnterRoomParams createRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x56B9BE0", Offset = "0x56B8BE0", VA = "0x56B9BE0", Slot = "24")]
	public virtual bool OpLeaveRoom(bool becomeInactive, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x56B9D30", Offset = "0x56B8D30", VA = "0x56B9D30", Slot = "25")]
	public virtual bool OpGetGameList(TypedLobby lobby, string queryData)
	{
		return default(bool);
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x56BA160", Offset = "0x56B9160", VA = "0x56BA160", Slot = "26")]
	public virtual bool OpFindFriends(string[] friendsToFind, [Optional] FindFriendsOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x56BA2E0", Offset = "0x56B92E0", VA = "0x56BA2E0")]
	public bool OpSetCustomPropertiesOfActor(int actorNr, Hashtable actorProperties)
	{
		return default(bool);
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x56AF270", Offset = "0x56AE270", VA = "0x56AF270")]
	protected internal bool OpSetPropertiesOfActor(int actorNr, Hashtable actorProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webflags)
	{
		return default(bool);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x56BA340", Offset = "0x56B9340", VA = "0x56BA340")]
	protected bool OpSetPropertyOfRoom(byte propCode, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x56BA3C0", Offset = "0x56B93C0", VA = "0x56BA3C0")]
	public bool OpSetCustomPropertiesOfRoom(Hashtable gameProperties)
	{
		return default(bool);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x56AFAD0", Offset = "0x56AEAD0", VA = "0x56AFAD0")]
	protected internal bool OpSetPropertiesOfRoom(Hashtable gameProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webflags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x56BA420", Offset = "0x56B9420", VA = "0x56BA420", Slot = "27")]
	public virtual bool OpAuthenticate(string appId, NetworkCredential appVersion, AuthenticationValues authValues, string regionCode, bool getLobbyStatistics)
	{
		return default(bool);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x56BA790", Offset = "0x56B9790", VA = "0x56BA790", Slot = "28")]
	public virtual bool OpAuthenticateOnce(string appId, NetworkCredential appVersion, AuthenticationValues authValues, string regionCode, EncryptionMode encryptionMode, ConnectionProtocol expectedProtocol)
	{
		return default(bool);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x56BACF0", Offset = "0x56B9CF0", VA = "0x56BACF0", Slot = "29")]
	public virtual bool OpChangeGroups(byte[] groupsToRemove, byte[] groupsToAdd)
	{
		return default(bool);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x56BAEB0", Offset = "0x56B9EB0", VA = "0x56BAEB0", Slot = "30")]
	public virtual bool OpRaiseEvent(byte eventCode, object customEventContent, RaiseEventOptions raiseEventOptions, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x56BB200", Offset = "0x56BA200", VA = "0x56BB200", Slot = "31")]
	public virtual bool OpSettings(bool receiveLobbyStats)
	{
		return default(bool);
	}
}
