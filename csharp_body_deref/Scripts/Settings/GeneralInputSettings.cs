// ==================== AoTTG2 cross-reference ====================
// Type: Settings.GeneralInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/GeneralInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/GeneralInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200009B")]
internal class GeneralInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x20")]
	public KeybindSetting Forward;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x28")]
	public KeybindSetting Back;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x30")]
	public KeybindSetting Left;

	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Right;

	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Up;

	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Down;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting Modifier;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting Autorun;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting Pause;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting ChangeCharacter;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting RestartGame;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting ToggleScoreboard;

	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting ToggleMap;

	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting Chat;

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting PushToTalk;

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting ChangeCamera;

	[Token(Token = "0x40003A0")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting HideCursor;

	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting HideChat;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting SpectatePreviousPlayer;

	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0xB8")]
	public KeybindSetting SpectateNextPlayer;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0xC0")]
	public KeybindSetting SkipCutscene;

	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting TapScoreboard;

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0xD0")]
	public BoolSetting TapMap;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0xD8")]
	public KeybindSetting HideUI;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0xE0")]
	public KeybindSetting DebugWindow;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0xE8")]
	public KeybindSetting OpenSearchPalette;

	[Token(Token = "0x17000091")]
	protected override string FileName
	{
		[Token(Token = "0x600033E")]
		[Address(RVA = "0x3F8D910", Offset = "0x3F8D910", VA = "0x3F8D910", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x3F8D940", Offset = "0x3F8D940", VA = "0x3F8D940")]
	public GeneralInputSettings()
	{
	}
}
