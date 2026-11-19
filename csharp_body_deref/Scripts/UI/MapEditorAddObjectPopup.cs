// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorAddObjectPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorAddObjectPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddObjectPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000894")]
internal class MapEditorAddObjectPopup : BasePopup
{
	[Token(Token = "0x4002B32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting Search;

	[Token(Token = "0x4002B33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x17000E52")]
	protected override string Title
	{
		[Token(Token = "0x600518B")]
		[Address(RVA = "0x5C60090", Offset = "0x5C5F090", VA = "0x5C60090", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E53")]
	protected override float Width
	{
		[Token(Token = "0x600518C")]
		[Address(RVA = "0x5C600B0", Offset = "0x5C5F0B0", VA = "0x5C600B0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E54")]
	protected override float Height
	{
		[Token(Token = "0x600518D")]
		[Address(RVA = "0x5C600C0", Offset = "0x5C5F0C0", VA = "0x5C600C0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E55")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600518E")]
		[Address(RVA = "0x5C600D0", Offset = "0x5C5F0D0", VA = "0x5C600D0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E56")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600518F")]
		[Address(RVA = "0x5C600E0", Offset = "0x5C5F0E0", VA = "0x5C600E0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E57")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6005190")]
		[Address(RVA = "0x5C600F0", Offset = "0x5C5F0F0", VA = "0x5C600F0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E58")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6005191")]
		[Address(RVA = "0x5C60100", Offset = "0x5C5F100", VA = "0x5C60100", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E59")]
	protected virtual bool TwoRows
	{
		[Token(Token = "0x6005192")]
		[Address(RVA = "0x5C60130", Offset = "0x5C5F130", VA = "0x5C60130", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6005193")]
	[Address(RVA = "0x5C60140", Offset = "0x5C5F140", VA = "0x5C60140", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005194")]
	[Address(RVA = "0x5C60400", Offset = "0x5C5F400", VA = "0x5C60400", Slot = "63")]
	protected virtual string[] GetCategories()
	{
		return null;
	}

	[Token(Token = "0x6005195")]
	[Address(RVA = "0x5C60640", Offset = "0x5C5F640", VA = "0x5C60640", Slot = "32")]
	public override float GetPanelVerticalOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6005196")]
	[Address(RVA = "0x5C60670", Offset = "0x5C5F670", VA = "0x5C60670", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6005197")]
	[Address(RVA = "0x5C61030", Offset = "0x5C60030", VA = "0x5C61030")]
	protected GameObject CreateRow()
	{
		return null;
	}

	[Token(Token = "0x6005198")]
	[Address(RVA = "0x5C61140", Offset = "0x5C60140", VA = "0x5C61140")]
	protected void OnTopBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6005199")]
	[Address(RVA = "0x5C61220", Offset = "0x5C60220", VA = "0x5C61220", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x600519A")]
	[Address(RVA = "0x5C613F0", Offset = "0x5C603F0", VA = "0x5C613F0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x600519B")]
	[Address(RVA = "0x5C61410", Offset = "0x5C60410", VA = "0x5C61410")]
	public MapEditorAddObjectPopup()
	{
	}
}
