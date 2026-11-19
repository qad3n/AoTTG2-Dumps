// ==================== AoTTG2 cross-reference ====================
// Type: Settings.HumanCustomSkinSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/HumanCustomSkinSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/HumanCustomSkinSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A2")]
internal class HumanCustomSkinSettings : BaseCustomSkinSettings<HumanCustomSkinSet>
{
	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting GasEnabled;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting HookEnabled;

	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting SetSpecificSkinsEnabled;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting GlobalSkinOverridesEnabled;

	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting SkinMode;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting SelectedCharacterIndex;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x88")]
	public IntSetting LastGlobalPresetIndex;

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x58D19B0", Offset = "0x58D09B0", VA = "0x58D19B0")]
	public HumanCustomSkinSettings()
	{
	}
}
