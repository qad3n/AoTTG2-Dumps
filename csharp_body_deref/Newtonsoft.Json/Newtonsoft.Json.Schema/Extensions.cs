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
	[Address(RVA = "0x1C55170", Offset = "0x1C53770", VA = "0x181C55170")]
	[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
	public static bool IsValid(this JToken source, JsonSchema schema)
	{
		return default(bool);
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x1C55040", Offset = "0x1C53640", VA = "0x181C55040")]
	[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
	public static bool IsValid(this JToken source, JsonSchema schema, out IList<string> errorMessages)
	{
		return default(bool);
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x1C55520", Offset = "0x1C53B20", VA = "0x181C55520")]
	[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
	public static void Validate(this JToken source, JsonSchema schema)
	{
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x1C55390", Offset = "0x1C53990", VA = "0x181C55390")]
	[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
	public static void Validate(this JToken source, JsonSchema schema, ValidationEventHandler validationEventHandler)
	{
	}
}
