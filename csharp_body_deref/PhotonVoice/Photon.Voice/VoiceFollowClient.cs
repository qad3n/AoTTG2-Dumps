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
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public bool AutoConnectAndJoin;

	[Token(Token = "0x4000006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC9")]
	private bool manualDisconnect;

	[Token(Token = "0x4000007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCA")]
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
	[Address(RVA = "0x1D98450", Offset = "0x1D96A50", VA = "0x181D98450")]
	public bool ConnectAndJoinRoom()
	{
		return default(bool);
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x1D98950", Offset = "0x1D96F50", VA = "0x181D98950")]
	public void Disconnect()
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x1D99820", Offset = "0x1D97E20", VA = "0x181D99820", Slot = "18")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x1D96F50", Offset = "0x1D95550", VA = "0x181D96F50", Slot = "10")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x1D98FE0", Offset = "0x1D975E0", VA = "0x181D98FE0", Slot = "13")]
	protected override void OnOperationResponseReceived(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x1D98EA0", Offset = "0x1D974A0", VA = "0x181D98EA0")]
	protected void LeaderStateChanged(ClientState toState)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x1D995A0", Offset = "0x1D97BA0", VA = "0x181D995A0", Slot = "12")]
	protected override void OnVoiceStateChanged(ClientState fromState, ClientState toState)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x1D98550", Offset = "0x1D96B50", VA = "0x181D98550")]
	private void ConnectOrJoinVoice()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x1D98AF0", Offset = "0x1D970F0", VA = "0x181D98AF0")]
	public bool JoinRoom(string roomName, [Optional] string[] expectedUsers, [Optional] string password, [Optional] string hash, [Optional] string sessionID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x1D98860", Offset = "0x1D96E60", VA = "0x181D98860")]
	public bool CreateRoom(string roomName, [Optional] RoomOptions roomOptions, [Optional] TypedLobby typedLobby, [Optional] string[] expectedUsers, [Optional] string hash, [Optional] string sessionID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x1D98C20", Offset = "0x1D97220", VA = "0x181D98C20", Slot = "19")]
	protected virtual bool JoinVoiceRoom(string voiceRoomName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x1D98A10", Offset = "0x1D97010", VA = "0x181D98A10")]
	private void FollowLeader(ClientState toState)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void FollowLeader()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x1D99830", Offset = "0x1D97E30", VA = "0x181D99830")]
	protected VoiceFollowClient()
	{
	}
}
