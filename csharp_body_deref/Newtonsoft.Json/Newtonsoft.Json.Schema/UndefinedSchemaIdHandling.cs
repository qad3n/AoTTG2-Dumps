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
