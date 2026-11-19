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

[Token(Token = "0x20003AB")]
internal class ClientContextTerminatorSink : IMessageSink
{
	[Token(Token = "0x4000ED0")]
	[FieldOffset(Offset = "0x10")]
	private Context _context;

	[Token(Token = "0x6001E7F")]
	[Address(RVA = "0x5383370", Offset = "0x5382370", VA = "0x5383370")]
	public ClientContextTerminatorSink(Context ctx)
	{
	}

	[Token(Token = "0x6001E80")]
	[Address(RVA = "0x5391D60", Offset = "0x5390D60", VA = "0x5391D60", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E81")]
	[Address(RVA = "0x5391FD0", Offset = "0x5390FD0", VA = "0x5391FD0", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
