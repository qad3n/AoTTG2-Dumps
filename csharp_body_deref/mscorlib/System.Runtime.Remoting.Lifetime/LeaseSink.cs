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

[Token(Token = "0x200036C")]
internal class LeaseSink : IMessageSink
{
	[Token(Token = "0x4000E52")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _nextSink;

	[Token(Token = "0x6001D71")]
	[Address(RVA = "0x5380CC0", Offset = "0x537FCC0", VA = "0x5380CC0")]
	public LeaseSink(IMessageSink nextSink)
	{
	}

	[Token(Token = "0x6001D72")]
	[Address(RVA = "0x5380CF0", Offset = "0x537FCF0", VA = "0x5380CF0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D73")]
	[Address(RVA = "0x5381050", Offset = "0x5380050", VA = "0x5381050", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001D74")]
	[Address(RVA = "0x5380DA0", Offset = "0x537FDA0", VA = "0x5380DA0")]
	private void RenewLease(IMessage msg)
	{
	}
}
