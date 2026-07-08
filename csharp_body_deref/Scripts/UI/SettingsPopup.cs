using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x200069F")]
internal class SettingsPopup : BasePopup
{
	[Token(Token = "0x4002034")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4002035")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<BaseSettingsContainer> _ignoreDefaultButtonSettings;

	[Token(Token = "0x4002036")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private List<SaveableSettingsContainer> _saveableSettings;

	[Token(Token = "0x17000CF9")]
	protected override string Title
	{
		[Token(Token = "0x6004278")]
		[Address(RVA = "0x4031ED0", Offset = "0x4031ED0", VA = "0x4031ED0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CFA")]
	protected override float Width
	{
		[Token(Token = "0x6004279")]
		[Address(RVA = "0x4031EF0", Offset = "0x4031EF0", VA = "0x4031EF0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CFB")]
	protected override float Height
	{
		[Token(Token = "0x600427A")]
		[Address(RVA = "0x4031F00", Offset = "0x4031F00", VA = "0x4031F00", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CFC")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600427B")]
		[Address(RVA = "0x4031F10", Offset = "0x4031F10", VA = "0x4031F10", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CFD")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600427C")]
		[Address(RVA = "0x4031F20", Offset = "0x4031F20", VA = "0x4031F20", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CFE")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600427D")]
		[Address(RVA = "0x4031F30", Offset = "0x4031F30", VA = "0x4031F30", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CFF")]
	protected override bool UseSound
	{
		[Token(Token = "0x600427E")]
		[Address(RVA = "0x4031F60", Offset = "0x4031F60", VA = "0x4031F60", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600427F")]
	[Address(RVA = "0x4031F70", Offset = "0x4031F70", VA = "0x4031F70", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004280")]
	[Address(RVA = "0x40326F0", Offset = "0x40326F0", VA = "0x40326F0", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6004281")]
	[Address(RVA = "0x4032AE0", Offset = "0x4032AE0", VA = "0x4032AE0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004282")]
	[Address(RVA = "0x40322E0", Offset = "0x40322E0", VA = "0x40322E0")]
	private void SetupSettingsList()
	{
	}

	[Token(Token = "0x6004283")]
	[Address(RVA = "0x4031F90", Offset = "0x4031F90", VA = "0x4031F90")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6004284")]
	[Address(RVA = "0x4032D70", Offset = "0x4032D70", VA = "0x4032D70")]
	private void OnConfirmSetDefault()
	{
	}

	[Token(Token = "0x6004285")]
	[Address(RVA = "0x4032FD0", Offset = "0x4032FD0", VA = "0x4032FD0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004286")]
	[Address(RVA = "0x4033570", Offset = "0x4033570", VA = "0x4033570", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x6004287")]
	[Address(RVA = "0x4033700", Offset = "0x4033700", VA = "0x4033700")]
	public SettingsPopup()
	{
	}
}
