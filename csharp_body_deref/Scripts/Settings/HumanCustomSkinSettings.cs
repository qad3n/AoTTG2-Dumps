// ==================== AoTTG2 cross-reference ====================
// Type: Settings.HumanCustomSkinSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/HumanCustomSkinSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/HumanCustomSkinSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200006B")]
internal class HumanCustomSkinSettings : BaseCustomSkinSettings<HumanCustomSkinSet>
{
	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting GasEnabled;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x50")]
	public BoolSetting HookEnabled;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting SetSpecificSkinsEnabled;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting GlobalSkinOverridesEnabled;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x68")]
	public IntSetting SkinMode;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting SelectedCharacterIndex;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting LastGlobalPresetIndex;

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x3F85650", Offset = "0x3F85650", VA = "0x3F85650")]
	public HumanCustomSkinSettings()
	{
	}
}
