using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Channels;

[Token(Token = "0x200037D")]
internal class AsyncRequest
{
	[Token(Token = "0x4000F14")]
	[FieldOffset(Offset = "0x10")]
	internal IMessageSink ReplySink;

	[Token(Token = "0x4000F15")]
	[FieldOffset(Offset = "0x18")]
	internal IMessage MsgRequest;

	[Token(Token = "0x6001DA2")]
	[Address(RVA = "0x4E9C530", Offset = "0x4E9C530", VA = "0x4E9C530")]
	public AsyncRequest(IMessage msgRequest, IMessageSink replySink)
	{
	}
}
