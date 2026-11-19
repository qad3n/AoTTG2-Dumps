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
		[Address(RVA = "0x55A2D10", Offset = "0x55A1D10", VA = "0x55A2D10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x55A2D20", Offset = "0x55A1D20", VA = "0x55A2D20")]
	public JsonWriterException()
	{
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x55A2D30", Offset = "0x55A1D30", VA = "0x55A2D30")]
	public JsonWriterException(string message)
	{
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x55A2D40", Offset = "0x55A1D40", VA = "0x55A2D40")]
	public JsonWriterException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x55A2D50", Offset = "0x55A1D50", VA = "0x55A2D50")]
	public JsonWriterException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x55A2D60", Offset = "0x55A1D60", VA = "0x55A2D60")]
	public JsonWriterException(string message, string path, Exception? innerException)
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x55A1FE0", Offset = "0x55A0FE0", VA = "0x55A1FE0")]
	internal static JsonWriterException Create(JsonWriter writer, string message, Exception? ex)
	{
		return null;
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x55A2DA0", Offset = "0x55A1DA0", VA = "0x55A2DA0")]
	internal static JsonWriterException Create(string path, string message, Exception? ex)
	{
		return null;
	}
}
