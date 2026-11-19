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
[Token(Token = "0x2000381")]
internal class CrossAppDomainChannel : IChannel, IChannelSender, IChannelReceiver
{
	[Token(Token = "0x4000E7B")]
	[FieldOffset(Offset = "0x0")]
	private static object s_lock;

	[Token(Token = "0x17000372")]
	public virtual string ChannelName
	{
		[Token(Token = "0x6001DD2")]
		[Address(RVA = "0x5388C50", Offset = "0x5387C50", VA = "0x5388C50", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000373")]
	public virtual int ChannelPriority
	{
		[Token(Token = "0x6001DD3")]
		[Address(RVA = "0x5388C80", Offset = "0x5387C80", VA = "0x5388C80", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000374")]
	public virtual object ChannelData
	{
		[Token(Token = "0x6001DD4")]
		[Address(RVA = "0x5388C90", Offset = "0x5387C90", VA = "0x5388C90", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DD1")]
	[Address(RVA = "0x5388AF0", Offset = "0x5387AF0", VA = "0x5388AF0")]
	internal static void RegisterCrossAppDomainChannel()
	{
	}

	[Token(Token = "0x6001DD5")]
	[Address(RVA = "0x5388CE0", Offset = "0x5387CE0", VA = "0x5388CE0", Slot = "12")]
	public virtual void StartListening(object data)
	{
	}

	[Token(Token = "0x6001DD6")]
	[Address(RVA = "0x5388CF0", Offset = "0x5387CF0", VA = "0x5388CF0", Slot = "13")]
	public virtual IMessageSink CreateMessageSink(string url, object data, out string uri)
	{
		return null;
	}

	[Token(Token = "0x6001DD7")]
	[Address(RVA = "0x5388C40", Offset = "0x5387C40", VA = "0x5388C40")]
	public CrossAppDomainChannel()
	{
	}
}
