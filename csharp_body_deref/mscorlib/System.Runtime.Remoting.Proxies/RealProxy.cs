// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Proxies.RealProxy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Contexts;
using System.Runtime.Remoting.Messaging;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Proxies;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200038C")]
[ComVisible(true)]
public abstract class RealProxy
{
	[Token(Token = "0x4000EDB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Type class_to_proxy;

	[Token(Token = "0x4000EDC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal Context _targetContext;

	[Token(Token = "0x4000EDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal MarshalByRefObject _server;

	[Token(Token = "0x4000EDE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int _targetDomainId;

	[Token(Token = "0x4000EDF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal string _targetUri;

	[Token(Token = "0x4000EE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal System.Runtime.Remoting.Identity _objectIdentity;

	[Token(Token = "0x4000EE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private object _objTP;

	[Token(Token = "0x4000EE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private object _stubData;

	[Token(Token = "0x17000358")]
	internal System.Runtime.Remoting.Identity ObjectIdentity
	{
		[Token(Token = "0x6001D6F")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D70")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		set
		{
		}
	}

	[Token(Token = "0x6001D68")]
	[Address(RVA = "0x1A05E00", Offset = "0x1A04400", VA = "0x181A05E00")]
	protected RealProxy()
	{
	}

	[Token(Token = "0x6001D69")]
	[Address(RVA = "0x1A05F20", Offset = "0x1A04520", VA = "0x181A05F20")]
	protected RealProxy(Type classToProxy)
	{
	}

	[Token(Token = "0x6001D6A")]
	[Address(RVA = "0x1A05D30", Offset = "0x1A04330", VA = "0x181A05D30")]
	internal RealProxy(Type classToProxy, System.Runtime.Remoting.ClientIdentity identity)
	{
	}

	[Token(Token = "0x6001D6B")]
	[Address(RVA = "0x1A05E10", Offset = "0x1A04410", VA = "0x181A05E10")]
	protected RealProxy(Type classToProxy, IntPtr stub, object stubData)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001D6C")]
	[Address(RVA = "0x1A04D20", Offset = "0x1A03320", VA = "0x181A04D20")]
	private static extern Type InternalGetProxyType(object transparentProxy);

	[Token(Token = "0x6001D6D")]
	[Address(RVA = "0x1A04B70", Offset = "0x1A03170", VA = "0x181A04B70")]
	public Type GetProxiedType()
	{
		return null;
	}

	[Token(Token = "0x6001D6E")]
	[Address(RVA = "0x1A04AE0", Offset = "0x1A030E0", VA = "0x181A04AE0", Slot = "4")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001D71")]
	public abstract IMessage Invoke(IMessage msg);

	[Token(Token = "0x6001D72")]
	[Address(RVA = "0x1A04D40", Offset = "0x1A03340", VA = "0x181A04D40")]
	internal static object PrivateInvoke(RealProxy rp, IMessage msg, out Exception exc, out object[] out_args)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001D73")]
	[Address(RVA = "0x1A04D30", Offset = "0x1A03330", VA = "0x181A04D30", Slot = "6")]
	internal virtual extern object InternalGetTransparentProxy(string className);

	[Token(Token = "0x6001D74")]
	[Address(RVA = "0x1A04C00", Offset = "0x1A03200", VA = "0x181A04C00", Slot = "7")]
	public virtual object GetTransparentProxy()
	{
		return null;
	}

	[Token(Token = "0x6001D75")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
	protected void AttachServer(MarshalByRefObject s)
	{
	}

	[Token(Token = "0x6001D76")]
	[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
	internal void SetTargetDomain(int domainId)
	{
	}

	[Token(Token = "0x6001D77")]
	[Address(RVA = "0x1A049B0", Offset = "0x1A02FB0", VA = "0x181A049B0")]
	internal object GetAppDomainTarget()
	{
		return null;
	}

	[Token(Token = "0x6001D78")]
	[Address(RVA = "0x1A05730", Offset = "0x1A03D30", VA = "0x181A05730")]
	private static object[] ProcessResponse(IMethodReturnMessage mrm, System.Runtime.Remoting.Messaging.MonoMethodMessage call)
	{
		return null;
	}
}
