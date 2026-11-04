// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Schema.JsonSchemaGenerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json.Schema;

[Token(Token = "0x2000145")]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
public class JsonSchemaGenerator
{
	[Token(Token = "0x2000146")]
	private class TypeSchema
	{
		[Token(Token = "0x170001A7")]
		public Type Type
		{
			[Token(Token = "0x6000A76")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001A8")]
		public JsonSchema Schema
		{
			[Token(Token = "0x6000A77")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A78")]
		[Address(RVA = "0x1C6EE40", Offset = "0x1C6D440", VA = "0x181C6EE40")]
		public TypeSchema(Type type, JsonSchema schema)
		{
		}
	}

	[Token(Token = "0x4000617")]
	[FieldOffset(Offset = "0x18")]
	private IContractResolver _contractResolver;

	[Token(Token = "0x4000618")]
	[FieldOffset(Offset = "0x20")]
	private JsonSchemaResolver _resolver;

	[Token(Token = "0x4000619")]
	[FieldOffset(Offset = "0x28")]
	private readonly IList<TypeSchema> _stack;

	[Token(Token = "0x400061A")]
	[FieldOffset(Offset = "0x30")]
	private JsonSchema _currentSchema;

	[Token(Token = "0x170001A4")]
	public UndefinedSchemaIdHandling UndefinedSchemaIdHandling
	{
		[Token(Token = "0x6000A60")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(UndefinedSchemaIdHandling);
		}
		[Token(Token = "0x6000A61")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A5")]
	public IContractResolver ContractResolver
	{
		[Token(Token = "0x6000A62")]
		[Address(RVA = "0x1C5C8A0", Offset = "0x1C5AEA0", VA = "0x181C5C8A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A63")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x170001A6")]
	private JsonSchema CurrentSchema
	{
		[Token(Token = "0x6000A64")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x1C5C700", Offset = "0x1C5AD00", VA = "0x181C5C700")]
	private void Push(TypeSchema typeSchema)
	{
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x1C5C5A0", Offset = "0x1C5ABA0", VA = "0x181C5C5A0")]
	private TypeSchema Pop()
	{
		return null;
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x1C5BF90", Offset = "0x1C5A590", VA = "0x181C5BF90")]
	public JsonSchema Generate(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x1C5BF70", Offset = "0x1C5A570", VA = "0x181C5BF70")]
	public JsonSchema Generate(Type type, JsonSchemaResolver resolver)
	{
		return null;
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x1C5BE60", Offset = "0x1C5A460", VA = "0x181C5BE60")]
	public JsonSchema Generate(Type type, bool rootSchemaNullable)
	{
		return null;
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x1C5BED0", Offset = "0x1C5A4D0", VA = "0x181C5BED0")]
	public JsonSchema Generate(Type type, JsonSchemaResolver resolver, bool rootSchemaNullable)
	{
		return null;
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x1C5C320", Offset = "0x1C5A920", VA = "0x181C5C320")]
	private string GetTitle(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x1C5C010", Offset = "0x1C5A610", VA = "0x181C5C010")]
	private string GetDescription(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x1C5C3B0", Offset = "0x1C5A9B0", VA = "0x181C5C3B0")]
	private string GetTypeId(Type type, bool explicitOnly)
	{
		return null;
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x1C5A6D0", Offset = "0x1C58CD0", VA = "0x181C5A6D0")]
	private JsonSchema GenerateInternal(Type type, Required valueRequired, bool required)
	{
		return null;
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x1C5A6A0", Offset = "0x1C58CA0", VA = "0x181C5A6A0")]
	private JsonSchemaType AddNullType(JsonSchemaType type, Required valueRequired)
	{
		return default(JsonSchemaType);
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x1A32630", Offset = "0x1A30C30", VA = "0x181A32630")]
	private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x1C5BAA0", Offset = "0x1C5A0A0", VA = "0x181C5BAA0")]
	private void GenerateObjectSchema(Type type, JsonObjectContract contract)
	{
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x1C5A6B0", Offset = "0x1C58CB0", VA = "0x181C5A6B0")]
	private void GenerateISerializableContract(Type type, JsonISerializableContract contract)
	{
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x1C5C4B0", Offset = "0x1C5AAB0", VA = "0x181C5C4B0")]
	internal static bool HasFlag(JsonSchemaType? value, JsonSchemaType flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x1C5C110", Offset = "0x1C5A710", VA = "0x181C5C110")]
	private JsonSchemaType GetJsonSchemaType(Type type, Required valueRequired)
	{
		return default(JsonSchemaType);
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x1C5C820", Offset = "0x1C5AE20", VA = "0x181C5C820")]
	public JsonSchemaGenerator()
	{
	}
}
