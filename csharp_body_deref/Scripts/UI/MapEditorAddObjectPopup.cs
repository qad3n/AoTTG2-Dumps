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

[Token(Token = "0x20006BB")]
internal class MapEditorAddObjectPopup : BasePopup
{
	[Token(Token = "0x40020A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting Search;

	[Token(Token = "0x40020A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x17000D0B")]
	protected override string Title
	{
		[Token(Token = "0x60042FC")]
		[Address(RVA = "0x4319110", Offset = "0x4319110", VA = "0x4319110", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D0C")]
	protected override float Width
	{
		[Token(Token = "0x60042FD")]
		[Address(RVA = "0x4319130", Offset = "0x4319130", VA = "0x4319130", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D0D")]
	protected override float Height
	{
		[Token(Token = "0x60042FE")]
		[Address(RVA = "0x4319140", Offset = "0x4319140", VA = "0x4319140", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D0E")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x60042FF")]
		[Address(RVA = "0x4319150", Offset = "0x4319150", VA = "0x4319150", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D0F")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6004300")]
		[Address(RVA = "0x4319160", Offset = "0x4319160", VA = "0x4319160", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D10")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004301")]
		[Address(RVA = "0x4319170", Offset = "0x4319170", VA = "0x4319170", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D11")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004302")]
		[Address(RVA = "0x4319180", Offset = "0x4319180", VA = "0x4319180", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D12")]
	protected virtual bool TwoRows
	{
		[Token(Token = "0x6004303")]
		[Address(RVA = "0x43191B0", Offset = "0x43191B0", VA = "0x43191B0", Slot = "59")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004304")]
	[Address(RVA = "0x43191C0", Offset = "0x43191C0", VA = "0x43191C0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004305")]
	[Address(RVA = "0x4319470", Offset = "0x4319470", VA = "0x4319470", Slot = "60")]
	protected virtual string[] GetCategories()
	{
		return null;
	}

	[Token(Token = "0x6004306")]
	[Address(RVA = "0x43196B0", Offset = "0x43196B0", VA = "0x43196B0", Slot = "32")]
	public override float GetPanelVerticalOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6004307")]
	[Address(RVA = "0x43196E0", Offset = "0x43196E0", VA = "0x43196E0", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6004308")]
	[Address(RVA = "0x431A220", Offset = "0x431A220", VA = "0x431A220")]
	protected GameObject CreateRow()
	{
		return null;
	}

	[Token(Token = "0x6004309")]
	[Address(RVA = "0x431A330", Offset = "0x431A330", VA = "0x431A330")]
	protected void OnTopBarButtonClick(string name)
	{
	}

	[Token(Token = "0x600430A")]
	[Address(RVA = "0x431A410", Offset = "0x431A410", VA = "0x431A410", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x600430B")]
	[Address(RVA = "0x431A600", Offset = "0x431A600", VA = "0x431A600")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x600430C")]
	[Address(RVA = "0x431A620", Offset = "0x431A620", VA = "0x431A620")]
	public MapEditorAddObjectPopup()
	{
	}
}
