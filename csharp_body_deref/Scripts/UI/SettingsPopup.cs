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

[Token(Token = "0x200086C")]
internal class SettingsPopup : BasePopup
{
	[Token(Token = "0x4002A29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4002A2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<BaseSettingsContainer> _ignoreDefaultButtonSettings;

	[Token(Token = "0x4002A2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private List<SaveableSettingsContainer> _saveableSettings;

	[Token(Token = "0x17000ED3")]
	protected override string Title
	{
		[Token(Token = "0x6005118")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000ED4")]
	protected override float Width
	{
		[Token(Token = "0x6005119")]
		[Address(RVA = "0x210FA90", Offset = "0x210E090", VA = "0x18210FA90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ED5")]
	protected override float Height
	{
		[Token(Token = "0x600511A")]
		[Address(RVA = "0x228D430", Offset = "0x228BA30", VA = "0x18228D430", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ED6")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600511B")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000ED7")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600511C")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000ED8")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600511D")]
		[Address(RVA = "0x22E6860", Offset = "0x22E4E60", VA = "0x1822E6860", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000ED9")]
	protected override bool UseSound
	{
		[Token(Token = "0x600511E")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600511F")]
	[Address(RVA = "0x22E6720", Offset = "0x22E4D20", VA = "0x1822E6720", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005120")]
	[Address(RVA = "0x22E6360", Offset = "0x22E4960", VA = "0x1822E6360", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6005121")]
	[Address(RVA = "0x22E5A00", Offset = "0x22E4000", VA = "0x1822E5A00", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6005122")]
	[Address(RVA = "0x22E5F10", Offset = "0x22E4510", VA = "0x1822E5F10")]
	private void SetupSettingsList()
	{
	}

	[Token(Token = "0x6005123")]
	[Address(RVA = "0x22E5C70", Offset = "0x22E4270", VA = "0x1822E5C70")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6005124")]
	[Address(RVA = "0x22E5800", Offset = "0x22E3E00", VA = "0x1822E5800")]
	private void OnConfirmSetDefault()
	{
	}

	[Token(Token = "0x6005125")]
	[Address(RVA = "0x22E52A0", Offset = "0x22E38A0", VA = "0x1822E52A0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6005126")]
	[Address(RVA = "0x22E5140", Offset = "0x22E3740", VA = "0x1822E5140", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x6005127")]
	[Address(RVA = "0x22E6760", Offset = "0x22E4D60", VA = "0x1822E6760")]
	public SettingsPopup()
	{
	}
}
