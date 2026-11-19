// ==================== AoTTG2 cross-reference ====================
// Type: Settings.EmoteSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/EmoteSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/EmoteSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A9")]
internal class EmoteSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> TextEmotes;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> EmojiEmotes;

	[Token(Token = "0x170000A7")]
	protected override string FileName
	{
		[Token(Token = "0x6000492")]
		[Address(RVA = "0x58D2840", Offset = "0x58D1840", VA = "0x58D2840", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x58D2870", Offset = "0x58D1870", VA = "0x58D2870", Slot = "13")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x58D28E0", Offset = "0x58D18E0", VA = "0x58D28E0")]
	public EmoteSettings()
	{
	}
}
