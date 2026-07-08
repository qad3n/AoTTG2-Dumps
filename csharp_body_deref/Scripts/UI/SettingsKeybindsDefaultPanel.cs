using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x200069D")]
internal class SettingsKeybindsDefaultPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000CF6")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600426E")]
		[Address(RVA = "0x40307F0", Offset = "0x40307F0", VA = "0x40307F0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600426F")]
	[Address(RVA = "0x4030800", Offset = "0x4030800", VA = "0x4030800", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004270")]
	[Address(RVA = "0x4031490", Offset = "0x4031490", VA = "0x4031490")]
	private void CreateKeybindSettings(BaseSettingsContainer container, KeybindPopup popup, string cat, string sub, ElementStyle style)
	{
	}

	[Token(Token = "0x6004271")]
	[Address(RVA = "0x4031C10", Offset = "0x4031C10", VA = "0x4031C10")]
	public SettingsKeybindsDefaultPanel()
	{
	}
}
