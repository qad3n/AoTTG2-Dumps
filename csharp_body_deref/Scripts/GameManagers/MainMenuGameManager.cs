using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;

namespace GameManagers;

[Token(Token = "0x20001EB")]
internal class MainMenuGameManager : BaseGameManager
{
	[Token(Token = "0x4000ABC")]
	[FieldOffset(Offset = "0x0")]
	public static bool JustLeftRoom;

	[Token(Token = "0x4000ABD")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, RoomInfo> RoomList;

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x4134600", Offset = "0x4134600", VA = "0x4134600", Slot = "36")]
	public override void OnJoinedLobby()
	{
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x4134860", Offset = "0x4134860", VA = "0x4134860", Slot = "45")]
	public override void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x4134930", Offset = "0x4134930", VA = "0x4134930")]
	private void Update()
	{
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x4134940", Offset = "0x4134940", VA = "0x4134940", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x41349A0", Offset = "0x41349A0", VA = "0x41349A0", Slot = "34")]
	public override void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x4134A10", Offset = "0x4134A10", VA = "0x4134A10", Slot = "33")]
	public override void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x4134A80", Offset = "0x4134A80", VA = "0x4134A80")]
	private void UpdateCachedRoomList(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x4134B90", Offset = "0x4134B90", VA = "0x4134B90", Slot = "40")]
	public override void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x4134BA0", Offset = "0x4134BA0", VA = "0x4134BA0")]
	public MainMenuGameManager()
	{
	}
}
