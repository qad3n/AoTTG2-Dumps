using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001AD")]
public abstract class CustomCreationConverter<T> : JsonConverter where T : notnull
{
	[Token(Token = "0x1700024C")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000EA4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EA0")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EA1")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EA2")]
	public abstract T Create(Type objectType);

	[Token(Token = "0x6000EA3")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EA5")]
	protected CustomCreationConverter()
	{
	}
}
