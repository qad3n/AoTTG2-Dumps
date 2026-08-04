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

[Token(Token = "0x2000005")]
public abstract class VoiceFollowClient : VoiceConnection
{
	[Token(Token = "0x400000A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	public bool AutoConnectAndJoin;

	[Token(Token = "0x400000B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC5")]
	private bool manualDisconnect;

	[Token(Token = "0x400000C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC6")]
	private bool errAuthOrJoin;

	[Token(Token = "0x17000002")]
	protected abstract bool LeaderInRoom
	{
		[Token(Token = "0x6000008")]
		get;
	}

	[Token(Token = "0x17000003")]
	protected abstract bool LeaderOfflineMode
	{
		[Token(Token = "0x6000009")]
		get;
	}

	[Token(Token = "0x600000A")]
	protected abstract string GetVoiceRoomName();

	[Token(Token = "0x600000B")]
	protected abstract bool ConnectVoice();

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x3F3B830", Offset = "0x3F3B830", VA = "0x3F3B830")]
	public bool ConnectAndJoinRoom()
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x3F3BB50", Offset = "0x3F3BB50", VA = "0x3F3BB50")]
	public void Disconnect()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x3F3BD30", Offset = "0x3F3BD30", VA = "0x3F3BD30", Slot = "18")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x3F3BD50", Offset = "0x3F3BD50", VA = "0x3F3BD50", Slot = "10")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x3F3BEA0", Offset = "0x3F3BEA0", VA = "0x3F3BEA0", Slot = "13")]
	protected override void OnOperationResponseReceived(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x3F3C450", Offset = "0x3F3C450", VA = "0x3F3C450")]
	protected void LeaderStateChanged(ClientState toState)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x3F3C7F0", Offset = "0x3F3C7F0", VA = "0x3F3C7F0", Slot = "12")]
	protected override void OnVoiceStateChanged(ClientState fromState, ClientState toState)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x3F3CEB0", Offset = "0x3F3CEB0", VA = "0x3F3CEB0")]
	private void ConnectOrJoinVoice()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x3F3D630", Offset = "0x3F3D630", VA = "0x3F3D630")]
	public bool JoinRoom(string roomName, [Optional] string[] expectedUsers, [Optional] string password, [Optional] string hash, [Optional] string sessionID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x3F3D770", Offset = "0x3F3D770", VA = "0x3F3D770")]
	public bool CreateRoom(string roomName, [Optional] RoomOptions roomOptions, [Optional] TypedLobby typedLobby, [Optional] string[] expectedUsers, [Optional] string hash, [Optional] string sessionID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3F3D870", Offset = "0x3F3D870", VA = "0x3F3D870", Slot = "19")]
	protected virtual bool JoinVoiceRoom(string voiceRoomName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3F3C600", Offset = "0x3F3C600", VA = "0x3F3C600")]
	private void FollowLeader(ClientState toState)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3F3BD40", Offset = "0x3F3BD40", VA = "0x3F3BD40")]
	private void FollowLeader()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3F3DC10", Offset = "0x3F3DC10", VA = "0x3F3DC10")]
	protected VoiceFollowClient()
	{
	}
}
