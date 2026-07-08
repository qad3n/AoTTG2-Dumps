using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200006F")]
internal class EmoteSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x20")]
	public ListSetting<StringSetting> TextEmotes;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x28")]
	public ListSetting<StringSetting> EmojiEmotes;

	[Token(Token = "0x17000086")]
	protected override string FileName
	{
		[Token(Token = "0x6000312")]
		[Address(RVA = "0x3C90A40", Offset = "0x3C90A40", VA = "0x3C90A40", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x3C90A70", Offset = "0x3C90A70", VA = "0x3C90A70", Slot = "12")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x3C90AE0", Offset = "0x3C90AE0", VA = "0x3C90AE0")]
	public EmoteSettings()
	{
	}
}
