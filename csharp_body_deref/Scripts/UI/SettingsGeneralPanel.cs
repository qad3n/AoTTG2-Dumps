// ==================== AoTTG2 cross-reference ====================
// Type: UI.SettingsGeneralPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SettingsGeneralPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsGeneralPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000867")]
internal class SettingsGeneralPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000ECE")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6005104")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6005105")]
	[Address(RVA = "0x22E1220", Offset = "0x22DF820", VA = "0x1822E1220", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005106")]
	[Address(RVA = "0x1DA8AE0", Offset = "0x1DA70E0", VA = "0x181DA8AE0")]
	public SettingsGeneralPanel()
	{
	}
}
