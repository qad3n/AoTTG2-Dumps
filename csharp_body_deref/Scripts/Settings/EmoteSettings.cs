// ==================== AoTTG2 cross-reference ====================
// Type: Settings.EmoteSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/EmoteSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/EmoteSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000070")]
internal class EmoteSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x20")]
	public ListSetting<StringSetting> TextEmotes;

	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x28")]
	public ListSetting<StringSetting> EmojiEmotes;

	[Token(Token = "0x17000088")]
	protected override string FileName
	{
		[Token(Token = "0x6000318")]
		[Address(RVA = "0x3F86810", Offset = "0x3F86810", VA = "0x3F86810", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x3F86840", Offset = "0x3F86840", VA = "0x3F86840", Slot = "12")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x3F868B0", Offset = "0x3F868B0", VA = "0x3F868B0")]
	public EmoteSettings()
	{
	}
}
