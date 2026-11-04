// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.MainMenuGameManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/MainMenuGameManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/MainMenuGameManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;

namespace GameManagers;

[Token(Token = "0x2000333")]
internal class MainMenuGameManager : BaseGameManager
{
	[Token(Token = "0x400107C")]
	[FieldOffset(Offset = "0x0")]
	public static bool JustLeftRoom;

	[Token(Token = "0x400107D")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, RoomInfo> RoomList;

	[Token(Token = "0x6001465")]
	[Address(RVA = "0x1E68730", Offset = "0x1E66D30", VA = "0x181E68730", Slot = "36")]
	public override void OnJoinedLobby()
	{
	}

	[Token(Token = "0x6001466")]
	[Address(RVA = "0x1E685F0", Offset = "0x1E66BF0", VA = "0x181E685F0", Slot = "45")]
	public override void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void Update()
	{
	}

	[Token(Token = "0x6001468")]
	[Address(RVA = "0x1E689C0", Offset = "0x1E66FC0", VA = "0x181E689C0", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x1E686E0", Offset = "0x1E66CE0", VA = "0x181E686E0", Slot = "34")]
	public override void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x1E68690", Offset = "0x1E66C90", VA = "0x181E68690", Slot = "33")]
	public override void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600146B")]
	[Address(RVA = "0x1E68B50", Offset = "0x1E67150", VA = "0x181E68B50")]
	private void UpdateCachedRoomList(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x600146C")]
	[Address(RVA = "0x1E68A00", Offset = "0x1E67000", VA = "0x181E68A00", Slot = "40")]
	public override void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x600146D")]
	[Address(RVA = "0x1E68D20", Offset = "0x1E67320", VA = "0x181E68D20")]
	public MainMenuGameManager()
	{
	}
}
