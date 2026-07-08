using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200006C")]
internal class ShifterCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting Eren;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting Annie;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Colossal;

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x3C90290", Offset = "0x3C90290", VA = "0x3C90290")]
	public ShifterCustomSkinSet()
	{
	}
}
