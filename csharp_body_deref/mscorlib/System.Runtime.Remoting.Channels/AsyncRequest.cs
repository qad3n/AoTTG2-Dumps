// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Channels.AsyncRequest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Channels;

[Token(Token = "0x20003AC")]
internal class AsyncRequest
{
	[Token(Token = "0x4000F21")]
	[FieldOffset(Offset = "0x10")]
	internal IMessageSink ReplySink;

	[Token(Token = "0x4000F22")]
	[FieldOffset(Offset = "0x18")]
	internal IMessage MsgRequest;

	[Token(Token = "0x6001E11")]
	[Address(RVA = "0x19ED830", Offset = "0x19EBE30", VA = "0x1819ED830")]
	public AsyncRequest(IMessage msgRequest, IMessageSink replySink)
	{
	}
}
