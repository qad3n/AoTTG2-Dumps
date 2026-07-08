using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Schema;

[Token(Token = "0x2000150")]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
internal class JsonSchemaWriter
{
	[Token(Token = "0x400064E")]
	[FieldOffset(Offset = "0x10")]
	private readonly JsonWriter _writer;

	[Token(Token = "0x400064F")]
	[FieldOffset(Offset = "0x18")]
	private readonly JsonSchemaResolver _resolver;

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x3B03660", Offset = "0x3B03660", VA = "0x3B03660")]
	public JsonSchemaWriter(JsonWriter writer, JsonSchemaResolver resolver)
	{
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x3B0F370", Offset = "0x3B0F370", VA = "0x3B0F370")]
	private void ReferenceOrWriteSchema(JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x3B036D0", Offset = "0x3B036D0", VA = "0x3B036D0")]
	public void WriteSchema(JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x3B0FA60", Offset = "0x3B0FA60", VA = "0x3B0FA60")]
	private void WriteSchemaDictionaryIfNotNull(JsonWriter writer, string propertyName, IDictionary<string, JsonSchema> properties)
	{
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x3B0FE50", Offset = "0x3B0FE50", VA = "0x3B0FE50")]
	private void WriteItems(JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x3B0F4D0", Offset = "0x3B0F4D0", VA = "0x3B0F4D0")]
	private void WriteType(string propertyName, JsonWriter writer, JsonSchemaType type)
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x3B0F470", Offset = "0x3B0F470", VA = "0x3B0F470")]
	private void WritePropertyIfNotNull(JsonWriter writer, string propertyName, object value)
	{
	}
}
