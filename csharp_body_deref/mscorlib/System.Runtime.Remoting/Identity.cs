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

[Token(Token = "0x2000349")]
internal abstract class Identity
{
	[Token(Token = "0x4000DDE")]
	[FieldOffset(Offset = "0x10")]
	protected string _objectUri;

	[Token(Token = "0x4000DDF")]
	[FieldOffset(Offset = "0x18")]
	protected IMessageSink _channelSink;

	[Token(Token = "0x4000DE0")]
	[FieldOffset(Offset = "0x20")]
	protected IMessageSink _envoySink;

	[Token(Token = "0x4000DE1")]
	[FieldOffset(Offset = "0x28")]
	private System.Runtime.Remoting.Contexts.DynamicPropertyCollection _clientDynamicProperties;

	[Token(Token = "0x4000DE2")]
	[FieldOffset(Offset = "0x30")]
	private System.Runtime.Remoting.Contexts.DynamicPropertyCollection _serverDynamicProperties;

	[Token(Token = "0x4000DE3")]
	[FieldOffset(Offset = "0x38")]
	protected ObjRef _objRef;

	[Token(Token = "0x4000DE4")]
	[FieldOffset(Offset = "0x40")]
	private bool _disposed;

	[Token(Token = "0x17000332")]
	public IMessageSink ChannelSink
	{
		[Token(Token = "0x6001C65")]
		[Address(RVA = "0x5369080", Offset = "0x5368080", VA = "0x5369080")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C66")]
		[Address(RVA = "0x5369090", Offset = "0x5368090", VA = "0x5369090")]
		set
		{
		}
	}

	[Token(Token = "0x17000333")]
	public IMessageSink EnvoySink
	{
		[Token(Token = "0x6001C67")]
		[Address(RVA = "0x53690A0", Offset = "0x53680A0", VA = "0x53690A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000334")]
	public string ObjectUri
	{
		[Token(Token = "0x6001C68")]
		[Address(RVA = "0x53690B0", Offset = "0x53680B0", VA = "0x53690B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C69")]
		[Address(RVA = "0x53690C0", Offset = "0x53680C0", VA = "0x53690C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000335")]
	public bool IsConnected
	{
		[Token(Token = "0x6001C6A")]
		[Address(RVA = "0x53690D0", Offset = "0x53680D0", VA = "0x53690D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000336")]
	public bool Disposed
	{
		[Token(Token = "0x6001C6B")]
		[Address(RVA = "0x53690E0", Offset = "0x53680E0", VA = "0x53690E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001C6C")]
		[Address(RVA = "0x53690F0", Offset = "0x53680F0", VA = "0x53690F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000337")]
	public System.Runtime.Remoting.Contexts.DynamicPropertyCollection ClientDynamicProperties
	{
		[Token(Token = "0x6001C6D")]
		[Address(RVA = "0x5369100", Offset = "0x5368100", VA = "0x5369100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000338")]
	public bool HasServerDynamicSinks
	{
		[Token(Token = "0x6001C6E")]
		[Address(RVA = "0x5369180", Offset = "0x5368180", VA = "0x5369180")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001C63")]
	[Address(RVA = "0x5369050", Offset = "0x5368050", VA = "0x5369050")]
	public Identity(string objectUri)
	{
	}

	[Token(Token = "0x6001C64")]
	public abstract ObjRef CreateObjRef(Type requestedType);

	[Token(Token = "0x6001C6F")]
	[Address(RVA = "0x53691A0", Offset = "0x53681A0", VA = "0x53691A0")]
	public void NotifyClientDynamicSinks(bool start, IMessage req_msg, bool client_site, bool async)
	{
	}

	[Token(Token = "0x6001C70")]
	[Address(RVA = "0x5369200", Offset = "0x5368200", VA = "0x5369200")]
	public void NotifyServerDynamicSinks(bool start, IMessage req_msg, bool client_site, bool async)
	{
	}
}
