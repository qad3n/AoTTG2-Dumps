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
	[Address(RVA = "0x3B48AF0", Offset = "0x3B48AF0", VA = "0x3B48AF0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x3B48B50", Offset = "0x3B48B50", VA = "0x3B48B50")]
	private byte[] GetByteArray(object value)
	{
		return null;
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x3B48D50", Offset = "0x3B48D50", VA = "0x3B48D50")]
	private static void EnsureReflectionObject(Type t)
	{
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x3B48F10", Offset = "0x3B48F10", VA = "0x3B48F10", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000E99")]
	[Address(RVA = "0x3B49330", Offset = "0x3B49330", VA = "0x3B49330")]
	private byte[] ReadByteArray(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x3B49670", Offset = "0x3B49670", VA = "0x3B49670", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x3B49770", Offset = "0x3B49770", VA = "0x3B49770")]
	public BinaryConverter()
	{
	}
}
