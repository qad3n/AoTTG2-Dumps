// ==================== AoTTG2 cross-reference ====================
// Type: UI.SettingsPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SettingsPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20006ED")]
internal class SettingsPopup : BasePopup
{
	[Token(Token = "0x4002191")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4002192")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<BaseSettingsContainer> _ignoreDefaultButtonSettings;

	[Token(Token = "0x4002193")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private List<SaveableSettingsContainer> _saveableSettings;

	[Token(Token = "0x17000D73")]
	protected override string Title
	{
		[Token(Token = "0x60044DF")]
		[Address(RVA = "0x43472A0", Offset = "0x43472A0", VA = "0x43472A0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D74")]
	protected override float Width
	{
		[Token(Token = "0x60044E0")]
		[Address(RVA = "0x43472C0", Offset = "0x43472C0", VA = "0x43472C0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D75")]
	protected override float Height
	{
		[Token(Token = "0x60044E1")]
		[Address(RVA = "0x43472D0", Offset = "0x43472D0", VA = "0x43472D0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D76")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x60044E2")]
		[Address(RVA = "0x43472E0", Offset = "0x43472E0", VA = "0x43472E0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D77")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x60044E3")]
		[Address(RVA = "0x43472F0", Offset = "0x43472F0", VA = "0x43472F0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D78")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x60044E4")]
		[Address(RVA = "0x4347300", Offset = "0x4347300", VA = "0x4347300", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D79")]
	protected override bool UseSound
	{
		[Token(Token = "0x60044E5")]
		[Address(RVA = "0x4347330", Offset = "0x4347330", VA = "0x4347330", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60044E6")]
	[Address(RVA = "0x4347340", Offset = "0x4347340", VA = "0x4347340", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60044E7")]
	[Address(RVA = "0x4347AC0", Offset = "0x4347AC0", VA = "0x4347AC0", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x60044E8")]
	[Address(RVA = "0x4347EB0", Offset = "0x4347EB0", VA = "0x4347EB0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x60044E9")]
	[Address(RVA = "0x43476B0", Offset = "0x43476B0", VA = "0x43476B0")]
	private void SetupSettingsList()
	{
	}

	[Token(Token = "0x60044EA")]
	[Address(RVA = "0x4347360", Offset = "0x4347360", VA = "0x4347360")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x60044EB")]
	[Address(RVA = "0x4348140", Offset = "0x4348140", VA = "0x4348140")]
	private void OnConfirmSetDefault()
	{
	}

	[Token(Token = "0x60044EC")]
	[Address(RVA = "0x43483A0", Offset = "0x43483A0", VA = "0x43483A0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x60044ED")]
	[Address(RVA = "0x4348940", Offset = "0x4348940", VA = "0x4348940", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x60044EE")]
	[Address(RVA = "0x4348AD0", Offset = "0x4348AD0", VA = "0x4348AD0")]
	public SettingsPopup()
	{
	}
}
