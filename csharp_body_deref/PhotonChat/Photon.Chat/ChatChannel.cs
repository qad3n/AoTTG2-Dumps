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

[Token(Token = "0x2000005")]
public class ChatChannel
{
	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x10")]
	public readonly string Name;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x18")]
	public readonly List<string> Senders;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x20")]
	public readonly List<object> Messages;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x28")]
	public int MessageLimit;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x2C")]
	public int ChannelID;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<object, object> properties;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x48")]
	public readonly HashSet<string> Subscribers;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x50")]
	private Dictionary<string, Dictionary<object, object>> usersProperties;

	[Token(Token = "0x17000004")]
	public bool IsPrivate
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x569E8A0", Offset = "0x569D8A0", VA = "0x569E8A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x569E8B0", Offset = "0x569D8B0", VA = "0x569E8B0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public int MessageCount
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x569E8C0", Offset = "0x569D8C0", VA = "0x569E8C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000006")]
	public int LastMsgId
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x569E900", Offset = "0x569D900", VA = "0x569E900")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x569E910", Offset = "0x569D910", VA = "0x569E910")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool PublishSubscribers
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x569E920", Offset = "0x569D920", VA = "0x569E920")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x569E930", Offset = "0x569D930", VA = "0x569E930")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public int MaxSubscribers
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x569E940", Offset = "0x569D940", VA = "0x569E940")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x569E950", Offset = "0x569D950", VA = "0x569E950")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x569E960", Offset = "0x569D960", VA = "0x569E960")]
	public ChatChannel(string name)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x569EA90", Offset = "0x569DA90", VA = "0x569EA90")]
	public void Add(string sender, object message, int msgId)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x569EC50", Offset = "0x569DC50", VA = "0x569EC50")]
	public void Add(string[] senders, object[] messages, int lastMsgId)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x569EBB0", Offset = "0x569DBB0", VA = "0x569EBB0")]
	public void TruncateMessages()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x569ECE0", Offset = "0x569DCE0", VA = "0x569ECE0")]
	public void ClearMessages()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x569ED70", Offset = "0x569DD70", VA = "0x569ED70")]
	public string ToStringMessages()
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x569EF00", Offset = "0x569DF00", VA = "0x569EF00")]
	internal void ReadChannelProperties(Dictionary<object, object> newProperties)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x569F270", Offset = "0x569E270", VA = "0x569F270")]
	internal bool AddSubscribers(string[] users)
	{
		return default(bool);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x569F320", Offset = "0x569E320", VA = "0x569F320")]
	internal bool AddSubscriber(string userId)
	{
		return default(bool);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x569F370", Offset = "0x569E370", VA = "0x569F370")]
	internal bool RemoveSubscriber(string userId)
	{
		return default(bool);
	}
}
