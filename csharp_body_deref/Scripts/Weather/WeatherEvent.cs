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
	[Address(RVA = "0x3C78090", Offset = "0x3C78090", VA = "0x3C78090")]
	public WeatherEvent()
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x3C78150", Offset = "0x3C78150", VA = "0x3C78150")]
	public object GetValue()
	{
		return null;
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x3C78780", Offset = "0x3C78780", VA = "0x3C78780")]
	public WeatherValueType GetValueType()
	{
		return default(WeatherValueType);
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x3C787C0", Offset = "0x3C787C0", VA = "0x3C787C0")]
	public SettingType GetSettingType()
	{
		return default(SettingType);
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x3C78800", Offset = "0x3C78800", VA = "0x3C78800")]
	public string[] SupportedWeatherEffects()
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x3C78890", Offset = "0x3C78890", VA = "0x3C78890")]
	public bool SupportsWeatherEffects()
	{
		return default(bool);
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x3C78920", Offset = "0x3C78920", VA = "0x3C78920")]
	public string[] SupportedWeatherValueSelectTypes()
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x3C78B00", Offset = "0x3C78B00", VA = "0x3C78B00")]
	public bool SupportsWeatherValueSelectTypes()
	{
		return default(bool);
	}
}
