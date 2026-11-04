// ==================== AoTTG2 cross-reference ====================
// Type: Discord.LobbyManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/LobbyManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x20000A1")]
public class LobbyManager
{
	[Token(Token = "0x20000A2")]
	internal struct FFIEvents
	{
		[Token(Token = "0x20000A3")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void LobbyUpdateHandler(IntPtr ptr, long lobbyId);

		[Token(Token = "0x20000A4")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void LobbyDeleteHandler(IntPtr ptr, long lobbyId, uint reason);

		[Token(Token = "0x20000A5")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void MemberConnectHandler(IntPtr ptr, long lobbyId, long userId);

		[Token(Token = "0x20000A6")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void MemberUpdateHandler(IntPtr ptr, long lobbyId, long userId);

		[Token(Token = "0x20000A7")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void MemberDisconnectHandler(IntPtr ptr, long lobbyId, long userId);

		[Token(Token = "0x20000A8")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void LobbyMessageHandler(IntPtr ptr, long lobbyId, long userId, IntPtr dataPtr, int dataLen);

		[Token(Token = "0x20000A9")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SpeakingHandler(IntPtr ptr, long lobbyId, long userId, bool speaking);

		[Token(Token = "0x20000AA")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void NetworkMessageHandler(IntPtr ptr, long lobbyId, long userId, byte channelId, IntPtr dataPtr, int dataLen);

		[Token(Token = "0x400017A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal LobbyUpdateHandler OnLobbyUpdate;

		[Token(Token = "0x400017B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal LobbyDeleteHandler OnLobbyDelete;

		[Token(Token = "0x400017C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal MemberConnectHandler OnMemberConnect;

		[Token(Token = "0x400017D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal MemberUpdateHandler OnMemberUpdate;

		[Token(Token = "0x400017E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal MemberDisconnectHandler OnMemberDisconnect;

		[Token(Token = "0x400017F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal LobbyMessageHandler OnLobbyMessage;

		[Token(Token = "0x4000180")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal SpeakingHandler OnSpeaking;

		[Token(Token = "0x4000181")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal NetworkMessageHandler OnNetworkMessage;
	}

	[Token(Token = "0x20000AB")]
	internal struct FFIMethods
	{
		[Token(Token = "0x20000AC")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetLobbyCreateTransactionMethod(IntPtr methodsPtr, ref IntPtr transaction);

		[Token(Token = "0x20000AD")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetLobbyUpdateTransactionMethod(IntPtr methodsPtr, long lobbyId, ref IntPtr transaction);

		[Token(Token = "0x20000AE")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetMemberUpdateTransactionMethod(IntPtr methodsPtr, long lobbyId, long userId, ref IntPtr transaction);

		[Token(Token = "0x20000AF")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void CreateLobbyCallback(IntPtr ptr, Result result, ref Lobby lobby);

		[Token(Token = "0x20000B0")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void CreateLobbyMethod(IntPtr methodsPtr, IntPtr transaction, IntPtr callbackData, CreateLobbyCallback callback);

		[Token(Token = "0x20000B1")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void UpdateLobbyCallback(IntPtr ptr, Result result);

		[Token(Token = "0x20000B2")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void UpdateLobbyMethod(IntPtr methodsPtr, long lobbyId, IntPtr transaction, IntPtr callbackData, UpdateLobbyCallback callback);

		[Token(Token = "0x20000B3")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void DeleteLobbyCallback(IntPtr ptr, Result result);

		[Token(Token = "0x20000B4")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void DeleteLobbyMethod(IntPtr methodsPtr, long lobbyId, IntPtr callbackData, DeleteLobbyCallback callback);

		[Token(Token = "0x20000B5")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ConnectLobbyCallback(IntPtr ptr, Result result, ref Lobby lobby);

		[Token(Token = "0x20000B6")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ConnectLobbyMethod(IntPtr methodsPtr, long lobbyId, string secret, IntPtr callbackData, ConnectLobbyCallback callback);

		[Token(Token = "0x20000B7")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ConnectLobbyWithActivitySecretCallback(IntPtr ptr, Result result, ref Lobby lobby);

		[Token(Token = "0x20000B8")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ConnectLobbyWithActivitySecretMethod(IntPtr methodsPtr, string activitySecret, IntPtr callbackData, ConnectLobbyWithActivitySecretCallback callback);

		[Token(Token = "0x20000B9")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void DisconnectLobbyCallback(IntPtr ptr, Result result);

		[Token(Token = "0x20000BA")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void DisconnectLobbyMethod(IntPtr methodsPtr, long lobbyId, IntPtr callbackData, DisconnectLobbyCallback callback);

		[Token(Token = "0x20000BB")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetLobbyMethod(IntPtr methodsPtr, long lobbyId, ref Lobby lobby);

		[Token(Token = "0x20000BC")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetLobbyActivitySecretMethod(IntPtr methodsPtr, long lobbyId, StringBuilder secret);

		[Token(Token = "0x20000BD")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetLobbyMetadataValueMethod(IntPtr methodsPtr, long lobbyId, string key, StringBuilder value);

		[Token(Token = "0x20000BE")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetLobbyMetadataKeyMethod(IntPtr methodsPtr, long lobbyId, int index, StringBuilder key);

		[Token(Token = "0x20000BF")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result LobbyMetadataCountMethod(IntPtr methodsPtr, long lobbyId, ref int count);

		[Token(Token = "0x20000C0")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result MemberCountMethod(IntPtr methodsPtr, long lobbyId, ref int count);

		[Token(Token = "0x20000C1")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetMemberUserIdMethod(IntPtr methodsPtr, long lobbyId, int index, ref long userId);

		[Token(Token = "0x20000C2")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetMemberUserMethod(IntPtr methodsPtr, long lobbyId, long userId, ref User user);

		[Token(Token = "0x20000C3")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetMemberMetadataValueMethod(IntPtr methodsPtr, long lobbyId, long userId, string key, StringBuilder value);

		[Token(Token = "0x20000C4")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetMemberMetadataKeyMethod(IntPtr methodsPtr, long lobbyId, long userId, int index, StringBuilder key);

		[Token(Token = "0x20000C5")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result MemberMetadataCountMethod(IntPtr methodsPtr, long lobbyId, long userId, ref int count);

		[Token(Token = "0x20000C6")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void UpdateMemberCallback(IntPtr ptr, Result result);

		[Token(Token = "0x20000C7")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void UpdateMemberMethod(IntPtr methodsPtr, long lobbyId, long userId, IntPtr transaction, IntPtr callbackData, UpdateMemberCallback callback);

		[Token(Token = "0x20000C8")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SendLobbyMessageCallback(IntPtr ptr, Result result);

		[Token(Token = "0x20000C9")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SendLobbyMessageMethod(IntPtr methodsPtr, long lobbyId, byte[] data, int dataLen, IntPtr callbackData, SendLobbyMessageCallback callback);

		[Token(Token = "0x20000CA")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetSearchQueryMethod(IntPtr methodsPtr, ref IntPtr query);

		[Token(Token = "0x20000CB")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SearchCallback(IntPtr ptr, Result result);

		[Token(Token = "0x20000CC")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SearchMethod(IntPtr methodsPtr, IntPtr query, IntPtr callbackData, SearchCallback callback);

		[Token(Token = "0x20000CD")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void LobbyCountMethod(IntPtr methodsPtr, ref int count);

		[Token(Token = "0x20000CE")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetLobbyIdMethod(IntPtr methodsPtr, int index, ref long lobbyId);

		[Token(Token = "0x20000CF")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ConnectVoiceCallback(IntPtr ptr, Result result);

		[Token(Token = "0x20000D0")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ConnectVoiceMethod(IntPtr methodsPtr, long lobbyId, IntPtr callbackData, ConnectVoiceCallback callback);

		[Token(Token = "0x20000D1")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void DisconnectVoiceCallback(IntPtr ptr, Result result);

		[Token(Token = "0x20000D2")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void DisconnectVoiceMethod(IntPtr methodsPtr, long lobbyId, IntPtr callbackData, DisconnectVoiceCallback callback);

		[Token(Token = "0x20000D3")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result ConnectNetworkMethod(IntPtr methodsPtr, long lobbyId);

		[Token(Token = "0x20000D4")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result DisconnectNetworkMethod(IntPtr methodsPtr, long lobbyId);

		[Token(Token = "0x20000D5")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result FlushNetworkMethod(IntPtr methodsPtr);

		[Token(Token = "0x20000D6")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result OpenNetworkChannelMethod(IntPtr methodsPtr, long lobbyId, byte channelId, bool reliable);

		[Token(Token = "0x20000D7")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SendNetworkMessageMethod(IntPtr methodsPtr, long lobbyId, long userId, byte channelId, byte[] data, int dataLen);

		[Token(Token = "0x4000182")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal GetLobbyCreateTransactionMethod GetLobbyCreateTransaction;

		[Token(Token = "0x4000183")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal GetLobbyUpdateTransactionMethod GetLobbyUpdateTransaction;

		[Token(Token = "0x4000184")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal GetMemberUpdateTransactionMethod GetMemberUpdateTransaction;

		[Token(Token = "0x4000185")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal CreateLobbyMethod CreateLobby;

		[Token(Token = "0x4000186")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal UpdateLobbyMethod UpdateLobby;

		[Token(Token = "0x4000187")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal DeleteLobbyMethod DeleteLobby;

		[Token(Token = "0x4000188")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal ConnectLobbyMethod ConnectLobby;

		[Token(Token = "0x4000189")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal ConnectLobbyWithActivitySecretMethod ConnectLobbyWithActivitySecret;

		[Token(Token = "0x400018A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		internal DisconnectLobbyMethod DisconnectLobby;

		[Token(Token = "0x400018B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		internal GetLobbyMethod GetLobby;

		[Token(Token = "0x400018C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		internal GetLobbyActivitySecretMethod GetLobbyActivitySecret;

		[Token(Token = "0x400018D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		internal GetLobbyMetadataValueMethod GetLobbyMetadataValue;

		[Token(Token = "0x400018E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		internal GetLobbyMetadataKeyMethod GetLobbyMetadataKey;

		[Token(Token = "0x400018F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		internal LobbyMetadataCountMethod LobbyMetadataCount;

		[Token(Token = "0x4000190")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		internal MemberCountMethod MemberCount;

		[Token(Token = "0x4000191")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		internal GetMemberUserIdMethod GetMemberUserId;

		[Token(Token = "0x4000192")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		internal GetMemberUserMethod GetMemberUser;

		[Token(Token = "0x4000193")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		internal GetMemberMetadataValueMethod GetMemberMetadataValue;

		[Token(Token = "0x4000194")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		internal GetMemberMetadataKeyMethod GetMemberMetadataKey;

		[Token(Token = "0x4000195")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		internal MemberMetadataCountMethod MemberMetadataCount;

		[Token(Token = "0x4000196")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
		internal UpdateMemberMethod UpdateMember;

		[Token(Token = "0x4000197")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
		internal SendLobbyMessageMethod SendLobbyMessage;

		[Token(Token = "0x4000198")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
		internal GetSearchQueryMethod GetSearchQuery;

		[Token(Token = "0x4000199")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
		internal SearchMethod Search;

		[Token(Token = "0x400019A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
		internal LobbyCountMethod LobbyCount;

		[Token(Token = "0x400019B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
		internal GetLobbyIdMethod GetLobbyId;

		[Token(Token = "0x400019C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
		internal ConnectVoiceMethod ConnectVoice;

		[Token(Token = "0x400019D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
		internal DisconnectVoiceMethod DisconnectVoice;

		[Token(Token = "0x400019E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
		internal ConnectNetworkMethod ConnectNetwork;

		[Token(Token = "0x400019F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
		internal DisconnectNetworkMethod DisconnectNetwork;

		[Token(Token = "0x40001A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
		internal FlushNetworkMethod FlushNetwork;

		[Token(Token = "0x40001A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
		internal OpenNetworkChannelMethod OpenNetworkChannel;

		[Token(Token = "0x40001A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
		internal SendNetworkMessageMethod SendNetworkMessage;
	}

	[Token(Token = "0x20000D8")]
	public delegate void CreateLobbyHandler(Result result, ref Lobby lobby);

	[Token(Token = "0x20000D9")]
	public delegate void UpdateLobbyHandler(Result result);

	[Token(Token = "0x20000DA")]
	public delegate void DeleteLobbyHandler(Result result);

	[Token(Token = "0x20000DB")]
	public delegate void ConnectLobbyHandler(Result result, ref Lobby lobby);

	[Token(Token = "0x20000DC")]
	public delegate void ConnectLobbyWithActivitySecretHandler(Result result, ref Lobby lobby);

	[Token(Token = "0x20000DD")]
	public delegate void DisconnectLobbyHandler(Result result);

	[Token(Token = "0x20000DE")]
	public delegate void UpdateMemberHandler(Result result);

	[Token(Token = "0x20000DF")]
	public delegate void SendLobbyMessageHandler(Result result);

	[Token(Token = "0x20000E0")]
	public delegate void SearchHandler(Result result);

	[Token(Token = "0x20000E1")]
	public delegate void ConnectVoiceHandler(Result result);

	[Token(Token = "0x20000E2")]
	public delegate void DisconnectVoiceHandler(Result result);

	[Token(Token = "0x20000E3")]
	public delegate void LobbyUpdateHandler(long lobbyId);

	[Token(Token = "0x20000E4")]
	public delegate void LobbyDeleteHandler(long lobbyId, uint reason);

	[Token(Token = "0x20000E5")]
	public delegate void MemberConnectHandler(long lobbyId, long userId);

	[Token(Token = "0x20000E6")]
	public delegate void MemberUpdateHandler(long lobbyId, long userId);

	[Token(Token = "0x20000E7")]
	public delegate void MemberDisconnectHandler(long lobbyId, long userId);

	[Token(Token = "0x20000E8")]
	public delegate void LobbyMessageHandler(long lobbyId, long userId, byte[] data);

	[Token(Token = "0x20000E9")]
	public delegate void SpeakingHandler(long lobbyId, long userId, bool speaking);

	[Token(Token = "0x20000EA")]
	public delegate void NetworkMessageHandler(long lobbyId, long userId, byte channelId, byte[] data);

	[Token(Token = "0x4000170")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x4000171")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x4000172")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private LobbyUpdateHandler m_OnLobbyUpdate;

	[Token(Token = "0x4000173")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private LobbyDeleteHandler m_OnLobbyDelete;

	[Token(Token = "0x4000174")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	private MemberConnectHandler m_OnMemberConnect;

	[Token(Token = "0x4000175")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	private MemberUpdateHandler m_OnMemberUpdate;

	[Token(Token = "0x4000176")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	private MemberDisconnectHandler m_OnMemberDisconnect;

	[Token(Token = "0x4000177")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[CompilerGenerated]
	private LobbyMessageHandler m_OnLobbyMessage;

	[Token(Token = "0x4000178")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private SpeakingHandler m_OnSpeaking;

	[Token(Token = "0x4000179")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private NetworkMessageHandler m_OnNetworkMessage;

	[Token(Token = "0x1700000A")]
	private FFIMethods Methods
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x536F80", Offset = "0x535580", VA = "0x180536F80")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000008")]
	public event LobbyUpdateHandler OnLobbyUpdate
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x536BC0", Offset = "0x5351C0", VA = "0x180536BC0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x537240", Offset = "0x535840", VA = "0x180537240")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000009")]
	public event LobbyDeleteHandler OnLobbyDelete
	{
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x536A80", Offset = "0x535080", VA = "0x180536A80")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x537100", Offset = "0x535700", VA = "0x180537100")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000A")]
	public event MemberConnectHandler OnMemberConnect
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x536C60", Offset = "0x535260", VA = "0x180536C60")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x5372E0", Offset = "0x5358E0", VA = "0x1805372E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000B")]
	public event MemberUpdateHandler OnMemberUpdate
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x536DA0", Offset = "0x5353A0", VA = "0x180536DA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x537420", Offset = "0x535A20", VA = "0x180537420")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000C")]
	public event MemberDisconnectHandler OnMemberDisconnect
	{
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x536D00", Offset = "0x535300", VA = "0x180536D00")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x537380", Offset = "0x535980", VA = "0x180537380")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000D")]
	public event LobbyMessageHandler OnLobbyMessage
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x536B20", Offset = "0x535120", VA = "0x180536B20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x5371A0", Offset = "0x5357A0", VA = "0x1805371A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000E")]
	public event SpeakingHandler OnSpeaking
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x536EE0", Offset = "0x5354E0", VA = "0x180536EE0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x537560", Offset = "0x535B60", VA = "0x180537560")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000F")]
	public event NetworkMessageHandler OnNetworkMessage
	{
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x536E40", Offset = "0x535440", VA = "0x180536E40")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x5374C0", Offset = "0x535AC0", VA = "0x1805374C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x5369B0", Offset = "0x534FB0", VA = "0x1805369B0")]
	internal LobbyManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x534430", Offset = "0x532A30", VA = "0x180534430")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x533070", Offset = "0x531670", VA = "0x180533070")]
	public LobbyTransaction GetLobbyCreateTransaction()
	{
		return default(LobbyTransaction);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x5335A0", Offset = "0x531BA0", VA = "0x1805335A0")]
	public LobbyTransaction GetLobbyUpdateTransaction(long lobbyId)
	{
		return default(LobbyTransaction);
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x533AE0", Offset = "0x5320E0", VA = "0x180533AE0")]
	public LobbyMemberTransaction GetMemberUpdateTransaction(long lobbyId, long userId)
	{
		return default(LobbyMemberTransaction);
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x5321D0", Offset = "0x5307D0", VA = "0x1805321D0")]
	[MonoPInvokeCallback]
	private static void CreateLobbyCallbackImpl(IntPtr ptr, Result result, ref Lobby lobby)
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x5322F0", Offset = "0x5308F0", VA = "0x1805322F0")]
	public void CreateLobby(LobbyTransaction transaction, CreateLobbyHandler callback)
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x536410", Offset = "0x534A10", VA = "0x180536410")]
	[MonoPInvokeCallback]
	private static void UpdateLobbyCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x536520", Offset = "0x534B20", VA = "0x180536520")]
	public void UpdateLobby(long lobbyId, LobbyTransaction transaction, UpdateLobbyHandler callback)
	{
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x5324A0", Offset = "0x530AA0", VA = "0x1805324A0")]
	[MonoPInvokeCallback]
	private static void DeleteLobbyCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x5325B0", Offset = "0x530BB0", VA = "0x1805325B0")]
	public void DeleteLobby(long lobbyId, DeleteLobbyHandler callback)
	{
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x531860", Offset = "0x52FE60", VA = "0x180531860")]
	[MonoPInvokeCallback]
	private static void ConnectLobbyCallbackImpl(IntPtr ptr, Result result, ref Lobby lobby)
	{
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x531C50", Offset = "0x530250", VA = "0x180531C50")]
	public void ConnectLobby(long lobbyId, string secret, ConnectLobbyHandler callback)
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x531980", Offset = "0x52FF80", VA = "0x180531980")]
	[MonoPInvokeCallback]
	private static void ConnectLobbyWithActivitySecretCallbackImpl(IntPtr ptr, Result result, ref Lobby lobby)
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x531AA0", Offset = "0x5300A0", VA = "0x180531AA0")]
	public void ConnectLobbyWithActivitySecret(string activitySecret, ConnectLobbyWithActivitySecretHandler callback)
	{
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x532760", Offset = "0x530D60", VA = "0x180532760")]
	[MonoPInvokeCallback]
	private static void DisconnectLobbyCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x532870", Offset = "0x530E70", VA = "0x180532870")]
	public void DisconnectLobby(long lobbyId, DisconnectLobbyHandler callback)
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x5336D0", Offset = "0x531CD0", VA = "0x1805336D0")]
	public Lobby GetLobby(long lobbyId)
	{
		return default(Lobby);
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x532F00", Offset = "0x531500", VA = "0x180532F00")]
	public string GetLobbyActivitySecret(long lobbyId)
	{
		return null;
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x533430", Offset = "0x531A30", VA = "0x180533430")]
	public string GetLobbyMetadataValue(long lobbyId, string key)
	{
		return null;
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x5332C0", Offset = "0x5318C0", VA = "0x1805332C0")]
	public string GetLobbyMetadataKey(long lobbyId, int index)
	{
		return null;
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x534B90", Offset = "0x533190", VA = "0x180534B90")]
	public int LobbyMetadataCount(long lobbyId)
	{
		return default(int);
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x534CC0", Offset = "0x5332C0", VA = "0x180534CC0")]
	public int MemberCount(long lobbyId)
	{
		return default(int);
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x533C10", Offset = "0x532210", VA = "0x180533C10")]
	public long GetMemberUserId(long lobbyId, int index)
	{
		return default(long);
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x533D50", Offset = "0x532350", VA = "0x180533D50")]
	public User GetMemberUser(long lobbyId, long userId)
	{
		return default(User);
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x533970", Offset = "0x531F70", VA = "0x180533970")]
	public string GetMemberMetadataValue(long lobbyId, long userId, string key)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x533800", Offset = "0x531E00", VA = "0x180533800")]
	public string GetMemberMetadataKey(long lobbyId, long userId, int index)
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x534DF0", Offset = "0x5333F0", VA = "0x180534DF0")]
	public int MemberMetadataCount(long lobbyId, long userId)
	{
		return default(int);
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x5366D0", Offset = "0x534CD0", VA = "0x1805366D0")]
	[MonoPInvokeCallback]
	private static void UpdateMemberCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x5367E0", Offset = "0x534DE0", VA = "0x1805367E0")]
	public void UpdateMember(long lobbyId, long userId, LobbyMemberTransaction transaction, UpdateMemberHandler callback)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x535DD0", Offset = "0x5343D0", VA = "0x180535DD0")]
	[MonoPInvokeCallback]
	private static void SendLobbyMessageCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x5360D0", Offset = "0x5346D0", VA = "0x1805360D0")]
	public void SendLobbyMessage(long lobbyId, byte[] data, SendLobbyMessageHandler callback)
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x534310", Offset = "0x532910", VA = "0x180534310")]
	public LobbySearchQuery GetSearchQuery()
	{
		return default(LobbySearchQuery);
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x535B10", Offset = "0x534110", VA = "0x180535B10")]
	[MonoPInvokeCallback]
	private static void SearchCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x535C20", Offset = "0x534220", VA = "0x180535C20")]
	public void Search(LobbySearchQuery query, SearchHandler callback)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x534AB0", Offset = "0x5330B0", VA = "0x180534AB0")]
	public int LobbyCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x533190", Offset = "0x531790", VA = "0x180533190")]
	public long GetLobbyId(int index)
	{
		return default(long);
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x531F10", Offset = "0x530510", VA = "0x180531F10")]
	[MonoPInvokeCallback]
	private static void ConnectVoiceCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x532020", Offset = "0x530620", VA = "0x180532020")]
	public void ConnectVoice(long lobbyId, ConnectVoiceHandler callback)
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x532B30", Offset = "0x531130", VA = "0x180532B30")]
	[MonoPInvokeCallback]
	private static void DisconnectVoiceCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x532C40", Offset = "0x531240", VA = "0x180532C40")]
	public void DisconnectVoice(long lobbyId, DisconnectVoiceHandler callback)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x531E00", Offset = "0x530400", VA = "0x180531E00")]
	public void ConnectNetwork(long lobbyId)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x532A20", Offset = "0x531020", VA = "0x180532A20")]
	public void DisconnectNetwork(long lobbyId)
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x532DF0", Offset = "0x5313F0", VA = "0x180532DF0")]
	public void FlushNetwork()
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x5359E0", Offset = "0x533FE0", VA = "0x1805359E0")]
	public void OpenNetworkChannel(long lobbyId, byte channelId, bool reliable)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x5362D0", Offset = "0x5348D0", VA = "0x1805362D0")]
	public void SendNetworkMessage(long lobbyId, long userId, byte channelId, byte[] data)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x535220", Offset = "0x533820", VA = "0x180535220")]
	[MonoPInvokeCallback]
	private static void OnLobbyUpdateImpl(IntPtr ptr, long lobbyId)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x534F30", Offset = "0x533530", VA = "0x180534F30")]
	[MonoPInvokeCallback]
	private static void OnLobbyDeleteImpl(IntPtr ptr, long lobbyId, uint reason)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x535340", Offset = "0x533940", VA = "0x180535340")]
	[MonoPInvokeCallback]
	private static void OnMemberConnectImpl(IntPtr ptr, long lobbyId, long userId)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x5355A0", Offset = "0x533BA0", VA = "0x1805355A0")]
	[MonoPInvokeCallback]
	private static void OnMemberUpdateImpl(IntPtr ptr, long lobbyId, long userId)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x535470", Offset = "0x533A70", VA = "0x180535470")]
	[MonoPInvokeCallback]
	private static void OnMemberDisconnectImpl(IntPtr ptr, long lobbyId, long userId)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x535060", Offset = "0x533660", VA = "0x180535060")]
	[MonoPInvokeCallback]
	private static void OnLobbyMessageImpl(IntPtr ptr, long lobbyId, long userId, IntPtr dataPtr, int dataLen)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x5358A0", Offset = "0x533EA0", VA = "0x1805358A0")]
	[MonoPInvokeCallback]
	private static void OnSpeakingImpl(IntPtr ptr, long lobbyId, long userId, bool speaking)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x5356D0", Offset = "0x533CD0", VA = "0x1805356D0")]
	[MonoPInvokeCallback]
	private static void OnNetworkMessageImpl(IntPtr ptr, long lobbyId, long userId, byte channelId, IntPtr dataPtr, int dataLen)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x533E70", Offset = "0x532470", VA = "0x180533E70")]
	public IEnumerable<User> GetMemberUsers(long lobbyID)
	{
		return null;
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x535EE0", Offset = "0x5344E0", VA = "0x180535EE0")]
	public void SendLobbyMessage(long lobbyID, string data, SendLobbyMessageHandler handler)
	{
	}
}
