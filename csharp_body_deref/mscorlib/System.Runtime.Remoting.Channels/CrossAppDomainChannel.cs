// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Channels.CrossAppDomainChannel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Channels;

[Serializable]
[Token(Token = "0x2000379")]
internal class CrossAppDomainChannel : IChannel, IChannelSender, IChannelReceiver
{
	[Token(Token = "0x4000F0E")]
	[FieldOffset(Offset = "0x0")]
	private static object s_lock;

	[Token(Token = "0x17000371")]
	public virtual string ChannelName
	{
		[Token(Token = "0x6001D8D")]
		[Address(RVA = "0x3B80E10", Offset = "0x3B80E10", VA = "0x3B80E10", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000372")]
	public virtual int ChannelPriority
	{
		[Token(Token = "0x6001D8E")]
		[Address(RVA = "0x3B80E40", Offset = "0x3B80E40", VA = "0x3B80E40", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000373")]
	public virtual object ChannelData
	{
		[Token(Token = "0x6001D8F")]
		[Address(RVA = "0x3B80E50", Offset = "0x3B80E50", VA = "0x3B80E50", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D8C")]
	[Address(RVA = "0x3B80CA0", Offset = "0x3B80CA0", VA = "0x3B80CA0")]
	internal static void RegisterCrossAppDomainChannel()
	{
	}

	[Token(Token = "0x6001D90")]
	[Address(RVA = "0x3B80EA0", Offset = "0x3B80EA0", VA = "0x3B80EA0", Slot = "12")]
	public virtual void StartListening(object data)
	{
	}

	[Token(Token = "0x6001D91")]
	[Address(RVA = "0x3B80EB0", Offset = "0x3B80EB0", VA = "0x3B80EB0", Slot = "13")]
	public virtual IMessageSink CreateMessageSink(string url, object data, out string uri)
	{
		return null;
	}

	[Token(Token = "0x6001D92")]
	[Address(RVA = "0x3B80E00", Offset = "0x3B80E00", VA = "0x3B80E00")]
	public CrossAppDomainChannel()
	{
	}
}
