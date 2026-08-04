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
		[Address(RVA = "0x3D621E0", Offset = "0x3D621E0", VA = "0x3D621E0")]
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
		[Address(RVA = "0x3D621F0", Offset = "0x3D621F0", VA = "0x3D621F0")]
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
		[Address(RVA = "0x3D62200", Offset = "0x3D62200", VA = "0x3D62200")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x3D62210", Offset = "0x3D62210", VA = "0x3D62210")]
	public JsonSerializationException()
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x3D62280", Offset = "0x3D62280", VA = "0x3D62280")]
	public JsonSerializationException(string message)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x3D622E0", Offset = "0x3D622E0", VA = "0x3D622E0")]
	public JsonSerializationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x3D62340", Offset = "0x3D62340", VA = "0x3D62340")]
	public JsonSerializationException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x3D623B0", Offset = "0x3D623B0", VA = "0x3D623B0")]
	public JsonSerializationException(string message, string path, int lineNumber, int linePosition, Exception? innerException)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x3D58DB0", Offset = "0x3D58DB0", VA = "0x3D58DB0")]
	internal static JsonSerializationException Create(JsonReader reader, string message)
	{
		return null;
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x3D62450", Offset = "0x3D62450", VA = "0x3D62450")]
	internal static JsonSerializationException Create(JsonReader reader, string message, Exception? ex)
	{
		return null;
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x3D624D0", Offset = "0x3D624D0", VA = "0x3D624D0")]
	internal static JsonSerializationException Create(IJsonLineInfo? lineInfo, string path, string message, Exception? ex)
	{
		return null;
	}
}
