// ==================== AoTTG2 cross-reference ====================
// Type: Settings.AdvancedSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/AdvancedSettings.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000065")]
internal class AdvancedSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting ServicesEnabled;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> ServiceKeys;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<StringSetting> ServiceUrls;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x50")]
	public ListSetting<StringSetting> SecretKeys;

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x58")]
	public ListSetting<StringSetting> SecretValues;

	[Token(Token = "0x17000087")]
	protected override string FileName
	{
		[Token(Token = "0x600030F")]
		[Address(RVA = "0x1DB9AC0", Offset = "0x1DB80C0", VA = "0x181DB9AC0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	protected override bool Encrypted
	{
		[Token(Token = "0x6000310")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x1DB98D0", Offset = "0x1DB7ED0", VA = "0x181DB98D0", Slot = "13")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x1DB9790", Offset = "0x1DB7D90", VA = "0x181DB9790")]
	public bool TryGetServiceUrl(string key, out string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x1DB9650", Offset = "0x1DB7C50", VA = "0x181DB9650")]
	public bool TryGetSecretValue(string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x1DB9980", Offset = "0x1DB7F80", VA = "0x181DB9980")]
	public AdvancedSettings()
	{
	}
}
