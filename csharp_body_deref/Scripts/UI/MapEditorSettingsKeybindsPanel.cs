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

[Token(Token = "0x20008CC")]
internal class MapEditorSettingsKeybindsPanel : CategoryPanel
{
	[Token(Token = "0x17000EAD")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60053E4")]
		[Address(RVA = "0x5C9ADF0", Offset = "0x5C99DF0", VA = "0x5C9ADF0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000EAE")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60053E5")]
		[Address(RVA = "0x5C9AE00", Offset = "0x5C99E00", VA = "0x5C9AE00", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60053E6")]
	[Address(RVA = "0x5C9AE10", Offset = "0x5C99E10", VA = "0x5C9AE10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60053E7")]
	[Address(RVA = "0x5C9AFA0", Offset = "0x5C99FA0", VA = "0x5C9AFA0")]
	private void CreateKeybindSettings(BaseSettingsContainer container, KeybindPopup popup, string cat, string sub, ElementStyle style)
	{
	}

	[Token(Token = "0x60053E8")]
	[Address(RVA = "0x5C9B470", Offset = "0x5C9A470", VA = "0x5C9B470")]
	public MapEditorSettingsKeybindsPanel()
	{
	}
}
