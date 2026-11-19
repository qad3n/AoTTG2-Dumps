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

[Token(Token = "0x20003EF")]
public sealed class SafeSerializationEventArgs : EventArgs
{
	[Token(Token = "0x4000F78")]
	[FieldOffset(Offset = "0x10")]
	private StreamingContext m_streamingContext;

	[Token(Token = "0x4000F79")]
	[FieldOffset(Offset = "0x20")]
	private List<object> m_serializedStates;

	[Token(Token = "0x1700043A")]
	internal IList<object> SerializedStates
	{
		[Token(Token = "0x600202A")]
		[Address(RVA = "0x53A5680", Offset = "0x53A4680", VA = "0x53A5680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002029")]
	[Address(RVA = "0x53A55C0", Offset = "0x53A45C0", VA = "0x53A55C0")]
	internal SafeSerializationEventArgs(StreamingContext streamingContext)
	{
	}
}
