using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A8")]
internal class ProfileSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x20")]
	public StringSetting ProfileIcon;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x28")]
	public StringSetting ProfileBanner;

	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0x30")]
	public NameSetting Name;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0x38")]
	public NameSetting Guild;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting GuildRoleSprite;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Social;

	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting SocialLinksJson;

	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting About;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting CharacterInfoJson;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting ID;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x70")]
	public StringSetting NameFont;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0x78")]
	public StringSetting GuildFont;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x80")]
	public BoolSetting NameEffectEnabled;

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0x88")]
	public StringSetting NameEffect;

	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0x90")]
	public ColorSetting NameEffectColorA;

	[Token(Token = "0x400045A")]
	[FieldOffset(Offset = "0x98")]
	public ColorSetting NameEffectColorB;

	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0xA0")]
	public ColorSetting NameEffectColorC;

	[Token(Token = "0x400045C")]
	[FieldOffset(Offset = "0xA8")]
	public ColorSetting NameEffectColorD;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0xB0")]
	public BoolSetting GuildEffectEnabled;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0xB8")]
	public StringSetting GuildEffect;

	[Token(Token = "0x400045F")]
	[FieldOffset(Offset = "0xC0")]
	public ColorSetting GuildEffectColorA;

	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0xC8")]
	public ColorSetting GuildEffectColorB;

	[Token(Token = "0x4000461")]
	[FieldOffset(Offset = "0xD0")]
	public ColorSetting GuildEffectColorC;

	[Token(Token = "0x4000462")]
	[FieldOffset(Offset = "0xD8")]
	public ColorSetting GuildEffectColorD;

	[Token(Token = "0x17000097")]
	protected override string FileName
	{
		[Token(Token = "0x6000357")]
		[Address(RVA = "0x3E0A6F0", Offset = "0x3E0A6F0", VA = "0x3E0A6F0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x3E0A720", Offset = "0x3E0A720", VA = "0x3E0A720")]
	public ProfileSettings()
	{
	}
}
