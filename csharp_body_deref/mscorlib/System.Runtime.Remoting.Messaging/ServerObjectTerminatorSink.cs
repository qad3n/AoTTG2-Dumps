// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003F0")]
internal class ServerObjectTerminatorSink : IMessageSink
{
	[Token(Token = "0x4000FC4")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _nextSink;

	[Token(Token = "0x6001F7D")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public ServerObjectTerminatorSink(IMessageSink nextSink)
	{
	}

	[Token(Token = "0x6001F7E")]
	[Address(RVA = "0x1A08900", Offset = "0x1A06F00", VA = "0x181A08900", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F7F")]
	[Address(RVA = "0x1A08770", Offset = "0x1A06D70", VA = "0x181A08770", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
