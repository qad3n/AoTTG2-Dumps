// ==================== AoTTG2 cross-reference ====================
// Type: UI.SettingsKeybindsPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SettingsKeybindsPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsKeybindsPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200086B")]
internal class SettingsKeybindsPanel : SettingsCategoryPanel
{
	[Token(Token = "0x4002A28")]
	[FieldOffset(Offset = "0x68")]
	protected string[] _categories;

	[Token(Token = "0x17000ED1")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6005112")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000ED2")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6005113")]
		[Address(RVA = "0x22E5110", Offset = "0x22E3710", VA = "0x1822E5110", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6005114")]
	[Address(RVA = "0x22E4D60", Offset = "0x22E3360", VA = "0x1822E4D60")]
	public void CreateCategoryDropdown(Transform panel)
	{
	}

	[Token(Token = "0x6005115")]
	[Address(RVA = "0x22E4EC0", Offset = "0x22E34C0", VA = "0x1822E4EC0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6005116")]
	[Address(RVA = "0x22E4FA0", Offset = "0x22E35A0", VA = "0x1822E4FA0")]
	public SettingsKeybindsPanel()
	{
	}
}
