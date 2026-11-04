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
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x1C5A380", Offset = "0x1C58980", VA = "0x181C5A380")]
	public JsonSchemaBuilder(JsonSchemaResolver resolver)
	{
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x1C596C0", Offset = "0x1C57CC0", VA = "0x181C596C0")]
	private void Push(JsonSchema value)
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x1C571C0", Offset = "0x1C557C0", VA = "0x181C571C0")]
	private JsonSchema Pop()
	{
		return null;
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x1C59790", Offset = "0x1C57D90", VA = "0x181C59790")]
	internal JsonSchema Read(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x1C5A2D0", Offset = "0x1C588D0", VA = "0x181C5A2D0")]
	private string UnescapeReference(string reference)
	{
		return null;
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x1C598B0", Offset = "0x1C57EB0", VA = "0x181C598B0")]
	private JsonSchema ResolveReferences(JsonSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x1C56A10", Offset = "0x1C55010", VA = "0x181C56A10")]
	private JsonSchema BuildSchema(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x1C58300", Offset = "0x1C56900", VA = "0x181C58300")]
	private void ProcessSchemaProperties(JObject schemaObject)
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x1C577C0", Offset = "0x1C55DC0", VA = "0x181C577C0")]
	private void ProcessExtends(JToken token)
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x1C57420", Offset = "0x1C55A20", VA = "0x181C57420")]
	private void ProcessEnum(JToken token)
	{
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x1C57350", Offset = "0x1C55950", VA = "0x181C57350")]
	private void ProcessAdditionalProperties(JToken token)
	{
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x1C57280", Offset = "0x1C55880", VA = "0x181C57280")]
	private void ProcessAdditionalItems(JToken token)
	{
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x1C57ED0", Offset = "0x1C564D0", VA = "0x181C57ED0")]
	private IDictionary<string, JsonSchema> ProcessProperties(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x1C57AF0", Offset = "0x1C560F0", VA = "0x181C57AF0")]
	private void ProcessItems(JToken token)
	{
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x1C592A0", Offset = "0x1C578A0", VA = "0x181C592A0")]
	private JsonSchemaType? ProcessType(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x1C57040", Offset = "0x1C55640", VA = "0x181C57040")]
	internal static JsonSchemaType MapType(string type)
	{
		return default(JsonSchemaType);
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x1C56F30", Offset = "0x1C55530", VA = "0x181C56F30")]
	internal static string MapType(JsonSchemaType type)
	{
		return null;
	}
}
