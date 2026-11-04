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
		[Address(RVA = "0x1D235B0", Offset = "0x1D21BB0", VA = "0x181D235B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x1D235F0", Offset = "0x1D21BF0", VA = "0x181D235F0")]
		set
		{
		}
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x1D23170", Offset = "0x1D21770", VA = "0x181D23170")]
	public LoadBalancingPeer(ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x1D23530", Offset = "0x1D21B30", VA = "0x181D23530")]
	public LoadBalancingPeer(IPhotonPeerListener listener, ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x1D1FFC0", Offset = "0x1D1E5C0", VA = "0x181D1FFC0")]
	[Conditional("SUPPORTED_UNITY")]
	private void ConfigUnitySockets()
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x1D21230", Offset = "0x1D1F830", VA = "0x181D21230", Slot = "17")]
	public virtual bool OpGetRegions(string appId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x1D21340", Offset = "0x1D1F940", VA = "0x181D21340", Slot = "18")]
	public virtual bool OpJoinLobby([Optional] TypedLobby lobby)
	{
		return default(bool);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x1D21FB0", Offset = "0x1D205B0", VA = "0x181D21FB0", Slot = "19")]
	public virtual bool OpLeaveLobby()
	{
		return default(bool);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x1D22D70", Offset = "0x1D21370", VA = "0x181D22D70")]
	private void RoomOptionsToOpParameters(Dictionary<byte, object> op, RoomOptions roomOptions, bool usePropertiesKey = false)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x1D20B30", Offset = "0x1D1F130", VA = "0x181D20B30", Slot = "20")]
	public virtual bool OpCreateRoom(EnterRoomParams opParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x1D21BE0", Offset = "0x1D201E0", VA = "0x181D21BE0", Slot = "21")]
	public virtual bool OpJoinRoom(EnterRoomParams opParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x1D21890", Offset = "0x1D1FE90", VA = "0x181D21890", Slot = "22")]
	public virtual bool OpJoinRandomRoom(OpJoinRandomRoomParams opJoinRandomRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x1D214C0", Offset = "0x1D1FAC0", VA = "0x181D214C0", Slot = "23")]
	public virtual bool OpJoinRandomOrCreateRoom(OpJoinRandomRoomParams opJoinRandomRoomParams, EnterRoomParams createRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x1D22070", Offset = "0x1D20670", VA = "0x181D22070", Slot = "24")]
	public virtual bool OpLeaveRoom(bool becomeInactive, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x1D20FB0", Offset = "0x1D1F5B0", VA = "0x181D20FB0", Slot = "25")]
	public virtual bool OpGetGameList(TypedLobby lobby, string queryData)
	{
		return default(bool);
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x1D20E50", Offset = "0x1D1F450", VA = "0x181D20E50", Slot = "26")]
	public virtual bool OpFindFriends(string[] friendsToFind, [Optional] FindFriendsOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x1D22560", Offset = "0x1D20B60", VA = "0x181D22560")]
	public bool OpSetCustomPropertiesOfActor(int actorNr, Hashtable actorProperties)
	{
		return default(bool);
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x1D22650", Offset = "0x1D20C50", VA = "0x181D22650")]
	protected internal bool OpSetPropertiesOfActor(int actorNr, Hashtable actorProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webflags)
	{
		return default(bool);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x1D22B50", Offset = "0x1D21150", VA = "0x181D22B50")]
	protected bool OpSetPropertyOfRoom(byte propCode, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x1D225E0", Offset = "0x1D20BE0", VA = "0x181D225E0")]
	public bool OpSetCustomPropertiesOfRoom(Hashtable gameProperties)
	{
		return default(bool);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x1D228F0", Offset = "0x1D20EF0", VA = "0x181D228F0")]
	protected internal bool OpSetPropertiesOfRoom(Hashtable gameProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webflags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x1D206A0", Offset = "0x1D1ECA0", VA = "0x181D206A0", Slot = "27")]
	public virtual bool OpAuthenticate(string appId, NetworkCredential appVersion, AuthenticationValues authValues, string regionCode, bool getLobbyStatistics)
	{
		return default(bool);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x1D20170", Offset = "0x1D1E770", VA = "0x181D20170", Slot = "28")]
	public virtual bool OpAuthenticateOnce(string appId, NetworkCredential appVersion, AuthenticationValues authValues, string regionCode, EncryptionMode encryptionMode, ConnectionProtocol expectedProtocol)
	{
		return default(bool);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x1D209C0", Offset = "0x1D1EFC0", VA = "0x181D209C0", Slot = "29")]
	public virtual bool OpChangeGroups(byte[] groupsToRemove, byte[] groupsToAdd)
	{
		return default(bool);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x1D221B0", Offset = "0x1D207B0", VA = "0x181D221B0", Slot = "30")]
	public virtual bool OpRaiseEvent(byte eventCode, object customEventContent, RaiseEventOptions raiseEventOptions, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x1D22BE0", Offset = "0x1D211E0", VA = "0x181D22BE0", Slot = "31")]
	public virtual bool OpSettings(bool receiveLobbyStats)
	{
		return default(bool);
	}
}
