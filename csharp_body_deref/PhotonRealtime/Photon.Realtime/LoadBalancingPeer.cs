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
		[Address(RVA = "0x3BD5FC0", Offset = "0x3BD5FC0", VA = "0x3BD5FC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x3BD6000", Offset = "0x3BD6000", VA = "0x3BD6000")]
		set
		{
		}
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3BD6050", Offset = "0x3BD6050", VA = "0x3BD6050")]
	public LoadBalancingPeer(ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3BC9D40", Offset = "0x3BC9D40", VA = "0x3BC9D40")]
	public LoadBalancingPeer(IPhotonPeerListener listener, ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3BD62E0", Offset = "0x3BD62E0", VA = "0x3BD62E0")]
	[Conditional("SUPPORTED_UNITY")]
	private void ConfigUnitySockets()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3BD64A0", Offset = "0x3BD64A0", VA = "0x3BD64A0", Slot = "17")]
	public virtual bool OpGetRegions(string appId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3BD65B0", Offset = "0x3BD65B0", VA = "0x3BD65B0", Slot = "18")]
	public virtual bool OpJoinLobby([Optional] TypedLobby lobby)
	{
		return default(bool);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3BD67B0", Offset = "0x3BD67B0", VA = "0x3BD67B0", Slot = "19")]
	public virtual bool OpLeaveLobby()
	{
		return default(bool);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x3BD68E0", Offset = "0x3BD68E0", VA = "0x3BD68E0")]
	private void RoomOptionsToOpParameters(Dictionary<byte, object> op, RoomOptions roomOptions, bool usePropertiesKey = false)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3BD6D10", Offset = "0x3BD6D10", VA = "0x3BD6D10", Slot = "20")]
	public virtual bool OpCreateRoom(EnterRoomParams opParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x3BD7070", Offset = "0x3BD7070", VA = "0x3BD7070", Slot = "21")]
	public virtual bool OpJoinRoom(EnterRoomParams opParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x3BD7480", Offset = "0x3BD7480", VA = "0x3BD7480", Slot = "22")]
	public virtual bool OpJoinRandomRoom(OpJoinRandomRoomParams opJoinRandomRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x3BD7800", Offset = "0x3BD7800", VA = "0x3BD7800", Slot = "23")]
	public virtual bool OpJoinRandomOrCreateRoom(OpJoinRandomRoomParams opJoinRandomRoomParams, EnterRoomParams createRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x3BD7C00", Offset = "0x3BD7C00", VA = "0x3BD7C00", Slot = "24")]
	public virtual bool OpLeaveRoom(bool becomeInactive, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x3BD7D50", Offset = "0x3BD7D50", VA = "0x3BD7D50", Slot = "25")]
	public virtual bool OpGetGameList(TypedLobby lobby, string queryData)
	{
		return default(bool);
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3BD8180", Offset = "0x3BD8180", VA = "0x3BD8180", Slot = "26")]
	public virtual bool OpFindFriends(string[] friendsToFind, [Optional] FindFriendsOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x3BD8300", Offset = "0x3BD8300", VA = "0x3BD8300")]
	public bool OpSetCustomPropertiesOfActor(int actorNr, Hashtable actorProperties)
	{
		return default(bool);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3BCCE60", Offset = "0x3BCCE60", VA = "0x3BCCE60")]
	protected internal bool OpSetPropertiesOfActor(int actorNr, Hashtable actorProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webflags)
	{
		return default(bool);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3BD8360", Offset = "0x3BD8360", VA = "0x3BD8360")]
	protected bool OpSetPropertyOfRoom(byte propCode, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3BD83E0", Offset = "0x3BD83E0", VA = "0x3BD83E0")]
	public bool OpSetCustomPropertiesOfRoom(Hashtable gameProperties)
	{
		return default(bool);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3BCD6D0", Offset = "0x3BCD6D0", VA = "0x3BCD6D0")]
	protected internal bool OpSetPropertiesOfRoom(Hashtable gameProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webflags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3BD8440", Offset = "0x3BD8440", VA = "0x3BD8440", Slot = "27")]
	public virtual bool OpAuthenticate(string appId, NetworkCredential appVersion, AuthenticationValues authValues, string regionCode, bool getLobbyStatistics)
	{
		return default(bool);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x3BD87B0", Offset = "0x3BD87B0", VA = "0x3BD87B0", Slot = "28")]
	public virtual bool OpAuthenticateOnce(string appId, NetworkCredential appVersion, AuthenticationValues authValues, string regionCode, EncryptionMode encryptionMode, ConnectionProtocol expectedProtocol)
	{
		return default(bool);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x3BD8D20", Offset = "0x3BD8D20", VA = "0x3BD8D20", Slot = "29")]
	public virtual bool OpChangeGroups(byte[] groupsToRemove, byte[] groupsToAdd)
	{
		return default(bool);
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x3BD8EE0", Offset = "0x3BD8EE0", VA = "0x3BD8EE0", Slot = "30")]
	public virtual bool OpRaiseEvent(byte eventCode, object customEventContent, RaiseEventOptions raiseEventOptions, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x3BD9270", Offset = "0x3BD9270", VA = "0x3BD9270", Slot = "31")]
	public virtual bool OpSettings(bool receiveLobbyStats)
	{
		return default(bool);
	}
}
