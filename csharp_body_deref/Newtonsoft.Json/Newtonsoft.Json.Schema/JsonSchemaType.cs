// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Schema.JsonSchemaType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Schema;

[Token(Token = "0x200014F")]
[Flags]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
public enum JsonSchemaType
{
	[Token(Token = "0x4000645")]
	None = 0,
	[Token(Token = "0x4000646")]
	String = 1,
	[Token(Token = "0x4000647")]
	Float = 2,
	[Token(Token = "0x4000648")]
	Integer = 4,
	[Token(Token = "0x4000649")]
	Boolean = 8,
	[Token(Token = "0x400064A")]
	Object = 0x10,
	[Token(Token = "0x400064B")]
	Array = 0x20,
	[Token(Token = "0x400064C")]
	Null = 0x40,
	[Token(Token = "0x400064D")]
	Any = 0x7F
}
