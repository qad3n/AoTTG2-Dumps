// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003C8")]
internal class ServerContextTerminatorSink : IMessageSink
{
	[Token(Token = "0x6001F50")]
	[Address(RVA = "0x539A450", Offset = "0x5399450", VA = "0x539A450", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F51")]
	[Address(RVA = "0x539A570", Offset = "0x5399570", VA = "0x539A570", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001F52")]
	[Address(RVA = "0x5383360", Offset = "0x5382360", VA = "0x5383360")]
	public ServerContextTerminatorSink()
	{
	}
}
