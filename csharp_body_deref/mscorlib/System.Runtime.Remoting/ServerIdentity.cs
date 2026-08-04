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
		[Address(RVA = "0x3B6F160", Offset = "0x3B6F160", VA = "0x3B6F160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000346")]
	public System.Runtime.Remoting.Lifetime.Lease Lease
	{
		[Token(Token = "0x6001CAE")]
		[Address(RVA = "0x3B6F3E0", Offset = "0x3B6F3E0", VA = "0x3B6F3E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000347")]
	public Context Context
	{
		[Token(Token = "0x6001CAF")]
		[Address(RVA = "0x3B6F3F0", Offset = "0x3B6F3F0", VA = "0x3B6F3F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001CB0")]
		[Address(RVA = "0x3B6F400", Offset = "0x3B6F400", VA = "0x3B6F400")]
		set
		{
		}
	}

	[Token(Token = "0x6001CA8")]
	[Address(RVA = "0x3B6F100", Offset = "0x3B6F100", VA = "0x3B6F100")]
	public ServerIdentity(string objectUri, Context context, Type objectType)
	{
	}

	[Token(Token = "0x6001CAA")]
	[Address(RVA = "0x3B6C810", Offset = "0x3B6C810", VA = "0x3B6C810")]
	public void StartTrackingLifetime(ILease lease)
	{
	}

	[Token(Token = "0x6001CAB")]
	[Address(RVA = "0x3B6F170", Offset = "0x3B6F170", VA = "0x3B6F170", Slot = "5")]
	public virtual void OnLifetimeExpired()
	{
	}

	[Token(Token = "0x6001CAC")]
	[Address(RVA = "0x3B6F220", Offset = "0x3B6F220", VA = "0x3B6F220", Slot = "4")]
	public override ObjRef CreateObjRef(Type requestedType)
	{
		return null;
	}

	[Token(Token = "0x6001CAD")]
	[Address(RVA = "0x3B6E350", Offset = "0x3B6E350", VA = "0x3B6E350")]
	public void AttachServerObject(MarshalByRefObject serverObject, Context context)
	{
	}

	[Token(Token = "0x6001CB1")]
	public abstract IMessage SyncObjectProcessMessage(IMessage msg);

	[Token(Token = "0x6001CB2")]
	public abstract IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink);

	[Token(Token = "0x6001CB3")]
	[Address(RVA = "0x3B6F180", Offset = "0x3B6F180", VA = "0x3B6F180")]
	protected void DisposeServerObject()
	{
	}
}
