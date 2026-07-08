using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000097")]
internal class WeatherSettings : PresetSettingsContainer
{
	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x20")]
	public SetSettingsContainer<WeatherSet> WeatherSets;

	[Token(Token = "0x1700008C")]
	protected override string FileName
	{
		[Token(Token = "0x6000332")]
		[Address(RVA = "0x3C96BB0", Offset = "0x3C96BB0", VA = "0x3C96BB0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x3C96BE0", Offset = "0x3C96BE0", VA = "0x3C96BE0")]
	public WeatherSettings()
	{
	}
}
