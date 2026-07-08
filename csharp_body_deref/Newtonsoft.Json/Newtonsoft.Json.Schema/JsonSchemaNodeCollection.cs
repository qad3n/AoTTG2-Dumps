using System;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Schema;

[Token(Token = "0x200014C")]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
internal class JsonSchemaNodeCollection : KeyedCollection<string, JsonSchemaNode>
{
	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x3B0F180", Offset = "0x3B0F180", VA = "0x3B0F180", Slot = "39")]
	protected override string GetKeyForItem(JsonSchemaNode item)
	{
		return null;
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x3B0D070", Offset = "0x3B0D070", VA = "0x3B0D070")]
	public JsonSchemaNodeCollection()
	{
	}
}
