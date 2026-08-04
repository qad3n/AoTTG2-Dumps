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

[Token(Token = "0x2000221")]
internal class MainMenuGameManager : BaseGameManager
{
	[Token(Token = "0x4000B95")]
	[FieldOffset(Offset = "0x0")]
	public static bool JustLeftRoom;

	[Token(Token = "0x4000B96")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, RoomInfo> RoomList;

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x4469030", Offset = "0x4469030", VA = "0x4469030", Slot = "36")]
	public override void OnJoinedLobby()
	{
	}

	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x4469290", Offset = "0x4469290", VA = "0x4469290", Slot = "45")]
	public override void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x4469360", Offset = "0x4469360", VA = "0x4469360")]
	private void Update()
	{
	}

	[Token(Token = "0x6000D53")]
	[Address(RVA = "0x4469370", Offset = "0x4469370", VA = "0x4469370", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x44693D0", Offset = "0x44693D0", VA = "0x44693D0", Slot = "34")]
	public override void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x4469440", Offset = "0x4469440", VA = "0x4469440", Slot = "33")]
	public override void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000D56")]
	[Address(RVA = "0x44694B0", Offset = "0x44694B0", VA = "0x44694B0")]
	private void UpdateCachedRoomList(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x44695C0", Offset = "0x44695C0", VA = "0x44695C0", Slot = "40")]
	public override void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x6000D58")]
	[Address(RVA = "0x44695D0", Offset = "0x44695D0", VA = "0x44695D0")]
	public MainMenuGameManager()
	{
	}
}
