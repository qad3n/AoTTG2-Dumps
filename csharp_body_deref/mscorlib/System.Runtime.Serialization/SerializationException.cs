// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SerializationException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003CB")]
public class SerializationException : SystemException
{
	[Token(Token = "0x4000FC7")]
	[FieldOffset(Offset = "0x0")]
	private static string s_nullMessage;

	[Token(Token = "0x6001F27")]
	[Address(RVA = "0x3B93A70", Offset = "0x3B93A70", VA = "0x3B93A70")]
	public SerializationException()
	{
	}

	[Token(Token = "0x6001F28")]
	[Address(RVA = "0x3B93AE0", Offset = "0x3B93AE0", VA = "0x3B93AE0")]
	public SerializationException(string message)
	{
	}

	[Token(Token = "0x6001F29")]
	[Address(RVA = "0x3B93B00", Offset = "0x3B93B00", VA = "0x3B93B00")]
	public SerializationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6001F2A")]
	[Address(RVA = "0x3B93B20", Offset = "0x3B93B20", VA = "0x3B93B20")]
	protected SerializationException(SerializationInfo info, StreamingContext context)
	{
	}
}
