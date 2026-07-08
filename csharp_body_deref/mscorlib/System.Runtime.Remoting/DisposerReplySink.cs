using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000351")]
internal class DisposerReplySink : IMessageSink
{
	[Token(Token = "0x4000EB3")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _next;

	[Token(Token = "0x4000EB4")]
	[FieldOffset(Offset = "0x18")]
	private IDisposable _disposable;

	[Token(Token = "0x6001CC1")]
	[Address(RVA = "0x4E8A360", Offset = "0x4E8A360", VA = "0x4E8A360")]
	public DisposerReplySink(IMessageSink next, IDisposable disposable)
	{
	}

	[Token(Token = "0x6001CC2")]
	[Address(RVA = "0x4E8A3A0", Offset = "0x4E8A3A0", VA = "0x4E8A3A0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001CC3")]
	[Address(RVA = "0x4E8A4D0", Offset = "0x4E8A4D0", VA = "0x4E8A4D0", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
