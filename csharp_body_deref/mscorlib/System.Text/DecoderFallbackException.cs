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
[Token(Token = "0x200029F")]
public sealed class DecoderFallbackException : ArgumentException
{
	[Token(Token = "0x4000B7A")]
	[FieldOffset(Offset = "0x98")]
	private byte[] _bytesUnknown;

	[Token(Token = "0x4000B7B")]
	[FieldOffset(Offset = "0xA0")]
	private int _index;

	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x1BAE560", Offset = "0x1BACB60", VA = "0x181BAE560")]
	public DecoderFallbackException()
	{
	}

	[Token(Token = "0x60015B6")]
	[Address(RVA = "0x1BAE510", Offset = "0x1BACB10", VA = "0x181BAE510")]
	public DecoderFallbackException(string message, byte[] bytesUnknown, int index)
	{
	}

	[Token(Token = "0x60015B7")]
	[Address(RVA = "0x1977AB0", Offset = "0x19760B0", VA = "0x181977AB0")]
	private DecoderFallbackException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
