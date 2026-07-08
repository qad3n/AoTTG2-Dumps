using System.Runtime.Remoting.Contexts;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003A4")]
internal class ClientContextReplySink : IMessageSink
{
	[Token(Token = "0x4000F67")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _replySink;

	[Token(Token = "0x4000F68")]
	[FieldOffset(Offset = "0x18")]
	private Context _context;

	[Token(Token = "0x6001E3D")]
	[Address(RVA = "0x4EA4AC0", Offset = "0x4EA4AC0", VA = "0x4EA4AC0")]
	public ClientContextReplySink(Context ctx, IMessageSink replySink)
	{
	}

	[Token(Token = "0x6001E3E")]
	[Address(RVA = "0x4EA4B00", Offset = "0x4EA4B00", VA = "0x4EA4B00", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E3F")]
	[Address(RVA = "0x4EA4C40", Offset = "0x4EA4C40", VA = "0x4EA4C40", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
