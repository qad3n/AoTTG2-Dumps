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
		[Address(RVA = "0x3DFAA70", Offset = "0x3DFAA70", VA = "0x3DFAA70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x3DF8980", Offset = "0x3DF8980", VA = "0x3DF8980")]
	public JsonSchemaBuilder(JsonSchemaResolver resolver)
	{
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x3DFA710", Offset = "0x3DFA710", VA = "0x3DFA710")]
	private void Push(JsonSchema value)
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x3DFA900", Offset = "0x3DFA900", VA = "0x3DFA900")]
	private JsonSchema Pop()
	{
		return null;
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x3DF8A60", Offset = "0x3DF8A60", VA = "0x3DF8A60")]
	internal JsonSchema Read(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x3DFBAE0", Offset = "0x3DFBAE0", VA = "0x3DFBAE0")]
	private string UnescapeReference(string reference)
	{
		return null;
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x3DFAF20", Offset = "0x3DFAF20", VA = "0x3DFAF20")]
	private JsonSchema ResolveReferences(JsonSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x3DFAA80", Offset = "0x3DFAA80", VA = "0x3DFAA80")]
	private JsonSchema BuildSchema(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x3DFBB90", Offset = "0x3DFBB90", VA = "0x3DFBB90")]
	private void ProcessSchemaProperties(JObject schemaObject)
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x3DFEDC0", Offset = "0x3DFEDC0", VA = "0x3DFEDC0")]
	private void ProcessExtends(JToken token)
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x3DFE870", Offset = "0x3DFE870", VA = "0x3DFE870")]
	private void ProcessEnum(JToken token)
	{
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x3DFE710", Offset = "0x3DFE710", VA = "0x3DFE710")]
	private void ProcessAdditionalProperties(JToken token)
	{
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x3DFE7C0", Offset = "0x3DFE7C0", VA = "0x3DFE7C0")]
	private void ProcessAdditionalItems(JToken token)
	{
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x3DFDA40", Offset = "0x3DFDA40", VA = "0x3DFDA40")]
	private IDictionary<string, JsonSchema> ProcessProperties(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x3DFE0E0", Offset = "0x3DFE0E0", VA = "0x3DFE0E0")]
	private void ProcessItems(JToken token)
	{
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x3DFD410", Offset = "0x3DFD410", VA = "0x3DFD410")]
	private JsonSchemaType? ProcessType(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x3DFF370", Offset = "0x3DFF370", VA = "0x3DFF370")]
	internal static JsonSchemaType MapType(string type)
	{
		return default(JsonSchemaType);
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x3DFF4E0", Offset = "0x3DFF4E0", VA = "0x3DFF4E0")]
	internal static string MapType(JsonSchemaType type)
	{
		return null;
	}
}
