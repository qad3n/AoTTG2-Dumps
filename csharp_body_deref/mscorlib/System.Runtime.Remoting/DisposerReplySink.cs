// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.DisposerReplySink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000351")]
internal class DisposerReplySink : IMessageSink
{
	[Token(Token = "0x4000EB3")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _next;

	[Token(Token = "0x4000EB4")]
	[FieldOffset(Offset = "0x18")]
	private IDisposable _disposable;

	[Token(Token = "0x6001CC1")]
	[Address(RVA = "0x3B6FE80", Offset = "0x3B6FE80", VA = "0x3B6FE80")]
	public DisposerReplySink(IMessageSink next, IDisposable disposable)
	{
	}

	[Token(Token = "0x6001CC2")]
	[Address(RVA = "0x3B6FEC0", Offset = "0x3B6FEC0", VA = "0x3B6FEC0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001CC3")]
	[Address(RVA = "0x3B6FFF0", Offset = "0x3B6FFF0", VA = "0x3B6FFF0", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
