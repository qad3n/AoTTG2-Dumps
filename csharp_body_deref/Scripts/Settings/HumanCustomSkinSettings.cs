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
	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting GasEnabled;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting HookEnabled;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting SetSpecificSkinsEnabled;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting GlobalSkinOverridesEnabled;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting SkinMode;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting SelectedCharacterIndex;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x88")]
	public IntSetting LastGlobalPresetIndex;

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x1DC0250", Offset = "0x1DBE850", VA = "0x181DC0250")]
	public HumanCustomSkinSettings()
	{
	}
}
