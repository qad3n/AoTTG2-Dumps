// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.BinaryConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001AB")]
public class BinaryConverter : JsonConverter
{
	[Token(Token = "0x40007EF")]
	private const string BinaryTypeName = "System.Data.Linq.Binary";

	[Token(Token = "0x40007F0")]
	private const string BinaryToArrayName = "ToArray";

	[Token(Token = "0x40007F1")]
	[FieldOffset(Offset = "0x0")]
	private static ReflectionObject? _reflectionObject;

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x56304A0", Offset = "0x562F4A0", VA = "0x56304A0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x5630500", Offset = "0x562F500", VA = "0x5630500")]
	private byte[] GetByteArray(object value)
	{
		return null;
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x5630700", Offset = "0x562F700", VA = "0x5630700")]
	private static void EnsureReflectionObject(Type t)
	{
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x56308C0", Offset = "0x562F8C0", VA = "0x56308C0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000E99")]
	[Address(RVA = "0x5630CE0", Offset = "0x562FCE0", VA = "0x5630CE0")]
	private byte[] ReadByteArray(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x5631020", Offset = "0x5630020", VA = "0x5631020", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x5631120", Offset = "0x5630120", VA = "0x5631120")]
	public BinaryConverter()
	{
	}
}
