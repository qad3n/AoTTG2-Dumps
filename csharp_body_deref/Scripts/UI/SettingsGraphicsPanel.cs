// ==================== AoTTG2 cross-reference ====================
// Type: UI.SettingsGraphicsPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SettingsGraphicsPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsGraphicsPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000869")]
internal class SettingsGraphicsPanel : SettingsCategoryPanel
{
	[Token(Token = "0x17000ECF")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6005109")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600510A")]
	[Address(RVA = "0x22E22E0", Offset = "0x22E08E0", VA = "0x1822E22E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600510B")]
	[Address(RVA = "0x22E2270", Offset = "0x22E0870", VA = "0x1822E2270")]
	protected void OnSelectPreset()
	{
	}

	[Token(Token = "0x600510C")]
	[Address(RVA = "0x1DA8AE0", Offset = "0x1DA70E0", VA = "0x181DA8AE0")]
	public SettingsGraphicsPanel()
	{
	}
}
