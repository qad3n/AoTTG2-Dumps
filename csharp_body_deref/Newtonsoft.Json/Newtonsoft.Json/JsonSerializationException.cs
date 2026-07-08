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
		[Address(RVA = "0x3A6C890", Offset = "0x3A6C890", VA = "0x3A6C890")]
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
		[Address(RVA = "0x3A6C8A0", Offset = "0x3A6C8A0", VA = "0x3A6C8A0")]
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
		[Address(RVA = "0x3A6C8B0", Offset = "0x3A6C8B0", VA = "0x3A6C8B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x3A6C8C0", Offset = "0x3A6C8C0", VA = "0x3A6C8C0")]
	public JsonSerializationException()
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x3A6C930", Offset = "0x3A6C930", VA = "0x3A6C930")]
	public JsonSerializationException(string message)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x3A6C990", Offset = "0x3A6C990", VA = "0x3A6C990")]
	public JsonSerializationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x3A6C9F0", Offset = "0x3A6C9F0", VA = "0x3A6C9F0")]
	public JsonSerializationException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x3A6CA60", Offset = "0x3A6CA60", VA = "0x3A6CA60")]
	public JsonSerializationException(string message, string path, int lineNumber, int linePosition, Exception? innerException)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x3A63460", Offset = "0x3A63460", VA = "0x3A63460")]
	internal static JsonSerializationException Create(JsonReader reader, string message)
	{
		return null;
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x3A6CB00", Offset = "0x3A6CB00", VA = "0x3A6CB00")]
	internal static JsonSerializationException Create(JsonReader reader, string message, Exception? ex)
	{
		return null;
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x3A6CB80", Offset = "0x3A6CB80", VA = "0x3A6CB80")]
	internal static JsonSerializationException Create(IJsonLineInfo? lineInfo, string path, string message, Exception? ex)
	{
		return null;
	}
}
