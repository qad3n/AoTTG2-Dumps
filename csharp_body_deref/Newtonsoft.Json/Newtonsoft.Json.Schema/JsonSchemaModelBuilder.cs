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
	[Address(RVA = "0x3B0CF60", Offset = "0x3B0CF60", VA = "0x3B0CF60")]
	public JsonSchemaModel Build(JsonSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x3B0D0B0", Offset = "0x3B0D0B0", VA = "0x3B0D0B0")]
	public JsonSchemaNode AddSchema(JsonSchemaNode existingNode, JsonSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x3B0E6D0", Offset = "0x3B0E6D0", VA = "0x3B0E6D0")]
	public void AddProperties(IDictionary<string, JsonSchema> source, IDictionary<string, JsonSchemaNode> target)
	{
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x3B0EBB0", Offset = "0x3B0EBB0", VA = "0x3B0EBB0")]
	public void AddProperty(IDictionary<string, JsonSchemaNode> target, string propertyName, JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x3B0EA20", Offset = "0x3B0EA20", VA = "0x3B0EA20")]
	public void AddItem(JsonSchemaNode parentNode, int index, JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x3B0EB80", Offset = "0x3B0EB80", VA = "0x3B0EB80")]
	public void AddAdditionalProperties(JsonSchemaNode parentNode, JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x3B0EB50", Offset = "0x3B0EB50", VA = "0x3B0EB50")]
	public void AddAdditionalItems(JsonSchemaNode parentNode, JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x3B0D870", Offset = "0x3B0D870", VA = "0x3B0D870")]
	private JsonSchemaModel BuildNodeModel(JsonSchemaNode node)
	{
		return null;
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x3B0ED00", Offset = "0x3B0ED00", VA = "0x3B0ED00")]
	public JsonSchemaModelBuilder()
	{
	}
}
