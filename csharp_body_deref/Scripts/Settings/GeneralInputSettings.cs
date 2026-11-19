// ==================== AoTTG2 cross-reference ====================
// Type: Settings.GeneralInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/GeneralInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/GeneralInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F1")]
internal class GeneralInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000547")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Forward;

	[Token(Token = "0x4000548")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Back;

	[Token(Token = "0x4000549")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Left;

	[Token(Token = "0x400054A")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting Right;

	[Token(Token = "0x400054B")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting Up;

	[Token(Token = "0x400054C")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting Down;

	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting Modifier;

	[Token(Token = "0x400054E")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting Autorun;

	[Token(Token = "0x400054F")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting Pause;

	[Token(Token = "0x4000550")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting ChangeCharacter;

	[Token(Token = "0x4000551")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting RestartGame;

	[Token(Token = "0x4000552")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting ToggleScoreboard;

	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting ToggleMap;

	[Token(Token = "0x4000554")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting Chat;

	[Token(Token = "0x4000555")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting PushToTalk;

	[Token(Token = "0x4000556")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting ChangeCamera;

	[Token(Token = "0x4000557")]
	[FieldOffset(Offset = "0xB8")]
	public KeybindSetting RotateWOWCamera;

	[Token(Token = "0x4000558")]
	[FieldOffset(Offset = "0xC0")]
	public KeybindSetting ZoomIn;

	[Token(Token = "0x4000559")]
	[FieldOffset(Offset = "0xC8")]
	public KeybindSetting ZoomOut;

	[Token(Token = "0x400055A")]
	[FieldOffset(Offset = "0xD0")]
	public KeybindSetting HideCursor;

	[Token(Token = "0x400055B")]
	[FieldOffset(Offset = "0xD8")]
	public KeybindSetting HideChat;

	[Token(Token = "0x400055C")]
	[FieldOffset(Offset = "0xE0")]
	public KeybindSetting SpectatePreviousPlayer;

	[Token(Token = "0x400055D")]
	[FieldOffset(Offset = "0xE8")]
	public KeybindSetting SpectateNextPlayer;

	[Token(Token = "0x400055E")]
	[FieldOffset(Offset = "0xF0")]
	public KeybindSetting SkipCutscene;

	[Token(Token = "0x400055F")]
	[FieldOffset(Offset = "0xF8")]
	public BoolSetting TapScoreboard;

	[Token(Token = "0x4000560")]
	[FieldOffset(Offset = "0x100")]
	public BoolSetting TapMap;

	[Token(Token = "0x4000561")]
	[FieldOffset(Offset = "0x108")]
	public KeybindSetting HideUI;

	[Token(Token = "0x4000562")]
	[FieldOffset(Offset = "0x110")]
	public KeybindSetting DebugWindow;

	[Token(Token = "0x4000563")]
	[FieldOffset(Offset = "0x118")]
	public KeybindSetting OpenSearchPalette;

	[Token(Token = "0x4000564")]
	[FieldOffset(Offset = "0x120")]
	public KeybindSetting OpenCurrentScreenSearch;

	[Token(Token = "0x170000B9")]
	protected override string FileName
	{
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x5A4BBD0", Offset = "0x5A4ABD0", VA = "0x5A4BBD0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x5A4BC00", Offset = "0x5A4AC00", VA = "0x5A4BC00")]
	public GeneralInputSettings()
	{
	}
}
