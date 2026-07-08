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
		[Address(RVA = "0x3B0EDD0", Offset = "0x3B0EDD0", VA = "0x3B0EDD0")]
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
		[Address(RVA = "0x3B0EDE0", Offset = "0x3B0EDE0", VA = "0x3B0EDE0")]
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
		[Address(RVA = "0x3B0EDF0", Offset = "0x3B0EDF0", VA = "0x3B0EDF0")]
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
		[Address(RVA = "0x3B0EE00", Offset = "0x3B0EE00", VA = "0x3B0EE00")]
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
		[Address(RVA = "0x3B0EE10", Offset = "0x3B0EE10", VA = "0x3B0EE10")]
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
		[Address(RVA = "0x3B0EE20", Offset = "0x3B0EE20", VA = "0x3B0EE20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x3B0EE30", Offset = "0x3B0EE30", VA = "0x3B0EE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C6")]
	public JsonSchemaNode AdditionalItems
	{
		[Token(Token = "0x6000ABC")]
		[Address(RVA = "0x3B0EE40", Offset = "0x3B0EE40", VA = "0x3B0EE40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ABD")]
		[Address(RVA = "0x3B0EE50", Offset = "0x3B0EE50", VA = "0x3B0EE50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x3B0E490", Offset = "0x3B0E490", VA = "0x3B0E490")]
	public JsonSchemaNode(JsonSchema schema)
	{
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x3B0EE60", Offset = "0x3B0EE60", VA = "0x3B0EE60")]
	private JsonSchemaNode(JsonSchemaNode source, JsonSchema schema)
	{
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x3B0E680", Offset = "0x3B0E680", VA = "0x3B0E680")]
	public JsonSchemaNode Combine(JsonSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x3B0E1F0", Offset = "0x3B0E1F0", VA = "0x3B0E1F0")]
	public static string GetId(IEnumerable<JsonSchema> schemata)
	{
		return null;
	}
}
