using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001B9")]
public class JavaScriptDateTimeConverter : DateTimeConverterBase
{
	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x3B4F1D0", Offset = "0x3B4F1D0", VA = "0x3B4F1D0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000ED7")]
	[Address(RVA = "0x3B4F3A0", Offset = "0x3B4F3A0", VA = "0x3B4F3A0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x3B4F6E0", Offset = "0x3B4F6E0", VA = "0x3B4F6E0")]
	public JavaScriptDateTimeConverter()
	{
	}
}
