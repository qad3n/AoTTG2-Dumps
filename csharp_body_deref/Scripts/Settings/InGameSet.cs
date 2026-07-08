using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000091")]
internal class InGameSet : BaseSetSetting
{
	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x38")]
	public InGameGeneralSettings General;

	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x40")]
	public InGameModeSettings Mode;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x48")]
	public InGameAddonSettings Addons;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x50")]
	public InGameTitanSettings Titan;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x58")]
	public InGameMiscSettings Misc;

	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting WeatherIndex;

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x3C95CC0", Offset = "0x3C95CC0", VA = "0x3C95CC0")]
	public InGameSet()
	{
	}
}
