// ==================== AoTTG2 cross-reference ====================
// Type: UI.MultiplayerRoomListPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MultiplayerRoomListPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerRoomListPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20006A4")]
internal class MultiplayerRoomListPopup : BasePopup
{
	[Token(Token = "0x4002075")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected MultiplayerPasswordPopup _multiplayerPasswordPopup;

	[Token(Token = "0x4002076")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected MultiplayerFilterPopup _multiplayerFilterPopup;

	[Token(Token = "0x4002077")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected Text _pageLabel;

	[Token(Token = "0x4002078")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected Text _playersOnlineLabel;

	[Token(Token = "0x4002079")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected GameObject _roomList;

	[Token(Token = "0x400207A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected GameObject _noRoomsLabel;

	[Token(Token = "0x400207B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	protected List<GameObject> _roomButtons;

	[Token(Token = "0x400207C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public StringSetting _filterQuery;

	[Token(Token = "0x400207D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public BoolSetting _filterShowFull;

	[Token(Token = "0x400207E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public BoolSetting _filterShowPassword;

	[Token(Token = "0x400207F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	protected IntSetting _currentPage;

	[Token(Token = "0x4002080")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private float _maxUpdateDelay;

	[Token(Token = "0x4002081")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x104")]
	private float _currentUpdateDelay;

	[Token(Token = "0x4002082")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private int _roomsPerPage;

	[Token(Token = "0x4002083")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private RoomInfo[] _rooms;

	[Token(Token = "0x4002084")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private char[] _roomSeperator;

	[Token(Token = "0x4002085")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private int _lastPageCount;

	[Token(Token = "0x17000CC7")]
	protected override string ThemePanel
	{
		[Token(Token = "0x600423F")]
		[Address(RVA = "0x430BCE0", Offset = "0x430BCE0", VA = "0x430BCE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CC8")]
	protected override bool HasPremadeContent
	{
		[Token(Token = "0x6004240")]
		[Address(RVA = "0x430BD10", Offset = "0x430BD10", VA = "0x430BD10", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CC9")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004241")]
		[Address(RVA = "0x430BD20", Offset = "0x430BD20", VA = "0x430BD20", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CCA")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004242")]
		[Address(RVA = "0x430BD30", Offset = "0x430BD30", VA = "0x430BD30", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CCB")]
	protected override float Width
	{
		[Token(Token = "0x6004243")]
		[Address(RVA = "0x430BD40", Offset = "0x430BD40", VA = "0x430BD40", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CCC")]
	protected override float Height
	{
		[Token(Token = "0x6004244")]
		[Address(RVA = "0x430BD50", Offset = "0x430BD50", VA = "0x430BD50", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004245")]
	[Address(RVA = "0x430BD60", Offset = "0x430BD60", VA = "0x430BD60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004246")]
	[Address(RVA = "0x430CBE0", Offset = "0x430CBE0", VA = "0x430CBE0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004247")]
	[Address(RVA = "0x430CC50", Offset = "0x430CC50", VA = "0x430CC50", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x6004248")]
	[Address(RVA = "0x430CCC0", Offset = "0x430CCC0", VA = "0x430CCC0")]
	public void HideNoDisconnect()
	{
	}

	[Token(Token = "0x6004249")]
	[Address(RVA = "0x430CCD0", Offset = "0x430CCD0", VA = "0x430CCD0")]
	protected void Update()
	{
	}

	[Token(Token = "0x600424A")]
	[Address(RVA = "0x430CD30", Offset = "0x430CD30", VA = "0x430CD30", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x600424B")]
	[Address(RVA = "0x4309060", Offset = "0x4309060", VA = "0x4309060")]
	public void RefreshList(bool refetch = true)
	{
	}

	[Token(Token = "0x600424C")]
	[Address(RVA = "0x430D520", Offset = "0x430D520", VA = "0x430D520")]
	protected List<RoomInfo> GetCurrentPageRooms(List<RoomInfo> rooms)
	{
		return null;
	}

	[Token(Token = "0x600424D")]
	[Address(RVA = "0x430D0C0", Offset = "0x430D0C0", VA = "0x430D0C0")]
	protected List<RoomInfo> GetFilteredRooms()
	{
		return null;
	}

	[Token(Token = "0x600424E")]
	[Address(RVA = "0x430D4C0", Offset = "0x430D4C0", VA = "0x430D4C0")]
	protected int GetPageCount(List<RoomInfo> rooms)
	{
		return default(int);
	}

	[Token(Token = "0x600424F")]
	[Address(RVA = "0x430CF10", Offset = "0x430CF10", VA = "0x430CF10")]
	protected void ClearRoomButtons()
	{
	}

	[Token(Token = "0x6004250")]
	[Address(RVA = "0x430DBD0", Offset = "0x430DBD0", VA = "0x430DBD0")]
	protected bool IsValidRoom(RoomInfo info)
	{
		return default(bool);
	}

	[Token(Token = "0x6004251")]
	[Address(RVA = "0x430DB00", Offset = "0x430DB00", VA = "0x430DB00")]
	protected string GetPasswordHash(RoomInfo info)
	{
		return null;
	}

	[Token(Token = "0x6004252")]
	[Address(RVA = "0x430DB70", Offset = "0x430DB70", VA = "0x430DB70")]
	protected bool GetAccountRequired(RoomInfo info)
	{
		return default(bool);
	}

	[Token(Token = "0x6004253")]
	[Address(RVA = "0x430D700", Offset = "0x430D700", VA = "0x430D700")]
	protected string GetRoomFormattedName(RoomInfo room)
	{
		return null;
	}

	[Token(Token = "0x6004254")]
	[Address(RVA = "0x430DD10", Offset = "0x430DD10", VA = "0x430DD10")]
	private void OnRoomClick(RoomInfo room)
	{
	}

	[Token(Token = "0x6004255")]
	[Address(RVA = "0x430E070", Offset = "0x430E070", VA = "0x430E070")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004256")]
	[Address(RVA = "0x430E540", Offset = "0x430E540", VA = "0x430E540")]
	public MultiplayerRoomListPopup()
	{
	}
}
