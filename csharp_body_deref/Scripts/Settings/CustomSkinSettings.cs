using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000067")]
internal class CustomSkinSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x20")]
	public HumanCustomSkinSettings Human;

	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x28")]
	public BaseCustomSkinSettings<TitanCustomSkinSet> Titan;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x30")]
	public BaseCustomSkinSettings<ShifterCustomSkinSet> Shifter;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x38")]
	public BaseCustomSkinSettings<SkyboxCustomSkinSet> Skybox;

	[Token(Token = "0x17000085")]
	protected override string FileName
	{
		[Token(Token = "0x6000305")]
		[Address(RVA = "0x3C8F700", Offset = "0x3C8F700", VA = "0x3C8F700", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x3C8F730", Offset = "0x3C8F730", VA = "0x3C8F730")]
	public CustomSkinSettings()
	{
	}
}
