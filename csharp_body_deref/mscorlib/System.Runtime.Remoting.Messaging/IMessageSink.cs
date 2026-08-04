// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.IMessageSink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003AF")]
[ComVisible(true)]
public interface IMessageSink
{
	[Token(Token = "0x6001E6F")]
	IMessage SyncProcessMessage(IMessage msg);

	[Token(Token = "0x6001E70")]
	IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink);
}
