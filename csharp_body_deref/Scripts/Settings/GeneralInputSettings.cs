// ==================== AoTTG2 cross-reference ====================
// Type: Settings.GeneralInputSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/GeneralInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/GeneralInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B9")]
internal class GeneralInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Forward;

	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Back;

	[Token(Token = "0x4000413")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Left;

	[Token(Token = "0x4000414")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting Right;

	[Token(Token = "0x4000415")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting Up;

	[Token(Token = "0x4000416")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting Down;

	[Token(Token = "0x4000417")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting Modifier;

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting Autorun;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting Pause;

	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting ChangeCharacter;

	[Token(Token = "0x400041B")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting RestartGame;

	[Token(Token = "0x400041C")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting ToggleScoreboard;

	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting ToggleMap;

	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting Chat;

	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting PushToTalk;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting ChangeCamera;

	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0xB8")]
	public KeybindSetting RotateWOWCamera;

	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0xC0")]
	public KeybindSetting ZoomIn;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0xC8")]
	public KeybindSetting ZoomOut;

	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0xD0")]
	public KeybindSetting HideCursor;

	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0xD8")]
	public KeybindSetting HideChat;

	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0xE0")]
	public KeybindSetting SpectatePreviousPlayer;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0xE8")]
	public KeybindSetting SpectateNextPlayer;

	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0xF0")]
	public KeybindSetting SkipCutscene;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0xF8")]
	public BoolSetting TapScoreboard;

	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x100")]
	public BoolSetting TapMap;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x108")]
	public KeybindSetting HideUI;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x110")]
	public KeybindSetting DebugWindow;

	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x118")]
	public KeybindSetting OpenSearchPalette;

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0x120")]
	public KeybindSetting OpenCurrentScreenSearch;

	[Token(Token = "0x1700009C")]
	protected override string FileName
	{
		[Token(Token = "0x60003C5")]
		[Address(RVA = "0x1F13810", Offset = "0x1F11E10", VA = "0x181F13810", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x1F12670", Offset = "0x1F10C70", VA = "0x181F12670")]
	public GeneralInputSettings()
	{
	}
}
