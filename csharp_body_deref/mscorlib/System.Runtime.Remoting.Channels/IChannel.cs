using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Channels;

[Token(Token = "0x200037E")]
[ComVisible(true)]
public interface IChannel
{
	[Token(Token = "0x17000375")]
	string ChannelName
	{
		[Token(Token = "0x6001DA3")]
		get;
	}

	[Token(Token = "0x17000376")]
	int ChannelPriority
	{
		[Token(Token = "0x6001DA4")]
		get;
	}
}
