// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003C1")]
internal class ServerObjectTerminatorSink : IMessageSink
{
	[Token(Token = "0x4000FBE")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _nextSink;

	[Token(Token = "0x6001F0E")]
	[Address(RVA = "0x3B7B150", Offset = "0x3B7B150", VA = "0x3B7B150")]
	public ServerObjectTerminatorSink(IMessageSink nextSink)
	{
	}

	[Token(Token = "0x6001F0F")]
	[Address(RVA = "0x3B92C20", Offset = "0x3B92C20", VA = "0x3B92C20", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F10")]
	[Address(RVA = "0x3B92D90", Offset = "0x3B92D90", VA = "0x3B92D90", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
