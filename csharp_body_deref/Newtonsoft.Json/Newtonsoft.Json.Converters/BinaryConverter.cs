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
	[Address(RVA = "0x3E3E440", Offset = "0x3E3E440", VA = "0x3E3E440", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x3E3E4A0", Offset = "0x3E3E4A0", VA = "0x3E3E4A0")]
	private byte[] GetByteArray(object value)
	{
		return null;
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x3E3E6A0", Offset = "0x3E3E6A0", VA = "0x3E3E6A0")]
	private static void EnsureReflectionObject(Type t)
	{
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x3E3E860", Offset = "0x3E3E860", VA = "0x3E3E860", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000E99")]
	[Address(RVA = "0x3E3EC80", Offset = "0x3E3EC80", VA = "0x3E3EC80")]
	private byte[] ReadByteArray(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x3E3EFC0", Offset = "0x3E3EFC0", VA = "0x3E3EFC0", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x3E3F0C0", Offset = "0x3E3F0C0", VA = "0x3E3F0C0")]
	public BinaryConverter()
	{
	}
}
