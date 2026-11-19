// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.MainMenuGameManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/MainMenuGameManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/MainMenuGameManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;

namespace GameManagers;

[Token(Token = "0x2000394")]
internal class MainMenuGameManager : BaseGameManager
{
	[Token(Token = "0x4001226")]
	[FieldOffset(Offset = "0x0")]
	public static bool JustLeftRoom;

	[Token(Token = "0x4001227")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, RoomInfo> RoomList;

	[Token(Token = "0x4001228")]
	[FieldOffset(Offset = "0x10")]
	public static bool RoomListReceived;

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x584B360", Offset = "0x584A360", VA = "0x584B360", Slot = "36")]
	public override void OnJoinedLobby()
	{
	}

	[Token(Token = "0x60016DE")]
	[Address(RVA = "0x584B5F0", Offset = "0x584A5F0", VA = "0x584B5F0", Slot = "45")]
	public override void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x60016DF")]
	[Address(RVA = "0x584B6C0", Offset = "0x584A6C0", VA = "0x584B6C0")]
	private void Update()
	{
	}

	[Token(Token = "0x60016E0")]
	[Address(RVA = "0x584B6D0", Offset = "0x584A6D0", VA = "0x584B6D0", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x60016E1")]
	[Address(RVA = "0x584B730", Offset = "0x584A730", VA = "0x584B730", Slot = "34")]
	public override void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60016E2")]
	[Address(RVA = "0x584B810", Offset = "0x584A810", VA = "0x584B810", Slot = "33")]
	public override void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60016E3")]
	[Address(RVA = "0x584B780", Offset = "0x584A780", VA = "0x584B780")]
	private static void OnRoomEntryFailed(short returnCode, string message, bool creating)
	{
	}

	[Token(Token = "0x60016E4")]
	[Address(RVA = "0x584B870", Offset = "0x584A870", VA = "0x584B870")]
	private void UpdateCachedRoomList(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x60016E5")]
	[Address(RVA = "0x584B9D0", Offset = "0x584A9D0", VA = "0x584B9D0", Slot = "40")]
	public override void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x60016E6")]
	[Address(RVA = "0x584BA30", Offset = "0x584AA30", VA = "0x584BA30")]
	public MainMenuGameManager()
	{
	}
}
