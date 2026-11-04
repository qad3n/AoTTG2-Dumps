// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Schema.JsonSchemaNodeCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Schema;

[Token(Token = "0x200014C")]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
internal class JsonSchemaNodeCollection : KeyedCollection<string, JsonSchemaNode>
{
	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x18D9D00", Offset = "0x18D8300", VA = "0x1818D9D00", Slot = "39")]
	protected override string GetKeyForItem(JsonSchemaNode item)
	{
		return null;
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x1C5E4D0", Offset = "0x1C5CAD0", VA = "0x181C5E4D0")]
	public JsonSchemaNodeCollection()
	{
	}
}
