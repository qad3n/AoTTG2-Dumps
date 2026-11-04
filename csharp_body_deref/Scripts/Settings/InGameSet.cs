// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameSet
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/InGameSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameSet.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000AF")]
internal class InGameSet : BaseSetSetting
{
	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x48")]
	public InGameGeneralSettings General;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x50")]
	public InGameModeSettings Mode;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x58")]
	public InGameAddonSettings Addons;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x60")]
	public InGameTitanSettings Titan;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x68")]
	public InGameMiscSettings Misc;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting WeatherIndex;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x78")]
	public StringSetting ExperienceName;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x80")]
	public StringSetting ExperienceCategory;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x88")]
	public StringSetting ExperienceSubcategory;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x90")]
	public StringSetting ExperienceVariant;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x98")]
	public BoolSetting Sandbox;

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x1F1B700", Offset = "0x1F19D00", VA = "0x181F1B700")]
	public InGameSet()
	{
	}
}
