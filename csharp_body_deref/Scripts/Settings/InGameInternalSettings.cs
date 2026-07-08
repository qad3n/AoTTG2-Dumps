using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200008C")]
internal class InGameInternalSettings : BaseSettingsContainer
{
	[Token(Token = "0x4000313")]
	[FieldOffset(Offset = "0x20")]
	public StringSetting ScoreboardFormat;

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x3C94CC0", Offset = "0x3C94CC0", VA = "0x3C94CC0")]
	public InGameInternalSettings()
	{
	}
}
