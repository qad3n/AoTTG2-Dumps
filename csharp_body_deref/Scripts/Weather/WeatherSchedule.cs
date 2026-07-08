using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Weather;

[Token(Token = "0x2000040")]
internal class WeatherSchedule
{
	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, WeatherAction> NameToWeatherAction;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, WeatherEffect> NameToWeatherEffect;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<string, WeatherValueSelectType> NameToWeatherValueSelectType;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x10")]
	public List<WeatherEvent> Events;

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x3C80200", Offset = "0x3C80200", VA = "0x3C80200")]
	public WeatherSchedule()
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x3C80280", Offset = "0x3C80280", VA = "0x3C80280")]
	public WeatherSchedule(string csv)
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x3C80680", Offset = "0x3C80680", VA = "0x3C80680")]
	public string SerializeToCSV()
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x3C80300", Offset = "0x3C80300", VA = "0x3C80300")]
	public string DeserializeFromCSV(string csv)
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x3C80FA0", Offset = "0x3C80FA0", VA = "0x3C80FA0")]
	private string SerializeValue(WeatherValueType type, object value)
	{
		return null;
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x3C80F30", Offset = "0x3C80F30", VA = "0x3C80F30")]
	private string SerializeRandomListValue(WeatherValueType type, object value, float weight)
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x3C81710", Offset = "0x3C81710", VA = "0x3C81710")]
	private string SerializeColor(Color color)
	{
		return null;
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x3C819D0", Offset = "0x3C819D0", VA = "0x3C819D0")]
	private string SerializeColorValue(float value)
	{
		return null;
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x3C818E0", Offset = "0x3C818E0", VA = "0x3C818E0")]
	private string SerializeVector3(Vector3 v)
	{
		return null;
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x3C81230", Offset = "0x3C81230", VA = "0x3C81230")]
	private WeatherEvent DeserializeLine(string line)
	{
		return null;
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x3C819F0", Offset = "0x3C819F0", VA = "0x3C819F0")]
	private object DeserializeValue(WeatherValueType type, string item)
	{
		return null;
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x3C81B10", Offset = "0x3C81B10", VA = "0x3C81B10")]
	private Color255 DeserializeColor(string item)
	{
		return null;
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x3C81CB0", Offset = "0x3C81CB0", VA = "0x3C81CB0")]
	private int DeserializeColorValue(string str)
	{
		return default(int);
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x3C81C30", Offset = "0x3C81C30", VA = "0x3C81C30")]
	private Vector3 DeserializeVector3(string item)
	{
		return default(Vector3);
	}
}
