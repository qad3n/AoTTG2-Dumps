// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Schema.Extensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/Extensions.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3DF7B20", Offset = "0x3DF7B20", VA = "0x3DF7B20")]
	[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
	public static bool IsValid(this JToken source, JsonSchema schema)
	{
		return default(bool);
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x3DF7F20", Offset = "0x3DF7F20", VA = "0x3DF7F20")]
	[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
	public static bool IsValid(this JToken source, JsonSchema schema, out IList<string> errorMessages)
	{
		return default(bool);
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x3DF80C0", Offset = "0x3DF80C0", VA = "0x3DF80C0")]
	[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
	public static void Validate(this JToken source, JsonSchema schema)
	{
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x3DF7CE0", Offset = "0x3DF7CE0", VA = "0x3DF7CE0")]
	[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
	public static void Validate(this JToken source, JsonSchema schema, ValidationEventHandler validationEventHandler)
	{
	}
}
