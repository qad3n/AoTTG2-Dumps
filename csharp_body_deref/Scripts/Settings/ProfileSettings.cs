// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ProfileSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ProfileSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/ProfileSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000101")]
internal class ProfileSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000618")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting ProfileIcon;

	[Token(Token = "0x4000619")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting ProfileBanner;

	[Token(Token = "0x400061A")]
	[FieldOffset(Offset = "0x48")]
	public NameSetting Name;

	[Token(Token = "0x400061B")]
	[FieldOffset(Offset = "0x50")]
	public NameSetting Guild;

	[Token(Token = "0x400061C")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting GuildRoleSprite;

	[Token(Token = "0x400061D")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Social;

	[Token(Token = "0x400061E")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting SocialLinksJson;

	[Token(Token = "0x400061F")]
	[FieldOffset(Offset = "0x70")]
	public StringSetting About;

	[Token(Token = "0x4000620")]
	[FieldOffset(Offset = "0x78")]
	public StringSetting CharacterInfoJson;

	[Token(Token = "0x4000621")]
	[FieldOffset(Offset = "0x80")]
	public StringSetting ID;

	[Token(Token = "0x4000622")]
	[FieldOffset(Offset = "0x88")]
	public StringSetting NameFont;

	[Token(Token = "0x4000623")]
	[FieldOffset(Offset = "0x90")]
	public StringSetting GuildFont;

	[Token(Token = "0x4000624")]
	[FieldOffset(Offset = "0x98")]
	public BoolSetting NameEffectEnabled;

	[Token(Token = "0x4000625")]
	[FieldOffset(Offset = "0xA0")]
	public StringSetting NameEffect;

	[Token(Token = "0x4000626")]
	[FieldOffset(Offset = "0xA8")]
	public ColorSetting NameEffectColorA;

	[Token(Token = "0x4000627")]
	[FieldOffset(Offset = "0xB0")]
	public ColorSetting NameEffectColorB;

	[Token(Token = "0x4000628")]
	[FieldOffset(Offset = "0xB8")]
	public ColorSetting NameEffectColorC;

	[Token(Token = "0x4000629")]
	[FieldOffset(Offset = "0xC0")]
	public ColorSetting NameEffectColorD;

	[Token(Token = "0x400062A")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting GuildEffectEnabled;

	[Token(Token = "0x400062B")]
	[FieldOffset(Offset = "0xD0")]
	public StringSetting GuildEffect;

	[Token(Token = "0x400062C")]
	[FieldOffset(Offset = "0xD8")]
	public ColorSetting GuildEffectColorA;

	[Token(Token = "0x400062D")]
	[FieldOffset(Offset = "0xE0")]
	public ColorSetting GuildEffectColorB;

	[Token(Token = "0x400062E")]
	[FieldOffset(Offset = "0xE8")]
	public ColorSetting GuildEffectColorC;

	[Token(Token = "0x400062F")]
	[FieldOffset(Offset = "0xF0")]
	public ColorSetting GuildEffectColorD;

	[Token(Token = "0x170000C2")]
	protected override string FileName
	{
		[Token(Token = "0x6000562")]
		[Address(RVA = "0x5A53DF0", Offset = "0x5A52DF0", VA = "0x5A53DF0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x5A53E20", Offset = "0x5A52E20", VA = "0x5A53E20")]
	public ProfileSettings()
	{
	}
}
