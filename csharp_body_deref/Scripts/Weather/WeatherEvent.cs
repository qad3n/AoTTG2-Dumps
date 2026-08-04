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
	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x0")]
	private static string[] AllWeatherEffects;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x8")]
	private static string[] AllWeatherValueSelectTypes;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x10")]
	public WeatherAction Action;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x14")]
	public WeatherEffect Effect;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x18")]
	public WeatherValueSelectType ValueSelectType;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x20")]
	public List<object> Values;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x28")]
	public List<float> Weights;

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x3F6D9E0", Offset = "0x3F6D9E0", VA = "0x3F6D9E0")]
	public WeatherEvent()
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x3F6DAA0", Offset = "0x3F6DAA0", VA = "0x3F6DAA0")]
	public object GetValue()
	{
		return null;
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x3F6E0D0", Offset = "0x3F6E0D0", VA = "0x3F6E0D0")]
	public WeatherValueType GetValueType()
	{
		return default(WeatherValueType);
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x3F6E110", Offset = "0x3F6E110", VA = "0x3F6E110")]
	public SettingType GetSettingType()
	{
		return default(SettingType);
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x3F6E150", Offset = "0x3F6E150", VA = "0x3F6E150")]
	public string[] SupportedWeatherEffects()
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x3F6E1E0", Offset = "0x3F6E1E0", VA = "0x3F6E1E0")]
	public bool SupportsWeatherEffects()
	{
		return default(bool);
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x3F6E270", Offset = "0x3F6E270", VA = "0x3F6E270")]
	public string[] SupportedWeatherValueSelectTypes()
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x3F6E450", Offset = "0x3F6E450", VA = "0x3F6E450")]
	public bool SupportsWeatherValueSelectTypes()
	{
		return default(bool);
	}
}
