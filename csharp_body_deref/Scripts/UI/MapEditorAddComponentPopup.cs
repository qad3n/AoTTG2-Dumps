using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x200066A")]
internal class MapEditorAddComponentPopup : BasePopup
{
	[Token(Token = "0x4001F45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting Search;

	[Token(Token = "0x4001F46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x4001F47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public StringSetting FinishSetting;

	[Token(Token = "0x4001F48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private UnityAction _onLoad;

	[Token(Token = "0x17000C86")]
	protected override string Title
	{
		[Token(Token = "0x6004079")]
		[Address(RVA = "0x4002340", Offset = "0x4002340", VA = "0x4002340", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C87")]
	protected override float Width
	{
		[Token(Token = "0x600407A")]
		[Address(RVA = "0x4002360", Offset = "0x4002360", VA = "0x4002360", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C88")]
	protected override float Height
	{
		[Token(Token = "0x600407B")]
		[Address(RVA = "0x4002370", Offset = "0x4002370", VA = "0x4002370", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C89")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600407C")]
		[Address(RVA = "0x4002380", Offset = "0x4002380", VA = "0x4002380", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C8A")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600407D")]
		[Address(RVA = "0x4002390", Offset = "0x4002390", VA = "0x4002390", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C8B")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600407E")]
		[Address(RVA = "0x40023A0", Offset = "0x40023A0", VA = "0x40023A0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C8C")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600407F")]
		[Address(RVA = "0x40023B0", Offset = "0x40023B0", VA = "0x40023B0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004080")]
	[Address(RVA = "0x40023E0", Offset = "0x40023E0", VA = "0x40023E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004081")]
	[Address(RVA = "0x4002690", Offset = "0x4002690", VA = "0x4002690", Slot = "59")]
	protected virtual string[] GetCategories()
	{
		return null;
	}

	[Token(Token = "0x6004082")]
	[Address(RVA = "0x4002790", Offset = "0x4002790", VA = "0x4002790", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6004083")]
	[Address(RVA = "0x40029B0", Offset = "0x40029B0", VA = "0x40029B0")]
	protected void OnTopBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004084")]
	[Address(RVA = "0x4002A90", Offset = "0x4002A90", VA = "0x4002A90", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004085")]
	[Address(RVA = "0x4002C80", Offset = "0x4002C80", VA = "0x4002C80")]
	public void Show(UnityAction onLoad)
	{
	}

	[Token(Token = "0x6004086")]
	[Address(RVA = "0x4002220", Offset = "0x4002220", VA = "0x4002220")]
	public void OnSelectItem(string name)
	{
	}

	[Token(Token = "0x6004087")]
	[Address(RVA = "0x4002CC0", Offset = "0x4002CC0", VA = "0x4002CC0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004088")]
	[Address(RVA = "0x4002CE0", Offset = "0x4002CE0", VA = "0x4002CE0")]
	public MapEditorAddComponentPopup()
	{
	}
}
