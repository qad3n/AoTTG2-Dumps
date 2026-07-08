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
	[Address(RVA = "0x3C49280", Offset = "0x3C49280", VA = "0x3C49280")]
	public bool ConnectAndJoinRoom()
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x3C495A0", Offset = "0x3C495A0", VA = "0x3C495A0")]
	public void Disconnect()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x3C49780", Offset = "0x3C49780", VA = "0x3C49780", Slot = "18")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x3C497A0", Offset = "0x3C497A0", VA = "0x3C497A0", Slot = "10")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x3C498F0", Offset = "0x3C498F0", VA = "0x3C498F0", Slot = "13")]
	protected override void OnOperationResponseReceived(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x3C49EA0", Offset = "0x3C49EA0", VA = "0x3C49EA0")]
	protected void LeaderStateChanged(ClientState toState)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x3C4A240", Offset = "0x3C4A240", VA = "0x3C4A240", Slot = "12")]
	protected override void OnVoiceStateChanged(ClientState fromState, ClientState toState)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x3C4A900", Offset = "0x3C4A900", VA = "0x3C4A900")]
	private void ConnectOrJoinVoice()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x3C4B080", Offset = "0x3C4B080", VA = "0x3C4B080")]
	public bool JoinRoom(string roomName, [Optional] string[] expectedUsers, [Optional] string password, [Optional] string hash, [Optional] string sessionID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x3C4B1C0", Offset = "0x3C4B1C0", VA = "0x3C4B1C0")]
	public bool CreateRoom(string roomName, [Optional] RoomOptions roomOptions, [Optional] TypedLobby typedLobby, [Optional] string[] expectedUsers, [Optional] string hash, [Optional] string sessionID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3C4B2C0", Offset = "0x3C4B2C0", VA = "0x3C4B2C0", Slot = "19")]
	protected virtual bool JoinVoiceRoom(string voiceRoomName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3C4A050", Offset = "0x3C4A050", VA = "0x3C4A050")]
	private void FollowLeader(ClientState toState)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3C49790", Offset = "0x3C49790", VA = "0x3C49790")]
	private void FollowLeader()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3C4B660", Offset = "0x3C4B660", VA = "0x3C4B660")]
	protected VoiceFollowClient()
	{
	}
}
