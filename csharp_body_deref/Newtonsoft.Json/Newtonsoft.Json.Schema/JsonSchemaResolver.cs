// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Schema.JsonSchemaResolver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Schema;

[Token(Token = "0x200014D")]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
public class JsonSchemaResolver
{
	[Token(Token = "0x170001C7")]
	public IList<JsonSchema> LoadedSchemas
	{
		[Token(Token = "0x6000AC8")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AC9")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x1C5ED80", Offset = "0x1C5D380", VA = "0x181C5ED80")]
	public JsonSchemaResolver()
	{
	}

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x1C5EC50", Offset = "0x1C5D250", VA = "0x181C5EC50", Slot = "4")]
	public virtual JsonSchema GetSchema(string reference)
	{
		return null;
	}
}
