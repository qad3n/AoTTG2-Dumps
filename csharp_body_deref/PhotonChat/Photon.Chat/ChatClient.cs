using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000008")]
public class ChatClient : IPhotonPeerListener
{
	[Token(Token = "0x4000020")]
	private const int FriendRequestListMax = 1024;

	[Token(Token = "0x4000021")]
	public const int DefaultMaxSubscribers = 100;

	[Token(Token = "0x4000022")]
	private const byte HttpForwardWebFlag = 1;

	[Token(Token = "0x4000026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string chatRegion;

	[Token(Token = "0x4000027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string ProxyServerAddress;

	[Token(Token = "0x400002D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public int MessageLimit;

	[Token(Token = "0x400002E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	public int PrivateChatHistoryLength;

	[Token(Token = "0x400002F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public readonly Dictionary<string, ChatChannel> PublicChannels;

	[Token(Token = "0x4000030")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public readonly Dictionary<string, ChatChannel> PrivateChannels;

	[Token(Token = "0x4000031")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly HashSet<string> PublicChannelsUnsubscribing;

	[Token(Token = "0x4000032")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private readonly IChatClientListener listener;

	[Token(Token = "0x4000033")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public ChatPeer chatPeer;

	[Token(Token = "0x4000034")]
	private const string ChatAppName = "chat";

	[Token(Token = "0x4000035")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool didAuthenticate;

	[Token(Token = "0x4000036")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int? statusToSetWhenConnected;

	[Token(Token = "0x4000037")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private object messageToSetWhenConnected;

	[Token(Token = "0x4000038")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private int msDeltaForServiceCalls;

	[Token(Token = "0x4000039")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA4")]
	private int msTimestampOfLastServiceCall;

	[Token(Token = "0x17000009")]
	public bool EnableProtocolFallback
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x3BBC970", Offset = "0x3BBC970", VA = "0x3BBC970")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x3BBC980", Offset = "0x3BBC980", VA = "0x3BBC980")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public string NameServerAddress
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x3BBC990", Offset = "0x3BBC990", VA = "0x3BBC990")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x3BBC9A0", Offset = "0x3BBC9A0", VA = "0x3BBC9A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public string FrontendAddress
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x3BBC9B0", Offset = "0x3BBC9B0", VA = "0x3BBC9B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x3BBC9C0", Offset = "0x3BBC9C0", VA = "0x3BBC9C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public string ChatRegion
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x3BBC9D0", Offset = "0x3BBC9D0", VA = "0x3BBC9D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x3BBC9E0", Offset = "0x3BBC9E0", VA = "0x3BBC9E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public ChatState State
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x3BBC9F0", Offset = "0x3BBC9F0", VA = "0x3BBC9F0")]
		[CompilerGenerated]
		get
		{
			return default(ChatState);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x3BBCA00", Offset = "0x3BBCA00", VA = "0x3BBCA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public ChatDisconnectCause DisconnectedCause
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x3BBCA10", Offset = "0x3BBCA10", VA = "0x3BBCA10")]
		[CompilerGenerated]
		get
		{
			return default(ChatDisconnectCause);
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x3BBCA20", Offset = "0x3BBCA20", VA = "0x3BBCA20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool CanChat
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x3BBCA30", Offset = "0x3BBCA30", VA = "0x3BBCA30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	private bool HasPeer
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x3BBCA50", Offset = "0x3BBCA50", VA = "0x3BBCA50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public string AppVersion
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x3BBCB00", Offset = "0x3BBCB00", VA = "0x3BBCB00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x3BBCB10", Offset = "0x3BBCB10", VA = "0x3BBCB10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public string AppId
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x3BBCB20", Offset = "0x3BBCB20", VA = "0x3BBCB20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x3BBCB30", Offset = "0x3BBCB30", VA = "0x3BBCB30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public AuthenticationValues AuthValues
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x3BBCB40", Offset = "0x3BBCB40", VA = "0x3BBCB40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x3BBCB50", Offset = "0x3BBCB50", VA = "0x3BBCB50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public string UserId
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x3BBCB60", Offset = "0x3BBCB60", VA = "0x3BBCB60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x3BBCB80", Offset = "0x3BBCB80", VA = "0x3BBCB80")]
		private set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public bool UseBackgroundWorkerForSending
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x3BBCC20", Offset = "0x3BBCC20", VA = "0x3BBCC20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x3BBCC30", Offset = "0x3BBCC30", VA = "0x3BBCC30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public ConnectionProtocol TransportProtocol
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x3BBCC40", Offset = "0x3BBCC40", VA = "0x3BBCC40")]
		get
		{
			return default(ConnectionProtocol);
		}
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x3BBCC60", Offset = "0x3BBCC60", VA = "0x3BBCC60")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public Dictionary<ConnectionProtocol, Type> SocketImplementationConfig
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x3BBCDF0", Offset = "0x3BBCDF0", VA = "0x3BBCDF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public DebugLevel DebugOut
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x3BBDD10", Offset = "0x3BBDD10", VA = "0x3BBDD10")]
		get
		{
			return default(DebugLevel);
		}
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x3BBD240", Offset = "0x3BBD240", VA = "0x3BBD240")]
		set
		{
		}
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3BBCA60", Offset = "0x3BBCA60", VA = "0x3BBCA60")]
	public bool CanChatInChannel(string channelName)
	{
		return default(bool);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x3BBCE10", Offset = "0x3BBCE10", VA = "0x3BBCE10")]
	public ChatClient(IChatClientListener listener, ConnectionProtocol protocol = ConnectionProtocol.Udp)
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x3BBD0B0", Offset = "0x3BBD0B0", VA = "0x3BBD0B0")]
	public bool ConnectUsingSettings(ChatAppSettings appSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x3BBD260", Offset = "0x3BBD260", VA = "0x3BBD260")]
	public bool Connect(string appId, string appVersion, AuthenticationValues authValues)
	{
		return default(bool);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x3BBD4C0", Offset = "0x3BBD4C0", VA = "0x3BBD4C0")]
	public bool ConnectAndSetStatus(string appId, string appVersion, AuthenticationValues authValues, [Optional][DefaultParameterValue(2)] int status, [Optional] object message)
	{
		return default(bool);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x3BBD560", Offset = "0x3BBD560", VA = "0x3BBD560")]
	public void Service()
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x3BBD600", Offset = "0x3BBD600", VA = "0x3BBD600")]
	private bool SendOutgoingInBackground()
	{
		return default(bool);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x3BBD640", Offset = "0x3BBD640", VA = "0x3BBD640")]
	[Obsolete("Better use UseBackgroundWorkerForSending and Service().")]
	public void SendAcksOnly()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x3BBD660", Offset = "0x3BBD660", VA = "0x3BBD660")]
	public void Disconnect(ChatDisconnectCause cause = ChatDisconnectCause.DisconnectByClientLogic)
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x3BBD6C0", Offset = "0x3BBD6C0", VA = "0x3BBD6C0")]
	public void StopThread()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3BBD6E0", Offset = "0x3BBD6E0", VA = "0x3BBD6E0")]
	public bool Subscribe(string[] channels)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x3BBD8A0", Offset = "0x3BBD8A0", VA = "0x3BBD8A0")]
	public bool Subscribe(string[] channels, int[] lastMsgIds)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x3BBD6F0", Offset = "0x3BBD6F0", VA = "0x3BBD6F0")]
	public bool Subscribe(string[] channels, int messagesFromHistory)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x3BBDE60", Offset = "0x3BBDE60", VA = "0x3BBDE60")]
	public bool Unsubscribe(string[] channels)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x3BBE080", Offset = "0x3BBE080", VA = "0x3BBE080")]
	public bool PublishMessage(string channelName, object message, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x3BBE3A0", Offset = "0x3BBE3A0", VA = "0x3BBE3A0")]
	internal bool PublishMessageUnreliable(string channelName, object message, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x3BBE090", Offset = "0x3BBE090", VA = "0x3BBE090")]
	private bool publishMessage(string channelName, object message, bool reliable, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x3BBE3B0", Offset = "0x3BBE3B0", VA = "0x3BBE3B0")]
	public bool SendPrivateMessage(string target, object message, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x3BBE3D0", Offset = "0x3BBE3D0", VA = "0x3BBE3D0")]
	public bool SendPrivateMessage(string target, object message, bool encrypt, bool forwardAsWebhook)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x3BBE710", Offset = "0x3BBE710", VA = "0x3BBE710")]
	internal bool SendPrivateMessageUnreliable(string target, object message, bool encrypt, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x3BBE3F0", Offset = "0x3BBE3F0", VA = "0x3BBE3F0")]
	private bool sendPrivateMessage(string target, object message, bool encrypt, bool reliable, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x3BBE720", Offset = "0x3BBE720", VA = "0x3BBE720")]
	private bool SetOnlineStatus(int status, object message, bool skipMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3BBE970", Offset = "0x3BBE970", VA = "0x3BBE970")]
	public bool SetOnlineStatus(int status)
	{
		return default(bool);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x3BBE980", Offset = "0x3BBE980", VA = "0x3BBE980")]
	public bool SetOnlineStatus(int status, object message)
	{
		return default(bool);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x3BBE990", Offset = "0x3BBE990", VA = "0x3BBE990")]
	public bool AddFriends(string[] friends)
	{
		return default(bool);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x3BBED10", Offset = "0x3BBED10", VA = "0x3BBED10")]
	public bool RemoveFriends(string[] friends)
	{
		return default(bool);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x3BBF090", Offset = "0x3BBF090", VA = "0x3BBF090")]
	public string GetPrivateChannelNameByUser(string userName)
	{
		return null;
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3BBF0F0", Offset = "0x3BBF0F0", VA = "0x3BBF0F0")]
	public bool TryGetChannel(string channelName, bool isPrivate, out ChatChannel channel)
	{
		return default(bool);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x3BBF160", Offset = "0x3BBF160", VA = "0x3BBF160")]
	public bool TryGetChannel(string channelName, out ChatChannel channel)
	{
		return default(bool);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3BBF1F0", Offset = "0x3BBF1F0", VA = "0x3BBF1F0")]
	public bool TryGetPrivateChannelByUser(string userId, out ChatChannel channel)
	{
		return default(bool);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3BBF2B0", Offset = "0x3BBF2B0", VA = "0x3BBF2B0", Slot = "4")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EDebugReturn(DebugLevel level, string message)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3BBF360", Offset = "0x3BBF360", VA = "0x3BBF360", Slot = "7")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EOnEvent(EventData eventData)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3BC0B70", Offset = "0x3BC0B70", VA = "0x3BC0B70", Slot = "5")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EOnOperationResponse(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3BC1610", Offset = "0x3BC1610", VA = "0x3BC1610", Slot = "6")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EOnStatusChanged(StatusCode statusCode)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3BC1E80", Offset = "0x3BC1E80", VA = "0x3BC1E80")]
	private void TryAuthenticateOnNameServer()
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3BBDD30", Offset = "0x3BBDD30", VA = "0x3BBDD30")]
	private bool SendChannelOperation(string[] channels, byte operation, int historyLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x3BBF700", Offset = "0x3BBF700", VA = "0x3BBF700")]
	private void HandlePrivateMessageEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x3BBF3B0", Offset = "0x3BBF3B0", VA = "0x3BBF3B0")]
	private void HandleChatMessagesEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x3BBFBC0", Offset = "0x3BBFBC0", VA = "0x3BBFBC0")]
	private void HandleSubscribeEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x3BC0040", Offset = "0x3BC0040", VA = "0x3BC0040")]
	private void HandleUnsubscribeEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x3BC0D60", Offset = "0x3BC0D60", VA = "0x3BC0D60")]
	private void HandleAuthResponse(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3BBFA10", Offset = "0x3BBFA10", VA = "0x3BBFA10")]
	private void HandleStatusUpdate(EventData eventData)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3BC2260", Offset = "0x3BC2260", VA = "0x3BC2260")]
	private bool ConnectToFrontEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x3BC1FD0", Offset = "0x3BC1FD0", VA = "0x3BC1FD0")]
	private bool AuthenticateOnFrontEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x3BC0730", Offset = "0x3BC0730", VA = "0x3BC0730")]
	private void HandleUserUnsubscribedEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x3BC01F0", Offset = "0x3BC01F0", VA = "0x3BC01F0")]
	private void HandleUserSubscribedEvent(EventData eventData)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x3BC2720", Offset = "0x3BC2720", VA = "0x3BC2720")]
	public bool Subscribe(string channel, [Optional][DefaultParameterValue(0)] int lastMsgId, [Optional][DefaultParameterValue(-1)] int messagesFromHistory, [Optional] ChannelCreationOptions creationOptions)
	{
		return default(bool);
	}
}
