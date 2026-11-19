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
		[Address(RVA = "0x55F5C90", Offset = "0x55F4C90", VA = "0x55F5C90")]
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
		[Address(RVA = "0x55F5CA0", Offset = "0x55F4CA0", VA = "0x55F5CA0")]
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
		[Address(RVA = "0x55F5CB0", Offset = "0x55F4CB0", VA = "0x55F5CB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x55F5CC0", Offset = "0x55F4CC0", VA = "0x55F5CC0")]
	public JsonSchemaException()
	{
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x55F5CD0", Offset = "0x55F4CD0", VA = "0x55F5CD0")]
	public JsonSchemaException(string message)
	{
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x55F5CE0", Offset = "0x55F4CE0", VA = "0x55F5CE0")]
	public JsonSchemaException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x55F5CF0", Offset = "0x55F4CF0", VA = "0x55F5CF0")]
	public JsonSchemaException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x55F5D00", Offset = "0x55F4D00", VA = "0x55F5D00")]
	internal JsonSchemaException(string message, Exception innerException, string path, int lineNumber, int linePosition)
	{
	}
}
