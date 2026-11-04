// ==================== AoTTG2 cross-reference ====================
// Type: Settings.WeatherSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/WeatherSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/WeatherSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B6")]
internal class WeatherSettings : PresetSettingsContainer
{
	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x38")]
	public SetSettingsContainer<WeatherSet> WeatherSets;

	[Token(Token = "0x17000099")]
	protected override string FileName
	{
		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x1F2CA30", Offset = "0x1F2B030", VA = "0x181F2CA30", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x1F2C9B0", Offset = "0x1F2AFB0", VA = "0x181F2C9B0")]
	public WeatherSettings()
	{
	}
}
