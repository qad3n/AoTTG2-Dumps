using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200006D")]
internal class SkyboxCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting Front;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting Back;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Left;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Right;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting Up;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Down;

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x3C903A0", Offset = "0x3C903A0", VA = "0x3C903A0")]
	public SkyboxCustomSkinSet()
	{
	}
}
