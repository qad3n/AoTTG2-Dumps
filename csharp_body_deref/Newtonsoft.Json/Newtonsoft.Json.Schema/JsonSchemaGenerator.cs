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
			[Address(RVA = "0x3E01DA0", Offset = "0x3E01DA0", VA = "0x3E01DA0")]
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
			[Address(RVA = "0x3E01DB0", Offset = "0x3E01DB0", VA = "0x3E01DB0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A78")]
		[Address(RVA = "0x3E014B0", Offset = "0x3E014B0", VA = "0x3E014B0")]
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
		[Address(RVA = "0x3DFF8C0", Offset = "0x3DFF8C0", VA = "0x3DFF8C0")]
		[CompilerGenerated]
		get
		{
			return default(UndefinedSchemaIdHandling);
		}
		[Token(Token = "0x6000A61")]
		[Address(RVA = "0x3DFF8D0", Offset = "0x3DFF8D0", VA = "0x3DFF8D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A5")]
	public IContractResolver ContractResolver
	{
		[Token(Token = "0x6000A62")]
		[Address(RVA = "0x3DFF8E0", Offset = "0x3DFF8E0", VA = "0x3DFF8E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A63")]
		[Address(RVA = "0x3DFF990", Offset = "0x3DFF990", VA = "0x3DFF990")]
		set
		{
		}
	}

	[Token(Token = "0x170001A6")]
	private JsonSchema CurrentSchema
	{
		[Token(Token = "0x6000A64")]
		[Address(RVA = "0x3DFF9A0", Offset = "0x3DFF9A0", VA = "0x3DFF9A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x3DFF9B0", Offset = "0x3DFF9B0", VA = "0x3DFF9B0")]
	private void Push(TypeSchema typeSchema)
	{
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x3DFFB00", Offset = "0x3DFFB00", VA = "0x3DFFB00")]
	private TypeSchema Pop()
	{
		return null;
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x3DFFD60", Offset = "0x3DFFD60", VA = "0x3DFFD60")]
	public JsonSchema Generate(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x3DFFEC0", Offset = "0x3DFFEC0", VA = "0x3DFFEC0")]
	public JsonSchema Generate(Type type, JsonSchemaResolver resolver)
	{
		return null;
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x3DFFED0", Offset = "0x3DFFED0", VA = "0x3DFFED0")]
	public JsonSchema Generate(Type type, bool rootSchemaNullable)
	{
		return null;
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x3DFFE20", Offset = "0x3DFFE20", VA = "0x3DFFE20")]
	public JsonSchema Generate(Type type, JsonSchemaResolver resolver, bool rootSchemaNullable)
	{
		return null;
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x3E01130", Offset = "0x3E01130", VA = "0x3E01130")]
	private string GetTitle(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x3E011C0", Offset = "0x3E011C0", VA = "0x3E011C0")]
	private string GetDescription(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x3E012D0", Offset = "0x3E012D0", VA = "0x3E012D0")]
	private string GetTypeId(Type type, bool explicitOnly)
	{
		return null;
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x3DFFFA0", Offset = "0x3DFFFA0", VA = "0x3DFFFA0")]
	private JsonSchema GenerateInternal(Type type, Required valueRequired, bool required)
	{
		return null;
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x3E01540", Offset = "0x3E01540", VA = "0x3E01540")]
	private JsonSchemaType AddNullType(JsonSchemaType type, Required valueRequired)
	{
		return default(JsonSchemaType);
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x3E01D10", Offset = "0x3E01D10", VA = "0x3E01D10")]
	private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x3E01550", Offset = "0x3E01550", VA = "0x3E01550")]
	private void GenerateObjectSchema(Type type, JsonObjectContract contract)
	{
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x3E01CF0", Offset = "0x3E01CF0", VA = "0x3E01CF0")]
	private void GenerateISerializableContract(Type type, JsonISerializableContract contract)
	{
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x3E013E0", Offset = "0x3E013E0", VA = "0x3E013E0")]
	internal static bool HasFlag(JsonSchemaType? value, JsonSchemaType flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x3E01B50", Offset = "0x3E01B50", VA = "0x3E01B50")]
	private JsonSchemaType GetJsonSchemaType(Type type, Required valueRequired)
	{
		return default(JsonSchemaType);
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x3E01D20", Offset = "0x3E01D20", VA = "0x3E01D20")]
	public JsonSchemaGenerator()
	{
	}
}
