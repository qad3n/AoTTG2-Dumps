using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000007")]
public class ChatChannel
{
	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x10")]
	public readonly string Name;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x18")]
	public readonly List<string> Senders;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x20")]
	public readonly List<object> Messages;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x28")]
	public int MessageLimit;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x2C")]
	public int ChannelID;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<object, object> properties;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x48")]
	public readonly HashSet<string> Subscribers;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x50")]
	private Dictionary<string, Dictionary<object, object>> usersProperties;

	[Token(Token = "0x17000004")]
	public bool IsPrivate
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x3BBBDE0", Offset = "0x3BBBDE0", VA = "0x3BBBDE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x3BBBDF0", Offset = "0x3BBBDF0", VA = "0x3BBBDF0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public int MessageCount
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x3BBBE00", Offset = "0x3BBBE00", VA = "0x3BBBE00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000006")]
	public int LastMsgId
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x3BBBE40", Offset = "0x3BBBE40", VA = "0x3BBBE40")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x3BBBE50", Offset = "0x3BBBE50", VA = "0x3BBBE50")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool PublishSubscribers
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x3BBBE60", Offset = "0x3BBBE60", VA = "0x3BBBE60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x3BBBE70", Offset = "0x3BBBE70", VA = "0x3BBBE70")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public int MaxSubscribers
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x3BBBE80", Offset = "0x3BBBE80", VA = "0x3BBBE80")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x3BBBE90", Offset = "0x3BBBE90", VA = "0x3BBBE90")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x3BBBEA0", Offset = "0x3BBBEA0", VA = "0x3BBBEA0")]
	public ChatChannel(string name)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3BBBFD0", Offset = "0x3BBBFD0", VA = "0x3BBBFD0")]
	public void Add(string sender, object message, int msgId)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3BBC1A0", Offset = "0x3BBC1A0", VA = "0x3BBC1A0")]
	public void Add(string[] senders, object[] messages, int lastMsgId)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3BBC100", Offset = "0x3BBC100", VA = "0x3BBC100")]
	public void TruncateMessages()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3BBC230", Offset = "0x3BBC230", VA = "0x3BBC230")]
	public void ClearMessages()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3BBC2C0", Offset = "0x3BBC2C0", VA = "0x3BBC2C0")]
	public string ToStringMessages()
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3BBC450", Offset = "0x3BBC450", VA = "0x3BBC450")]
	internal void ReadChannelProperties(Dictionary<object, object> newProperties)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3BBC7F0", Offset = "0x3BBC7F0", VA = "0x3BBC7F0")]
	internal bool AddSubscribers(string[] users)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3BBC8A0", Offset = "0x3BBC8A0", VA = "0x3BBC8A0")]
	internal bool AddSubscriber(string userId)
	{
		return default(bool);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3BBC8F0", Offset = "0x3BBC8F0", VA = "0x3BBC8F0")]
	internal bool RemoveSubscriber(string userId)
	{
		return default(bool);
	}
}
