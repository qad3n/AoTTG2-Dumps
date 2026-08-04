// ==================== AoTTG2 cross-reference ====================
// Type: Settings.WeatherSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/WeatherSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/WeatherSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000098")]
internal class WeatherSettings : PresetSettingsContainer
{
	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x20")]
	public SetSettingsContainer<WeatherSet> WeatherSets;

	[Token(Token = "0x1700008E")]
	protected override string FileName
	{
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x3F8CD60", Offset = "0x3F8CD60", VA = "0x3F8CD60", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x3F8CD90", Offset = "0x3F8CD90", VA = "0x3F8CD90")]
	public WeatherSettings()
	{
	}
}
