using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001B0")]
public abstract class DateTimeConverterBase : JsonConverter
{
	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x3B4B850", Offset = "0x3B4B850", VA = "0x3B4B850", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x3B4B990", Offset = "0x3B4B990", VA = "0x3B4B990")]
	protected DateTimeConverterBase()
	{
	}
}
