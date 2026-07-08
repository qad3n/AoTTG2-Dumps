using System;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001B6")]
public class EntityKeyMemberConverter : JsonConverter
{
	[Token(Token = "0x4000800")]
	private const string EntityKeyMemberFullTypeName = "System.Data.EntityKeyMember";

	[Token(Token = "0x4000801")]
	private const string KeyPropertyName = "Key";

	[Token(Token = "0x4000802")]
	private const string TypePropertyName = "Type";

	[Token(Token = "0x4000803")]
	private const string ValuePropertyName = "Value";

	[Token(Token = "0x4000804")]
	[FieldOffset(Offset = "0x0")]
	private static ReflectionObject? _reflectionObject;

	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x3B4D850", Offset = "0x3B4D850", VA = "0x3B4D850", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x3B4DC90", Offset = "0x3B4DC90", VA = "0x3B4DC90")]
	private static void ReadAndAssertProperty(JsonReader reader, string propertyName)
	{
	}

	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x3B4DD90", Offset = "0x3B4DD90", VA = "0x3B4DD90", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x3B4DB90", Offset = "0x3B4DB90", VA = "0x3B4DB90")]
	private static void EnsureReflectionObject(Type objectType)
	{
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x3B4E080", Offset = "0x3B4E080", VA = "0x3B4E080", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x3B4E0C0", Offset = "0x3B4E0C0", VA = "0x3B4E0C0")]
	public EntityKeyMemberConverter()
	{
	}
}
