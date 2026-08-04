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
		[Address(RVA = "0x3D61CE0", Offset = "0x3D61CE0", VA = "0x3D61CE0")]
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
		[Address(RVA = "0x3D61CF0", Offset = "0x3D61CF0", VA = "0x3D61CF0")]
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
		[Address(RVA = "0x3D61D00", Offset = "0x3D61D00", VA = "0x3D61D00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x3D61D10", Offset = "0x3D61D10", VA = "0x3D61D10")]
	public JsonReaderException()
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x3D61D80", Offset = "0x3D61D80", VA = "0x3D61D80")]
	public JsonReaderException(string message)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x3D61DE0", Offset = "0x3D61DE0", VA = "0x3D61DE0")]
	public JsonReaderException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x3D61E40", Offset = "0x3D61E40", VA = "0x3D61E40")]
	public JsonReaderException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x3D61EB0", Offset = "0x3D61EB0", VA = "0x3D61EB0")]
	public JsonReaderException(string message, string path, int lineNumber, int linePosition, Exception? innerException)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x3D5C990", Offset = "0x3D5C990", VA = "0x3D5C990")]
	internal static JsonReaderException Create(JsonReader reader, string message)
	{
		return null;
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x3D5CF80", Offset = "0x3D5CF80", VA = "0x3D5CF80")]
	internal static JsonReaderException Create(JsonReader reader, string message, Exception? ex)
	{
		return null;
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x3D61F50", Offset = "0x3D61F50", VA = "0x3D61F50")]
	internal static JsonReaderException Create(IJsonLineInfo? lineInfo, string path, string message, Exception? ex)
	{
		return null;
	}
}
