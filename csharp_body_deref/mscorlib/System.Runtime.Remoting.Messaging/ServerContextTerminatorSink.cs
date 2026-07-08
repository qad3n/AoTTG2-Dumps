using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003C0")]
internal class ServerContextTerminatorSink : IMessageSink
{
	[Token(Token = "0x6001F0B")]
	[Address(RVA = "0x4EACEE0", Offset = "0x4EACEE0", VA = "0x4EACEE0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F0C")]
	[Address(RVA = "0x4EAD020", Offset = "0x4EAD020", VA = "0x4EAD020", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001F0D")]
	[Address(RVA = "0x4E95370", Offset = "0x4E95370", VA = "0x4E95370")]
	public ServerContextTerminatorSink()
	{
	}
}
