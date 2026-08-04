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
[Token(Token = "0x200027A")]
public sealed class EncoderFallbackException : ArgumentException
{
	[Token(Token = "0x4000B48")]
	[FieldOffset(Offset = "0x98")]
	private char _charUnknown;

	[Token(Token = "0x4000B49")]
	[FieldOffset(Offset = "0x9A")]
	private char _charUnknownHigh;

	[Token(Token = "0x4000B4A")]
	[FieldOffset(Offset = "0x9C")]
	private char _charUnknownLow;

	[Token(Token = "0x4000B4B")]
	[FieldOffset(Offset = "0xA0")]
	private int _index;

	[Token(Token = "0x600159B")]
	[Address(RVA = "0x3AFEC50", Offset = "0x3AFEC50", VA = "0x3AFEC50")]
	public EncoderFallbackException()
	{
	}

	[Token(Token = "0x600159C")]
	[Address(RVA = "0x3AFE820", Offset = "0x3AFE820", VA = "0x3AFE820")]
	internal EncoderFallbackException(string message, char charUnknown, int index)
	{
	}

	[Token(Token = "0x600159D")]
	[Address(RVA = "0x3AFEA70", Offset = "0x3AFEA70", VA = "0x3AFEA70")]
	internal EncoderFallbackException(string message, char charUnknownHigh, char charUnknownLow, int index)
	{
	}

	[Token(Token = "0x600159E")]
	[Address(RVA = "0x3AFEC90", Offset = "0x3AFEC90", VA = "0x3AFEC90")]
	private EncoderFallbackException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
