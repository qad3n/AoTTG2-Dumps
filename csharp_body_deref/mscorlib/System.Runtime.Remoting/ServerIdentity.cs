// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.ServerIdentity
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Remoting.Contexts;
using System.Runtime.Remoting.Lifetime;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000355")]
internal abstract class ServerIdentity : System.Runtime.Remoting.Identity
{
	[Token(Token = "0x4000E1A")]
	[FieldOffset(Offset = "0x48")]
	protected Type _objectType;

	[Token(Token = "0x4000E1B")]
	[FieldOffset(Offset = "0x50")]
	protected MarshalByRefObject _serverObject;

	[Token(Token = "0x4000E1C")]
	[FieldOffset(Offset = "0x58")]
	protected IMessageSink _serverSink;

	[Token(Token = "0x4000E1D")]
	[FieldOffset(Offset = "0x60")]
	protected Context _context;

	[Token(Token = "0x4000E1E")]
	[FieldOffset(Offset = "0x68")]
	protected System.Runtime.Remoting.Lifetime.Lease _lease;

	[Token(Token = "0x17000346")]
	public Type ObjectType
	{
		[Token(Token = "0x6001CEE")]
		[Address(RVA = "0x5377B00", Offset = "0x5376B00", VA = "0x5377B00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000347")]
	public System.Runtime.Remoting.Lifetime.Lease Lease
	{
		[Token(Token = "0x6001CF3")]
		[Address(RVA = "0x5377D80", Offset = "0x5376D80", VA = "0x5377D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000348")]
	public Context Context
	{
		[Token(Token = "0x6001CF4")]
		[Address(RVA = "0x5377D90", Offset = "0x5376D90", VA = "0x5377D90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001CF5")]
		[Address(RVA = "0x5377DA0", Offset = "0x5376DA0", VA = "0x5377DA0")]
		set
		{
		}
	}

	[Token(Token = "0x6001CED")]
	[Address(RVA = "0x5377AA0", Offset = "0x5376AA0", VA = "0x5377AA0")]
	public ServerIdentity(string objectUri, Context context, Type objectType)
	{
	}

	[Token(Token = "0x6001CEF")]
	[Address(RVA = "0x5375320", Offset = "0x5374320", VA = "0x5375320")]
	public void StartTrackingLifetime(ILease lease)
	{
	}

	[Token(Token = "0x6001CF0")]
	[Address(RVA = "0x5377B10", Offset = "0x5376B10", VA = "0x5377B10", Slot = "5")]
	public virtual void OnLifetimeExpired()
	{
	}

	[Token(Token = "0x6001CF1")]
	[Address(RVA = "0x5377BC0", Offset = "0x5376BC0", VA = "0x5377BC0", Slot = "4")]
	public override ObjRef CreateObjRef(Type requestedType)
	{
		return null;
	}

	[Token(Token = "0x6001CF2")]
	[Address(RVA = "0x5376DA0", Offset = "0x5375DA0", VA = "0x5376DA0")]
	public void AttachServerObject(MarshalByRefObject serverObject, Context context)
	{
	}

	[Token(Token = "0x6001CF6")]
	public abstract IMessage SyncObjectProcessMessage(IMessage msg);

	[Token(Token = "0x6001CF7")]
	public abstract IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink);

	[Token(Token = "0x6001CF8")]
	[Address(RVA = "0x5377B20", Offset = "0x5376B20", VA = "0x5377B20")]
	protected void DisposeServerObject()
	{
	}
}
