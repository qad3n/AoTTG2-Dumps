// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ServerObjectReplySink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003CA")]
internal class ServerObjectReplySink : IMessageSink
{
	[Token(Token = "0x4000F25")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _replySink;

	[Token(Token = "0x4000F26")]
	[FieldOffset(Offset = "0x18")]
	private System.Runtime.Remoting.ServerIdentity _identity;

	[Token(Token = "0x6001F56")]
	[Address(RVA = "0x539A990", Offset = "0x5399990", VA = "0x539A990")]
	public ServerObjectReplySink(System.Runtime.Remoting.ServerIdentity identity, IMessageSink replySink)
	{
	}

	[Token(Token = "0x6001F57")]
	[Address(RVA = "0x539A9D0", Offset = "0x53999D0", VA = "0x539A9D0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F58")]
	[Address(RVA = "0x539AAA0", Offset = "0x5399AA0", VA = "0x539AAA0", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
