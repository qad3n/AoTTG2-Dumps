// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameCharacterSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameCharacterSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameCharacterSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000089")]
internal class InGameCharacterSettings : BaseSettingsContainer
{
	[Token(Token = "0x40002FE")]
	[FieldOffset(Offset = "0x20")]
	public IntSetting ChooseStatus;

	[Token(Token = "0x40002FF")]
	[FieldOffset(Offset = "0x28")]
	public StringSetting CharacterType;

	[Token(Token = "0x4000300")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting Loadout;

	[Token(Token = "0x4000301")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting Special;

	[Token(Token = "0x4000302")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting CustomSet;

	[Token(Token = "0x4000303")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting Costume;

	[Token(Token = "0x4000304")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Team;

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x3F8A990", Offset = "0x3F8A990", VA = "0x3F8A990")]
	public InGameCharacterSettings()
	{
	}
}
