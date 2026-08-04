// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Schema.JsonSchemaException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Schema;

[Serializable]
[Token(Token = "0x2000144")]
[Obsolete("JSON Schema validation has been moved to its own package. See https://www.newtonsoft.com/jsonschema for more details.")]
public class JsonSchemaException : JsonException
{
	[Token(Token = "0x170001A1")]
	public int LineNumber
	{
		[Token(Token = "0x6000A58")]
		[Address(RVA = "0x3DFF800", Offset = "0x3DFF800", VA = "0x3DFF800")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001A2")]
	public int LinePosition
	{
		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x3DFF810", Offset = "0x3DFF810", VA = "0x3DFF810")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001A3")]
	public string Path
	{
		[Token(Token = "0x6000A5A")]
		[Address(RVA = "0x3DFF820", Offset = "0x3DFF820", VA = "0x3DFF820")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x3DFF830", Offset = "0x3DFF830", VA = "0x3DFF830")]
	public JsonSchemaException()
	{
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x3DFF840", Offset = "0x3DFF840", VA = "0x3DFF840")]
	public JsonSchemaException(string message)
	{
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x3DFF850", Offset = "0x3DFF850", VA = "0x3DFF850")]
	public JsonSchemaException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x3DFF860", Offset = "0x3DFF860", VA = "0x3DFF860")]
	public JsonSchemaException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x3DFF870", Offset = "0x3DFF870", VA = "0x3DFF870")]
	internal JsonSchemaException(string message, Exception innerException, string path, int lineNumber, int linePosition)
	{
	}
}
