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

[Token(Token = "0x20006D6")]
internal class MapEditorSettingsKeybindsPanel : CategoryPanel
{
	[Token(Token = "0x17000D51")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004442")]
		[Address(RVA = "0x4338320", Offset = "0x4338320", VA = "0x4338320", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D52")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004443")]
		[Address(RVA = "0x4338330", Offset = "0x4338330", VA = "0x4338330", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004444")]
	[Address(RVA = "0x4338340", Offset = "0x4338340", VA = "0x4338340", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004445")]
	[Address(RVA = "0x43384D0", Offset = "0x43384D0", VA = "0x43384D0")]
	private void CreateKeybindSettings(BaseSettingsContainer container, KeybindPopup popup, string cat, string sub, ElementStyle style)
	{
	}

	[Token(Token = "0x6004446")]
	[Address(RVA = "0x4338AA0", Offset = "0x4338AA0", VA = "0x4338AA0")]
	public MapEditorSettingsKeybindsPanel()
	{
	}
}
