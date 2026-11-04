// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonSerializationException
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
[Token(Token = "0x2000031")]
public class JsonSerializationException : JsonException
{
	[Token(Token = "0x1700003F")]
	public int LineNumber
	{
		[Token(Token = "0x600013F")]
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000040")]
	public int LinePosition
	{
		[Token(Token = "0x6000140")]
		[Address(RVA = "0xB5B910", Offset = "0xB59F10", VA = "0x180B5B910")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000041")]
	public string? Path
	{
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x1BCD1B0", Offset = "0x1BCB7B0", VA = "0x181BCD1B0")]
	public JsonSerializationException()
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x1BCD200", Offset = "0x1BCB800", VA = "0x181BCD200")]
	public JsonSerializationException(string message)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x1BCD260", Offset = "0x1BCB860", VA = "0x181BCD260")]
	public JsonSerializationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x1BCD2D0", Offset = "0x1BCB8D0", VA = "0x181BCD2D0")]
	public JsonSerializationException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x1BCE9E0", Offset = "0x1BCCFE0", VA = "0x181BCE9E0")]
	public JsonSerializationException(string message, string path, int lineNumber, int linePosition, Exception? innerException)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x1BD40C0", Offset = "0x1BD26C0", VA = "0x181BD40C0")]
	internal static JsonSerializationException Create(JsonReader reader, string message)
	{
		return null;
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x1BD4270", Offset = "0x1BD2870", VA = "0x181BD4270")]
	internal static JsonSerializationException Create(JsonReader reader, string message, Exception? ex)
	{
		return null;
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x1BD4420", Offset = "0x1BD2A20", VA = "0x181BD4420")]
	internal static JsonSerializationException Create(IJsonLineInfo? lineInfo, string path, string message, Exception? ex)
	{
		return null;
	}
}
