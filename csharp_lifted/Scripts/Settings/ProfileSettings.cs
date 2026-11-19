// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ProfileSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ProfileSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/ProfileSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Settings/ProfileSettings.c (Settings.ProfileSettings$$get_FileName): clean
			return "Profile.json";
		}
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x5A53E20", Offset = "0x5A52E20", VA = "0x5A53E20")]
	public ProfileSettings()
	{
		// Lifted from source/cpp/Settings/ProfileSettings.c (Settings.ProfileSettings$$.ctor): clean
		StringSetting pSVar1;
		String pSVar2;
		NameSetting pSVar3;
		BoolSetting pSVar4;
		Color255 pUVar5;
		ColorSetting pSVar6;
		int local_44;
		Guid local_40;

		pSVar1 = new StringSetting("Levi1", 100);
		this.ProfileIcon = pSVar1;
		pSVar1 = new StringSetting("MainBackground0Texture", 100);
		this.ProfileBanner = pSVar1;
		local_44 = Random.Range(0, 100000);
		pSVar2 = local_44.ToString();
		pSVar2 = String.Concat("GUEST", pSVar2);
		pSVar3 = new NameSetting(pSVar2, 200, 0x1f);
		this.Name = pSVar3;
		pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar3 = new NameSetting(pSVar2, 200, 0x1f);
		this.Guild = pSVar3;
		pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar1 = new StringSetting(pSVar2, 0x32);
		this.GuildRoleSprite = pSVar1;
		pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar1 = new StringSetting(pSVar2, 0x100);
		this.Social = pSVar1;
		pSVar1 = new StringSetting("[]", 0x800);
		this.SocialLinksJson = pSVar1;
		pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar1 = new StringSetting(pSVar2, 0x200);
		this.About = pSVar1;
		pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar1 = new StringSetting(pSVar2, 0x10000);
		this.CharacterInfoJson = pSVar1;
		local_40 = Guid.NewGuid();
		pSVar2 = local_40.ToString();
		pSVar1 = new StringSetting(pSVar2, 200);
		this.ID = pSVar1;
		pSVar1 = new StringSetting("Normal", 0x20);
		this.NameFont = pSVar1;
		pSVar1 = new StringSetting("Normal", 0x20);
		this.GuildFont = pSVar1;
		pSVar4 = new BoolSetting(false);
		this.NameEffectEnabled = pSVar4;
		pSVar1 = new StringSetting("Holographic", 0x32);
		this.NameEffect = pSVar1;
		pUVar5 = new Color255(0xff, 0x40, 0x40, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.NameEffectColorA = pSVar6;
		pUVar5 = new Color255(0xff, 0xe6, 0x40, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.NameEffectColorB = pSVar6;
		pUVar5 = new Color255(0x40, 0xff, 0xff, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.NameEffectColorC = pSVar6;
		pUVar5 = new Color255(0xff, 0x40, 0xff, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.NameEffectColorD = pSVar6;
		pSVar4 = new BoolSetting(false);
		this.GuildEffectEnabled = pSVar4;
		pSVar1 = new StringSetting("Holographic", 0x32);
		this.GuildEffect = pSVar1;
		pUVar5 = new Color255(0xff, 0x40, 0x40, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.GuildEffectColorA = pSVar6;
		pUVar5 = new Color255(0xff, 0xe6, 0x40, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.GuildEffectColorB = pSVar6;
		pUVar5 = new Color255(0x40, 0xff, 0xff, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.GuildEffectColorC = pSVar6;
		pUVar5 = new Color255(0xff, 0x40, 0xff, 0xff);
		pSVar6 = new ColorSetting();
		pSVar6.MinAlpha = 0;
		pUVar5 = pSVar6.SanitizeValue(pUVar5);
		pSVar6.DefaultValue = pUVar5;
		pSVar6.Value = (object)pSVar6.DefaultValue;
		this.GuildEffectColorD = pSVar6;
		base();
		return;
	}
}
