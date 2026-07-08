using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000088")]
internal class InGameCharacterSettings : BaseSettingsContainer
{
	[Token(Token = "0x40002F9")]
	[FieldOffset(Offset = "0x20")]
	public IntSetting ChooseStatus;

	[Token(Token = "0x40002FA")]
	[FieldOffset(Offset = "0x28")]
	public StringSetting CharacterType;

	[Token(Token = "0x40002FB")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting Loadout;

	[Token(Token = "0x40002FC")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting Special;

	[Token(Token = "0x40002FD")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting CustomSet;

	[Token(Token = "0x40002FE")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting Costume;

	[Token(Token = "0x40002FF")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Team;

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x3C947E0", Offset = "0x3C947E0", VA = "0x3C947E0")]
	public InGameCharacterSettings()
	{
	}
}
