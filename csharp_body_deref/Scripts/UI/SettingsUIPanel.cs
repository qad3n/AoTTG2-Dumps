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

[Token(Token = "0x200087C")]
internal class SettingsUIPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000EE7")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6005168")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6005169")]
	[Address(RVA = "0x22FAB50", Offset = "0x22F9150", VA = "0x1822FAB50", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600516A")]
	[Address(RVA = "0x22D3D10", Offset = "0x22D2310", VA = "0x1822D3D10")]
	public SettingsUIPanel()
	{
	}
}
