using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x200033F")]
[ComVisible(true)]
public interface IEnvoyInfo
{
	[Token(Token = "0x1700032F")]
	IMessageSink EnvoySinks
	{
		[Token(Token = "0x6001C1B")]
		get;
	}
}
