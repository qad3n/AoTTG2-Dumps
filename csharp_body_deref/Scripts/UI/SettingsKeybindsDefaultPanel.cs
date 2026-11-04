// ==================== AoTTG2 cross-reference ====================
// Type: UI.SettingsKeybindsDefaultPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SettingsKeybindsDefaultPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsKeybindsDefaultPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x200086A")]
internal class SettingsKeybindsDefaultPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000ED0")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600510E")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600510F")]
	[Address(RVA = "0x22E4030", Offset = "0x22E2630", VA = "0x1822E4030", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005110")]
	[Address(RVA = "0x22E3AE0", Offset = "0x22E20E0", VA = "0x1822E3AE0")]
	private void CreateKeybindSettings(BaseSettingsContainer container, KeybindPopup popup, string cat, string sub, ElementStyle style)
	{
	}

	[Token(Token = "0x6005111")]
	[Address(RVA = "0x1DA8AE0", Offset = "0x1DA70E0", VA = "0x181DA8AE0")]
	public SettingsKeybindsDefaultPanel()
	{
	}
}
