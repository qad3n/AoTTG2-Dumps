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

[Token(Token = "0x2000035")]
internal class WeatherEvent
{
	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x0")]
	private static string[] AllWeatherEffects;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x8")]
	private static string[] AllWeatherValueSelectTypes;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x10")]
	public WeatherAction Action;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x14")]
	public WeatherEffect Effect;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x18")]
	public WeatherValueSelectType ValueSelectType;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x20")]
	public List<object> Values;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x28")]
	public List<float> Weights;

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x57575F0", Offset = "0x57565F0", VA = "0x57575F0")]
	public WeatherEvent()
	{
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x57576B0", Offset = "0x57566B0", VA = "0x57576B0")]
	public object GetValue()
	{
		return null;
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x5757D20", Offset = "0x5756D20", VA = "0x5757D20")]
	public WeatherValueType GetValueType()
	{
		return default(WeatherValueType);
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x5757D60", Offset = "0x5756D60", VA = "0x5757D60")]
	public SettingType GetSettingType()
	{
		return default(SettingType);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x5757DA0", Offset = "0x5756DA0", VA = "0x5757DA0")]
	public string[] SupportedWeatherEffects()
	{
		return null;
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x5757E30", Offset = "0x5756E30", VA = "0x5757E30")]
	public bool SupportsWeatherEffects()
	{
		return default(bool);
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x5757EC0", Offset = "0x5756EC0", VA = "0x5757EC0")]
	public string[] SupportedWeatherValueSelectTypes()
	{
		return null;
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x57580A0", Offset = "0x57570A0", VA = "0x57580A0")]
	public bool SupportsWeatherValueSelectTypes()
	{
		return default(bool);
	}
}
