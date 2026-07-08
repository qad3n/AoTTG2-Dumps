using System.Runtime.Remoting.Contexts;
using System.Runtime.Remoting.Lifetime;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x200034D")]
internal abstract class ServerIdentity : System.Runtime.Remoting.Identity
{
	[Token(Token = "0x4000EAD")]
	[FieldOffset(Offset = "0x48")]
	protected Type _objectType;

	[Token(Token = "0x4000EAE")]
	[FieldOffset(Offset = "0x50")]
	protected MarshalByRefObject _serverObject;

	[Token(Token = "0x4000EAF")]
	[FieldOffset(Offset = "0x58")]
	protected IMessageSink _serverSink;

	[Token(Token = "0x4000EB0")]
	[FieldOffset(Offset = "0x60")]
	protected Context _context;

	[Token(Token = "0x4000EB1")]
	[FieldOffset(Offset = "0x68")]
	protected System.Runtime.Remoting.Lifetime.Lease _lease;

	[Token(Token = "0x17000345")]
	public Type ObjectType
	{
		[Token(Token = "0x6001CA9")]
		[Address(RVA = "0x4E89640", Offset = "0x4E89640", VA = "0x4E89640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000346")]
	public System.Runtime.Remoting.Lifetime.Lease Lease
	{
		[Token(Token = "0x6001CAE")]
		[Address(RVA = "0x4E898C0", Offset = "0x4E898C0", VA = "0x4E898C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000347")]
	public Context Context
	{
		[Token(Token = "0x6001CAF")]
		[Address(RVA = "0x4E898D0", Offset = "0x4E898D0", VA = "0x4E898D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001CB0")]
		[Address(RVA = "0x4E898E0", Offset = "0x4E898E0", VA = "0x4E898E0")]
		set
		{
		}
	}

	[Token(Token = "0x6001CA8")]
	[Address(RVA = "0x4E895E0", Offset = "0x4E895E0", VA = "0x4E895E0")]
	public ServerIdentity(string objectUri, Context context, Type objectType)
	{
	}

	[Token(Token = "0x6001CAA")]
	[Address(RVA = "0x4E86CF0", Offset = "0x4E86CF0", VA = "0x4E86CF0")]
	public void StartTrackingLifetime(ILease lease)
	{
	}

	[Token(Token = "0x6001CAB")]
	[Address(RVA = "0x4E89650", Offset = "0x4E89650", VA = "0x4E89650", Slot = "5")]
	public virtual void OnLifetimeExpired()
	{
	}

	[Token(Token = "0x6001CAC")]
	[Address(RVA = "0x4E89700", Offset = "0x4E89700", VA = "0x4E89700", Slot = "4")]
	public override ObjRef CreateObjRef(Type requestedType)
	{
		return null;
	}

	[Token(Token = "0x6001CAD")]
	[Address(RVA = "0x4E88830", Offset = "0x4E88830", VA = "0x4E88830")]
	public void AttachServerObject(MarshalByRefObject serverObject, Context context)
	{
	}

	[Token(Token = "0x6001CB1")]
	public abstract IMessage SyncObjectProcessMessage(IMessage msg);

	[Token(Token = "0x6001CB2")]
	public abstract IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink);

	[Token(Token = "0x6001CB3")]
	[Address(RVA = "0x4E89660", Offset = "0x4E89660", VA = "0x4E89660")]
	protected void DisposeServerObject()
	{
	}
}
