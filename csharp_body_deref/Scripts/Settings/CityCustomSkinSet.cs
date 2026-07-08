using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000066")]
internal class CityCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Houses;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting Ground;

	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Wall;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Gate;

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x3C8F520", Offset = "0x3C8F520", VA = "0x3C8F520", Slot = "12")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x3C8F570", Offset = "0x3C8F570", VA = "0x3C8F570")]
	public CityCustomSkinSet()
	{
	}
}
