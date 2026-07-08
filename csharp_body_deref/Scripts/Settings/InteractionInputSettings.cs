using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200009E")]
internal class InteractionInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x20")]
	public KeybindSetting Interact;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x28")]
	public KeybindSetting Interact2;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x30")]
	public KeybindSetting Interact3;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting ItemMenu;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting EmoteMenu;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting MenuNext;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting QuickSelect1;

	[Token(Token = "0x40003CF")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting QuickSelect2;

	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting QuickSelect3;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting QuickSelect4;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting QuickSelect5;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting QuickSelect6;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting QuickSelect7;

	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting QuickSelect8;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting Function1;

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting Function2;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting Function3;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting Function4;

	[Token(Token = "0x17000092")]
	protected override string FileName
	{
		[Token(Token = "0x600033E")]
		[Address(RVA = "0x3E07E00", Offset = "0x3E07E00", VA = "0x3E07E00", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x3E05DC0", Offset = "0x3E05DC0", VA = "0x3E05DC0")]
	public InteractionInputSettings()
	{
	}
}
