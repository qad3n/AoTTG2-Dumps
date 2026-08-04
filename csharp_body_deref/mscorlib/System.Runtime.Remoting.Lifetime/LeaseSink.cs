// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Lifetime.LeaseSink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Lifetime;

[Token(Token = "0x2000364")]
internal class LeaseSink : IMessageSink
{
	[Token(Token = "0x4000EE5")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _nextSink;

	[Token(Token = "0x6001D2C")]
	[Address(RVA = "0x3B78610", Offset = "0x3B78610", VA = "0x3B78610")]
	public LeaseSink(IMessageSink nextSink)
	{
	}

	[Token(Token = "0x6001D2D")]
	[Address(RVA = "0x3B78640", Offset = "0x3B78640", VA = "0x3B78640", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D2E")]
	[Address(RVA = "0x3B789A0", Offset = "0x3B789A0", VA = "0x3B789A0", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001D2F")]
	[Address(RVA = "0x3B786F0", Offset = "0x3B786F0", VA = "0x3B786F0")]
	private void RenewLease(IMessage msg)
	{
	}
}
