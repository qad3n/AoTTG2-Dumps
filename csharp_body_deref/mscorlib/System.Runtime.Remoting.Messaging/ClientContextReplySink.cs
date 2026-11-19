// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ClientContextReplySink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Remoting.Contexts;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003AC")]
internal class ClientContextReplySink : IMessageSink
{
	[Token(Token = "0x4000ED1")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _replySink;

	[Token(Token = "0x4000ED2")]
	[FieldOffset(Offset = "0x18")]
	private Context _context;

	[Token(Token = "0x6001E82")]
	[Address(RVA = "0x5392330", Offset = "0x5391330", VA = "0x5392330")]
	public ClientContextReplySink(Context ctx, IMessageSink replySink)
	{
	}

	[Token(Token = "0x6001E83")]
	[Address(RVA = "0x5392370", Offset = "0x5391370", VA = "0x5392370", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E84")]
	[Address(RVA = "0x53924B0", Offset = "0x53914B0", VA = "0x53924B0", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
