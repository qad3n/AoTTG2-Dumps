// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameGeneralSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameGeneralSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameGeneralSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200008B")]
internal class InGameGeneralSettings : BaseSettingsContainer
{
	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0x20")]
	public StringSetting MapCategory;

	[Token(Token = "0x400030A")]
	[FieldOffset(Offset = "0x28")]
	public StringSetting MapName;

	[Token(Token = "0x400030B")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting GameMode;

	[Token(Token = "0x400030C")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting PrevGameMode;

	[Token(Token = "0x400030D")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting Difficulty;

	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<StringSetting> Addons;

	[Token(Token = "0x400030F")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting RoomName;

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting Password;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting MaxPlayers;

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x3F8AB90", Offset = "0x3F8AB90", VA = "0x3F8AB90")]
	public InGameGeneralSettings()
	{
	}
}
