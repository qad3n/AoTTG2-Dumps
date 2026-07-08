using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Lifetime;

[Token(Token = "0x2000364")]
internal class LeaseSink : IMessageSink
{
	[Token(Token = "0x4000EE5")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _nextSink;

	[Token(Token = "0x6001D2C")]
	[Address(RVA = "0x4E92AF0", Offset = "0x4E92AF0", VA = "0x4E92AF0")]
	public LeaseSink(IMessageSink nextSink)
	{
	}

	[Token(Token = "0x6001D2D")]
	[Address(RVA = "0x4E92B20", Offset = "0x4E92B20", VA = "0x4E92B20", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D2E")]
	[Address(RVA = "0x4E92E80", Offset = "0x4E92E80", VA = "0x4E92E80", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001D2F")]
	[Address(RVA = "0x4E92BD0", Offset = "0x4E92BD0", VA = "0x4E92BD0")]
	private void RenewLease(IMessage msg)
	{
	}
}
