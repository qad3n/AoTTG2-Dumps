// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Chat.ChatChannel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChatChannel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3EB1730", Offset = "0x3EB1730", VA = "0x3EB1730")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x3EB1740", Offset = "0x3EB1740", VA = "0x3EB1740")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public int MessageCount
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x3EB1750", Offset = "0x3EB1750", VA = "0x3EB1750")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000006")]
	public int LastMsgId
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x3EB1790", Offset = "0x3EB1790", VA = "0x3EB1790")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x3EB17A0", Offset = "0x3EB17A0", VA = "0x3EB17A0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool PublishSubscribers
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x3EB17B0", Offset = "0x3EB17B0", VA = "0x3EB17B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x3EB17C0", Offset = "0x3EB17C0", VA = "0x3EB17C0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public int MaxSubscribers
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x3EB17D0", Offset = "0x3EB17D0", VA = "0x3EB17D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x3EB17E0", Offset = "0x3EB17E0", VA = "0x3EB17E0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x3EB17F0", Offset = "0x3EB17F0", VA = "0x3EB17F0")]
	public ChatChannel(string name)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3EB1920", Offset = "0x3EB1920", VA = "0x3EB1920")]
	public void Add(string sender, object message, int msgId)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3EB1AF0", Offset = "0x3EB1AF0", VA = "0x3EB1AF0")]
	public void Add(string[] senders, object[] messages, int lastMsgId)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3EB1A50", Offset = "0x3EB1A50", VA = "0x3EB1A50")]
	public void TruncateMessages()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3EB1B80", Offset = "0x3EB1B80", VA = "0x3EB1B80")]
	public void ClearMessages()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3EB1C10", Offset = "0x3EB1C10", VA = "0x3EB1C10")]
	public string ToStringMessages()
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3EB1DA0", Offset = "0x3EB1DA0", VA = "0x3EB1DA0")]
	internal void ReadChannelProperties(Dictionary<object, object> newProperties)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3EB2140", Offset = "0x3EB2140", VA = "0x3EB2140")]
	internal bool AddSubscribers(string[] users)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3EB21F0", Offset = "0x3EB21F0", VA = "0x3EB21F0")]
	internal bool AddSubscriber(string userId)
	{
		return default(bool);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3EB2240", Offset = "0x3EB2240", VA = "0x3EB2240")]
	internal bool RemoveSubscriber(string userId)
	{
		return default(bool);
	}
}
