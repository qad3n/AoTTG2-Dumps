// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameCharacterSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameCharacterSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameCharacterSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000DD")]
internal class InGameCharacterSettings : BaseSettingsContainer
{
	[Token(Token = "0x400049F")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting ChooseStatus;

	[Token(Token = "0x40004A0")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting CharacterType;

	[Token(Token = "0x40004A1")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting Loadout;

	[Token(Token = "0x40004A2")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Special;

	[Token(Token = "0x40004A3")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting CustomSet;

	[Token(Token = "0x40004A4")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting Costume;

	[Token(Token = "0x40004A5")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Team;

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x5A46AF0", Offset = "0x5A45AF0", VA = "0x5A46AF0")]
	public void CopyHumanChoices(InGameCharacterSettings source)
	{
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x5A46BE0", Offset = "0x5A45BE0", VA = "0x5A46BE0")]
	public InGameCharacterSettings()
	{
	}
}
