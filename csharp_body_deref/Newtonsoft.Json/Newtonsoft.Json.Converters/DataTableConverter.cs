using System;
using System.Data;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001AF")]
public class DataTableConverter : JsonConverter
{
	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x3B4A400", Offset = "0x3B4A400", VA = "0x3B4A400", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x3B4AD90", Offset = "0x3B4AD90", VA = "0x3B4AD90", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x3B4B060", Offset = "0x3B4B060", VA = "0x3B4B060")]
	private static void CreateRow(JsonReader reader, DataTable dt, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x3B4B610", Offset = "0x3B4B610", VA = "0x3B4B610")]
	private static Type GetColumnDataType(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x3B4B7D0", Offset = "0x3B4B7D0", VA = "0x3B4B7D0", Slot = "6")]
	public override bool CanConvert(Type valueType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x3B4A010", Offset = "0x3B4A010", VA = "0x3B4A010")]
	public DataTableConverter()
	{
	}
}
