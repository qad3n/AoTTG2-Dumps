// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SettingsUtil
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SettingsUtil.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingsUtil.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000AB")]
internal class SettingsUtil
{
	[Token(Token = "0x6000364")]
	[Address(RVA = "0x40FCC70", Offset = "0x40FCC70", VA = "0x40FCC70")]
	public static void SetSettingValue(BaseSetting setting, SettingType type, object value)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x40FD150", Offset = "0x40FD150", VA = "0x40FD150")]
	public static SettingType GetSettingType(BaseSetting setting)
	{
		return default(SettingType);
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x40FD4A0", Offset = "0x40FD4A0", VA = "0x40FD4A0")]
	public static object DeserializeValueFromJson(SettingType type, string json)
	{
		return null;
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x40FD4E0", Offset = "0x40FD4E0", VA = "0x40FD4E0")]
	public static BaseSetting CreateBaseSetting(SettingType type)
	{
		return null;
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x40FDB40", Offset = "0x40FDB40", VA = "0x40FDB40")]
	public SettingsUtil()
	{
	}
}
