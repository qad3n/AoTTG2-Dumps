// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameSet.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000E6")]
internal class InGameSet : BaseSetSetting
{
	[Token(Token = "0x40004ED")]
	[FieldOffset(Offset = "0x48")]
	public InGameGeneralSettings General;

	[Token(Token = "0x40004EE")]
	[FieldOffset(Offset = "0x50")]
	public InGameModeSettings Mode;

	[Token(Token = "0x40004EF")]
	[FieldOffset(Offset = "0x58")]
	public InGameAddonSettings Addons;

	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0x60")]
	public InGameTitanSettings Titan;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0x68")]
	public InGameMiscSettings Misc;

	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting WeatherIndex;

	[Token(Token = "0x40004F3")]
	[FieldOffset(Offset = "0x78")]
	public StringSetting ExperienceName;

	[Token(Token = "0x40004F4")]
	[FieldOffset(Offset = "0x80")]
	public StringSetting ExperienceCategory;

	[Token(Token = "0x40004F5")]
	[FieldOffset(Offset = "0x88")]
	public StringSetting ExperienceSubcategory;

	[Token(Token = "0x40004F6")]
	[FieldOffset(Offset = "0x90")]
	public StringSetting ExperienceVariant;

	[Token(Token = "0x40004F7")]
	[FieldOffset(Offset = "0x98")]
	public BoolSetting Sandbox;

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x5A48A00", Offset = "0x5A47A00", VA = "0x5A48A00")]
	public InGameSet()
	{
	}
}
