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
