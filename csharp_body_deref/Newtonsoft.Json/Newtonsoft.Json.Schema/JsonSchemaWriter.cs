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
	[Address(RVA = "0x55EFD50", Offset = "0x55EED50", VA = "0x55EFD50")]
	public JsonSchemaWriter(JsonWriter writer, JsonSchemaResolver resolver)
	{
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x55FACA0", Offset = "0x55F9CA0", VA = "0x55FACA0")]
	private void ReferenceOrWriteSchema(JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x55EFDC0", Offset = "0x55EEDC0", VA = "0x55EFDC0")]
	public void WriteSchema(JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x55FB390", Offset = "0x55FA390", VA = "0x55FB390")]
	private void WriteSchemaDictionaryIfNotNull(JsonWriter writer, string propertyName, IDictionary<string, JsonSchema> properties)
	{
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x55FB6F0", Offset = "0x55FA6F0", VA = "0x55FB6F0")]
	private void WriteItems(JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x55FAE00", Offset = "0x55F9E00", VA = "0x55FAE00")]
	private void WriteType(string propertyName, JsonWriter writer, JsonSchemaType type)
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x55FADA0", Offset = "0x55F9DA0", VA = "0x55FADA0")]
	private void WritePropertyIfNotNull(JsonWriter writer, string propertyName, object value)
	{
	}
}
