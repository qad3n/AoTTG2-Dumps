using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003C1")]
internal class ServerObjectTerminatorSink : IMessageSink
{
	[Token(Token = "0x4000FBE")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _nextSink;

	[Token(Token = "0x6001F0E")]
	[Address(RVA = "0x4E95630", Offset = "0x4E95630", VA = "0x4E95630")]
	public ServerObjectTerminatorSink(IMessageSink nextSink)
	{
	}

	[Token(Token = "0x6001F0F")]
	[Address(RVA = "0x4EAD100", Offset = "0x4EAD100", VA = "0x4EAD100", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F10")]
	[Address(RVA = "0x4EAD270", Offset = "0x4EAD270", VA = "0x4EAD270", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
