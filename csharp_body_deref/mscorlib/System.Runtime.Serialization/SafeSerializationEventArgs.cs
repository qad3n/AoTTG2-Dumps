// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SafeSerializationEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x2000416")]
public sealed class SafeSerializationEventArgs : EventArgs
{
	[Token(Token = "0x4001018")]
	[FieldOffset(Offset = "0x10")]
	private StreamingContext m_streamingContext;

	[Token(Token = "0x4001019")]
	[FieldOffset(Offset = "0x20")]
	private List<object> m_serializedStates;

	[Token(Token = "0x1700043B")]
	internal IList<object> SerializedStates
	{
		[Token(Token = "0x6002054")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002053")]
	[Address(RVA = "0x1A1D6C0", Offset = "0x1A1BCC0", VA = "0x181A1D6C0")]
	internal SafeSerializationEventArgs(StreamingContext streamingContext)
	{
	}
}
