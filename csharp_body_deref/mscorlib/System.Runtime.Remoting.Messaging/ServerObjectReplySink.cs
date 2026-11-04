// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ServerObjectReplySink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003F1")]
internal class ServerObjectReplySink : IMessageSink
{
	[Token(Token = "0x4000FC5")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _replySink;

	[Token(Token = "0x4000FC6")]
	[FieldOffset(Offset = "0x18")]
	private System.Runtime.Remoting.ServerIdentity _identity;

	[Token(Token = "0x6001F80")]
	[Address(RVA = "0x19ED830", Offset = "0x19EBE30", VA = "0x1819ED830")]
	public ServerObjectReplySink(System.Runtime.Remoting.ServerIdentity identity, IMessageSink replySink)
	{
	}

	[Token(Token = "0x6001F81")]
	[Address(RVA = "0x1A086F0", Offset = "0x1A06CF0", VA = "0x181A086F0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F82")]
	[Address(RVA = "0x1A086B0", Offset = "0x1A06CB0", VA = "0x181A086B0", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
