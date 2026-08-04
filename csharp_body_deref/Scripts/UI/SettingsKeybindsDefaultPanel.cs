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

[Token(Token = "0x20006EB")]
internal class SettingsKeybindsDefaultPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000D70")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60044D5")]
		[Address(RVA = "0x4345BC0", Offset = "0x4345BC0", VA = "0x4345BC0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60044D6")]
	[Address(RVA = "0x4345BD0", Offset = "0x4345BD0", VA = "0x4345BD0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60044D7")]
	[Address(RVA = "0x4346860", Offset = "0x4346860", VA = "0x4346860")]
	private void CreateKeybindSettings(BaseSettingsContainer container, KeybindPopup popup, string cat, string sub, ElementStyle style)
	{
	}

	[Token(Token = "0x60044D8")]
	[Address(RVA = "0x4346FE0", Offset = "0x4346FE0", VA = "0x4346FE0")]
	public SettingsKeybindsDefaultPanel()
	{
	}
}
