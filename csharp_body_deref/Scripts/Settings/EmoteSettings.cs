// ==================== AoTTG2 cross-reference ====================
// Type: Settings.EmoteSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/EmoteSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/EmoteSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000072")]
internal class EmoteSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> TextEmotes;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> EmojiEmotes;

	[Token(Token = "0x1700008A")]
	protected override string FileName
	{
		[Token(Token = "0x6000329")]
		[Address(RVA = "0x1DBB020", Offset = "0x1DB9620", VA = "0x181DBB020", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x1DBA530", Offset = "0x1DB8B30", VA = "0x181DBA530", Slot = "13")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x1DBA5B0", Offset = "0x1DB8BB0", VA = "0x181DBA5B0")]
	public EmoteSettings()
	{
	}
}
