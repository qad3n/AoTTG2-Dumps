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

[Token(Token = "0x20003A3")]
internal class ClientContextTerminatorSink : IMessageSink
{
	[Token(Token = "0x4000F66")]
	[FieldOffset(Offset = "0x10")]
	private Context _context;

	[Token(Token = "0x6001E3A")]
	[Address(RVA = "0x3B7AEA0", Offset = "0x3B7AEA0", VA = "0x3B7AEA0")]
	public ClientContextTerminatorSink(Context ctx)
	{
	}

	[Token(Token = "0x6001E3B")]
	[Address(RVA = "0x3B8A000", Offset = "0x3B8A000", VA = "0x3B8A000", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E3C")]
	[Address(RVA = "0x3B8A270", Offset = "0x3B8A270", VA = "0x3B8A270", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
