// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.DataSetConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001AE")]
public class DataSetConverter : JsonConverter
{
	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x1C90950", Offset = "0x1C8EF50", VA = "0x181C90950", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x1C90690", Offset = "0x1C8EC90", VA = "0x181C90690", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x1C90610", Offset = "0x1C8EC10", VA = "0x181C90610", Slot = "6")]
	public override bool CanConvert(Type valueType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public DataSetConverter()
	{
	}
}
