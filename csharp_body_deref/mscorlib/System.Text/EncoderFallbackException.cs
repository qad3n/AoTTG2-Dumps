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
	[Address(RVA = "0x4E19130", Offset = "0x4E19130", VA = "0x4E19130")]
	public EncoderFallbackException()
	{
	}

	[Token(Token = "0x600159C")]
	[Address(RVA = "0x4E18D00", Offset = "0x4E18D00", VA = "0x4E18D00")]
	internal EncoderFallbackException(string message, char charUnknown, int index)
	{
	}

	[Token(Token = "0x600159D")]
	[Address(RVA = "0x4E18F50", Offset = "0x4E18F50", VA = "0x4E18F50")]
	internal EncoderFallbackException(string message, char charUnknownHigh, char charUnknownLow, int index)
	{
	}

	[Token(Token = "0x600159E")]
	[Address(RVA = "0x4E19170", Offset = "0x4E19170", VA = "0x4E19170")]
	private EncoderFallbackException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
