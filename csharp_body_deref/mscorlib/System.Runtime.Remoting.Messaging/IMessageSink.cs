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
