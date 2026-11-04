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
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0")]
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
		[Address(RVA = "0xB5B910", Offset = "0xB59F10", VA = "0x180B5B910")]
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
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x1C2A390", Offset = "0x1C28990", VA = "0x181C2A390")]
	public JsonSchemaException()
	{
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x1C2A3A0", Offset = "0x1C289A0", VA = "0x181C2A3A0")]
	public JsonSchemaException(string message)
	{
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x1C2A340", Offset = "0x1C28940", VA = "0x181C2A340")]
	public JsonSchemaException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x1C2A320", Offset = "0x1C28920", VA = "0x181C2A320")]
	public JsonSchemaException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x1C5A650", Offset = "0x1C58C50", VA = "0x181C5A650")]
	internal JsonSchemaException(string message, Exception innerException, string path, int lineNumber, int linePosition)
	{
	}
}
