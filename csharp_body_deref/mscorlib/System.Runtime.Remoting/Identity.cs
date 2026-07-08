using System.Runtime.Remoting.Contexts;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000341")]
internal abstract class Identity
{
	[Token(Token = "0x4000E71")]
	[FieldOffset(Offset = "0x10")]
	protected string _objectUri;

	[Token(Token = "0x4000E72")]
	[FieldOffset(Offset = "0x18")]
	protected IMessageSink _channelSink;

	[Token(Token = "0x4000E73")]
	[FieldOffset(Offset = "0x20")]
	protected IMessageSink _envoySink;

	[Token(Token = "0x4000E74")]
	[FieldOffset(Offset = "0x28")]
	private System.Runtime.Remoting.Contexts.DynamicPropertyCollection _clientDynamicProperties;

	[Token(Token = "0x4000E75")]
	[FieldOffset(Offset = "0x30")]
	private System.Runtime.Remoting.Contexts.DynamicPropertyCollection _serverDynamicProperties;

	[Token(Token = "0x4000E76")]
	[FieldOffset(Offset = "0x38")]
	protected ObjRef _objRef;

	[Token(Token = "0x4000E77")]
	[FieldOffset(Offset = "0x40")]
	private bool _disposed;

	[Token(Token = "0x17000331")]
	public IMessageSink ChannelSink
	{
		[Token(Token = "0x6001C20")]
		[Address(RVA = "0x4E79D70", Offset = "0x4E79D70", VA = "0x4E79D70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C21")]
		[Address(RVA = "0x4E79D80", Offset = "0x4E79D80", VA = "0x4E79D80")]
		set
		{
		}
	}

	[Token(Token = "0x17000332")]
	public IMessageSink EnvoySink
	{
		[Token(Token = "0x6001C22")]
		[Address(RVA = "0x4E79D90", Offset = "0x4E79D90", VA = "0x4E79D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000333")]
	public string ObjectUri
	{
		[Token(Token = "0x6001C23")]
		[Address(RVA = "0x4E79DA0", Offset = "0x4E79DA0", VA = "0x4E79DA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C24")]
		[Address(RVA = "0x4E79DB0", Offset = "0x4E79DB0", VA = "0x4E79DB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000334")]
	public bool IsConnected
	{
		[Token(Token = "0x6001C25")]
		[Address(RVA = "0x4E79DC0", Offset = "0x4E79DC0", VA = "0x4E79DC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000335")]
	public bool Disposed
	{
		[Token(Token = "0x6001C26")]
		[Address(RVA = "0x4E79DD0", Offset = "0x4E79DD0", VA = "0x4E79DD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001C27")]
		[Address(RVA = "0x4E79DE0", Offset = "0x4E79DE0", VA = "0x4E79DE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000336")]
	public System.Runtime.Remoting.Contexts.DynamicPropertyCollection ClientDynamicProperties
	{
		[Token(Token = "0x6001C28")]
		[Address(RVA = "0x4E79DF0", Offset = "0x4E79DF0", VA = "0x4E79DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000337")]
	public bool HasServerDynamicSinks
	{
		[Token(Token = "0x6001C29")]
		[Address(RVA = "0x4E79E70", Offset = "0x4E79E70", VA = "0x4E79E70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001C1E")]
	[Address(RVA = "0x4E79D40", Offset = "0x4E79D40", VA = "0x4E79D40")]
	public Identity(string objectUri)
	{
	}

	[Token(Token = "0x6001C1F")]
	public abstract ObjRef CreateObjRef(Type requestedType);

	[Token(Token = "0x6001C2A")]
	[Address(RVA = "0x4E79E90", Offset = "0x4E79E90", VA = "0x4E79E90")]
	public void NotifyClientDynamicSinks(bool start, IMessage req_msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001C2B")]
	[Address(RVA = "0x4E79EF0", Offset = "0x4E79EF0", VA = "0x4E79EF0")]
	public void NotifyServerDynamicSinks(bool start, IMessage req_msg, bool client_site, bool async)
	{
	}
}
