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

[Token(Token = "0x200037C")]
internal abstract class ServerIdentity : System.Runtime.Remoting.Identity
{
	[Token(Token = "0x4000EBA")]
	[FieldOffset(Offset = "0x48")]
	protected Type _objectType;

	[Token(Token = "0x4000EBB")]
	[FieldOffset(Offset = "0x50")]
	protected MarshalByRefObject _serverObject;

	[Token(Token = "0x4000EBC")]
	[FieldOffset(Offset = "0x58")]
	protected IMessageSink _serverSink;

	[Token(Token = "0x4000EBD")]
	[FieldOffset(Offset = "0x60")]
	protected Context _context;

	[Token(Token = "0x4000EBE")]
	[FieldOffset(Offset = "0x68")]
	protected System.Runtime.Remoting.Lifetime.Lease _lease;

	[Token(Token = "0x17000347")]
	public Type ObjectType
	{
		[Token(Token = "0x6001D18")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000348")]
	public System.Runtime.Remoting.Lifetime.Lease Lease
	{
		[Token(Token = "0x6001D1D")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000349")]
	public Context Context
	{
		[Token(Token = "0x6001D1E")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D1F")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		set
		{
		}
	}

	[Token(Token = "0x6001D17")]
	[Address(RVA = "0x19E67A0", Offset = "0x19E4DA0", VA = "0x1819E67A0")]
	public ServerIdentity(string objectUri, Context context, Type objectType)
	{
	}

	[Token(Token = "0x6001D19")]
	[Address(RVA = "0x19E65C0", Offset = "0x19E4BC0", VA = "0x1819E65C0")]
	public void StartTrackingLifetime(ILease lease)
	{
	}

	[Token(Token = "0x6001D1A")]
	[Address(RVA = "0x19E65B0", Offset = "0x19E4BB0", VA = "0x1819E65B0", Slot = "5")]
	public virtual void OnLifetimeExpired()
	{
	}

	[Token(Token = "0x6001D1B")]
	[Address(RVA = "0x19E6320", Offset = "0x19E4920", VA = "0x1819E6320", Slot = "4")]
	public override ObjRef CreateObjRef(Type requestedType)
	{
		return null;
	}

	[Token(Token = "0x6001D1C")]
	[Address(RVA = "0x19E62A0", Offset = "0x19E48A0", VA = "0x1819E62A0")]
	public void AttachServerObject(MarshalByRefObject serverObject, Context context)
	{
	}

	[Token(Token = "0x6001D20")]
	public abstract IMessage SyncObjectProcessMessage(IMessage msg);

	[Token(Token = "0x6001D21")]
	public abstract IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink);

	[Token(Token = "0x6001D22")]
	[Address(RVA = "0x19E6510", Offset = "0x19E4B10", VA = "0x1819E6510")]
	protected void DisposeServerObject()
	{
	}
}
