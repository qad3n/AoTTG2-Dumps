// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ProfileSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ProfileSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/ProfileSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000C7")]
internal class ProfileSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting ProfileIcon;

	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting ProfileBanner;

	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0x48")]
	public NameSetting Name;

	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x50")]
	public NameSetting Guild;

	[Token(Token = "0x40004DE")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting GuildRoleSprite;

	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Social;

	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting SocialLinksJson;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x70")]
	public StringSetting About;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x78")]
	public StringSetting CharacterInfoJson;

	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x80")]
	public StringSetting ID;

	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x88")]
	public StringSetting NameFont;

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x90")]
	public StringSetting GuildFont;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x98")]
	public BoolSetting NameEffectEnabled;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0xA0")]
	public StringSetting NameEffect;

	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0xA8")]
	public ColorSetting NameEffectColorA;

	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0xB0")]
	public ColorSetting NameEffectColorB;

	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0xB8")]
	public ColorSetting NameEffectColorC;

	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0xC0")]
	public ColorSetting NameEffectColorD;

	[Token(Token = "0x40004EC")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting GuildEffectEnabled;

	[Token(Token = "0x40004ED")]
	[FieldOffset(Offset = "0xD0")]
	public StringSetting GuildEffect;

	[Token(Token = "0x40004EE")]
	[FieldOffset(Offset = "0xD8")]
	public ColorSetting GuildEffectColorA;

	[Token(Token = "0x40004EF")]
	[FieldOffset(Offset = "0xE0")]
	public ColorSetting GuildEffectColorB;

	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0xE8")]
	public ColorSetting GuildEffectColorC;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0xF0")]
	public ColorSetting GuildEffectColorD;

	[Token(Token = "0x170000A5")]
	protected override string FileName
	{
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x1F25090", Offset = "0x1F23690", VA = "0x181F25090", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x1F245C0", Offset = "0x1F22BC0", VA = "0x181F245C0")]
	public ProfileSettings()
	{
	}
}
