using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001BE")]
public class VersionConverter : JsonConverter
{
	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x3B520E0", Offset = "0x3B520E0", VA = "0x3B520E0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x3B521C0", Offset = "0x3B521C0", VA = "0x3B521C0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x3B52450", Offset = "0x3B52450", VA = "0x3B52450", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x3B524C0", Offset = "0x3B524C0", VA = "0x3B524C0")]
	public VersionConverter()
	{
	}
}
