using System.Collections;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003AD")]
[ComVisible(true)]
public interface IMessage
{
	[Token(Token = "0x170003BE")]
	IDictionary Properties
	{
		[Token(Token = "0x6001E6E")]
		get;
	}
}
