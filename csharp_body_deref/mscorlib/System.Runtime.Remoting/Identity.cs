// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Identity
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Remoting.Contexts;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000370")]
internal abstract class Identity
{
	[Token(Token = "0x4000E7E")]
	[FieldOffset(Offset = "0x10")]
	protected string _objectUri;

	[Token(Token = "0x4000E7F")]
	[FieldOffset(Offset = "0x18")]
	protected IMessageSink _channelSink;

	[Token(Token = "0x4000E80")]
	[FieldOffset(Offset = "0x20")]
	protected IMessageSink _envoySink;

	[Token(Token = "0x4000E81")]
	[FieldOffset(Offset = "0x28")]
	private System.Runtime.Remoting.Contexts.DynamicPropertyCollection _clientDynamicProperties;

	[Token(Token = "0x4000E82")]
	[FieldOffset(Offset = "0x30")]
	private System.Runtime.Remoting.Contexts.DynamicPropertyCollection _serverDynamicProperties;

	[Token(Token = "0x4000E83")]
	[FieldOffset(Offset = "0x38")]
	protected ObjRef _objRef;

	[Token(Token = "0x4000E84")]
	[FieldOffset(Offset = "0x40")]
	private bool _disposed;

	[Token(Token = "0x17000333")]
	public IMessageSink ChannelSink
	{
		[Token(Token = "0x6001C8F")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C90")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000334")]
	public IMessageSink EnvoySink
	{
		[Token(Token = "0x6001C91")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000335")]
	public string ObjectUri
	{
		[Token(Token = "0x6001C92")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C93")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000336")]
	public bool IsConnected
	{
		[Token(Token = "0x6001C94")]
		[Address(RVA = "0x19DA120", Offset = "0x19D8720", VA = "0x1819DA120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000337")]
	public bool Disposed
	{
		[Token(Token = "0x6001C95")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001C96")]
		[Address(RVA = "0xA374F0", Offset = "0xA35AF0", VA = "0x180A374F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000338")]
	public System.Runtime.Remoting.Contexts.DynamicPropertyCollection ClientDynamicProperties
	{
		[Token(Token = "0x6001C97")]
		[Address(RVA = "0x19DA090", Offset = "0x19D8690", VA = "0x1819DA090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000339")]
	public bool HasServerDynamicSinks
	{
		[Token(Token = "0x6001C98")]
		[Address(RVA = "0x19DA100", Offset = "0x19D8700", VA = "0x1819DA100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001C8D")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public Identity(string objectUri)
	{
	}

	[Token(Token = "0x6001C8E")]
	public abstract ObjRef CreateObjRef(Type requestedType);

	[Token(Token = "0x6001C99")]
	[Address(RVA = "0x19D9FB0", Offset = "0x19D85B0", VA = "0x1819D9FB0")]
	public void NotifyClientDynamicSinks(bool start, IMessage req_msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001C9A")]
	[Address(RVA = "0x19DA020", Offset = "0x19D8620", VA = "0x1819DA020")]
	public void NotifyServerDynamicSinks(bool start, IMessage req_msg, bool client_site, bool async)
	{
	}
}
