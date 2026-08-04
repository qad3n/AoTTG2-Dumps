// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.VersionConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001BE")]
public class VersionConverter : JsonConverter
{
	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x3E47A30", Offset = "0x3E47A30", VA = "0x3E47A30", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x3E47B10", Offset = "0x3E47B10", VA = "0x3E47B10", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x3E47DA0", Offset = "0x3E47DA0", VA = "0x3E47DA0", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x3E47E10", Offset = "0x3E47E10", VA = "0x3E47E10")]
	public VersionConverter()
	{
	}
}
