// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.KeyValuePairConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3E45040", Offset = "0x3E45040", VA = "0x3E45040")]
	private static ReflectionObject InitializeReflectionObject(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x3E452C0", Offset = "0x3E452C0", VA = "0x3E452C0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x3E45520", Offset = "0x3E45520", VA = "0x3E45520", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x3E45B60", Offset = "0x3E45B60", VA = "0x3E45B60", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x3E45C50", Offset = "0x3E45C50", VA = "0x3E45C50")]
	public KeyValuePairConverter()
	{
	}
}
