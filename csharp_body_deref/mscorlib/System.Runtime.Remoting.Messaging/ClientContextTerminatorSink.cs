using System.Runtime.Remoting.Contexts;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003A3")]
internal class ClientContextTerminatorSink : IMessageSink
{
	[Token(Token = "0x4000F66")]
	[FieldOffset(Offset = "0x10")]
	private Context _context;

	[Token(Token = "0x6001E3A")]
	[Address(RVA = "0x4E95380", Offset = "0x4E95380", VA = "0x4E95380")]
	public ClientContextTerminatorSink(Context ctx)
	{
	}

	[Token(Token = "0x6001E3B")]
	[Address(RVA = "0x4EA44E0", Offset = "0x4EA44E0", VA = "0x4EA44E0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E3C")]
	[Address(RVA = "0x4EA4750", Offset = "0x4EA4750", VA = "0x4EA4750", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
