// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003C9")]
internal class ServerObjectTerminatorSink : IMessageSink
{
	[Token(Token = "0x4000F24")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _nextSink;

	[Token(Token = "0x6001F53")]
	[Address(RVA = "0x5383630", Offset = "0x5382630", VA = "0x5383630")]
	public ServerObjectTerminatorSink(IMessageSink nextSink)
	{
	}

	[Token(Token = "0x6001F54")]
	[Address(RVA = "0x539A630", Offset = "0x5399630", VA = "0x539A630", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F55")]
	[Address(RVA = "0x539A7A0", Offset = "0x53997A0", VA = "0x539A7A0", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
