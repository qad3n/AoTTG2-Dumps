using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000C8")]
internal class UISettings : SaveableSettingsContainer
{
	[Token(Token = "0x40004BD")]
	[FieldOffset(Offset = "0x20")]
	public StringSetting UITheme;

	[Token(Token = "0x40004BE")]
	[FieldOffset(Offset = "0x28")]
	public BoolSetting GameFeed;

	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0x30")]
	public BoolSetting FeedConsole;

	[Token(Token = "0x40004C0")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting ShowStylebar;

	[Token(Token = "0x40004C1")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting UIMasterScale;

	[Token(Token = "0x40004C2")]
	[FieldOffset(Offset = "0x48")]
	public FloatSetting CrosshairScale;

	[Token(Token = "0x40004C3")]
	[FieldOffset(Offset = "0x50")]
	public FloatSetting CrosshairTextScale;

	[Token(Token = "0x40004C4")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting CrosshairSkin;

	[Token(Token = "0x40004C5")]
	[FieldOffset(Offset = "0x60")]
	public FloatSetting HUDScale;

	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x68")]
	public FloatSetting MinimapScale;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x70")]
	public FloatSetting StylebarScale;

	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x78")]
	public FloatSetting KillScoreScale;

	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x80")]
	public FloatSetting KillFeedScale;

	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting ShowCrosshairDistance;

	[Token(Token = "0x40004CB")]
	[FieldOffset(Offset = "0x90")]
	public IntSetting CrosshairStyle;

	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0x98")]
	public IntSetting Speedometer;

	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0xA0")]
	public BoolSetting ShowInterpolation;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0xA8")]
	public BoolSetting ShowCrosshairArrows;

	[Token(Token = "0x40004CF")]
	[FieldOffset(Offset = "0xB0")]
	public IntSetting KDR;

	[Token(Token = "0x40004D0")]
	[FieldOffset(Offset = "0xB8")]
	public BoolSetting ShowPing;

	[Token(Token = "0x40004D1")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting ShowEmotes;

	[Token(Token = "0x40004D2")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting ShowKeybindTip;

	[Token(Token = "0x40004D3")]
	[FieldOffset(Offset = "0xD0")]
	public BoolSetting ShowGameTime;

	[Token(Token = "0x40004D4")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting ShowSongPopup;

	[Token(Token = "0x40004D5")]
	[FieldOffset(Offset = "0xE0")]
	public IntSetting ShowNames;

	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0xE8")]
	public IntSetting ShowHealthbars;

	[Token(Token = "0x40004D7")]
	[FieldOffset(Offset = "0xF0")]
	public IntSetting HumanNameDistance;

	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0xF8")]
	public IntSetting NameOverrideTarget;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x100")]
	public IntSetting NameBackgroundType;

	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x108")]
	public ToggleColorSetting ForceNameColor;

	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x110")]
	public ColorSetting ForceBackgroundColor;

	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0x118")]
	public IntSetting MinNameLength;

	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x120")]
	public IntSetting MaxNameLength;

	[Token(Token = "0x40004DE")]
	[FieldOffset(Offset = "0x128")]
	public BoolSetting FadeMainMenu;

	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0x130")]
	public BoolSetting FadeLoadscreen;

	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0x138")]
	public IntSetting ChatWidth;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x140")]
	public IntSetting ChatHeight;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x148")]
	public IntSetting ChatFontSize;

	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x150")]
	public IntSetting ChatPoolSize;

	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x158")]
	public IntSetting ChatScrollSensitivity;

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x160")]
	public IntSetting KillFeedCount;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x168")]
	public BoolSetting JoinNotifications;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x170")]
	public IntSetting Coordinates;

	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0x178")]
	public BoolSetting ShowChatTimestamp;

	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x180")]
	public BoolSetting ChatHidden;

	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x188")]
	public ColorSetting ChatBackgroundColor;

	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0x190")]
	public BoolSetting ChatCLErrors;

	[Token(Token = "0x170000A2")]
	protected override string FileName
	{
		[Token(Token = "0x600040D")]
		[Address(RVA = "0x3E15100", Offset = "0x3E15100", VA = "0x3E15100", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x3E15130", Offset = "0x3E15130", VA = "0x3E15130", Slot = "11")]
	public override void Apply()
	{
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x3E125C0", Offset = "0x3E125C0", VA = "0x3E125C0")]
	public UISettings()
	{
	}
}
