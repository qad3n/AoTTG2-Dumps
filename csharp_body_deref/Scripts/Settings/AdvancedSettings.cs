// ==================== AoTTG2 cross-reference ====================
// Type: Settings.AdvancedSettings
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/AdvancedSettings.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000065")]
internal class AdvancedSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x20")]
	public BoolSetting ServicesEnabled;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x28")]
	public ListSetting<StringSetting> ServiceKeys;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x30")]
	public ListSetting<StringSetting> ServiceUrls;

	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> SecretKeys;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> SecretValues;

	[Token(Token = "0x17000085")]
	protected override string FileName
	{
		[Token(Token = "0x60002FF")]
		[Address(RVA = "0x3F84E70", Offset = "0x3F84E70", VA = "0x3F84E70", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000086")]
	protected override bool Encrypted
	{
		[Token(Token = "0x6000300")]
		[Address(RVA = "0x3F84EA0", Offset = "0x3F84EA0", VA = "0x3F84EA0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x3F84EB0", Offset = "0x3F84EB0", VA = "0x3F84EB0", Slot = "12")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x3F84F40", Offset = "0x3F84F40", VA = "0x3F84F40")]
	public bool TryGetServiceUrl(string key, out string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x3F85080", Offset = "0x3F85080", VA = "0x3F85080")]
	public bool TryGetSecretValue(string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x3F851C0", Offset = "0x3F851C0", VA = "0x3F851C0")]
	public AdvancedSettings()
	{
	}
}
