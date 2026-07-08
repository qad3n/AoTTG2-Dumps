using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000086")]
internal class HumanCustomSettings : PresetSettingsContainer
{
	[Token(Token = "0x40002F1")]
	[FieldOffset(Offset = "0x20")]
	public SetSettingsContainer<HumanCustomSet> CustomSets;

	[Token(Token = "0x40002F2")]
	[FieldOffset(Offset = "0x28")]
	public SetSettingsContainer<HumanCustomSet> Costume1Sets;

	[Token(Token = "0x40002F3")]
	[FieldOffset(Offset = "0x30")]
	public SetSettingsContainer<HumanCustomSet> Costume2Sets;

	[Token(Token = "0x40002F4")]
	[FieldOffset(Offset = "0x38")]
	public SetSettingsContainer<HumanCustomSet> Costume3Sets;

	[Token(Token = "0x17000089")]
	protected override string FileName
	{
		[Token(Token = "0x600031E")]
		[Address(RVA = "0x3C93EC0", Offset = "0x3C93EC0", VA = "0x3C93EC0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x3C93EF0", Offset = "0x3C93EF0", VA = "0x3C93EF0")]
	public HumanCustomSettings()
	{
	}
}
