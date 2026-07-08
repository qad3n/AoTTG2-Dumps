using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000095")]
internal class TitanCustomSettings : PresetSettingsContainer
{
	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x20")]
	public SetSettingsContainer<TitanCustomSet> TitanCustomSets;

	[Token(Token = "0x1700008B")]
	protected override string FileName
	{
		[Token(Token = "0x600032F")]
		[Address(RVA = "0x3C96540", Offset = "0x3C96540", VA = "0x3C96540", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x3C96570", Offset = "0x3C96570", VA = "0x3C96570")]
	public TitanCustomSettings()
	{
	}
}
