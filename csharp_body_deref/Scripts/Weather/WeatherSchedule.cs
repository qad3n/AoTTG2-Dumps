// ==================== AoTTG2 cross-reference ====================
// Type: Weather.WeatherSchedule
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/WeatherSchedule.c
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherSchedule.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Weather;

[Token(Token = "0x2000040")]
internal class WeatherSchedule
{
	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, WeatherAction> NameToWeatherAction;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, WeatherEffect> NameToWeatherEffect;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<string, WeatherValueSelectType> NameToWeatherValueSelectType;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x10")]
	public List<WeatherEvent> Events;

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x1DD51D0", Offset = "0x1DD37D0", VA = "0x181DD51D0")]
	public WeatherSchedule()
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x1DD5250", Offset = "0x1DD3850", VA = "0x181DD5250")]
	public WeatherSchedule(string csv)
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x1DD44D0", Offset = "0x1DD2AD0", VA = "0x181DD44D0")]
	public string SerializeToCSV()
	{
		return null;
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x1DD3890", Offset = "0x1DD1E90", VA = "0x181DD3890")]
	public string DeserializeFromCSV(string csv)
	{
		return null;
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x1DD4A80", Offset = "0x1DD3080", VA = "0x181DD4A80")]
	private string SerializeValue(WeatherValueType type, object value)
	{
		return null;
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x1DD4450", Offset = "0x1DD2A50", VA = "0x181DD4450")]
	private string SerializeRandomListValue(WeatherValueType type, object value, float weight)
	{
		return null;
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x1DD42A0", Offset = "0x1DD28A0", VA = "0x181DD42A0")]
	private string SerializeColor(Color color)
	{
		return null;
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x1DD4270", Offset = "0x1DD2870", VA = "0x181DD4270")]
	private string SerializeColorValue(float value)
	{
		return null;
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x1DD4FE0", Offset = "0x1DD35E0", VA = "0x181DD4FE0")]
	private string SerializeVector3(Vector3 v)
	{
		return null;
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x1DD3AB0", Offset = "0x1DD20B0", VA = "0x181DD3AB0")]
	private WeatherEvent DeserializeLine(string line)
	{
		return null;
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x1DD3EB0", Offset = "0x1DD24B0", VA = "0x181DD3EB0")]
	private object DeserializeValue(WeatherValueType type, string item)
	{
		return null;
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x1DD3720", Offset = "0x1DD1D20", VA = "0x181DD3720")]
	private Color255 DeserializeColor(string item)
	{
		return null;
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x1DD3710", Offset = "0x1DD1D10", VA = "0x181DD3710")]
	private int DeserializeColorValue(string str)
	{
		return default(int);
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x1DD41C0", Offset = "0x1DD27C0", VA = "0x181DD41C0")]
	private Vector3 DeserializeVector3(string item)
	{
		return default(Vector3);
	}
}
