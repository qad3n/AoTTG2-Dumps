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
[Token(Token = "0x20003D3")]
public class SerializationException : SystemException
{
	[Token(Token = "0x4000F2D")]
	[FieldOffset(Offset = "0x0")]
	private static string s_nullMessage;

	[Token(Token = "0x6001F6C")]
	[Address(RVA = "0x539B430", Offset = "0x539A430", VA = "0x539B430")]
	public SerializationException()
	{
	}

	[Token(Token = "0x6001F6D")]
	[Address(RVA = "0x539B4A0", Offset = "0x539A4A0", VA = "0x539B4A0")]
	public SerializationException(string message)
	{
	}

	[Token(Token = "0x6001F6E")]
	[Address(RVA = "0x539B4C0", Offset = "0x539A4C0", VA = "0x539B4C0")]
	public SerializationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6001F6F")]
	[Address(RVA = "0x539B4E0", Offset = "0x539A4E0", VA = "0x539B4E0")]
	protected SerializationException(SerializationInfo info, StreamingContext context)
	{
	}
}
