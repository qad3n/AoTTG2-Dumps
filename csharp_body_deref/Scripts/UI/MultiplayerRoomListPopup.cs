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

[Token(Token = "0x20007FF")]
internal class MultiplayerRoomListPopup : BasePopup
{
	[Token(Token = "0x4002849")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected MultiplayerPasswordPopup _multiplayerPasswordPopup;

	[Token(Token = "0x400284A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected MultiplayerFilterPopup _multiplayerFilterPopup;

	[Token(Token = "0x400284B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected Text _pageLabel;

	[Token(Token = "0x400284C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected Text _playersOnlineLabel;

	[Token(Token = "0x400284D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected GameObject _roomList;

	[Token(Token = "0x400284E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected GameObject _noRoomsLabel;

	[Token(Token = "0x400284F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	protected List<GameObject> _roomButtons;

	[Token(Token = "0x4002850")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public StringSetting _filterQuery;

	[Token(Token = "0x4002851")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public BoolSetting _filterShowFull;

	[Token(Token = "0x4002852")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public BoolSetting _filterShowPassword;

	[Token(Token = "0x4002853")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	protected IntSetting _currentPage;

	[Token(Token = "0x4002854")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private float _maxUpdateDelay;

	[Token(Token = "0x4002855")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x104")]
	private float _currentUpdateDelay;

	[Token(Token = "0x4002856")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private int _roomsPerPage;

	[Token(Token = "0x4002857")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private RoomInfo[] _rooms;

	[Token(Token = "0x4002858")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private char[] _roomSeperator;

	[Token(Token = "0x4002859")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private int _lastPageCount;

	[Token(Token = "0x17000E0D")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004D33")]
		[Address(RVA = "0x2296890", Offset = "0x2294E90", VA = "0x182296890", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E0E")]
	protected override bool HasPremadeContent
	{
		[Token(Token = "0x6004D34")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E0F")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004D35")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E10")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004D36")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E11")]
	protected override float Width
	{
		[Token(Token = "0x6004D37")]
		[Address(RVA = "0x210FA90", Offset = "0x210E090", VA = "0x18210FA90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E12")]
	protected override float Height
	{
		[Token(Token = "0x6004D38")]
		[Address(RVA = "0x2296880", Offset = "0x2294E80", VA = "0x182296880", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004D39")]
	[Address(RVA = "0x22955E0", Offset = "0x2293BE0", VA = "0x1822955E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004D3A")]
	[Address(RVA = "0x22963F0", Offset = "0x22949F0", VA = "0x1822963F0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004D3B")]
	[Address(RVA = "0x2293E20", Offset = "0x2292420", VA = "0x182293E20", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x6004D3C")]
	[Address(RVA = "0x2293E10", Offset = "0x2292410", VA = "0x182293E10")]
	public void HideNoDisconnect()
	{
	}

	[Token(Token = "0x6004D3D")]
	[Address(RVA = "0x22965F0", Offset = "0x2294BF0", VA = "0x1822965F0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6004D3E")]
	[Address(RVA = "0x2295400", Offset = "0x2293A00", VA = "0x182295400", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004D3F")]
	[Address(RVA = "0x22947C0", Offset = "0x2292DC0", VA = "0x1822947C0")]
	public void RefreshList(bool refetch = true)
	{
	}

	[Token(Token = "0x6004D40")]
	[Address(RVA = "0x2293200", Offset = "0x2291800", VA = "0x182293200")]
	protected List<RoomInfo> GetCurrentPageRooms(List<RoomInfo> rooms)
	{
		return null;
	}

	[Token(Token = "0x6004D41")]
	[Address(RVA = "0x22933B0", Offset = "0x22919B0", VA = "0x1822933B0")]
	protected List<RoomInfo> GetFilteredRooms()
	{
		return null;
	}

	[Token(Token = "0x6004D42")]
	[Address(RVA = "0x2293820", Offset = "0x2291E20", VA = "0x182293820")]
	protected int GetPageCount(List<RoomInfo> rooms)
	{
		return default(int);
	}

	[Token(Token = "0x6004D43")]
	[Address(RVA = "0x2293000", Offset = "0x2291600", VA = "0x182293000")]
	protected void ClearRoomButtons()
	{
	}

	[Token(Token = "0x6004D44")]
	[Address(RVA = "0x2293E80", Offset = "0x2292480", VA = "0x182293E80")]
	protected bool IsValidRoom(RoomInfo info)
	{
		return default(bool);
	}

	[Token(Token = "0x6004D45")]
	[Address(RVA = "0x2293890", Offset = "0x2291E90", VA = "0x182293890")]
	protected string GetPasswordHash(RoomInfo info)
	{
		return null;
	}

	[Token(Token = "0x6004D46")]
	[Address(RVA = "0x2293190", Offset = "0x2291790", VA = "0x182293190")]
	protected bool GetAccountRequired(RoomInfo info)
	{
		return default(bool);
	}

	[Token(Token = "0x6004D47")]
	[Address(RVA = "0x2293910", Offset = "0x2291F10", VA = "0x182293910")]
	protected string GetRoomFormattedName(RoomInfo room)
	{
		return null;
	}

	[Token(Token = "0x6004D48")]
	[Address(RVA = "0x2294410", Offset = "0x2292A10", VA = "0x182294410")]
	private void OnRoomClick(RoomInfo room)
	{
	}

	[Token(Token = "0x6004D49")]
	[Address(RVA = "0x2293FE0", Offset = "0x22925E0", VA = "0x182293FE0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004D4A")]
	[Address(RVA = "0x2296650", Offset = "0x2294C50", VA = "0x182296650")]
	public MultiplayerRoomListPopup()
	{
	}
}
