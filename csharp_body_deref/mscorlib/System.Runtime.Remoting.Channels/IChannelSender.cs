using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Channels;

[Token(Token = "0x2000381")]
[ComVisible(true)]
public interface IChannelSender : IChannel
{
	[Token(Token = "0x6001DA7")]
	IMessageSink CreateMessageSink(string url, object remoteChannelData, out string objectURI);
}
