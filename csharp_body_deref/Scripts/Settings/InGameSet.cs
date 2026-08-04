// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameSet.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000092")]
internal class InGameSet : BaseSetSetting
{
	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x38")]
	public InGameGeneralSettings General;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x40")]
	public InGameModeSettings Mode;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x48")]
	public InGameAddonSettings Addons;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x50")]
	public InGameTitanSettings Titan;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x58")]
	public InGameMiscSettings Misc;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting WeatherIndex;

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x3F8BE70", Offset = "0x3F8BE70", VA = "0x3F8BE70")]
	public InGameSet()
	{
	}
}
