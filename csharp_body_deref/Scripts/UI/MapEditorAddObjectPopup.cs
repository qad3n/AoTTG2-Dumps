using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x200066F")]
internal class MapEditorAddObjectPopup : BasePopup
{
	[Token(Token = "0x4001F50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting Search;

	[Token(Token = "0x4001F51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x17000C91")]
	protected override string Title
	{
		[Token(Token = "0x600409E")]
		[Address(RVA = "0x4004C40", Offset = "0x4004C40", VA = "0x4004C40", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C92")]
	protected override float Width
	{
		[Token(Token = "0x600409F")]
		[Address(RVA = "0x4004C60", Offset = "0x4004C60", VA = "0x4004C60", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C93")]
	protected override float Height
	{
		[Token(Token = "0x60040A0")]
		[Address(RVA = "0x4004C70", Offset = "0x4004C70", VA = "0x4004C70", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C94")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x60040A1")]
		[Address(RVA = "0x4004C80", Offset = "0x4004C80", VA = "0x4004C80", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C95")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x60040A2")]
		[Address(RVA = "0x4004C90", Offset = "0x4004C90", VA = "0x4004C90", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C96")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60040A3")]
		[Address(RVA = "0x4004CA0", Offset = "0x4004CA0", VA = "0x4004CA0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C97")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x60040A4")]
		[Address(RVA = "0x4004CB0", Offset = "0x4004CB0", VA = "0x4004CB0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C98")]
	protected virtual bool TwoRows
	{
		[Token(Token = "0x60040A5")]
		[Address(RVA = "0x4004CE0", Offset = "0x4004CE0", VA = "0x4004CE0", Slot = "59")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60040A6")]
	[Address(RVA = "0x4004CF0", Offset = "0x4004CF0", VA = "0x4004CF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60040A7")]
	[Address(RVA = "0x4004FA0", Offset = "0x4004FA0", VA = "0x4004FA0", Slot = "60")]
	protected virtual string[] GetCategories()
	{
		return null;
	}

	[Token(Token = "0x60040A8")]
	[Address(RVA = "0x40051E0", Offset = "0x40051E0", VA = "0x40051E0", Slot = "32")]
	public override float GetPanelVerticalOffset()
	{
		return default(float);
	}

	[Token(Token = "0x60040A9")]
	[Address(RVA = "0x4005210", Offset = "0x4005210", VA = "0x4005210", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x60040AA")]
	[Address(RVA = "0x4005D50", Offset = "0x4005D50", VA = "0x4005D50")]
	protected GameObject CreateRow()
	{
		return null;
	}

	[Token(Token = "0x60040AB")]
	[Address(RVA = "0x4005E60", Offset = "0x4005E60", VA = "0x4005E60")]
	protected void OnTopBarButtonClick(string name)
	{
	}

	[Token(Token = "0x60040AC")]
	[Address(RVA = "0x4005F40", Offset = "0x4005F40", VA = "0x4005F40", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x60040AD")]
	[Address(RVA = "0x4006130", Offset = "0x4006130", VA = "0x4006130")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x60040AE")]
	[Address(RVA = "0x4006150", Offset = "0x4006150", VA = "0x4006150")]
	public MapEditorAddObjectPopup()
	{
	}
}
