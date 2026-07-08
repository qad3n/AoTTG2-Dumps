using System;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Serializable]
[Token(Token = "0x2000020")]
public class JsonException : Exception
{
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x3A643D0", Offset = "0x3A643D0", VA = "0x3A643D0")]
	public JsonException()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x3A64440", Offset = "0x3A64440", VA = "0x3A64440")]
	public JsonException(string message)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x3A644A0", Offset = "0x3A644A0", VA = "0x3A644A0")]
	public JsonException(string message, Exception? innerException)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x3A64500", Offset = "0x3A64500", VA = "0x3A64500")]
	public JsonException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x3A64570", Offset = "0x3A64570", VA = "0x3A64570")]
	internal static JsonException Create(IJsonLineInfo lineInfo, string path, string message)
	{
		return null;
	}
}
