using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Contexts;

[Token(Token = "0x2000373")]
[ComVisible(true)]
public interface IContributeObjectSink
{
	[Token(Token = "0x6001D77")]
	IMessageSink GetObjectSink(MarshalByRefObject obj, IMessageSink nextSink);
}
