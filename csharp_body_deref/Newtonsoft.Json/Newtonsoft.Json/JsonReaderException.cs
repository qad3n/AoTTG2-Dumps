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
		[Address(RVA = "0x3A6C390", Offset = "0x3A6C390", VA = "0x3A6C390")]
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
		[Address(RVA = "0x3A6C3A0", Offset = "0x3A6C3A0", VA = "0x3A6C3A0")]
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
		[Address(RVA = "0x3A6C3B0", Offset = "0x3A6C3B0", VA = "0x3A6C3B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x3A6C3C0", Offset = "0x3A6C3C0", VA = "0x3A6C3C0")]
	public JsonReaderException()
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x3A6C430", Offset = "0x3A6C430", VA = "0x3A6C430")]
	public JsonReaderException(string message)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x3A6C490", Offset = "0x3A6C490", VA = "0x3A6C490")]
	public JsonReaderException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x3A6C4F0", Offset = "0x3A6C4F0", VA = "0x3A6C4F0")]
	public JsonReaderException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x3A6C560", Offset = "0x3A6C560", VA = "0x3A6C560")]
	public JsonReaderException(string message, string path, int lineNumber, int linePosition, Exception? innerException)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x3A67040", Offset = "0x3A67040", VA = "0x3A67040")]
	internal static JsonReaderException Create(JsonReader reader, string message)
	{
		return null;
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x3A67630", Offset = "0x3A67630", VA = "0x3A67630")]
	internal static JsonReaderException Create(JsonReader reader, string message, Exception? ex)
	{
		return null;
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x3A6C600", Offset = "0x3A6C600", VA = "0x3A6C600")]
	internal static JsonReaderException Create(IJsonLineInfo? lineInfo, string path, string message, Exception? ex)
	{
		return null;
	}
}
