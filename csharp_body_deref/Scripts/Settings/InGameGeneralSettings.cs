// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameGeneralSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameGeneralSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameGeneralSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000DF")]
internal class InGameGeneralSettings : BaseSettingsContainer
{
	[Token(Token = "0x40004AA")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting MapCategory;

	[Token(Token = "0x40004AB")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting MapName;

	[Token(Token = "0x40004AC")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting GameMode;

	[Token(Token = "0x40004AD")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting PrevGameMode;

	[Token(Token = "0x40004AE")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting Difficulty;

	[Token(Token = "0x40004AF")]
	[FieldOffset(Offset = "0x58")]
	public ListSetting<StringSetting> Addons;

	[Token(Token = "0x40004B0")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting RoomName;

	[Token(Token = "0x40004B1")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting Password;

	[Token(Token = "0x40004B2")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting MaxPlayers;

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x5A46EC0", Offset = "0x5A45EC0", VA = "0x5A46EC0")]
	public InGameGeneralSettings()
	{
	}
}
