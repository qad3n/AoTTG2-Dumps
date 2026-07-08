using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x200026F")]
public sealed class DecoderFallbackException : ArgumentException
{
	[Token(Token = "0x4000B31")]
	[FieldOffset(Offset = "0x98")]
	private byte[] _bytesUnknown;

	[Token(Token = "0x4000B32")]
	[FieldOffset(Offset = "0xA0")]
	private int _index;

	[Token(Token = "0x6001549")]
	[Address(RVA = "0x506C650", Offset = "0x506C650", VA = "0x506C650")]
	public DecoderFallbackException()
	{
	}

	[Token(Token = "0x600154A")]
	[Address(RVA = "0x506C610", Offset = "0x506C610", VA = "0x506C610")]
	public DecoderFallbackException(string message, byte[] bytesUnknown, int index)
	{
	}

	[Token(Token = "0x600154B")]
	[Address(RVA = "0x506C690", Offset = "0x506C690", VA = "0x506C690")]
	private DecoderFallbackException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
