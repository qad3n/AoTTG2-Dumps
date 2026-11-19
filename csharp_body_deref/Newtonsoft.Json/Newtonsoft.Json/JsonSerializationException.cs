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
		[Address(RVA = "0x5563010", Offset = "0x5562010", VA = "0x5563010")]
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
		[Address(RVA = "0x5563020", Offset = "0x5562020", VA = "0x5563020")]
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
		[Address(RVA = "0x5563030", Offset = "0x5562030", VA = "0x5563030")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x5563040", Offset = "0x5562040", VA = "0x5563040")]
	public JsonSerializationException()
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x55630B0", Offset = "0x55620B0", VA = "0x55630B0")]
	public JsonSerializationException(string message)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x5563110", Offset = "0x5562110", VA = "0x5563110")]
	public JsonSerializationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x5563170", Offset = "0x5562170", VA = "0x5563170")]
	public JsonSerializationException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x55631E0", Offset = "0x55621E0", VA = "0x55631E0")]
	public JsonSerializationException(string message, string path, int lineNumber, int linePosition, Exception? innerException)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x555A0A0", Offset = "0x55590A0", VA = "0x555A0A0")]
	internal static JsonSerializationException Create(JsonReader reader, string message)
	{
		return null;
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x5563280", Offset = "0x5562280", VA = "0x5563280")]
	internal static JsonSerializationException Create(JsonReader reader, string message, Exception? ex)
	{
		return null;
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x5563300", Offset = "0x5562300", VA = "0x5563300")]
	internal static JsonSerializationException Create(IJsonLineInfo? lineInfo, string path, string message, Exception? ex)
	{
		return null;
	}
}
