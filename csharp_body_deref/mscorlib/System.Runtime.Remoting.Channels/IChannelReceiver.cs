using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Channels;

[Token(Token = "0x2000380")]
[ComVisible(true)]
public interface IChannelReceiver : IChannel
{
	[Token(Token = "0x17000377")]
	object ChannelData
	{
		[Token(Token = "0x6001DA5")]
		get;
	}

	[Token(Token = "0x6001DA6")]
	void StartListening(object data);
}
