using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Contexts;

[Token(Token = "0x2000372")]
[ComVisible(true)]
public interface IContributeEnvoySink
{
	[Token(Token = "0x6001D76")]
	IMessageSink GetEnvoySink(MarshalByRefObject obj, IMessageSink nextSink);
}
