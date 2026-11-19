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
[Token(Token = "0x2000282")]
public sealed class EncoderFallbackException : ArgumentException
{
	[Token(Token = "0x4000AEF")]
	[FieldOffset(Offset = "0x98")]
	private char _charUnknown;

	[Token(Token = "0x4000AF0")]
	[FieldOffset(Offset = "0x9A")]
	private char _charUnknownHigh;

	[Token(Token = "0x4000AF1")]
	[FieldOffset(Offset = "0x9C")]
	private char _charUnknownLow;

	[Token(Token = "0x4000AF2")]
	[FieldOffset(Offset = "0xA0")]
	private int _index;

	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x5309950", Offset = "0x5308950", VA = "0x5309950")]
	public EncoderFallbackException()
	{
	}

	[Token(Token = "0x60015DF")]
	[Address(RVA = "0x5309520", Offset = "0x5308520", VA = "0x5309520")]
	internal EncoderFallbackException(string message, char charUnknown, int index)
	{
	}

	[Token(Token = "0x60015E0")]
	[Address(RVA = "0x5309770", Offset = "0x5308770", VA = "0x5309770")]
	internal EncoderFallbackException(string message, char charUnknownHigh, char charUnknownLow, int index)
	{
	}

	[Token(Token = "0x60015E1")]
	[Address(RVA = "0x5309990", Offset = "0x5308990", VA = "0x5309990")]
	private EncoderFallbackException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
