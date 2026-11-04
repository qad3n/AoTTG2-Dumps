// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SettingsUtil
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SettingsUtil.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingsUtil.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000E6")]
internal class SettingsUtil
{
	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x1F26EE0", Offset = "0x1F254E0", VA = "0x181F26EE0")]
	public static void SetSettingValue(BaseSetting setting, SettingType type, object value)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x1F26B50", Offset = "0x1F25150", VA = "0x181F26B50")]
	public static SettingType GetSettingType(BaseSetting setting)
	{
		return default(SettingType);
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x1F26B00", Offset = "0x1F25100", VA = "0x181F26B00")]
	public static object DeserializeValueFromJson(SettingType type, string json)
	{
		return null;
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x1F266E0", Offset = "0x1F24CE0", VA = "0x181F266E0")]
	public static BaseSetting CreateBaseSetting(SettingType type)
	{
		return null;
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public SettingsUtil()
	{
	}
}
