// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.VoiceFollowClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/VoiceFollowClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;
using Photon.Voice.Unity;

namespace Photon.Voice;

[Token(Token = "0x2000003")]
public abstract class VoiceFollowClient : VoiceConnection
{
	[Token(Token = "0x4000005")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	public bool AutoConnectAndJoin;

	[Token(Token = "0x4000006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC5")]
	private bool manualDisconnect;

	[Token(Token = "0x4000007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC6")]
	private bool errAuthOrJoin;

	[Token(Token = "0x17000002")]
	protected abstract bool LeaderInRoom
	{
		[Token(Token = "0x6000006")]
		get;
	}

	[Token(Token = "0x17000003")]
	protected abstract bool LeaderOfflineMode
	{
		[Token(Token = "0x6000007")]
		get;
	}

	[Token(Token = "0x6000008")]
	protected abstract string GetVoiceRoomName();

	[Token(Token = "0x6000009")]
	protected abstract bool ConnectVoice();

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x5725240", Offset = "0x5724240", VA = "0x5725240")]
	public bool ConnectAndJoinRoom()
	{
		return default(bool);
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x5725560", Offset = "0x5724560", VA = "0x5725560")]
	public void Disconnect()
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x5725740", Offset = "0x5724740", VA = "0x5725740", Slot = "18")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x5725760", Offset = "0x5724760", VA = "0x5725760", Slot = "10")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x57258B0", Offset = "0x57248B0", VA = "0x57258B0", Slot = "13")]
	protected override void OnOperationResponseReceived(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x5725E70", Offset = "0x5724E70", VA = "0x5725E70")]
	protected void LeaderStateChanged(ClientState toState)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x5726210", Offset = "0x5725210", VA = "0x5726210", Slot = "12")]
	protected override void OnVoiceStateChanged(ClientState fromState, ClientState toState)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x57268C0", Offset = "0x57258C0", VA = "0x57268C0")]
	private void ConnectOrJoinVoice()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x5727040", Offset = "0x5726040", VA = "0x5727040")]
	public bool JoinRoom(string roomName, [Optional] string[] expectedUsers, [Optional] string password, [Optional] string hash, [Optional] string sessionID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x5727180", Offset = "0x5726180", VA = "0x5727180")]
	public bool CreateRoom(string roomName, [Optional] RoomOptions roomOptions, [Optional] TypedLobby typedLobby, [Optional] string[] expectedUsers, [Optional] string hash, [Optional] string sessionID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x5727280", Offset = "0x5726280", VA = "0x5727280", Slot = "19")]
	protected virtual bool JoinVoiceRoom(string voiceRoomName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x5726020", Offset = "0x5725020", VA = "0x5726020")]
	private void FollowLeader(ClientState toState)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x5725750", Offset = "0x5724750", VA = "0x5725750")]
	private void FollowLeader()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x5727620", Offset = "0x5726620", VA = "0x5727620")]
	protected VoiceFollowClient()
	{
	}
}
