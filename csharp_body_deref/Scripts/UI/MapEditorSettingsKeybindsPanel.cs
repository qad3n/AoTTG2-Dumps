// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorSettingsKeybindsPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorSettingsKeybindsPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsKeybindsPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x200084E")]
internal class MapEditorSettingsKeybindsPanel : CategoryPanel
{
	[Token(Token = "0x17000EAC")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6005044")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000EAD")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6005045")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6005046")]
	[Address(RVA = "0x22D2890", Offset = "0x22D0E90", VA = "0x1822D2890", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005047")]
	[Address(RVA = "0x22D2490", Offset = "0x22D0A90", VA = "0x1822D2490")]
	private void CreateKeybindSettings(BaseSettingsContainer container, KeybindPopup popup, string cat, string sub, ElementStyle style)
	{
	}

	[Token(Token = "0x6005048")]
	[Address(RVA = "0x1DA8AE0", Offset = "0x1DA70E0", VA = "0x181DA8AE0")]
	public MapEditorSettingsKeybindsPanel()
	{
	}
}
