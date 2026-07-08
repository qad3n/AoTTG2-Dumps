using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Contexts;

[Token(Token = "0x2000371")]
[ComVisible(true)]
public interface IContributeDynamicSink
{
	[Token(Token = "0x6001D75")]
	IDynamicMessageSink GetDynamicSink();
}
