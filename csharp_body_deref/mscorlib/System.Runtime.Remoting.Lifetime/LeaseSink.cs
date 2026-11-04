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

[Token(Token = "0x2000393")]
internal class LeaseSink : IMessageSink
{
	[Token(Token = "0x4000EF2")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _nextSink;

	[Token(Token = "0x6001D9B")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public LeaseSink(IMessageSink nextSink)
	{
	}

	[Token(Token = "0x6001D9C")]
	[Address(RVA = "0x19FBF60", Offset = "0x19FA560", VA = "0x1819FBF60", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D9D")]
	[Address(RVA = "0x19FBD20", Offset = "0x19FA320", VA = "0x1819FBD20", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001D9E")]
	[Address(RVA = "0x19FBDA0", Offset = "0x19FA3A0", VA = "0x1819FBDA0")]
	private void RenewLease(IMessage msg)
	{
	}
}
