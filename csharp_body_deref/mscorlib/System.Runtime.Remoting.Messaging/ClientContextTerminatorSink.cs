// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Remoting.Contexts;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003D2")]
internal class ClientContextTerminatorSink : IMessageSink
{
	[Token(Token = "0x4000F70")]
	[FieldOffset(Offset = "0x10")]
	private Context _context;

	[Token(Token = "0x6001EA9")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public ClientContextTerminatorSink(Context ctx)
	{
	}

	[Token(Token = "0x6001EAA")]
	[Address(RVA = "0x19F4550", Offset = "0x19F2B50", VA = "0x1819F4550", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001EAB")]
	[Address(RVA = "0x19F4270", Offset = "0x19F2870", VA = "0x1819F4270", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
