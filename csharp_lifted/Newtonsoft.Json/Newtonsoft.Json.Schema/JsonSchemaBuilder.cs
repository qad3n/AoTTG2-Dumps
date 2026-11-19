// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Schema.JsonSchemaBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Newtonsoft.Json.Linq;

namespace Newtonsoft.Json.Schema;

[Token(Token = "0x2000141")]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
internal class JsonSchemaBuilder
{
	[Token(Token = "0x40005EC")]
	[FieldOffset(Offset = "0x10")]
	private readonly IList<JsonSchema> _stack;

	[Token(Token = "0x40005ED")]
	[FieldOffset(Offset = "0x18")]
	private readonly JsonSchemaResolver _resolver;

	[Token(Token = "0x40005EE")]
	[FieldOffset(Offset = "0x20")]
	private readonly IDictionary<string, JsonSchema> _documentSchemas;

	[Token(Token = "0x40005EF")]
	[FieldOffset(Offset = "0x28")]
	private JsonSchema _currentSchema;

	[Token(Token = "0x40005F0")]
	[FieldOffset(Offset = "0x30")]
	private JObject _rootSchema;

	[Token(Token = "0x170001A0")]
	private JsonSchema CurrentSchema
	{
		[Token(Token = "0x6000A46")]
		[Address(RVA = "0x55F1780", Offset = "0x55F0780", VA = "0x55F1780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x55EF770", Offset = "0x55EE770", VA = "0x55EF770")]
	public JsonSchemaBuilder(JsonSchemaResolver resolver)
	{
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x55F1420", Offset = "0x55F0420", VA = "0x55F1420")]
	private void Push(JsonSchema value)
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x55F1610", Offset = "0x55F0610", VA = "0x55F1610")]
	private JsonSchema Pop()
	{
		return null;
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x55EF850", Offset = "0x55EE850", VA = "0x55EF850")]
	internal JsonSchema Read(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x55F2750", Offset = "0x55F1750", VA = "0x55F2750")]
	private string UnescapeReference(string reference)
	{
		return null;
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x55F1C20", Offset = "0x55F0C20", VA = "0x55F1C20")]
	private JsonSchema ResolveReferences(JsonSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x55F1790", Offset = "0x55F0790", VA = "0x55F1790")]
	private JsonSchema BuildSchema(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x55F2800", Offset = "0x55F1800", VA = "0x55F2800")]
	private void ProcessSchemaProperties(JObject schemaObject)
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x55F52D0", Offset = "0x55F42D0", VA = "0x55F52D0")]
	private void ProcessExtends(JToken token)
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x55F4DE0", Offset = "0x55F3DE0", VA = "0x55F4DE0")]
	private void ProcessEnum(JToken token)
	{
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x55F4C80", Offset = "0x55F3C80", VA = "0x55F4C80")]
	private void ProcessAdditionalProperties(JToken token)
	{
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x55F4D30", Offset = "0x55F3D30", VA = "0x55F4D30")]
	private void ProcessAdditionalItems(JToken token)
	{
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x55F40C0", Offset = "0x55F30C0", VA = "0x55F40C0")]
	private IDictionary<string, JsonSchema> ProcessProperties(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x55F46C0", Offset = "0x55F36C0", VA = "0x55F46C0")]
	private void ProcessItems(JToken token)
	{
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x55F3AF0", Offset = "0x55F2AF0", VA = "0x55F3AF0")]
	private JsonSchemaType? ProcessType(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x55F5800", Offset = "0x55F4800", VA = "0x55F5800")]
	internal static JsonSchemaType MapType(string type)
	{
		return default(JsonSchemaType);
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x55F5970", Offset = "0x55F4970", VA = "0x55F5970")]
	internal static string MapType(JsonSchemaType type)
	{
		return null;
	}
}
