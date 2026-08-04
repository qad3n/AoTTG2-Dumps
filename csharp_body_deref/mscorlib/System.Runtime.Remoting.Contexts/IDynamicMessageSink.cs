// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Contexts.IDynamicMessageSink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Contexts;

[Token(Token = "0x2000375")]
[ComVisible(true)]
public interface IDynamicMessageSink
{
	[Token(Token = "0x6001D79")]
	void ProcessMessageFinish(IMessage replyMsg, bool bCliSide, bool bAsync);

	[Token(Token = "0x6001D7A")]
	void ProcessMessageStart(IMessage reqMsg, bool bCliSide, bool bAsync);
}
