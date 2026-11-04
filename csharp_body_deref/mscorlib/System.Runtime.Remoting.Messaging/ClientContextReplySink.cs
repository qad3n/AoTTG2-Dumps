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

[Token(Token = "0x20003D3")]
internal class ClientContextReplySink : IMessageSink
{
	[Token(Token = "0x4000F71")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _replySink;

	[Token(Token = "0x4000F72")]
	[FieldOffset(Offset = "0x18")]
	private Context _context;

	[Token(Token = "0x6001EAC")]
	[Address(RVA = "0x19ED830", Offset = "0x19EBE30", VA = "0x1819ED830")]
	public ClientContextReplySink(Context ctx, IMessageSink replySink)
	{
	}

	[Token(Token = "0x6001EAD")]
	[Address(RVA = "0x19F4180", Offset = "0x19F2780", VA = "0x1819F4180", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001EAE")]
	[Address(RVA = "0x19F4140", Offset = "0x19F2740", VA = "0x1819F4140", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
