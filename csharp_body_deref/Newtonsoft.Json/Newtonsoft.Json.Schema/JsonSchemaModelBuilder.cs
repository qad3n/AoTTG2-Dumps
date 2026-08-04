// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Schema.JsonSchemaModelBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Schema;

[Token(Token = "0x2000149")]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
internal class JsonSchemaModelBuilder
{
	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x10")]
	private JsonSchemaNodeCollection _nodes;

	[Token(Token = "0x4000636")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<JsonSchemaNode, JsonSchemaModel> _nodeModels;

	[Token(Token = "0x4000637")]
	[FieldOffset(Offset = "0x20")]
	private JsonSchemaNode _node;

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x3E028B0", Offset = "0x3E028B0", VA = "0x3E028B0")]
	public JsonSchemaModel Build(JsonSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x3E02A00", Offset = "0x3E02A00", VA = "0x3E02A00")]
	public JsonSchemaNode AddSchema(JsonSchemaNode existingNode, JsonSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x3E04020", Offset = "0x3E04020", VA = "0x3E04020")]
	public void AddProperties(IDictionary<string, JsonSchema> source, IDictionary<string, JsonSchemaNode> target)
	{
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x3E04500", Offset = "0x3E04500", VA = "0x3E04500")]
	public void AddProperty(IDictionary<string, JsonSchemaNode> target, string propertyName, JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x3E04370", Offset = "0x3E04370", VA = "0x3E04370")]
	public void AddItem(JsonSchemaNode parentNode, int index, JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x3E044D0", Offset = "0x3E044D0", VA = "0x3E044D0")]
	public void AddAdditionalProperties(JsonSchemaNode parentNode, JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x3E044A0", Offset = "0x3E044A0", VA = "0x3E044A0")]
	public void AddAdditionalItems(JsonSchemaNode parentNode, JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x3E031C0", Offset = "0x3E031C0", VA = "0x3E031C0")]
	private JsonSchemaModel BuildNodeModel(JsonSchemaNode node)
	{
		return null;
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x3E04650", Offset = "0x3E04650", VA = "0x3E04650")]
	public JsonSchemaModelBuilder()
	{
	}
}
