using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Contexts;

[Token(Token = "0x2000370")]
[ComVisible(true)]
public interface IContributeClientContextSink
{
	[Token(Token = "0x6001D74")]
	IMessageSink GetClientContextSink(IMessageSink nextSink);
}
