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
		[Address(RVA = "0x4EB8630", Offset = "0x4EB8630", VA = "0x4EB8630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001FE4")]
	[Address(RVA = "0x4EB8570", Offset = "0x4EB8570", VA = "0x4EB8570")]
	internal SafeSerializationEventArgs(StreamingContext streamingContext)
	{
	}
}
