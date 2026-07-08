using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001AC")]
[Obsolete("BSON reading and writing has been moved to its own package. See https://www.nuget.org/packages/Newtonsoft.Json.Bson for more details.")]
public class BsonObjectIdConverter : JsonConverter
{
	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x3B49780", Offset = "0x3B49780", VA = "0x3B49780", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x3B49870", Offset = "0x3B49870", VA = "0x3B49870", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x3B499F0", Offset = "0x3B499F0", VA = "0x3B499F0", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x3B49A60", Offset = "0x3B49A60", VA = "0x3B49A60")]
	public BsonObjectIdConverter()
	{
	}
}
