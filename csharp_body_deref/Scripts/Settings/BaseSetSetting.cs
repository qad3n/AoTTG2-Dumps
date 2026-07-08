using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A9")]
internal abstract class BaseSetSetting : BaseSettingsContainer
{
	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x20")]
	public StringSetting Name;

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x28")]
	public BoolSetting Preset;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting UniqueId;

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x3E0B630", Offset = "0x3E0B630", VA = "0x3E0B630")]
	protected BaseSetSetting()
	{
	}
}
