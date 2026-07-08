using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200008A")]
internal class InGameGeneralSettings : BaseSettingsContainer
{
	[Token(Token = "0x4000304")]
	[FieldOffset(Offset = "0x20")]
	public StringSetting MapCategory;

	[Token(Token = "0x4000305")]
	[FieldOffset(Offset = "0x28")]
	public StringSetting MapName;

	[Token(Token = "0x4000306")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting GameMode;

	[Token(Token = "0x4000307")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting PrevGameMode;

	[Token(Token = "0x4000308")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting Difficulty;

	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<StringSetting> Addons;

	[Token(Token = "0x400030A")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting RoomName;

	[Token(Token = "0x400030B")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting Password;

	[Token(Token = "0x400030C")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting MaxPlayers;

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x3C949E0", Offset = "0x3C949E0", VA = "0x3C949E0")]
	public InGameGeneralSettings()
	{
	}
}
