using System;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Serializable]
[Token(Token = "0x2000082")]
public class JsonWriterException : JsonException
{
	[Token(Token = "0x170000AB")]
	public string? Path
	{
		[Token(Token = "0x60004C5")]
		[Address(RVA = "0x3AB3C70", Offset = "0x3AB3C70", VA = "0x3AB3C70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x3AB3C80", Offset = "0x3AB3C80", VA = "0x3AB3C80")]
	public JsonWriterException()
	{
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x3AB3C90", Offset = "0x3AB3C90", VA = "0x3AB3C90")]
	public JsonWriterException(string message)
	{
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x3AB3CA0", Offset = "0x3AB3CA0", VA = "0x3AB3CA0")]
	public JsonWriterException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x3AB3CB0", Offset = "0x3AB3CB0", VA = "0x3AB3CB0")]
	public JsonWriterException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x3AB3CC0", Offset = "0x3AB3CC0", VA = "0x3AB3CC0")]
	public JsonWriterException(string message, string path, Exception? innerException)
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x3AB2B70", Offset = "0x3AB2B70", VA = "0x3AB2B70")]
	internal static JsonWriterException Create(JsonWriter writer, string message, Exception? ex)
	{
		return null;
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x3AB3D00", Offset = "0x3AB3D00", VA = "0x3AB3D00")]
	internal static JsonWriterException Create(string path, string message, Exception? ex)
	{
		return null;
	}
}
