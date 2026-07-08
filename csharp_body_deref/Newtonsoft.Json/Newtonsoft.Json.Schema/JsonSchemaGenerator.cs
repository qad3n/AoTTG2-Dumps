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
			[Address(RVA = "0x3B0C450", Offset = "0x3B0C450", VA = "0x3B0C450")]
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
			[Address(RVA = "0x3B0C460", Offset = "0x3B0C460", VA = "0x3B0C460")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A78")]
		[Address(RVA = "0x3B0BB60", Offset = "0x3B0BB60", VA = "0x3B0BB60")]
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
		[Address(RVA = "0x3B09F70", Offset = "0x3B09F70", VA = "0x3B09F70")]
		[CompilerGenerated]
		get
		{
			return default(UndefinedSchemaIdHandling);
		}
		[Token(Token = "0x6000A61")]
		[Address(RVA = "0x3B09F80", Offset = "0x3B09F80", VA = "0x3B09F80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A5")]
	public IContractResolver ContractResolver
	{
		[Token(Token = "0x6000A62")]
		[Address(RVA = "0x3B09F90", Offset = "0x3B09F90", VA = "0x3B09F90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A63")]
		[Address(RVA = "0x3B0A040", Offset = "0x3B0A040", VA = "0x3B0A040")]
		set
		{
		}
	}

	[Token(Token = "0x170001A6")]
	private JsonSchema CurrentSchema
	{
		[Token(Token = "0x6000A64")]
		[Address(RVA = "0x3B0A050", Offset = "0x3B0A050", VA = "0x3B0A050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x3B0A060", Offset = "0x3B0A060", VA = "0x3B0A060")]
	private void Push(TypeSchema typeSchema)
	{
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x3B0A1B0", Offset = "0x3B0A1B0", VA = "0x3B0A1B0")]
	private TypeSchema Pop()
	{
		return null;
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x3B0A410", Offset = "0x3B0A410", VA = "0x3B0A410")]
	public JsonSchema Generate(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x3B0A570", Offset = "0x3B0A570", VA = "0x3B0A570")]
	public JsonSchema Generate(Type type, JsonSchemaResolver resolver)
	{
		return null;
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x3B0A580", Offset = "0x3B0A580", VA = "0x3B0A580")]
	public JsonSchema Generate(Type type, bool rootSchemaNullable)
	{
		return null;
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x3B0A4D0", Offset = "0x3B0A4D0", VA = "0x3B0A4D0")]
	public JsonSchema Generate(Type type, JsonSchemaResolver resolver, bool rootSchemaNullable)
	{
		return null;
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x3B0B7E0", Offset = "0x3B0B7E0", VA = "0x3B0B7E0")]
	private string GetTitle(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x3B0B870", Offset = "0x3B0B870", VA = "0x3B0B870")]
	private string GetDescription(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x3B0B980", Offset = "0x3B0B980", VA = "0x3B0B980")]
	private string GetTypeId(Type type, bool explicitOnly)
	{
		return null;
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x3B0A650", Offset = "0x3B0A650", VA = "0x3B0A650")]
	private JsonSchema GenerateInternal(Type type, Required valueRequired, bool required)
	{
		return null;
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x3B0BBF0", Offset = "0x3B0BBF0", VA = "0x3B0BBF0")]
	private JsonSchemaType AddNullType(JsonSchemaType type, Required valueRequired)
	{
		return default(JsonSchemaType);
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x3B0C3C0", Offset = "0x3B0C3C0", VA = "0x3B0C3C0")]
	private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x3B0BC00", Offset = "0x3B0BC00", VA = "0x3B0BC00")]
	private void GenerateObjectSchema(Type type, JsonObjectContract contract)
	{
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x3B0C3A0", Offset = "0x3B0C3A0", VA = "0x3B0C3A0")]
	private void GenerateISerializableContract(Type type, JsonISerializableContract contract)
	{
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x3B0BA90", Offset = "0x3B0BA90", VA = "0x3B0BA90")]
	internal static bool HasFlag(JsonSchemaType? value, JsonSchemaType flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x3B0C200", Offset = "0x3B0C200", VA = "0x3B0C200")]
	private JsonSchemaType GetJsonSchemaType(Type type, Required valueRequired)
	{
		return default(JsonSchemaType);
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x3B0C3D0", Offset = "0x3B0C3D0", VA = "0x3B0C3D0")]
	public JsonSchemaGenerator()
	{
	}
}
