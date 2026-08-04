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

[Token(Token = "0x20003E7")]
public sealed class SafeSerializationEventArgs : EventArgs
{
	[Token(Token = "0x4001012")]
	[FieldOffset(Offset = "0x10")]
	private StreamingContext m_streamingContext;

	[Token(Token = "0x4001013")]
	[FieldOffset(Offset = "0x20")]
	private List<object> m_serializedStates;

	[Token(Token = "0x17000439")]
	internal IList<object> SerializedStates
	{
		[Token(Token = "0x6001FE5")]
		[Address(RVA = "0x3B9E150", Offset = "0x3B9E150", VA = "0x3B9E150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001FE4")]
	[Address(RVA = "0x3B9E090", Offset = "0x3B9E090", VA = "0x3B9E090")]
	internal SafeSerializationEventArgs(StreamingContext streamingContext)
	{
	}
}
