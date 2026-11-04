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
	[Address(RVA = "0x1BCD1B0", Offset = "0x1BCB7B0", VA = "0x181BCD1B0")]
	public JsonException()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x1BCD200", Offset = "0x1BCB800", VA = "0x181BCD200")]
	public JsonException(string message)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x1BCD260", Offset = "0x1BCB860", VA = "0x181BCD260")]
	public JsonException(string message, Exception? innerException)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x1BCD2D0", Offset = "0x1BCB8D0", VA = "0x181BCD2D0")]
	public JsonException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x1BCD0E0", Offset = "0x1BCB6E0", VA = "0x181BCD0E0")]
	internal static JsonException Create(IJsonLineInfo lineInfo, string path, string message)
	{
		return null;
	}
}
