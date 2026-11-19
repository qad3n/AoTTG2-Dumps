// ==================== AoTTG2 cross-reference ====================
// Type: Settings.WeatherSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/WeatherSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/WeatherSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000ED")]
internal class WeatherSettings : PresetSettingsContainer
{
	[Token(Token = "0x4000533")]
	[FieldOffset(Offset = "0x38")]
	public SetSettingsContainer<WeatherSet> WeatherSets;

	[Token(Token = "0x170000B6")]
	protected override string FileName
	{
		[Token(Token = "0x6000530")]
		[Address(RVA = "0x5A4AD50", Offset = "0x5A49D50", VA = "0x5A4AD50", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x5A3C510", Offset = "0x5A3B510", VA = "0x5A3C510")]
	public static bool IsWeatherSetting(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x5A4AD80", Offset = "0x5A49D80", VA = "0x5A4AD80")]
	public int FindWeatherIndex(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x5A4AEE0", Offset = "0x5A49EE0", VA = "0x5A4AEE0")]
	public WeatherSettings()
	{
	}
}
