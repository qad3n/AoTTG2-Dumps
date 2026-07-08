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
		[Address(RVA = "0x4E9B2F0", Offset = "0x4E9B2F0", VA = "0x4E9B2F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000372")]
	public virtual int ChannelPriority
	{
		[Token(Token = "0x6001D8E")]
		[Address(RVA = "0x4E9B320", Offset = "0x4E9B320", VA = "0x4E9B320", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000373")]
	public virtual object ChannelData
	{
		[Token(Token = "0x6001D8F")]
		[Address(RVA = "0x4E9B330", Offset = "0x4E9B330", VA = "0x4E9B330", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D8C")]
	[Address(RVA = "0x4E9B180", Offset = "0x4E9B180", VA = "0x4E9B180")]
	internal static void RegisterCrossAppDomainChannel()
	{
	}

	[Token(Token = "0x6001D90")]
	[Address(RVA = "0x4E9B380", Offset = "0x4E9B380", VA = "0x4E9B380", Slot = "12")]
	public virtual void StartListening(object data)
	{
	}

	[Token(Token = "0x6001D91")]
	[Address(RVA = "0x4E9B390", Offset = "0x4E9B390", VA = "0x4E9B390", Slot = "13")]
	public virtual IMessageSink CreateMessageSink(string url, object data, out string uri)
	{
		return null;
	}

	[Token(Token = "0x6001D92")]
	[Address(RVA = "0x4E9B2E0", Offset = "0x4E9B2E0", VA = "0x4E9B2E0")]
	public CrossAppDomainChannel()
	{
	}
}
