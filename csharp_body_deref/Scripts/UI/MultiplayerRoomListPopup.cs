using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000658")]
internal class MultiplayerRoomListPopup : BasePopup
{
	[Token(Token = "0x4001F20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected MultiplayerPasswordPopup _multiplayerPasswordPopup;

	[Token(Token = "0x4001F21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected MultiplayerFilterPopup _multiplayerFilterPopup;

	[Token(Token = "0x4001F22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected Text _pageLabel;

	[Token(Token = "0x4001F23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected Text _playersOnlineLabel;

	[Token(Token = "0x4001F24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected GameObject _roomList;

	[Token(Token = "0x4001F25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected GameObject _noRoomsLabel;

	[Token(Token = "0x4001F26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	protected List<GameObject> _roomButtons;

	[Token(Token = "0x4001F27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public StringSetting _filterQuery;

	[Token(Token = "0x4001F28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public BoolSetting _filterShowFull;

	[Token(Token = "0x4001F29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public BoolSetting _filterShowPassword;

	[Token(Token = "0x4001F2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	protected IntSetting _currentPage;

	[Token(Token = "0x4001F2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private float _maxUpdateDelay;

	[Token(Token = "0x4001F2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x104")]
	private float _currentUpdateDelay;

	[Token(Token = "0x4001F2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private int _roomsPerPage;

	[Token(Token = "0x4001F2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private RoomInfo[] _rooms;

	[Token(Token = "0x4001F2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private char[] _roomSeperator;

	[Token(Token = "0x4001F30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private int _lastPageCount;

	[Token(Token = "0x17000C4D")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003FE2")]
		[Address(RVA = "0x3FF79A0", Offset = "0x3FF79A0", VA = "0x3FF79A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C4E")]
	protected override bool HasPremadeContent
	{
		[Token(Token = "0x6003FE3")]
		[Address(RVA = "0x3FF79D0", Offset = "0x3FF79D0", VA = "0x3FF79D0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C4F")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003FE4")]
		[Address(RVA = "0x3FF79E0", Offset = "0x3FF79E0", VA = "0x3FF79E0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C50")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003FE5")]
		[Address(RVA = "0x3FF79F0", Offset = "0x3FF79F0", VA = "0x3FF79F0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C51")]
	protected override float Width
	{
		[Token(Token = "0x6003FE6")]
		[Address(RVA = "0x3FF7A00", Offset = "0x3FF7A00", VA = "0x3FF7A00", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C52")]
	protected override float Height
	{
		[Token(Token = "0x6003FE7")]
		[Address(RVA = "0x3FF7A10", Offset = "0x3FF7A10", VA = "0x3FF7A10", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003FE8")]
	[Address(RVA = "0x3FF7A20", Offset = "0x3FF7A20", VA = "0x3FF7A20", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003FE9")]
	[Address(RVA = "0x3FF88A0", Offset = "0x3FF88A0", VA = "0x3FF88A0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003FEA")]
	[Address(RVA = "0x3FF8910", Offset = "0x3FF8910", VA = "0x3FF8910", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x6003FEB")]
	[Address(RVA = "0x3FF8980", Offset = "0x3FF8980", VA = "0x3FF8980")]
	public void HideNoDisconnect()
	{
	}

	[Token(Token = "0x6003FEC")]
	[Address(RVA = "0x3FF8990", Offset = "0x3FF8990", VA = "0x3FF8990")]
	protected void Update()
	{
	}

	[Token(Token = "0x6003FED")]
	[Address(RVA = "0x3FF89F0", Offset = "0x3FF89F0", VA = "0x3FF89F0", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003FEE")]
	[Address(RVA = "0x3FF4D70", Offset = "0x3FF4D70", VA = "0x3FF4D70")]
	public void RefreshList(bool refetch = true)
	{
	}

	[Token(Token = "0x6003FEF")]
	[Address(RVA = "0x3FF91E0", Offset = "0x3FF91E0", VA = "0x3FF91E0")]
	protected List<RoomInfo> GetCurrentPageRooms(List<RoomInfo> rooms)
	{
		return null;
	}

	[Token(Token = "0x6003FF0")]
	[Address(RVA = "0x3FF8D80", Offset = "0x3FF8D80", VA = "0x3FF8D80")]
	protected List<RoomInfo> GetFilteredRooms()
	{
		return null;
	}

	[Token(Token = "0x6003FF1")]
	[Address(RVA = "0x3FF9180", Offset = "0x3FF9180", VA = "0x3FF9180")]
	protected int GetPageCount(List<RoomInfo> rooms)
	{
		return default(int);
	}

	[Token(Token = "0x6003FF2")]
	[Address(RVA = "0x3FF8BD0", Offset = "0x3FF8BD0", VA = "0x3FF8BD0")]
	protected void ClearRoomButtons()
	{
	}

	[Token(Token = "0x6003FF3")]
	[Address(RVA = "0x3FF9890", Offset = "0x3FF9890", VA = "0x3FF9890")]
	protected bool IsValidRoom(RoomInfo info)
	{
		return default(bool);
	}

	[Token(Token = "0x6003FF4")]
	[Address(RVA = "0x3FF97C0", Offset = "0x3FF97C0", VA = "0x3FF97C0")]
	protected string GetPasswordHash(RoomInfo info)
	{
		return null;
	}

	[Token(Token = "0x6003FF5")]
	[Address(RVA = "0x3FF9830", Offset = "0x3FF9830", VA = "0x3FF9830")]
	protected bool GetAccountRequired(RoomInfo info)
	{
		return default(bool);
	}

	[Token(Token = "0x6003FF6")]
	[Address(RVA = "0x3FF93C0", Offset = "0x3FF93C0", VA = "0x3FF93C0")]
	protected string GetRoomFormattedName(RoomInfo room)
	{
		return null;
	}

	[Token(Token = "0x6003FF7")]
	[Address(RVA = "0x3FF99D0", Offset = "0x3FF99D0", VA = "0x3FF99D0")]
	private void OnRoomClick(RoomInfo room)
	{
	}

	[Token(Token = "0x6003FF8")]
	[Address(RVA = "0x3FF9D30", Offset = "0x3FF9D30", VA = "0x3FF9D30")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003FF9")]
	[Address(RVA = "0x3FFA200", Offset = "0x3FFA200", VA = "0x3FFA200")]
	public MultiplayerRoomListPopup()
	{
	}
}
