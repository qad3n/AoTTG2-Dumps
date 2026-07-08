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
