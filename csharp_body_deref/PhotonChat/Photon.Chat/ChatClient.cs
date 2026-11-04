// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Chat.ChatClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChatClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000006")]
public class ChatClient : IPhotonPeerListener
{
	[Token(Token = "0x400001B")]
	private const int FriendRequestListMax = 1024;

	[Token(Token = "0x400001C")]
	public const int DefaultMaxSubscribers = 100;

	[Token(Token = "0x400001D")]
	private const byte HttpForwardWebFlag = 1;

	[Token(Token = "0x4000021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string chatRegion;

	[Token(Token = "0x4000022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string ProxyServerAddress;

	[Token(Token = "0x4000028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public int MessageLimit;

	[Token(Token = "0x4000029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	public int PrivateChatHistoryLength;

	[Token(Token = "0x400002A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public readonly Dictionary<string, ChatChannel> PublicChannels;

	[Token(Token = "0x400002B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public readonly Dictionary<string, ChatChannel> PrivateChannels;

	[Token(Token = "0x400002C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly HashSet<string> PublicChannelsUnsubscribing;

	[Token(Token = "0x400002D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private readonly IChatClientListener listener;

	[Token(Token = "0x400002E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public ChatPeer chatPeer;

	[Token(Token = "0x400002F")]
	private const string ChatAppName = "chat";

	[Token(Token = "0x4000030")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool didAuthenticate;

	[Token(Token = "0x4000031")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int? statusToSetWhenConnected;

	[Token(Token = "0x4000032")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private object messageToSetWhenConnected;

	[Token(Token = "0x4000033")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private int msDeltaForServiceCalls;

	[Token(Token = "0x4000034")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA4")]
	private int msTimestampOfLastServiceCall;

	[Token(Token = "0x17000009")]
	public bool EnableProtocolFallback
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public string NameServerAddress
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public string FrontendAddress
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public string ChatRegion
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public ChatState State
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		[CompilerGenerated]
		get
		{
			return default(ChatState);
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public ChatDisconnectCause DisconnectedCause
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x19CF1C0", Offset = "0x19CD7C0", VA = "0x1819CF1C0")]
		[CompilerGenerated]
		get
		{
			return default(ChatDisconnectCause);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x1CFE070", Offset = "0x1CFC670", VA = "0x181CFE070")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool CanChat
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x1D0FFF0", Offset = "0x1D0E5F0", VA = "0x181D0FFF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	private bool HasPeer
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x1D10030", Offset = "0x1D0E630", VA = "0x181D10030")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public string AppVersion
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public string AppId
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public AuthenticationValues AuthValues
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public string UserId
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x1D10090", Offset = "0x1D0E690", VA = "0x181D10090")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x1D10670", Offset = "0x1D0EC70", VA = "0x181D10670")]
		private set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public bool UseBackgroundWorkerForSending
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x1CAC5A0", Offset = "0x1CAABA0", VA = "0x181CAC5A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x1CAC5D0", Offset = "0x1CAABD0", VA = "0x181CAC5D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public ConnectionProtocol TransportProtocol
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x1D10060", Offset = "0x1D0E660", VA = "0x181D10060")]
		get
		{
			return default(ConnectionProtocol);
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x1D10520", Offset = "0x1D0EB20", VA = "0x181D10520")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public Dictionary<ConnectionProtocol, Type> SocketImplementationConfig
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x1D10040", Offset = "0x1D0E640", VA = "0x181D10040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public DebugLevel DebugOut
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x1D10010", Offset = "0x1D0E610", VA = "0x181D10010")]
		get
		{
			return default(DebugLevel);
		}
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x1D10500", Offset = "0x1D0EB00", VA = "0x181D10500")]
		set
		{
		}
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x1D0BCD0", Offset = "0x1D0A2D0", VA = "0x181D0BCD0")]
	public bool CanChatInChannel(string channelName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x1D0FE40", Offset = "0x1D0E440", VA = "0x181D0FE40")]
	public ChatClient(IChatClientListener listener, ConnectionProtocol protocol = ConnectionProtocol.Udp)
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x1D0BF60", Offset = "0x1D0A560", VA = "0x181D0BF60")]
	public bool ConnectUsingSettings(ChatAppSettings appSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x1D0C1E0", Offset = "0x1D0A7E0", VA = "0x181D0C1E0")]
	public bool Connect(string appId, string appVersion, AuthenticationValues authValues)
	{
		return default(bool);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x1D0BD70", Offset = "0x1D0A370", VA = "0x181D0BD70")]
	public bool ConnectAndSetStatus(string appId, string appVersion, AuthenticationValues authValues, [Optional][DefaultParameterValue(2)] int status, [Optional] object message)
	{
		return default(bool);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x1D0ECA0", Offset = "0x1D0D2A0", VA = "0x181D0ECA0")]
	public void Service()
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x1D0EBC0", Offset = "0x1D0D1C0", VA = "0x181D0EBC0")]
	private bool SendOutgoingInBackground()
	{
		return default(bool);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x1D0EA50", Offset = "0x1D0D050", VA = "0x181D0EA50")]
	[Obsolete("Better use UseBackgroundWorkerForSending and Service().")]
	public void SendAcksOnly()
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x1D0C420", Offset = "0x1D0AA20", VA = "0x181D0C420")]
	public void Disconnect(ChatDisconnectCause cause = ChatDisconnectCause.DisconnectByClientLogic)
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x1D0EF60", Offset = "0x1D0D560", VA = "0x181D0EF60")]
	public void StopThread()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x1D0F5F0", Offset = "0x1D0DBF0", VA = "0x181D0F5F0")]
	public bool Subscribe(string[] channels)
	{
		return default(bool);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x1D0F6F0", Offset = "0x1D0DCF0", VA = "0x181D0F6F0")]
	public bool Subscribe(string[] channels, int[] lastMsgIds)
	{
		return default(bool);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x1D0EF90", Offset = "0x1D0D590", VA = "0x181D0EF90")]
	public bool Subscribe(string[] channels, int messagesFromHistory)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x1D0FCE0", Offset = "0x1D0E2E0", VA = "0x181D0FCE0")]
	public bool Unsubscribe(string[] channels)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x1D0E7D0", Offset = "0x1D0CDD0", VA = "0x181D0E7D0")]
	public bool PublishMessage(string channelName, object message, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x1D0E7B0", Offset = "0x1D0CDB0", VA = "0x181D0E7B0")]
	internal bool PublishMessageUnreliable(string channelName, object message, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x1D100B0", Offset = "0x1D0E6B0", VA = "0x181D100B0")]
	private bool publishMessage(string channelName, object message, bool reliable, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x1D0EC40", Offset = "0x1D0D240", VA = "0x181D0EC40")]
	public bool SendPrivateMessage(string target, object message, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x1D0EC70", Offset = "0x1D0D270", VA = "0x181D0EC70")]
	public bool SendPrivateMessage(string target, object message, bool encrypt, bool forwardAsWebhook)
	{
		return default(bool);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x1D0EC10", Offset = "0x1D0D210", VA = "0x181D0EC10")]
	internal bool SendPrivateMessageUnreliable(string target, object message, bool encrypt, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x1D102D0", Offset = "0x1D0E8D0", VA = "0x181D102D0")]
	private bool sendPrivateMessage(string target, object message, bool encrypt, bool reliable, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x1D0ED40", Offset = "0x1D0D340", VA = "0x181D0ED40")]
	private bool SetOnlineStatus(int status, object message, bool skipMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x1D0EF40", Offset = "0x1D0D540", VA = "0x181D0EF40")]
	public bool SetOnlineStatus(int status)
	{
		return default(bool);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x1D0EF20", Offset = "0x1D0D520", VA = "0x181D0EF20")]
	public bool SetOnlineStatus(int status, object message)
	{
		return default(bool);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x1D0B850", Offset = "0x1D09E50", VA = "0x181D0B850")]
	public bool AddFriends(string[] friends)
	{
		return default(bool);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x1D0E7F0", Offset = "0x1D0CDF0", VA = "0x181D0E7F0")]
	public bool RemoveFriends(string[] friends)
	{
		return default(bool);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x1D0CD20", Offset = "0x1D0B320", VA = "0x181D0CD20")]
	public string GetPrivateChannelNameByUser(string userName)
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x1D0FB90", Offset = "0x1D0E190", VA = "0x181D0FB90")]
	public bool TryGetChannel(string channelName, bool isPrivate, out ChatChannel channel)
	{
		return default(bool);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x1D0FAF0", Offset = "0x1D0E0F0", VA = "0x181D0FAF0")]
	public bool TryGetChannel(string channelName, out ChatChannel channel)
	{
		return default(bool);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x1D0FC00", Offset = "0x1D0E200", VA = "0x181D0FC00")]
	public bool TryGetPrivateChannelByUser(string userId, out ChatChannel channel)
	{
		return default(bool);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x1D0C490", Offset = "0x1D0AA90", VA = "0x181D0C490", Slot = "4")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EDebugReturn(DebugLevel level, string message)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x1D0C500", Offset = "0x1D0AB00", VA = "0x181D0C500", Slot = "7")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EOnEvent(EventData eventData)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x1D0C5B0", Offset = "0x1D0ABB0", VA = "0x181D0C5B0", Slot = "5")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EOnOperationResponse(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x1D0C720", Offset = "0x1D0AD20", VA = "0x181D0C720", Slot = "6")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EOnStatusChanged(StatusCode statusCode)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x1D0F9E0", Offset = "0x1D0DFE0", VA = "0x181D0F9E0")]
	private void TryAuthenticateOnNameServer()
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x1D0EA80", Offset = "0x1D0D080", VA = "0x181D0EA80")]
	private bool SendChannelOperation(string[] channels, byte operation, int historyLength)
	{
		return default(bool);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x1D0D670", Offset = "0x1D0BC70", VA = "0x181D0D670")]
	private void HandlePrivateMessageEvent(EventData eventData)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x1D0D310", Offset = "0x1D0B910", VA = "0x181D0D310")]
	private void HandleChatMessagesEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x1D0DC80", Offset = "0x1D0C280", VA = "0x181D0DC80")]
	private void HandleSubscribeEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x1D0E050", Offset = "0x1D0C650", VA = "0x181D0E050")]
	private void HandleUnsubscribeEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x1D0CD80", Offset = "0x1D0B380", VA = "0x181D0CD80")]
	private void HandleAuthResponse(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x1D0DAB0", Offset = "0x1D0C0B0", VA = "0x181D0DAB0")]
	private void HandleStatusUpdate(EventData eventData)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x1D0BE10", Offset = "0x1D0A410", VA = "0x181D0BE10")]
	private bool ConnectToFrontEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x1D0BAB0", Offset = "0x1D0A0B0", VA = "0x181D0BAB0")]
	private bool AuthenticateOnFrontEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x1D0E530", Offset = "0x1D0CB30", VA = "0x181D0E530")]
	private void HandleUserUnsubscribedEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x1D0E1F0", Offset = "0x1D0C7F0", VA = "0x181D0E1F0")]
	private void HandleUserSubscribedEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x1D0F0A0", Offset = "0x1D0D6A0", VA = "0x181D0F0A0")]
	public bool Subscribe(string channel, [Optional][DefaultParameterValue(0)] int lastMsgId, [Optional][DefaultParameterValue(-1)] int messagesFromHistory, [Optional] ChannelCreationOptions creationOptions)
	{
		return default(bool);
	}
}
