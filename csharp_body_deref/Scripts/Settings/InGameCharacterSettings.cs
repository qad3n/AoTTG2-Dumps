// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameCharacterSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/InGameCharacterSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameCharacterSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A6")]
internal class InGameCharacterSettings : BaseSettingsContainer
{
	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting ChooseStatus;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting CharacterType;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting Loadout;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Special;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting CustomSet;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting Costume;

	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Team;

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x1F19580", Offset = "0x1F17B80", VA = "0x181F19580")]
	public void CopyHumanChoices(InGameCharacterSettings source)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x1F19680", Offset = "0x1F17C80", VA = "0x181F19680")]
	public InGameCharacterSettings()
	{
	}
}
