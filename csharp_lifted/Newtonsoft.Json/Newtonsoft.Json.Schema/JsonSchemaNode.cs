// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Schema.JsonSchemaNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Schema;

[Token(Token = "0x200014A")]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
internal class JsonSchemaNode
{
	[Token(Token = "0x170001C0")]
	public string Id
	{
		[Token(Token = "0x6000AB5")]
		[Address(RVA = "0x55FA700", Offset = "0x55F9700", VA = "0x55FA700")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C1")]
	public ReadOnlyCollection<JsonSchema> Schemas
	{
		[Token(Token = "0x6000AB6")]
		[Address(RVA = "0x55FA710", Offset = "0x55F9710", VA = "0x55FA710")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C2")]
	public Dictionary<string, JsonSchemaNode> Properties
	{
		[Token(Token = "0x6000AB7")]
		[Address(RVA = "0x55FA720", Offset = "0x55F9720", VA = "0x55FA720")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	public Dictionary<string, JsonSchemaNode> PatternProperties
	{
		[Token(Token = "0x6000AB8")]
		[Address(RVA = "0x55FA730", Offset = "0x55F9730", VA = "0x55FA730")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C4")]
	public List<JsonSchemaNode> Items
	{
		[Token(Token = "0x6000AB9")]
		[Address(RVA = "0x55FA740", Offset = "0x55F9740", VA = "0x55FA740")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C5")]
	public JsonSchemaNode AdditionalProperties
	{
		[Token(Token = "0x6000ABA")]
		[Address(RVA = "0x55FA750", Offset = "0x55F9750", VA = "0x55FA750")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x55FA760", Offset = "0x55F9760", VA = "0x55FA760")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C6")]
	public JsonSchemaNode AdditionalItems
	{
		[Token(Token = "0x6000ABC")]
		[Address(RVA = "0x55FA770", Offset = "0x55F9770", VA = "0x55FA770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ABD")]
		[Address(RVA = "0x55FA780", Offset = "0x55F9780", VA = "0x55FA780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x55F9E20", Offset = "0x55F8E20", VA = "0x55F9E20")]
	public JsonSchemaNode(JsonSchema schema)
	{
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x55FA790", Offset = "0x55F9790", VA = "0x55FA790")]
	private JsonSchemaNode(JsonSchemaNode source, JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x55FA010", Offset = "0x55F9010", VA = "0x55FA010")]
	public JsonSchemaNode Combine(JsonSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x55F9B80", Offset = "0x55F8B80", VA = "0x55F9B80")]
	public static string GetId(IEnumerable<JsonSchema> schemata)
	{
		return null;
	}
}
