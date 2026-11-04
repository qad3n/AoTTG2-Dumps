// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorSettingsPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorSettingsPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x200084F")]
internal class MapEditorSettingsPopup : BasePopup
{
	[Token(Token = "0x40029C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x40029C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<SaveableSettingsContainer> _saveableSettings;

	[Token(Token = "0x17000EAE")]
	protected override string Title
	{
		[Token(Token = "0x6005049")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000EAF")]
	protected override float Width
	{
		[Token(Token = "0x600504A")]
		[Address(RVA = "0x22D3970", Offset = "0x22D1F70", VA = "0x1822D3970", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EB0")]
	protected override float Height
	{
		[Token(Token = "0x600504B")]
		[Address(RVA = "0x228D430", Offset = "0x228BA30", VA = "0x18228D430", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EB1")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600504C")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000EB2")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600504D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000EB3")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600504E")]
		[Address(RVA = "0x22D3940", Offset = "0x22D1F40", VA = "0x1822D3940", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600504F")]
	[Address(RVA = "0x22D3710", Offset = "0x22D1D10", VA = "0x1822D3710", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005050")]
	[Address(RVA = "0x22D3420", Offset = "0x22D1A20", VA = "0x1822D3420", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6005051")]
	[Address(RVA = "0x22D30B0", Offset = "0x22D16B0", VA = "0x1822D30B0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6005052")]
	[Address(RVA = "0x22D31A0", Offset = "0x22D17A0", VA = "0x1822D31A0")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6005053")]
	[Address(RVA = "0x22D2E50", Offset = "0x22D1450", VA = "0x1822D2E50")]
	private void OnConfirmSetDefault()
	{
	}

	[Token(Token = "0x6005054")]
	[Address(RVA = "0x22D2BB0", Offset = "0x22D11B0", VA = "0x1822D2BB0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6005055")]
	[Address(RVA = "0x22D2A50", Offset = "0x22D1050", VA = "0x1822D2A50", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x6005056")]
	[Address(RVA = "0x22D3890", Offset = "0x22D1E90", VA = "0x1822D3890")]
	public MapEditorSettingsPopup()
	{
	}
}
