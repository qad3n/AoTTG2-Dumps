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
		[Address(RVA = "0x3B09EB0", Offset = "0x3B09EB0", VA = "0x3B09EB0")]
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
		[Address(RVA = "0x3B09EC0", Offset = "0x3B09EC0", VA = "0x3B09EC0")]
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
		[Address(RVA = "0x3B09ED0", Offset = "0x3B09ED0", VA = "0x3B09ED0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x3B09EE0", Offset = "0x3B09EE0", VA = "0x3B09EE0")]
	public JsonSchemaException()
	{
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x3B09EF0", Offset = "0x3B09EF0", VA = "0x3B09EF0")]
	public JsonSchemaException(string message)
	{
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x3B09F00", Offset = "0x3B09F00", VA = "0x3B09F00")]
	public JsonSchemaException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x3B09F10", Offset = "0x3B09F10", VA = "0x3B09F10")]
	public JsonSchemaException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x3B09F20", Offset = "0x3B09F20", VA = "0x3B09F20")]
	internal JsonSchemaException(string message, Exception innerException, string path, int lineNumber, int linePosition)
	{
	}
}
