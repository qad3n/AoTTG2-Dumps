// ==================== AoTTG2 cross-reference ====================
// Type: Weather.WeatherEvent
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/WeatherEvent.c
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherEvent.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;

namespace Weather;

[Token(Token = "0x2000036")]
internal class WeatherEvent
{
	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x0")]
	private static string[] AllWeatherEffects;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x8")]
	private static string[] AllWeatherValueSelectTypes;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x10")]
	public WeatherAction Action;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x14")]
	public WeatherEffect Effect;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x18")]
	public WeatherValueSelectType ValueSelectType;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x20")]
	public List<object> Values;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x28")]
	public List<float> Weights;

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x1DB2A90", Offset = "0x1DB1090", VA = "0x181DB2A90")]
	public WeatherEvent()
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x1DB1D80", Offset = "0x1DB0380", VA = "0x181DB1D80")]
	public object GetValue()
	{
		return null;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x1DB1C90", Offset = "0x1DB0290", VA = "0x181DB1C90")]
	public WeatherValueType GetValueType()
	{
		return default(WeatherValueType);
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x1DB1C00", Offset = "0x1DB0200", VA = "0x181DB1C00")]
	public SettingType GetSettingType()
	{
		return default(SettingType);
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x1DB2430", Offset = "0x1DB0A30", VA = "0x181DB2430")]
	public string[] SupportedWeatherEffects()
	{
		return null;
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x1DB26E0", Offset = "0x1DB0CE0", VA = "0x181DB26E0")]
	public bool SupportsWeatherEffects()
	{
		return default(bool);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x1DB24E0", Offset = "0x1DB0AE0", VA = "0x181DB24E0")]
	public string[] SupportedWeatherValueSelectTypes()
	{
		return null;
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x1DB27A0", Offset = "0x1DB0DA0", VA = "0x181DB27A0")]
	public bool SupportsWeatherValueSelectTypes()
	{
		return default(bool);
	}
}
