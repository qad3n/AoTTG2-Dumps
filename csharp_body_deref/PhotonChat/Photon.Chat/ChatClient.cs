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
		[Address(RVA = "0x3EB22C0", Offset = "0x3EB22C0", VA = "0x3EB22C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x3EB22D0", Offset = "0x3EB22D0", VA = "0x3EB22D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public string NameServerAddress
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x3EB22E0", Offset = "0x3EB22E0", VA = "0x3EB22E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x3EB22F0", Offset = "0x3EB22F0", VA = "0x3EB22F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public string FrontendAddress
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x3EB2300", Offset = "0x3EB2300", VA = "0x3EB2300")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x3EB2310", Offset = "0x3EB2310", VA = "0x3EB2310")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public string ChatRegion
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x3EB2320", Offset = "0x3EB2320", VA = "0x3EB2320")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x3EB2330", Offset = "0x3EB2330", VA = "0x3EB2330")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public ChatState State
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x3EB2340", Offset = "0x3EB2340", VA = "0x3EB2340")]
		[CompilerGenerated]
		get
		{
			return default(ChatState);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x3EB2350", Offset = "0x3EB2350", VA = "0x3EB2350")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public ChatDisconnectCause DisconnectedCause
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x3EB2360", Offset = "0x3EB2360", VA = "0x3EB2360")]
		[CompilerGenerated]
		get
		{
			return default(ChatDisconnectCause);
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x3EB2370", Offset = "0x3EB2370", VA = "0x3EB2370")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool CanChat
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x3EB2380", Offset = "0x3EB2380", VA = "0x3EB2380")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	private bool HasPeer
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x3EB23A0", Offset = "0x3EB23A0", VA = "0x3EB23A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public string AppVersion
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x3EB2450", Offset = "0x3EB2450", VA = "0x3EB2450")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x3EB2460", Offset = "0x3EB2460", VA = "0x3EB2460")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public string AppId
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x3EB2470", Offset = "0x3EB2470", VA = "0x3EB2470")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x3EB2480", Offset = "0x3EB2480", VA = "0x3EB2480")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public AuthenticationValues AuthValues
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x3EB2490", Offset = "0x3EB2490", VA = "0x3EB2490")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x3EB24A0", Offset = "0x3EB24A0", VA = "0x3EB24A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public string UserId
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x3EB24B0", Offset = "0x3EB24B0", VA = "0x3EB24B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x3EB24D0", Offset = "0x3EB24D0", VA = "0x3EB24D0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public bool UseBackgroundWorkerForSending
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x3EB2570", Offset = "0x3EB2570", VA = "0x3EB2570")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x3EB2580", Offset = "0x3EB2580", VA = "0x3EB2580")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public ConnectionProtocol TransportProtocol
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x3EB2590", Offset = "0x3EB2590", VA = "0x3EB2590")]
		get
		{
			return default(ConnectionProtocol);
		}
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x3EB25B0", Offset = "0x3EB25B0", VA = "0x3EB25B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public Dictionary<ConnectionProtocol, Type> SocketImplementationConfig
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x3EB2740", Offset = "0x3EB2740", VA = "0x3EB2740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000018")]
	public DebugLevel DebugOut
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x3EB3660", Offset = "0x3EB3660", VA = "0x3EB3660")]
		get
		{
			return default(DebugLevel);
		}
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x3EB2B90", Offset = "0x3EB2B90", VA = "0x3EB2B90")]
		set
		{
		}
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3EB23B0", Offset = "0x3EB23B0", VA = "0x3EB23B0")]
	public bool CanChatInChannel(string channelName)
	{
		return default(bool);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x3EB2760", Offset = "0x3EB2760", VA = "0x3EB2760")]
	public ChatClient(IChatClientListener listener, ConnectionProtocol protocol = ConnectionProtocol.Udp)
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x3EB2A00", Offset = "0x3EB2A00", VA = "0x3EB2A00")]
	public bool ConnectUsingSettings(ChatAppSettings appSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x3EB2BB0", Offset = "0x3EB2BB0", VA = "0x3EB2BB0")]
	public bool Connect(string appId, string appVersion, AuthenticationValues authValues)
	{
		return default(bool);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x3EB2E10", Offset = "0x3EB2E10", VA = "0x3EB2E10")]
	public bool ConnectAndSetStatus(string appId, string appVersion, AuthenticationValues authValues, [Optional][DefaultParameterValue(2)] int status, [Optional] object message)
	{
		return default(bool);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x3EB2EB0", Offset = "0x3EB2EB0", VA = "0x3EB2EB0")]
	public void Service()
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x3EB2F50", Offset = "0x3EB2F50", VA = "0x3EB2F50")]
	private bool SendOutgoingInBackground()
	{
		return default(bool);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x3EB2F90", Offset = "0x3EB2F90", VA = "0x3EB2F90")]
	[Obsolete("Better use UseBackgroundWorkerForSending and Service().")]
	public void SendAcksOnly()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x3EB2FB0", Offset = "0x3EB2FB0", VA = "0x3EB2FB0")]
	public void Disconnect(ChatDisconnectCause cause = ChatDisconnectCause.DisconnectByClientLogic)
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x3EB3010", Offset = "0x3EB3010", VA = "0x3EB3010")]
	public void StopThread()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3EB3030", Offset = "0x3EB3030", VA = "0x3EB3030")]
	public bool Subscribe(string[] channels)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x3EB31F0", Offset = "0x3EB31F0", VA = "0x3EB31F0")]
	public bool Subscribe(string[] channels, int[] lastMsgIds)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x3EB3040", Offset = "0x3EB3040", VA = "0x3EB3040")]
	public bool Subscribe(string[] channels, int messagesFromHistory)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x3EB37B0", Offset = "0x3EB37B0", VA = "0x3EB37B0")]
	public bool Unsubscribe(string[] channels)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x3EB39D0", Offset = "0x3EB39D0", VA = "0x3EB39D0")]
	public bool PublishMessage(string channelName, object message, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x3EB3CF0", Offset = "0x3EB3CF0", VA = "0x3EB3CF0")]
	internal bool PublishMessageUnreliable(string channelName, object message, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x3EB39E0", Offset = "0x3EB39E0", VA = "0x3EB39E0")]
	private bool publishMessage(string channelName, object message, bool reliable, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x3EB3D00", Offset = "0x3EB3D00", VA = "0x3EB3D00")]
	public bool SendPrivateMessage(string target, object message, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x3EB3D20", Offset = "0x3EB3D20", VA = "0x3EB3D20")]
	public bool SendPrivateMessage(string target, object message, bool encrypt, bool forwardAsWebhook)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x3EB4060", Offset = "0x3EB4060", VA = "0x3EB4060")]
	internal bool SendPrivateMessageUnreliable(string target, object message, bool encrypt, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x3EB3D40", Offset = "0x3EB3D40", VA = "0x3EB3D40")]
	private bool sendPrivateMessage(string target, object message, bool encrypt, bool reliable, bool forwardAsWebhook = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x3EB4070", Offset = "0x3EB4070", VA = "0x3EB4070")]
	private bool SetOnlineStatus(int status, object message, bool skipMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3EB42C0", Offset = "0x3EB42C0", VA = "0x3EB42C0")]
	public bool SetOnlineStatus(int status)
	{
		return default(bool);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x3EB42D0", Offset = "0x3EB42D0", VA = "0x3EB42D0")]
	public bool SetOnlineStatus(int status, object message)
	{
		return default(bool);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x3EB42E0", Offset = "0x3EB42E0", VA = "0x3EB42E0")]
	public bool AddFriends(string[] friends)
	{
		return default(bool);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x3EB4660", Offset = "0x3EB4660", VA = "0x3EB4660")]
	public bool RemoveFriends(string[] friends)
	{
		return default(bool);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x3EB49E0", Offset = "0x3EB49E0", VA = "0x3EB49E0")]
	public string GetPrivateChannelNameByUser(string userName)
	{
		return null;
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3EB4A40", Offset = "0x3EB4A40", VA = "0x3EB4A40")]
	public bool TryGetChannel(string channelName, bool isPrivate, out ChatChannel channel)
	{
		return default(bool);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x3EB4AB0", Offset = "0x3EB4AB0", VA = "0x3EB4AB0")]
	public bool TryGetChannel(string channelName, out ChatChannel channel)
	{
		return default(bool);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3EB4B40", Offset = "0x3EB4B40", VA = "0x3EB4B40")]
	public bool TryGetPrivateChannelByUser(string userId, out ChatChannel channel)
	{
		return default(bool);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3EB4C00", Offset = "0x3EB4C00", VA = "0x3EB4C00", Slot = "4")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EDebugReturn(DebugLevel level, string message)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3EB4CB0", Offset = "0x3EB4CB0", VA = "0x3EB4CB0", Slot = "7")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EOnEvent(EventData eventData)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3EB64C0", Offset = "0x3EB64C0", VA = "0x3EB64C0", Slot = "5")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EOnOperationResponse(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3EB6F60", Offset = "0x3EB6F60", VA = "0x3EB6F60", Slot = "6")]
	private void ExitGames_002EClient_002EPhoton_002EIPhotonPeerListener_002EOnStatusChanged(StatusCode statusCode)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3EB77D0", Offset = "0x3EB77D0", VA = "0x3EB77D0")]
	private void TryAuthenticateOnNameServer()
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3EB3680", Offset = "0x3EB3680", VA = "0x3EB3680")]
	private bool SendChannelOperation(string[] channels, byte operation, int historyLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x3EB5050", Offset = "0x3EB5050", VA = "0x3EB5050")]
	private void HandlePrivateMessageEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x3EB4D00", Offset = "0x3EB4D00", VA = "0x3EB4D00")]
	private void HandleChatMessagesEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x3EB5510", Offset = "0x3EB5510", VA = "0x3EB5510")]
	private void HandleSubscribeEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x3EB5990", Offset = "0x3EB5990", VA = "0x3EB5990")]
	private void HandleUnsubscribeEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x3EB66B0", Offset = "0x3EB66B0", VA = "0x3EB66B0")]
	private void HandleAuthResponse(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3EB5360", Offset = "0x3EB5360", VA = "0x3EB5360")]
	private void HandleStatusUpdate(EventData eventData)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3EB7BB0", Offset = "0x3EB7BB0", VA = "0x3EB7BB0")]
	private bool ConnectToFrontEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x3EB7920", Offset = "0x3EB7920", VA = "0x3EB7920")]
	private bool AuthenticateOnFrontEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x3EB6080", Offset = "0x3EB6080", VA = "0x3EB6080")]
	private void HandleUserUnsubscribedEvent(EventData eventData)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x3EB5B40", Offset = "0x3EB5B40", VA = "0x3EB5B40")]
	private void HandleUserSubscribedEvent(EventData eventData)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x3EB8070", Offset = "0x3EB8070", VA = "0x3EB8070")]
	public bool Subscribe(string channel, [Optional][DefaultParameterValue(0)] int lastMsgId, [Optional][DefaultParameterValue(-1)] int messagesFromHistory, [Optional] ChannelCreationOptions creationOptions)
	{
		return default(bool);
	}
}
