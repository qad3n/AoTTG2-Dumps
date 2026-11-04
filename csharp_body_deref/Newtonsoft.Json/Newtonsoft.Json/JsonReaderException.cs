// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonReaderException
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
[Token(Token = "0x200002F")]
public class JsonReaderException : JsonException
{
	[Token(Token = "0x1700003C")]
	public int LineNumber
	{
		[Token(Token = "0x6000133")]
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003D")]
	public int LinePosition
	{
		[Token(Token = "0x6000134")]
		[Address(RVA = "0xB5B910", Offset = "0xB59F10", VA = "0x180B5B910")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003E")]
	public string? Path
	{
		[Token(Token = "0x6000135")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x1BCD1B0", Offset = "0x1BCB7B0", VA = "0x181BCD1B0")]
	public JsonReaderException()
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x1BCD200", Offset = "0x1BCB800", VA = "0x181BCD200")]
	public JsonReaderException(string message)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x1BCD260", Offset = "0x1BCB860", VA = "0x181BCD260")]
	public JsonReaderException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x1BCD2D0", Offset = "0x1BCB8D0", VA = "0x181BCD2D0")]
	public JsonReaderException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x1BCE9E0", Offset = "0x1BCCFE0", VA = "0x181BCE9E0")]
	public JsonReaderException(string message, string path, int lineNumber, int linePosition, Exception? innerException)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x1BCE9D0", Offset = "0x1BCCFD0", VA = "0x181BCE9D0")]
	internal static JsonReaderException Create(JsonReader reader, string message)
	{
		return null;
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x1BCE820", Offset = "0x1BCCE20", VA = "0x181BCE820")]
	internal static JsonReaderException Create(JsonReader reader, string message, Exception? ex)
	{
		return null;
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x1BCE6D0", Offset = "0x1BCCCD0", VA = "0x181BCE6D0")]
	internal static JsonReaderException Create(IJsonLineInfo? lineInfo, string path, string message, Exception? ex)
	{
		return null;
	}
}
