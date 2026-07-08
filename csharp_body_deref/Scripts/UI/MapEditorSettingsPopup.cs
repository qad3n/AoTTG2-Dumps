using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x2000689")]
internal class MapEditorSettingsPopup : BasePopup
{
	[Token(Token = "0x4001FFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4001FFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<SaveableSettingsContainer> _saveableSettings;

	[Token(Token = "0x17000CD9")]
	protected override string Title
	{
		[Token(Token = "0x60041E0")]
		[Address(RVA = "0x40236E0", Offset = "0x40236E0", VA = "0x40236E0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CDA")]
	protected override float Width
	{
		[Token(Token = "0x60041E1")]
		[Address(RVA = "0x4023700", Offset = "0x4023700", VA = "0x4023700", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CDB")]
	protected override float Height
	{
		[Token(Token = "0x60041E2")]
		[Address(RVA = "0x4023710", Offset = "0x4023710", VA = "0x4023710", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CDC")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x60041E3")]
		[Address(RVA = "0x4023720", Offset = "0x4023720", VA = "0x4023720", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CDD")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x60041E4")]
		[Address(RVA = "0x4023730", Offset = "0x4023730", VA = "0x4023730", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CDE")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x60041E5")]
		[Address(RVA = "0x4023740", Offset = "0x4023740", VA = "0x4023740", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60041E6")]
	[Address(RVA = "0x4023770", Offset = "0x4023770", VA = "0x4023770", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60041E7")]
	[Address(RVA = "0x4023B50", Offset = "0x4023B50", VA = "0x4023B50", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x60041E8")]
	[Address(RVA = "0x4023E70", Offset = "0x4023E70", VA = "0x4023E70", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x60041E9")]
	[Address(RVA = "0x40238B0", Offset = "0x40238B0", VA = "0x40238B0")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x60041EA")]
	[Address(RVA = "0x4023F70", Offset = "0x4023F70", VA = "0x4023F70")]
	private void OnConfirmSetDefault()
	{
	}

	[Token(Token = "0x60041EB")]
	[Address(RVA = "0x40241F0", Offset = "0x40241F0", VA = "0x40241F0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x60041EC")]
	[Address(RVA = "0x40244B0", Offset = "0x40244B0", VA = "0x40244B0", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x60041ED")]
	[Address(RVA = "0x4024640", Offset = "0x4024640", VA = "0x4024640")]
	public MapEditorSettingsPopup()
	{
	}
}
