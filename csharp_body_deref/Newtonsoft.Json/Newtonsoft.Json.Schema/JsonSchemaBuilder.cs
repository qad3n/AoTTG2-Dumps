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
		[Address(RVA = "0x3B05120", Offset = "0x3B05120", VA = "0x3B05120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x3B03030", Offset = "0x3B03030", VA = "0x3B03030")]
	public JsonSchemaBuilder(JsonSchemaResolver resolver)
	{
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x3B04DC0", Offset = "0x3B04DC0", VA = "0x3B04DC0")]
	private void Push(JsonSchema value)
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x3B04FB0", Offset = "0x3B04FB0", VA = "0x3B04FB0")]
	private JsonSchema Pop()
	{
		return null;
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x3B03110", Offset = "0x3B03110", VA = "0x3B03110")]
	internal JsonSchema Read(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x3B06190", Offset = "0x3B06190", VA = "0x3B06190")]
	private string UnescapeReference(string reference)
	{
		return null;
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x3B055D0", Offset = "0x3B055D0", VA = "0x3B055D0")]
	private JsonSchema ResolveReferences(JsonSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x3B05130", Offset = "0x3B05130", VA = "0x3B05130")]
	private JsonSchema BuildSchema(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x3B06240", Offset = "0x3B06240", VA = "0x3B06240")]
	private void ProcessSchemaProperties(JObject schemaObject)
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x3B09470", Offset = "0x3B09470", VA = "0x3B09470")]
	private void ProcessExtends(JToken token)
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x3B08F20", Offset = "0x3B08F20", VA = "0x3B08F20")]
	private void ProcessEnum(JToken token)
	{
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x3B08DC0", Offset = "0x3B08DC0", VA = "0x3B08DC0")]
	private void ProcessAdditionalProperties(JToken token)
	{
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x3B08E70", Offset = "0x3B08E70", VA = "0x3B08E70")]
	private void ProcessAdditionalItems(JToken token)
	{
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x3B080F0", Offset = "0x3B080F0", VA = "0x3B080F0")]
	private IDictionary<string, JsonSchema> ProcessProperties(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x3B08790", Offset = "0x3B08790", VA = "0x3B08790")]
	private void ProcessItems(JToken token)
	{
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x3B07AC0", Offset = "0x3B07AC0", VA = "0x3B07AC0")]
	private JsonSchemaType? ProcessType(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x3B09A20", Offset = "0x3B09A20", VA = "0x3B09A20")]
	internal static JsonSchemaType MapType(string type)
	{
		return default(JsonSchemaType);
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x3B09B90", Offset = "0x3B09B90", VA = "0x3B09B90")]
	internal static string MapType(JsonSchemaType type)
	{
		return null;
	}
}
