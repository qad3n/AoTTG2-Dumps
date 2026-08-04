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
	[Address(RVA = "0x3B8A5E0", Offset = "0x3B8A5E0", VA = "0x3B8A5E0")]
	public ClientContextReplySink(Context ctx, IMessageSink replySink)
	{
	}

	[Token(Token = "0x6001E3E")]
	[Address(RVA = "0x3B8A620", Offset = "0x3B8A620", VA = "0x3B8A620", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E3F")]
	[Address(RVA = "0x3B8A760", Offset = "0x3B8A760", VA = "0x3B8A760", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
