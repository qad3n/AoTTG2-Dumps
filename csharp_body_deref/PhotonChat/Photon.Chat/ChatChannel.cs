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
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600000B")]
		[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public int MessageCount
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x1D0B810", Offset = "0x1D09E10", VA = "0x181D0B810")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000006")]
	public int LastMsgId
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool PublishSubscribers
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0xA374F0", Offset = "0xA35AF0", VA = "0x180A374F0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public int MaxSubscribers
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x58A870", Offset = "0x588E70", VA = "0x18058A870")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x58AA10", Offset = "0x589010", VA = "0x18058AA10")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x1D0B6F0", Offset = "0x1D09CF0", VA = "0x181D0B6F0")]
	public ChatChannel(string name)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x1D0AEC0", Offset = "0x1D094C0", VA = "0x181D0AEC0")]
	public void Add(string sender, object message, int msgId)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x1D0AFF0", Offset = "0x1D095F0", VA = "0x181D0AFF0")]
	public void Add(string[] senders, object[] messages, int lastMsgId)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x1D0B640", Offset = "0x1D09C40", VA = "0x181D0B640")]
	public void TruncateMessages()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x1D0B080", Offset = "0x1D09680", VA = "0x181D0B080")]
	public void ClearMessages()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x1D0B500", Offset = "0x1D09B00", VA = "0x181D0B500")]
	public string ToStringMessages()
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x1D0B120", Offset = "0x1D09720", VA = "0x181D0B120")]
	internal void ReadChannelProperties(Dictionary<object, object> newProperties)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x1D0AE00", Offset = "0x1D09400", VA = "0x181D0AE00")]
	internal bool AddSubscribers(string[] users)
	{
		return default(bool);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x1D0ADA0", Offset = "0x1D093A0", VA = "0x181D0ADA0")]
	internal bool AddSubscriber(string userId)
	{
		return default(bool);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x1D0B480", Offset = "0x1D09A80", VA = "0x181D0B480")]
	internal bool RemoveSubscriber(string userId)
	{
		return default(bool);
	}
}
