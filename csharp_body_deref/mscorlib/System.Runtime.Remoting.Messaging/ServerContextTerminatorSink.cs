// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003C0")]
internal class ServerContextTerminatorSink : IMessageSink
{
	[Token(Token = "0x6001F0B")]
	[Address(RVA = "0x3B92A00", Offset = "0x3B92A00", VA = "0x3B92A00", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F0C")]
	[Address(RVA = "0x3B92B40", Offset = "0x3B92B40", VA = "0x3B92B40", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001F0D")]
	[Address(RVA = "0x3B7AE90", Offset = "0x3B7AE90", VA = "0x3B7AE90")]
	public ServerContextTerminatorSink()
	{
	}
}
