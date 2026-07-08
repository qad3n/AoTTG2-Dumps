using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003C2")]
internal class ServerObjectReplySink : IMessageSink
{
	[Token(Token = "0x4000FBF")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _replySink;

	[Token(Token = "0x4000FC0")]
	[FieldOffset(Offset = "0x18")]
	private System.Runtime.Remoting.ServerIdentity _identity;

	[Token(Token = "0x6001F11")]
	[Address(RVA = "0x4EAD470", Offset = "0x4EAD470", VA = "0x4EAD470")]
	public ServerObjectReplySink(System.Runtime.Remoting.ServerIdentity identity, IMessageSink replySink)
	{
	}

	[Token(Token = "0x6001F12")]
	[Address(RVA = "0x4EAD4B0", Offset = "0x4EAD4B0", VA = "0x4EAD4B0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F13")]
	[Address(RVA = "0x4EAD580", Offset = "0x4EAD580", VA = "0x4EAD580", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
