// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderFallbackException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000277")]
public sealed class DecoderFallbackException : ArgumentException
{
	[Token(Token = "0x4000AD8")]
	[FieldOffset(Offset = "0x98")]
	private byte[] _bytesUnknown;

	[Token(Token = "0x4000AD9")]
	[FieldOffset(Offset = "0xA0")]
	private int _index;

	[Token(Token = "0x600158C")]
	[Address(RVA = "0x5552FD0", Offset = "0x5551FD0", VA = "0x5552FD0")]
	public DecoderFallbackException()
	{
	}

	[Token(Token = "0x600158D")]
	[Address(RVA = "0x5552F90", Offset = "0x5551F90", VA = "0x5552F90")]
	public DecoderFallbackException(string message, byte[] bytesUnknown, int index)
	{
	}

	[Token(Token = "0x600158E")]
	[Address(RVA = "0x5553010", Offset = "0x5552010", VA = "0x5553010")]
	private DecoderFallbackException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
