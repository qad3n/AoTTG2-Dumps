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
	[Address(RVA = "0x3D52170", Offset = "0x3D52170", VA = "0x3D52170")]
	public DecoderFallbackException()
	{
	}

	[Token(Token = "0x600154A")]
	[Address(RVA = "0x3D52130", Offset = "0x3D52130", VA = "0x3D52130")]
	public DecoderFallbackException(string message, byte[] bytesUnknown, int index)
	{
	}

	[Token(Token = "0x600154B")]
	[Address(RVA = "0x3D521B0", Offset = "0x3D521B0", VA = "0x3D521B0")]
	private DecoderFallbackException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
