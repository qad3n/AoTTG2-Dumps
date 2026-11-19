// ==================== AoTTG2 cross-reference ====================
// Type: Settings.AdvancedSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/AdvancedSettings.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200009E")]
internal class AdvancedSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400033C")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting ServicesEnabled;

	[Token(Token = "0x400033D")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> ServiceKeys;

	[Token(Token = "0x400033E")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<StringSetting> ServiceUrls;

	[Token(Token = "0x400033F")]
	[FieldOffset(Offset = "0x50")]
	public ListSetting<StringSetting> SecretKeys;

	[Token(Token = "0x4000340")]
	[FieldOffset(Offset = "0x58")]
	public ListSetting<StringSetting> SecretValues;

	[Token(Token = "0x170000A4")]
	protected override string FileName
	{
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x58D13B0", Offset = "0x58D03B0", VA = "0x58D13B0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A5")]
	protected override bool Encrypted
	{
		[Token(Token = "0x600047D")]
		[Address(RVA = "0x58D13E0", Offset = "0x58D03E0", VA = "0x58D13E0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x58D13F0", Offset = "0x58D03F0", VA = "0x58D13F0", Slot = "13")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x58D1480", Offset = "0x58D0480", VA = "0x58D1480")]
	public bool TryGetServiceUrl(string key, out string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x58D15C0", Offset = "0x58D05C0", VA = "0x58D15C0")]
	public bool TryGetSecretValue(string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x58D1700", Offset = "0x58D0700", VA = "0x58D1700")]
	public AdvancedSettings()
	{
	}
}
