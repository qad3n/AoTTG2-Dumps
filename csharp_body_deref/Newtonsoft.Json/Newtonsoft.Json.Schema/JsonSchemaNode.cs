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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
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
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
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
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
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
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
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
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C6")]
	public JsonSchemaNode AdditionalItems
	{
		[Token(Token = "0x6000ABC")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ABD")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x1C5E800", Offset = "0x1C5CE00", VA = "0x181C5E800")]
	public JsonSchemaNode(JsonSchema schema)
	{
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x1C5E9E0", Offset = "0x1C5CFE0", VA = "0x181C5E9E0")]
	private JsonSchemaNode(JsonSchemaNode source, JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x1C5E510", Offset = "0x1C5CB10", VA = "0x181C5E510")]
	public JsonSchemaNode Combine(JsonSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x1C5E580", Offset = "0x1C5CB80", VA = "0x181C5E580")]
	public static string GetId(IEnumerable<JsonSchema> schemata)
	{
		return null;
	}
}
