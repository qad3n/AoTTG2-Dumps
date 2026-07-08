using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001AE")]
public class DataSetConverter : JsonConverter
{
	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x3B49A70", Offset = "0x3B49A70", VA = "0x3B49A70", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x3B4A020", Offset = "0x3B4A020", VA = "0x3B4A020", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x3B4A370", Offset = "0x3B4A370", VA = "0x3B4A370", Slot = "6")]
	public override bool CanConvert(Type valueType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x3B4A3F0", Offset = "0x3B4A3F0", VA = "0x3B4A3F0")]
	public DataSetConverter()
	{
	}
}
