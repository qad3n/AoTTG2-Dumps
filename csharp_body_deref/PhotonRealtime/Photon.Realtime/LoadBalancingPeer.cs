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

[Token(Token = "0x2000023")]
public class LoadBalancingPeer : PhotonPeer
{
	[Token(Token = "0x40000CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private readonly Pool<ParameterDictionary> paramDictionaryPool;

	[Token(Token = "0x1700002D")]
	[Obsolete("Use RegionHandler.PingImplementation directly.")]
	protected internal static Type PingImplementation
	{
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x3ECB910", Offset = "0x3ECB910", VA = "0x3ECB910")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x3ECB950", Offset = "0x3ECB950", VA = "0x3ECB950")]
		set
		{
		}
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3ECB9A0", Offset = "0x3ECB9A0", VA = "0x3ECB9A0")]
	public LoadBalancingPeer(ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3EBF690", Offset = "0x3EBF690", VA = "0x3EBF690")]
	public LoadBalancingPeer(IPhotonPeerListener listener, ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3ECBC30", Offset = "0x3ECBC30", VA = "0x3ECBC30")]
	[Conditional("SUPPORTED_UNITY")]
	private void ConfigUnitySockets()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3ECBDF0", Offset = "0x3ECBDF0", VA = "0x3ECBDF0", Slot = "17")]
	public virtual bool OpGetRegions(string appId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3ECBF00", Offset = "0x3ECBF00", VA = "0x3ECBF00", Slot = "18")]
	public virtual bool OpJoinLobby([Optional] TypedLobby lobby)
	{
		return default(bool);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3ECC100", Offset = "0x3ECC100", VA = "0x3ECC100", Slot = "19")]
	public virtual bool OpLeaveLobby()
	{
		return default(bool);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x3ECC230", Offset = "0x3ECC230", VA = "0x3ECC230")]
	private void RoomOptionsToOpParameters(Dictionary<byte, object> op, RoomOptions roomOptions, bool usePropertiesKey = false)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3ECC660", Offset = "0x3ECC660", VA = "0x3ECC660", Slot = "20")]
	public virtual bool OpCreateRoom(EnterRoomParams opParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x3ECC9C0", Offset = "0x3ECC9C0", VA = "0x3ECC9C0", Slot = "21")]
	public virtual bool OpJoinRoom(EnterRoomParams opParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x3ECCDD0", Offset = "0x3ECCDD0", VA = "0x3ECCDD0", Slot = "22")]
	public virtual bool OpJoinRandomRoom(OpJoinRandomRoomParams opJoinRandomRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x3ECD150", Offset = "0x3ECD150", VA = "0x3ECD150", Slot = "23")]
	public virtual bool OpJoinRandomOrCreateRoom(OpJoinRandomRoomParams opJoinRandomRoomParams, EnterRoomParams createRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x3ECD550", Offset = "0x3ECD550", VA = "0x3ECD550", Slot = "24")]
	public virtual bool OpLeaveRoom(bool becomeInactive, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x3ECD6A0", Offset = "0x3ECD6A0", VA = "0x3ECD6A0", Slot = "25")]
	public virtual bool OpGetGameList(TypedLobby lobby, string queryData)
	{
		return default(bool);
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3ECDAD0", Offset = "0x3ECDAD0", VA = "0x3ECDAD0", Slot = "26")]
	public virtual bool OpFindFriends(string[] friendsToFind, [Optional] FindFriendsOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x3ECDC50", Offset = "0x3ECDC50", VA = "0x3ECDC50")]
	public bool OpSetCustomPropertiesOfActor(int actorNr, Hashtable actorProperties)
	{
		return default(bool);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3EC27B0", Offset = "0x3EC27B0", VA = "0x3EC27B0")]
	protected internal bool OpSetPropertiesOfActor(int actorNr, Hashtable actorProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webflags)
	{
		return default(bool);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3ECDCB0", Offset = "0x3ECDCB0", VA = "0x3ECDCB0")]
	protected bool OpSetPropertyOfRoom(byte propCode, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3ECDD30", Offset = "0x3ECDD30", VA = "0x3ECDD30")]
	public bool OpSetCustomPropertiesOfRoom(Hashtable gameProperties)
	{
		return default(bool);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3EC3020", Offset = "0x3EC3020", VA = "0x3EC3020")]
	protected internal bool OpSetPropertiesOfRoom(Hashtable gameProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webflags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3ECDD90", Offset = "0x3ECDD90", VA = "0x3ECDD90", Slot = "27")]
	public virtual bool OpAuthenticate(string appId, NetworkCredential appVersion, AuthenticationValues authValues, string regionCode, bool getLobbyStatistics)
	{
		return default(bool);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x3ECE100", Offset = "0x3ECE100", VA = "0x3ECE100", Slot = "28")]
	public virtual bool OpAuthenticateOnce(string appId, NetworkCredential appVersion, AuthenticationValues authValues, string regionCode, EncryptionMode encryptionMode, ConnectionProtocol expectedProtocol)
	{
		return default(bool);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x3ECE670", Offset = "0x3ECE670", VA = "0x3ECE670", Slot = "29")]
	public virtual bool OpChangeGroups(byte[] groupsToRemove, byte[] groupsToAdd)
	{
		return default(bool);
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x3ECE830", Offset = "0x3ECE830", VA = "0x3ECE830", Slot = "30")]
	public virtual bool OpRaiseEvent(byte eventCode, object customEventContent, RaiseEventOptions raiseEventOptions, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x3ECEBC0", Offset = "0x3ECEBC0", VA = "0x3ECEBC0", Slot = "31")]
	public virtual bool OpSettings(bool receiveLobbyStats)
	{
		return default(bool);
	}
}
