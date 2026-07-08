using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000094")]
internal class TitanCustomSet : BaseSetSetting
{
	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0x38")]
	public IntSetting Head;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting Body;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting Eye;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Hair;

	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x58")]
	public ColorSetting SkinColor;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x60")]
	public ColorSetting HairColor;

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x3C96340", Offset = "0x3C96340", VA = "0x3C96340")]
	public TitanCustomSet()
	{
	}
}
