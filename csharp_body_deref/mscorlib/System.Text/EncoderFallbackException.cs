// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderFallbackException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x20002AA")]
public sealed class EncoderFallbackException : ArgumentException
{
	[Token(Token = "0x4000B91")]
	[FieldOffset(Offset = "0x98")]
	private char _charUnknown;

	[Token(Token = "0x4000B92")]
	[FieldOffset(Offset = "0x9A")]
	private char _charUnknownHigh;

	[Token(Token = "0x4000B93")]
	[FieldOffset(Offset = "0x9C")]
	private char _charUnknownLow;

	[Token(Token = "0x4000B94")]
	[FieldOffset(Offset = "0xA0")]
	private int _index;

	[Token(Token = "0x6001607")]
	[Address(RVA = "0x1977840", Offset = "0x1975E40", VA = "0x181977840")]
	public EncoderFallbackException()
	{
	}

	[Token(Token = "0x6001608")]
	[Address(RVA = "0x1977A70", Offset = "0x1976070", VA = "0x181977A70")]
	internal EncoderFallbackException(string message, char charUnknown, int index)
	{
	}

	[Token(Token = "0x6001609")]
	[Address(RVA = "0x1977890", Offset = "0x1975E90", VA = "0x181977890")]
	internal EncoderFallbackException(string message, char charUnknownHigh, char charUnknownLow, int index)
	{
	}

	[Token(Token = "0x600160A")]
	[Address(RVA = "0x1977AB0", Offset = "0x19760B0", VA = "0x181977AB0")]
	private EncoderFallbackException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
