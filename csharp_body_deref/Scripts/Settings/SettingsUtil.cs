using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000C5")]
internal class SettingsUtil
{
	[Token(Token = "0x6000405")]
	[Address(RVA = "0x3E144F0", Offset = "0x3E144F0", VA = "0x3E144F0")]
	public static void SetSettingValue(BaseSetting setting, SettingType type, object value)
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x3E149D0", Offset = "0x3E149D0", VA = "0x3E149D0")]
	public static SettingType GetSettingType(BaseSetting setting)
	{
		return default(SettingType);
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x3E14D20", Offset = "0x3E14D20", VA = "0x3E14D20")]
	public static object DeserializeValueFromJson(SettingType type, string json)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x3E14D60", Offset = "0x3E14D60", VA = "0x3E14D60")]
	public static BaseSetting CreateBaseSetting(SettingType type)
	{
		return null;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x3E15040", Offset = "0x3E15040", VA = "0x3E15040")]
	public SettingsUtil()
	{
	}
}
