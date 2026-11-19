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
			[Address(RVA = "0x55F7FF0", Offset = "0x55F6FF0", VA = "0x55F7FF0")]
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
			[Address(RVA = "0x55F8000", Offset = "0x55F7000", VA = "0x55F8000")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A78")]
		[Address(RVA = "0x55F77E0", Offset = "0x55F67E0", VA = "0x55F77E0")]
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
		[Address(RVA = "0x55F5D50", Offset = "0x55F4D50", VA = "0x55F5D50")]
		[CompilerGenerated]
		get
		{
			return default(UndefinedSchemaIdHandling);
		}
		[Token(Token = "0x6000A61")]
		[Address(RVA = "0x55F5D60", Offset = "0x55F4D60", VA = "0x55F5D60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A5")]
	public IContractResolver ContractResolver
	{
		[Token(Token = "0x6000A62")]
		[Address(RVA = "0x55F5D70", Offset = "0x55F4D70", VA = "0x55F5D70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A63")]
		[Address(RVA = "0x55F5E20", Offset = "0x55F4E20", VA = "0x55F5E20")]
		set
		{
		}
	}

	[Token(Token = "0x170001A6")]
	private JsonSchema CurrentSchema
	{
		[Token(Token = "0x6000A64")]
		[Address(RVA = "0x55F5E30", Offset = "0x55F4E30", VA = "0x55F5E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x55F5E40", Offset = "0x55F4E40", VA = "0x55F5E40")]
	private void Push(TypeSchema typeSchema)
	{
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x55F5F90", Offset = "0x55F4F90", VA = "0x55F5F90")]
	private TypeSchema Pop()
	{
		return null;
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x55F61F0", Offset = "0x55F51F0", VA = "0x55F61F0")]
	public JsonSchema Generate(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x55F63C0", Offset = "0x55F53C0", VA = "0x55F63C0")]
	public JsonSchema Generate(Type type, JsonSchemaResolver resolver)
	{
		return null;
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x55F6450", Offset = "0x55F5450", VA = "0x55F6450")]
	public JsonSchema Generate(Type type, bool rootSchemaNullable)
	{
		return null;
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x55F6320", Offset = "0x55F5320", VA = "0x55F6320")]
	public JsonSchema Generate(Type type, JsonSchemaResolver resolver, bool rootSchemaNullable)
	{
		return null;
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x55F7480", Offset = "0x55F6480", VA = "0x55F7480")]
	private string GetTitle(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x55F7520", Offset = "0x55F6520", VA = "0x55F7520")]
	private string GetDescription(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x55F7620", Offset = "0x55F6620", VA = "0x55F7620")]
	private string GetTypeId(Type type, bool explicitOnly)
	{
		return null;
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x55F6580", Offset = "0x55F5580", VA = "0x55F6580")]
	private JsonSchema GenerateInternal(Type type, Required valueRequired, bool required)
	{
		return null;
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x55F7870", Offset = "0x55F6870", VA = "0x55F7870")]
	private JsonSchemaType AddNullType(JsonSchemaType type, Required valueRequired)
	{
		return default(JsonSchemaType);
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x55F7F60", Offset = "0x55F6F60", VA = "0x55F7F60")]
	private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x55F7880", Offset = "0x55F6880", VA = "0x55F7880")]
	private void GenerateObjectSchema(Type type, JsonObjectContract contract)
	{
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x55F7F40", Offset = "0x55F6F40", VA = "0x55F7F40")]
	private void GenerateISerializableContract(Type type, JsonISerializableContract contract)
	{
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x55F7720", Offset = "0x55F6720", VA = "0x55F7720")]
	internal static bool HasFlag(JsonSchemaType? value, JsonSchemaType flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x55F7DA0", Offset = "0x55F6DA0", VA = "0x55F7DA0")]
	private JsonSchemaType GetJsonSchemaType(Type type, Required valueRequired)
	{
		return default(JsonSchemaType);
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x55F7F70", Offset = "0x55F6F70", VA = "0x55F7F70")]
	public JsonSchemaGenerator()
	{
	}
}
