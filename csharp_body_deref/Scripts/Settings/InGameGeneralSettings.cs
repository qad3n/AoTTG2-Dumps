// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameGeneralSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameGeneralSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameGeneralSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A8")]
internal class InGameGeneralSettings : BaseSettingsContainer
{
	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting MapCategory;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting MapName;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting GameMode;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting PrevGameMode;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting Difficulty;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x58")]
	public ListSetting<StringSetting> Addons;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting RoomName;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting Password;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting MaxPlayers;

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x1F19A40", Offset = "0x1F18040", VA = "0x181F19A40")]
	public InGameGeneralSettings()
	{
	}
}
