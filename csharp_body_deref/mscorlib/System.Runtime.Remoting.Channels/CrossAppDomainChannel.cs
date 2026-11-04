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
[Token(Token = "0x20003A8")]
internal class CrossAppDomainChannel : IChannel, IChannelSender, IChannelReceiver
{
	[Token(Token = "0x4000F1B")]
	[FieldOffset(Offset = "0x0")]
	private static object s_lock;

	[Token(Token = "0x17000373")]
	public virtual string ChannelName
	{
		[Token(Token = "0x6001DFC")]
		[Address(RVA = "0x19F8950", Offset = "0x19F6F50", VA = "0x1819F8950", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000374")]
	public virtual int ChannelPriority
	{
		[Token(Token = "0x6001DFD")]
		[Address(RVA = "0x8680C0", Offset = "0x8666C0", VA = "0x1808680C0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000375")]
	public virtual object ChannelData
	{
		[Token(Token = "0x6001DFE")]
		[Address(RVA = "0x19F8880", Offset = "0x19F6E80", VA = "0x1819F8880", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DFB")]
	[Address(RVA = "0x19F86C0", Offset = "0x19F6CC0", VA = "0x1819F86C0")]
	internal static void RegisterCrossAppDomainChannel()
	{
	}

	[Token(Token = "0x6001DFF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	public virtual void StartListening(object data)
	{
	}

	[Token(Token = "0x6001E00")]
	[Address(RVA = "0x19F8540", Offset = "0x19F6B40", VA = "0x1819F8540", Slot = "13")]
	public virtual IMessageSink CreateMessageSink(string url, object data, out string uri)
	{
		return null;
	}

	[Token(Token = "0x6001E01")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CrossAppDomainChannel()
	{
	}
}
