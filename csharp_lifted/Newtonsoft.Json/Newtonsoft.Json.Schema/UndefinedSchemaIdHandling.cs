// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Schema.UndefinedSchemaIdHandling
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Schema;

[Token(Token = "0x2000152")]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
public enum UndefinedSchemaIdHandling
{
	[Token(Token = "0x4000653")]
	None,
	[Token(Token = "0x4000654")]
	UseTypeName,
	[Token(Token = "0x4000655")]
	UseAssemblyQualifiedName
}
