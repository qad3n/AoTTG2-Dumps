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
	[Address(RVA = "0x3F75B50", Offset = "0x3F75B50", VA = "0x3F75B50")]
	public WeatherSchedule()
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x3F75BD0", Offset = "0x3F75BD0", VA = "0x3F75BD0")]
	public WeatherSchedule(string csv)
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x3F75FD0", Offset = "0x3F75FD0", VA = "0x3F75FD0")]
	public string SerializeToCSV()
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x3F75C50", Offset = "0x3F75C50", VA = "0x3F75C50")]
	public string DeserializeFromCSV(string csv)
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x3F768F0", Offset = "0x3F768F0", VA = "0x3F768F0")]
	private string SerializeValue(WeatherValueType type, object value)
	{
		return null;
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x3F76880", Offset = "0x3F76880", VA = "0x3F76880")]
	private string SerializeRandomListValue(WeatherValueType type, object value, float weight)
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x3F77060", Offset = "0x3F77060", VA = "0x3F77060")]
	private string SerializeColor(Color color)
	{
		return null;
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x3F77320", Offset = "0x3F77320", VA = "0x3F77320")]
	private string SerializeColorValue(float value)
	{
		return null;
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x3F77230", Offset = "0x3F77230", VA = "0x3F77230")]
	private string SerializeVector3(Vector3 v)
	{
		return null;
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x3F76B80", Offset = "0x3F76B80", VA = "0x3F76B80")]
	private WeatherEvent DeserializeLine(string line)
	{
		return null;
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x3F77340", Offset = "0x3F77340", VA = "0x3F77340")]
	private object DeserializeValue(WeatherValueType type, string item)
	{
		return null;
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x3F77460", Offset = "0x3F77460", VA = "0x3F77460")]
	private Color255 DeserializeColor(string item)
	{
		return null;
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x3F77600", Offset = "0x3F77600", VA = "0x3F77600")]
	private int DeserializeColorValue(string str)
	{
		return default(int);
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x3F77580", Offset = "0x3F77580", VA = "0x3F77580")]
	private Vector3 DeserializeVector3(string item)
	{
		return default(Vector3);
	}
}
