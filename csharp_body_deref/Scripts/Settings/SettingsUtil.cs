// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SettingsUtil
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SettingsUtil.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingsUtil.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000121")]
internal class SettingsUtil
{
	[Token(Token = "0x6000622")]
	[Address(RVA = "0x5B7EBB0", Offset = "0x5B7DBB0", VA = "0x5B7EBB0")]
	public static void SetSettingValue(BaseSetting setting, SettingType type, object value)
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x5B7F060", Offset = "0x5B7E060", VA = "0x5B7F060")]
	public static SettingType GetSettingType(BaseSetting setting)
	{
		return default(SettingType);
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x5B7F3B0", Offset = "0x5B7E3B0", VA = "0x5B7F3B0")]
	public static object DeserializeValueFromJson(SettingType type, string json)
	{
		return null;
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x5B7F3F0", Offset = "0x5B7E3F0", VA = "0x5B7F3F0")]
	public static BaseSetting CreateBaseSetting(SettingType type)
	{
		return null;
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x5B7F5D0", Offset = "0x5B7E5D0", VA = "0x5B7F5D0")]
	public SettingsUtil()
	{
	}
}
