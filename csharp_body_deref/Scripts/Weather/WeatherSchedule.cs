// ==================== AoTTG2 cross-reference ====================
// Type: Weather.WeatherSchedule
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Weather/WeatherSchedule.c
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherSchedule.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Weather;

[Token(Token = "0x200003F")]
internal class WeatherSchedule
{
	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, WeatherAction> NameToWeatherAction;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, WeatherEffect> NameToWeatherEffect;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<string, WeatherValueSelectType> NameToWeatherValueSelectType;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x10")]
	public List<WeatherEvent> Events;

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x575F4E0", Offset = "0x575E4E0", VA = "0x575F4E0")]
	public WeatherSchedule()
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x575F560", Offset = "0x575E560", VA = "0x575F560")]
	public WeatherSchedule(string csv)
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x575F8F0", Offset = "0x575E8F0", VA = "0x575F8F0")]
	public string SerializeToCSV()
	{
		return null;
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x575F5F0", Offset = "0x575E5F0", VA = "0x575F5F0")]
	public string DeserializeFromCSV(string csv)
	{
		return null;
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x5760200", Offset = "0x575F200", VA = "0x5760200")]
	private string SerializeValue(WeatherValueType type, object value)
	{
		return null;
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x5760190", Offset = "0x575F190", VA = "0x5760190")]
	private string SerializeRandomListValue(WeatherValueType type, object value, float weight)
	{
		return null;
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x57609A0", Offset = "0x575F9A0", VA = "0x57609A0")]
	private string SerializeColor(Color color)
	{
		return null;
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x5760C60", Offset = "0x575FC60", VA = "0x5760C60")]
	private string SerializeColorValue(float value)
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x5760B70", Offset = "0x575FB70", VA = "0x5760B70")]
	private string SerializeVector3(Vector3 v)
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x57604A0", Offset = "0x575F4A0", VA = "0x57604A0")]
	private WeatherEvent DeserializeLine(string line)
	{
		return null;
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x5760F00", Offset = "0x575FF00", VA = "0x5760F00")]
	private object DeserializeValue(WeatherValueType type, string item)
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x5760ED0", Offset = "0x575FED0", VA = "0x5760ED0")]
	private static int GetValuePartCount(WeatherValueType type, int partCount)
	{
		return default(int);
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x5760C80", Offset = "0x575FC80", VA = "0x5760C80")]
	private static List<string> SplitParts(string item)
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x5761020", Offset = "0x5760020", VA = "0x5761020")]
	private Color255 DeserializeColor(string item)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x57612D0", Offset = "0x57602D0", VA = "0x57612D0")]
	private int DeserializeColorValue(string str)
	{
		return default(int);
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x57611C0", Offset = "0x57601C0", VA = "0x57611C0")]
	private Vector3 DeserializeVector3(string item)
	{
		return default(Vector3);
	}
}
