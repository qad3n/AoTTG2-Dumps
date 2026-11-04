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
[Token(Token = "0x20003FA")]
public class SerializationException : SystemException
{
	[Token(Token = "0x4000FCD")]
	[FieldOffset(Offset = "0x0")]
	private static string s_nullMessage;

	[Token(Token = "0x6001F96")]
	[Address(RVA = "0x1A08070", Offset = "0x1A06670", VA = "0x181A08070")]
	public SerializationException()
	{
	}

	[Token(Token = "0x6001F97")]
	[Address(RVA = "0x1A08050", Offset = "0x1A06650", VA = "0x181A08050")]
	public SerializationException(string message)
	{
	}

	[Token(Token = "0x6001F98")]
	[Address(RVA = "0x1A080E0", Offset = "0x1A066E0", VA = "0x181A080E0")]
	public SerializationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6001F99")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected SerializationException(SerializationInfo info, StreamingContext context)
	{
	}
}
