// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonWriterException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3DA95C0", Offset = "0x3DA95C0", VA = "0x3DA95C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x3DA95D0", Offset = "0x3DA95D0", VA = "0x3DA95D0")]
	public JsonWriterException()
	{
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x3DA95E0", Offset = "0x3DA95E0", VA = "0x3DA95E0")]
	public JsonWriterException(string message)
	{
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x3DA95F0", Offset = "0x3DA95F0", VA = "0x3DA95F0")]
	public JsonWriterException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x3DA9600", Offset = "0x3DA9600", VA = "0x3DA9600")]
	public JsonWriterException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x3DA9610", Offset = "0x3DA9610", VA = "0x3DA9610")]
	public JsonWriterException(string message, string path, Exception? innerException)
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x3DA84C0", Offset = "0x3DA84C0", VA = "0x3DA84C0")]
	internal static JsonWriterException Create(JsonWriter writer, string message, Exception? ex)
	{
		return null;
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x3DA9650", Offset = "0x3DA9650", VA = "0x3DA9650")]
	internal static JsonWriterException Create(string path, string message, Exception? ex)
	{
		return null;
	}
}
