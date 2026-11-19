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

[Token(Token = "0x2000359")]
internal class DisposerReplySink : IMessageSink
{
	[Token(Token = "0x4000E20")]
	[FieldOffset(Offset = "0x10")]
	private IMessageSink _next;

	[Token(Token = "0x4000E21")]
	[FieldOffset(Offset = "0x18")]
	private IDisposable _disposable;

	[Token(Token = "0x6001D06")]
	[Address(RVA = "0x5378810", Offset = "0x5377810", VA = "0x5378810")]
	public DisposerReplySink(IMessageSink next, IDisposable disposable)
	{
	}

	[Token(Token = "0x6001D07")]
	[Address(RVA = "0x5378850", Offset = "0x5377850", VA = "0x5378850", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D08")]
	[Address(RVA = "0x5378980", Offset = "0x5377980", VA = "0x5378980", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
