// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.EntityKeyMemberConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x1C93E90", Offset = "0x1C92490", VA = "0x181C93E90", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x1C93B10", Offset = "0x1C92110", VA = "0x181C93B10")]
	private static void ReadAndAssertProperty(JsonReader reader, string propertyName)
	{
	}

	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x1C93C20", Offset = "0x1C92220", VA = "0x181C93C20", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x1C93A10", Offset = "0x1C92010", VA = "0x181C93A10")]
	private static void EnsureReflectionObject(Type objectType)
	{
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x1C939D0", Offset = "0x1C91FD0", VA = "0x181C939D0", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public EntityKeyMemberConverter()
	{
	}
}
