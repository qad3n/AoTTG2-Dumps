using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Contexts;

[Token(Token = "0x2000374")]
[ComVisible(true)]
public interface IContributeServerContextSink
{
	[Token(Token = "0x6001D78")]
	IMessageSink GetServerContextSink(IMessageSink nextSink);
}
