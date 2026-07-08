using System;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001BA")]
public class KeyValuePairConverter : JsonConverter
{
	[Token(Token = "0x4000809")]
	private const string KeyName = "Key";

	[Token(Token = "0x400080A")]
	private const string ValueName = "Value";

	[Token(Token = "0x400080B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ThreadSafeStore<Type, ReflectionObject> ReflectionObjectPerType;

	[Token(Token = "0x6000ED9")]
	[Address(RVA = "0x3B4F6F0", Offset = "0x3B4F6F0", VA = "0x3B4F6F0")]
	private static ReflectionObject InitializeReflectionObject(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x3B4F970", Offset = "0x3B4F970", VA = "0x3B4F970", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x3B4FBD0", Offset = "0x3B4FBD0", VA = "0x3B4FBD0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x3B50210", Offset = "0x3B50210", VA = "0x3B50210", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x3B50300", Offset = "0x3B50300", VA = "0x3B50300")]
	public KeyValuePairConverter()
	{
	}
}
