using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000069")]
internal class HumanCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting Hair;

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting Eye;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Glass;

	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Face;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting Skin;

	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Costume;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting Logo;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x70")]
	public StringSetting GearL;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x78")]
	public StringSetting GearR;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x80")]
	public StringSetting Gas;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x88")]
	public StringSetting Hoodie;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x90")]
	public StringSetting WeaponTrail;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x98")]
	public StringSetting Horse;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0xA0")]
	public StringSetting ThunderspearL;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0xA8")]
	public StringSetting ThunderspearR;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0xB0")]
	public StringSetting HookL;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0xB8")]
	public FloatSetting HookLTiling;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0xC0")]
	public StringSetting HookR;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0xC8")]
	public FloatSetting HookRTiling;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0xD0")]
	public StringSetting Hat;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0xD8")]
	public StringSetting Head;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0xE0")]
	public StringSetting Back;

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x3C8FC60", Offset = "0x3C8FC60", VA = "0x3C8FC60")]
	public HumanCustomSkinSet()
	{
	}
}
