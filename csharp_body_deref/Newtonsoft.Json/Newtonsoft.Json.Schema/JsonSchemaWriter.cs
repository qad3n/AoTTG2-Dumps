// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Schema.JsonSchemaWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x1C60950", Offset = "0x1C5EF50", VA = "0x181C60950")]
	public JsonSchemaWriter(JsonWriter writer, JsonSchemaResolver resolver)
	{
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x1C5EE00", Offset = "0x1C5D400", VA = "0x181C5EE00")]
	private void ReferenceOrWriteSchema(JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x1C5F480", Offset = "0x1C5DA80", VA = "0x181C5F480")]
	public void WriteSchema(JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x1C5F210", Offset = "0x1C5D810", VA = "0x181C5F210")]
	private void WriteSchemaDictionaryIfNotNull(JsonWriter writer, string propertyName, IDictionary<string, JsonSchema> properties)
	{
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x1C5EF10", Offset = "0x1C5D510", VA = "0x181C5EF10")]
	private void WriteItems(JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x1C60520", Offset = "0x1C5EB20", VA = "0x181C60520")]
	private void WriteType(string propertyName, JsonWriter writer, JsonSchemaType type)
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x1C5F1B0", Offset = "0x1C5D7B0", VA = "0x181C5F1B0")]
	private void WritePropertyIfNotNull(JsonWriter writer, string propertyName, object value)
	{
	}
}
