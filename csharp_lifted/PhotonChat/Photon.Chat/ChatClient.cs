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
		[Address(RVA = "0x569F3F0", Offset = "0x569E3F0", VA = "0x569F3F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x569F400", Offset = "0x569E400", VA = "0x569F400")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public string NameServerAddress
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x569F410", Offset = "0x569E410", VA = "0x569F410")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x569F420", Offset = "0x569E420", VA = "0x569F420")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public string FrontendAddress
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x569F430", Offset = "0x569E430", VA = "0x569F430")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x569F440", Offset = "0x569E440", VA = "0x569F440")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public string ChatRegion
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x569F450", Offset = "0x569E450", VA = "0x569F450")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x569F460", Offset = "0x569E460", VA = "0x569F460")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public ChatState State
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x569F470", Offset = "0x569E470", VA = "0x569F470")]
		[CompilerGenerated]
		get
		{
			return default(ChatState);
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x569F480", Offset = "0x569E480", VA = "0x569F480")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public ChatDisconnectCause DisconnectedCause
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x569F490", Offset = "0x569E490", VA = "0x569F490")]
		[CompilerGenerated]
		get
		{
			return default(ChatDisconnectCause);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x569F4A0", Offset = "0x569E4A0", VA = "0x569F4A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool CanChat
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x569F4B0", Offset = "0x569E4B0", VA = "0x569F4B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	private bool HasPeer
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x569F4D0", Offset = "0x569E4D0", VA = "0x569F4D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public string AppVersion
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x569F580", Offset = "0x569E580", VA = "0x569F580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x569F590", Offset = "0x569E590", VA = "0x569F590")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public string AppId
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x569F5A0", Offset = "0x569E5A0", VA = "0x569F5A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x569F5B0", Offset = "0x569E5B0", VA = "0x569F5B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public AuthenticationValues AuthValues
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x569F5C0", Offset = "0x569E5C0", VA = "0x569F5C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x569F5D0", Offset = "0x569E5D0", VA = "0x569F5D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public string UserId
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x569F5E0", Offset = "0x569E5E0", VA = "0x569F5E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x569F600", Offset = "0x569E600", VA = "0x569F600")]
		private set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public bool UseBackgroundWorkerForSending
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x569F6A0", Offset = "0x569E6A0", VA = "0x569F6A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x569F6B0", Offset = "0x569E6B0", VA = "0x569F6B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public ConnectionProtocol TransportProtocol
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x569F6C0", Offset = "0x569E6C0", VA = "0x569F6C0")]
		get
		{
			return default(ConnectionProtocol);
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x569F6E0", Offset = "0x569E6E0", VA = "0x569F6E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public Dictionary<ConnectionProtocol, Type> SocketImplementationConfig
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x569F870", Offset = "0x569E870", VA = "0x569F870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public DebugLevel DebugOut
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x56A0790", Offset = "0x569F790", VA = "0x56A0790")]
		get
		{
			return default(DebugLevel);
		}
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x569FCC0", Offset = "0x569ECC0", VA = "0x569FCC0")]
		set
		{
		}
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x569F4E0", Offset = "0x569E4E0", VA = "0x569F4E0")]
	public bool CanChatInChannel(string channelName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x569F890", Offset = "0x569E890", VA = "0x569F890")]
	public ChatClient(IChatClientListener listener, ConnectionProtocol protocol = ConnectionProtocol.Udp)
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x569FB30", Offset = "0x569EB30", VA = "0x569FB30")]
	public bool ConnectUsingSettings(ChatAppSettings appSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x569FCE0", Offset = "0x569ECE0", VA = "0x569FCE0")]
	public bool Connect(string appId, string appVersion, AuthenticationValues authValues)
	{
		return default(bool);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x569FF40", Offset = "0x569EF40", VA = "0x569FF40")]
	public bool ConnectAndSetStatus(string appId, string appVersion, AuthenticationValues authValues, [Optional][DefaultParameterValue(2)] int status, [Optional] object message)
	{
		return default(bool);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x569FFE0", Offset = "0x569EFE0", VA = "0x569FFE0")]
	public void Service()
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x56A0080", Offset = "0x569F080", VA = "0x56A0080")]
	private bool SendOutgoingInBackground()
	{
		return default(bool);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x56A00C0", Offset = "0x569F0C0", VA = "0x56A00C0")]
	[Obsolete("Better use UseBackgroundWorkerForSending and Service().")]
	public void SendAcksOnly()
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x56A00E0", Offset = "0x569F0E0", VA = "0x56A00E0")]
	public void Disconnect(ChatDisconnectCause cause = ChatDisconnectCause.DisconnectByClientLogic)
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x56A0140", Offset = "0x569F140", VA = "0x56A0140")]
	public void StopThread()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x56A0160", Offset = "0x569F160", VA = "0x56A0160")]
	public bool Subscribe(string[] channels)
	{
		return default(bool);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x56A0320", Offset = "0x569F320", VA = "0x56A0320")]
	public bool Subscribe(string[] channels, int[] lastMsgIds)
	{
		return default(bool);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x56A0170", Offset = "0x569F170", VA = "0x56A0170")]
	public bool Subscribe(string[] channels, int messagesFromHistory)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x56A08E0", Offset = "0x569F8E0", VA = "0x56A08E0")]
	public bool Unsubscribe(string[] channels)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x56A0B10", Offset = "0x569FB10", VA = "0x56A0B10")]
	public bool PublishMessage(string channelName, object message, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x56A0E20", Offset = "0x569FE20", VA = "0x56A0E20")]
	internal bool PublishMessageUnreliable(string channelName, object message, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x56A0B20", Offset = "0x569FB20", VA = "0x56A0B20")]
	private bool publishMessage(string channelName, object message, bool reliable, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x56A0E30", Offset = "0x569FE30", VA = "0x56A0E30")]
	public bool SendPrivateMessage(string target, object message, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x56A0E50", Offset = "0x569FE50", VA = "0x56A0E50")]
	public bool SendPrivateMessage(string target, object message, bool encrypt, bool forwardAsWebhook)
	{
		return default(bool);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x56A1180", Offset = "0x56A0180", VA = "0x56A1180")]
	internal bool SendPrivateMessageUnreliable(string target, object message, bool encrypt, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x56A0E70", Offset = "0x569FE70", VA = "0x56A0E70")]
	private bool sendPrivateMessage(string target, object message, bool encrypt, bool reliable, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x56A1190", Offset = "0x56A0190", VA = "0x56A1190")]
	private bool SetOnlineStatus(int status, object message, bool skipMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x56A13D0", Offset = "0x56A03D0", VA = "0x56A13D0")]
	public bool SetOnlineStatus(int status)
	{
		return default(bool);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x56A13E0", Offset = "0x56A03E0", VA = "0x56A13E0")]
	public bool SetOnlineStatus(int status, object message)
	{
		return default(bool);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x56A13F0", Offset = "0x56A03F0", VA = "0x56A13F0")]
	public bool AddFriends(string[] friends)
	{
		return default(bool);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x56A1760", Offset = "0x56A0760", VA = "0x56A1760")]
	public bool RemoveFriends(string[] friends)
	{
		return default(bool);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x56A1AD0", Offset = "0x56A0AD0", VA = "0x56A1AD0")]
	public string GetPrivateChannelNameByUser(string userName)
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x56A1B30", Offset = "0x56A0B30", VA = "0x56A1B30")]
	public bool TryGetChannel(string channelName, bool isPrivate, out ChatChannel channel)
	{
		return default(bool);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x56A1BA0", Offset = "0x56A0BA0", VA = "0x56A1BA0")]
	public bool TryGetChannel(string channelName, out ChatChannel channel)
	{
		return default(bool);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x56A1C30", Offset = "0x56A0C30", VA = "0x56A1C30")]
	public bool TryGetPrivateChannelByUser(string userId, out ChatChannel channel)
	{
		return default(bool);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x56A1CF0", Offset = "0x56A0CF0", VA = "0x56A1CF0", Slot = "4")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EDebugReturn(DebugLevel level, string message)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x56A1DA0", Offset = "0x56A0DA0", VA = "0x56A1DA0", Slot = "7")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EOnEvent(EventData eventData)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x56A35F0", Offset = "0x56A25F0", VA = "0x56A35F0", Slot = "5")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EOnOperationResponse(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x56A4040", Offset = "0x56A3040", VA = "0x56A4040", Slot = "6")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EOnStatusChanged(StatusCode statusCode)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x56A46C0", Offset = "0x56A36C0", VA = "0x56A46C0")]
	private void TryAuthenticateOnNameServer()
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x56A07B0", Offset = "0x569F7B0", VA = "0x56A07B0")]
	private bool SendChannelOperation(string[] channels, byte operation, int historyLength)
	{
		return default(bool);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x56A2150", Offset = "0x56A1150", VA = "0x56A2150")]
	private void HandlePrivateMessageEvent(EventData eventData)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x56A1E00", Offset = "0x56A0E00", VA = "0x56A1E00")]
	private void HandleChatMessagesEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x56A2620", Offset = "0x56A1620", VA = "0x56A2620")]
	private void HandleSubscribeEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x56A2AC0", Offset = "0x56A1AC0", VA = "0x56A2AC0")]
	private void HandleUnsubscribeEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x56A37E0", Offset = "0x56A27E0", VA = "0x56A37E0")]
	private void HandleAuthResponse(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x56A2470", Offset = "0x56A1470", VA = "0x56A2470")]
	private void HandleStatusUpdate(EventData eventData)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x56A4AA0", Offset = "0x56A3AA0", VA = "0x56A4AA0")]
	private bool ConnectToFrontEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x56A4810", Offset = "0x56A3810", VA = "0x56A4810")]
	private bool AuthenticateOnFrontEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x56A31B0", Offset = "0x56A21B0", VA = "0x56A31B0")]
	private void HandleUserUnsubscribedEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x56A2C70", Offset = "0x56A1C70", VA = "0x56A2C70")]
	private void HandleUserSubscribedEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x56A4F50", Offset = "0x56A3F50", VA = "0x56A4F50")]
	public bool Subscribe(string channel, [Optional][DefaultParameterValue(0)] int lastMsgId, [Optional][DefaultParameterValue(-1)] int messagesFromHistory, [Optional] ChannelCreationOptions creationOptions)
	{
		return default(bool);
	}
}
