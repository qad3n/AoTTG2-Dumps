using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Newtonsoft.Json.Linq;

namespace Newtonsoft.Json.Schema;

[Token(Token = "0x200013D")]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
public static class Extensions
{
	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x3B021D0", Offset = "0x3B021D0", VA = "0x3B021D0")]
	[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
	public static bool IsValid(this JToken source, JsonSchema schema)
	{
		return default(bool);
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x3B025D0", Offset = "0x3B025D0", VA = "0x3B025D0")]
	[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
	public static bool IsValid(this JToken source, JsonSchema schema, out IList<string> errorMessages)
	{
		return default(bool);
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x3B02770", Offset = "0x3B02770", VA = "0x3B02770")]
	[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
	public static void Validate(this JToken source, JsonSchema schema)
	{
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x3B02390", Offset = "0x3B02390", VA = "0x3B02390")]
	[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
	public static void Validate(this JToken source, JsonSchema schema, ValidationEventHandler validationEventHandler)
	{
	}
}
