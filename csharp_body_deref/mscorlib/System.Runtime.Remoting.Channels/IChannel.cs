// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Channels.IChannel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
