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
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x1C2A390", Offset = "0x1C28990", VA = "0x181C2A390")]
	public JsonWriterException()
	{
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x1C2A3A0", Offset = "0x1C289A0", VA = "0x181C2A3A0")]
	public JsonWriterException(string message)
	{
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x1C2A340", Offset = "0x1C28940", VA = "0x181C2A340")]
	public JsonWriterException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x1C2A320", Offset = "0x1C28920", VA = "0x181C2A320")]
	public JsonWriterException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x1C2A350", Offset = "0x1C28950", VA = "0x181C2A350")]
	public JsonWriterException(string message, string path, Exception? innerException)
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x1C2A240", Offset = "0x1C28840", VA = "0x181C2A240")]
	internal static JsonWriterException Create(JsonWriter writer, string message, Exception? ex)
	{
		return null;
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x1C2A190", Offset = "0x1C28790", VA = "0x181C2A190")]
	internal static JsonWriterException Create(string path, string message, Exception? ex)
	{
		return null;
	}
}
