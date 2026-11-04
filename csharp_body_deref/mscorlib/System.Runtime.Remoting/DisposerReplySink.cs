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

[Token(Token = "0x2000380")]
internal class DisposerReplySink : IMessageSink
{
	[Token(Token = "0x4000EC0")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _next;

	[Token(Token = "0x4000EC1")]
	[FieldOffset(Offset = "0x18")]
	private IDisposable _disposable;

	[Token(Token = "0x6001D30")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	public DisposerReplySink(IMessageSink next, IDisposable disposable)
	{
	}

	[Token(Token = "0x6001D31")]
	[Address(RVA = "0x19D9EC0", Offset = "0x19D84C0", VA = "0x1819D9EC0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D32")]
	[Address(RVA = "0x19D9E80", Offset = "0x19D8480", VA = "0x1819D9E80", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
