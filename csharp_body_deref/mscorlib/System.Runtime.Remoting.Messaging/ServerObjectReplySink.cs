// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ServerObjectReplySink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003C2")]
internal class ServerObjectReplySink : IMessageSink
{
	[Token(Token = "0x4000FBF")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _replySink;

	[Token(Token = "0x4000FC0")]
	[FieldOffset(Offset = "0x18")]
	private System.Runtime.Remoting.ServerIdentity _identity;

	[Token(Token = "0x6001F11")]
	[Address(RVA = "0x3B92F90", Offset = "0x3B92F90", VA = "0x3B92F90")]
	public ServerObjectReplySink(System.Runtime.Remoting.ServerIdentity identity, IMessageSink replySink)
	{
	}

	[Token(Token = "0x6001F12")]
	[Address(RVA = "0x3B92FD0", Offset = "0x3B92FD0", VA = "0x3B92FD0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F13")]
	[Address(RVA = "0x3B930A0", Offset = "0x3B930A0", VA = "0x3B930A0", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
