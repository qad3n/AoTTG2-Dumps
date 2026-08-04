// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Serializable]
[Token(Token = "0x2000020")]
public class JsonException : Exception
{
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x3D59D20", Offset = "0x3D59D20", VA = "0x3D59D20")]
	public JsonException()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x3D59D90", Offset = "0x3D59D90", VA = "0x3D59D90")]
	public JsonException(string message)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x3D59DF0", Offset = "0x3D59DF0", VA = "0x3D59DF0")]
	public JsonException(string message, Exception? innerException)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x3D59E50", Offset = "0x3D59E50", VA = "0x3D59E50")]
	public JsonException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x3D59EC0", Offset = "0x3D59EC0", VA = "0x3D59EC0")]
	internal static JsonException Create(IJsonLineInfo lineInfo, string path, string message)
	{
		return null;
	}
}
