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
		[Address(RVA = "0x3E04720", Offset = "0x3E04720", VA = "0x3E04720")]
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
		[Address(RVA = "0x3E04730", Offset = "0x3E04730", VA = "0x3E04730")]
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
		[Address(RVA = "0x3E04740", Offset = "0x3E04740", VA = "0x3E04740")]
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
		[Address(RVA = "0x3E04750", Offset = "0x3E04750", VA = "0x3E04750")]
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
		[Address(RVA = "0x3E04760", Offset = "0x3E04760", VA = "0x3E04760")]
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
		[Address(RVA = "0x3E04770", Offset = "0x3E04770", VA = "0x3E04770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x3E04780", Offset = "0x3E04780", VA = "0x3E04780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C6")]
	public JsonSchemaNode AdditionalItems
	{
		[Token(Token = "0x6000ABC")]
		[Address(RVA = "0x3E04790", Offset = "0x3E04790", VA = "0x3E04790")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ABD")]
		[Address(RVA = "0x3E047A0", Offset = "0x3E047A0", VA = "0x3E047A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x3E03DE0", Offset = "0x3E03DE0", VA = "0x3E03DE0")]
	public JsonSchemaNode(JsonSchema schema)
	{
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x3E047B0", Offset = "0x3E047B0", VA = "0x3E047B0")]
	private JsonSchemaNode(JsonSchemaNode source, JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x3E03FD0", Offset = "0x3E03FD0", VA = "0x3E03FD0")]
	public JsonSchemaNode Combine(JsonSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x3E03B40", Offset = "0x3E03B40", VA = "0x3E03B40")]
	public static string GetId(IEnumerable<JsonSchema> schemata)
	{
		return null;
	}
}
