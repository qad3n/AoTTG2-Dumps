using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001B7")]
public class ExpandoObjectConverter : JsonConverter
{
	[Token(Token = "0x1700024D")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000ECB")]
		[Address(RVA = "0x3B4E730", Offset = "0x3B4E730", VA = "0x3B4E730", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x3B4E0D0", Offset = "0x3B4E0D0", VA = "0x3B4E0D0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x3B4E0E0", Offset = "0x3B4E0E0", VA = "0x3B4E0E0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x3B4E0F0", Offset = "0x3B4E0F0", VA = "0x3B4E0F0")]
	private object ReadValue(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x3B4E4D0", Offset = "0x3B4E4D0", VA = "0x3B4E4D0")]
	private object ReadList(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x3B4E250", Offset = "0x3B4E250", VA = "0x3B4E250")]
	private object ReadObject(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x3B4E6C0", Offset = "0x3B4E6C0", VA = "0x3B4E6C0", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x3B4E740", Offset = "0x3B4E740", VA = "0x3B4E740")]
	public ExpandoObjectConverter()
	{
	}
}
