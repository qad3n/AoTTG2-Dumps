// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorAddComponentPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorAddComponentPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddComponentPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x200088F")]
internal class MapEditorAddComponentPopup : BasePopup
{
	[Token(Token = "0x4002B27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting Search;

	[Token(Token = "0x4002B28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x4002B29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public StringSetting FinishSetting;

	[Token(Token = "0x4002B2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private UnityAction _onLoad;

	[Token(Token = "0x17000E47")]
	protected override string Title
	{
		[Token(Token = "0x6005166")]
		[Address(RVA = "0x5C5DA20", Offset = "0x5C5CA20", VA = "0x5C5DA20", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E48")]
	protected override float Width
	{
		[Token(Token = "0x6005167")]
		[Address(RVA = "0x5C5DA40", Offset = "0x5C5CA40", VA = "0x5C5DA40", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E49")]
	protected override float Height
	{
		[Token(Token = "0x6005168")]
		[Address(RVA = "0x5C5DA50", Offset = "0x5C5CA50", VA = "0x5C5DA50", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E4A")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6005169")]
		[Address(RVA = "0x5C5DA60", Offset = "0x5C5CA60", VA = "0x5C5DA60", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E4B")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600516A")]
		[Address(RVA = "0x5C5DA70", Offset = "0x5C5CA70", VA = "0x5C5DA70", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E4C")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600516B")]
		[Address(RVA = "0x5C5DA80", Offset = "0x5C5CA80", VA = "0x5C5DA80", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E4D")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600516C")]
		[Address(RVA = "0x5C5DA90", Offset = "0x5C5CA90", VA = "0x5C5DA90", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600516D")]
	[Address(RVA = "0x5C5DAC0", Offset = "0x5C5CAC0", VA = "0x5C5DAC0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600516E")]
	[Address(RVA = "0x5C5DD80", Offset = "0x5C5CD80", VA = "0x5C5DD80", Slot = "62")]
	protected virtual string[] GetCategories()
	{
		return null;
	}

	[Token(Token = "0x600516F")]
	[Address(RVA = "0x5C5DE80", Offset = "0x5C5CE80", VA = "0x5C5DE80", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6005170")]
	[Address(RVA = "0x5C5E090", Offset = "0x5C5D090", VA = "0x5C5E090")]
	protected void OnTopBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6005171")]
	[Address(RVA = "0x5C5E170", Offset = "0x5C5D170", VA = "0x5C5E170", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6005172")]
	[Address(RVA = "0x5C5E340", Offset = "0x5C5D340", VA = "0x5C5E340")]
	public void Show(UnityAction onLoad)
	{
	}

	[Token(Token = "0x6005173")]
	[Address(RVA = "0x5C5D900", Offset = "0x5C5C900", VA = "0x5C5D900")]
	public void OnSelectItem(string name)
	{
	}

	[Token(Token = "0x6005174")]
	[Address(RVA = "0x5C5E380", Offset = "0x5C5D380", VA = "0x5C5E380")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6005175")]
	[Address(RVA = "0x5C5E3A0", Offset = "0x5C5D3A0", VA = "0x5C5E3A0")]
	public MapEditorAddComponentPopup()
	{
	}
}
