using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000099")]
internal class ErenShifterInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000387")]
	[FieldOffset(Offset = "0x20")]
	public KeybindSetting Kick;

	[Token(Token = "0x4000388")]
	[FieldOffset(Offset = "0x28")]
	public KeybindSetting Jump;

	[Token(Token = "0x4000389")]
	[FieldOffset(Offset = "0x30")]
	public KeybindSetting Walk;

	[Token(Token = "0x400038A")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting AttackCombo;

	[Token(Token = "0x1700008E")]
	protected override string FileName
	{
		[Token(Token = "0x6000336")]
		[Address(RVA = "0x3C97480", Offset = "0x3C97480", VA = "0x3C97480", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x3C974B0", Offset = "0x3C974B0", VA = "0x3C974B0")]
	public ErenShifterInputSettings()
	{
	}
}
