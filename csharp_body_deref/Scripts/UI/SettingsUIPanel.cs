// ==================== AoTTG2 cross-reference ====================
// Type: UI.SettingsUIPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SettingsUIPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsUIPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20006FD")]
internal class SettingsUIPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000D87")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600452F")]
		[Address(RVA = "0x434F2C0", Offset = "0x434F2C0", VA = "0x434F2C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004530")]
	[Address(RVA = "0x434F2D0", Offset = "0x434F2D0", VA = "0x434F2D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004531")]
	[Address(RVA = "0x43515F0", Offset = "0x43515F0", VA = "0x43515F0")]
	public SettingsUIPanel()
	{
	}
}
