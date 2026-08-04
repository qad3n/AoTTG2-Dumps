// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.BsonObjectIdConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001AC")]
[Obsolete("BSON reading and writing has been moved to its own package. See https://www.nuget.org/packages/Newtonsoft.Json.Bson for more details.")]
public class BsonObjectIdConverter : JsonConverter
{
	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x3E3F0D0", Offset = "0x3E3F0D0", VA = "0x3E3F0D0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x3E3F1C0", Offset = "0x3E3F1C0", VA = "0x3E3F1C0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x3E3F340", Offset = "0x3E3F340", VA = "0x3E3F340", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x3E3F3B0", Offset = "0x3E3F3B0", VA = "0x3E3F3B0")]
	public BsonObjectIdConverter()
	{
	}
}
