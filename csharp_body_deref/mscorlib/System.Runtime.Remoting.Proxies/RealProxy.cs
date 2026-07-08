using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Contexts;
using System.Runtime.Remoting.Messaging;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Proxies;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200035D")]
[ComVisible(true)]
public abstract class RealProxy
{
	[Token(Token = "0x4000ECE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Type class_to_proxy;

	[Token(Token = "0x4000ECF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal Context _targetContext;

	[Token(Token = "0x4000ED0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal MarshalByRefObject _server;

	[Token(Token = "0x4000ED1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int _targetDomainId;

	[Token(Token = "0x4000ED2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal string _targetUri;

	[Token(Token = "0x4000ED3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal System.Runtime.Remoting.Identity _objectIdentity;

	[Token(Token = "0x4000ED4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private object _objTP;

	[Token(Token = "0x4000ED5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private object _stubData;

	[Token(Token = "0x17000356")]
	internal System.Runtime.Remoting.Identity ObjectIdentity
	{
		[Token(Token = "0x6001D00")]
		[Address(RVA = "0x4E8D900", Offset = "0x4E8D900", VA = "0x4E8D900")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D01")]
		[Address(RVA = "0x4E8D910", Offset = "0x4E8D910", VA = "0x4E8D910")]
		set
		{
		}
	}

	[Token(Token = "0x6001CF9")]
	[Address(RVA = "0x4E8D6B0", Offset = "0x4E8D6B0", VA = "0x4E8D6B0")]
	protected RealProxy()
	{
	}

	[Token(Token = "0x6001CFA")]
	[Address(RVA = "0x4E8D6C0", Offset = "0x4E8D6C0", VA = "0x4E8D6C0")]
	protected RealProxy(Type classToProxy)
	{
	}

	[Token(Token = "0x6001CFB")]
	[Address(RVA = "0x4E8D7B0", Offset = "0x4E8D7B0", VA = "0x4E8D7B0")]
	internal RealProxy(Type classToProxy, System.Runtime.Remoting.ClientIdentity identity)
	{
	}

	[Token(Token = "0x6001CFC")]
	[Address(RVA = "0x4E8D6D0", Offset = "0x4E8D6D0", VA = "0x4E8D6D0")]
	protected RealProxy(Type classToProxy, IntPtr stub, object stubData)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001CFD")]
	[Address(RVA = "0x4E8D7E0", Offset = "0x4E8D7E0", VA = "0x4E8D7E0")]
	private static extern Type InternalGetProxyType(object transparentProxy);

	[Token(Token = "0x6001CFE")]
	[Address(RVA = "0x4E8D7F0", Offset = "0x4E8D7F0", VA = "0x4E8D7F0")]
	public Type GetProxiedType()
	{
		return null;
	}

	[Token(Token = "0x6001CFF")]
	[Address(RVA = "0x4E8D880", Offset = "0x4E8D880", VA = "0x4E8D880", Slot = "4")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001D02")]
	public abstract IMessage Invoke(IMessage msg);

	[Token(Token = "0x6001D03")]
	[Address(RVA = "0x4E8C6C0", Offset = "0x4E8C6C0", VA = "0x4E8C6C0")]
	internal static object PrivateInvoke(RealProxy rp, IMessage msg, out Exception exc, out object[] out_args)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001D04")]
	[Address(RVA = "0x4E8EB50", Offset = "0x4E8EB50", VA = "0x4E8EB50", Slot = "6")]
	internal virtual extern object InternalGetTransparentProxy(string className);

	[Token(Token = "0x6001D05")]
	[Address(RVA = "0x4E8EB60", Offset = "0x4E8EB60", VA = "0x4E8EB60", Slot = "7")]
	public virtual object GetTransparentProxy()
	{
		return null;
	}

	[Token(Token = "0x6001D06")]
	[Address(RVA = "0x4E8ECD0", Offset = "0x4E8ECD0", VA = "0x4E8ECD0")]
	protected void AttachServer(MarshalByRefObject s)
	{
	}

	[Token(Token = "0x6001D07")]
	[Address(RVA = "0x4E8ECE0", Offset = "0x4E8ECE0", VA = "0x4E8ECE0")]
	internal void SetTargetDomain(int domainId)
	{
	}

	[Token(Token = "0x6001D08")]
	[Address(RVA = "0x4E8ECF0", Offset = "0x4E8ECF0", VA = "0x4E8ECF0")]
	internal object GetAppDomainTarget()
	{
		return null;
	}

	[Token(Token = "0x6001D09")]
	[Address(RVA = "0x4E8E2C0", Offset = "0x4E8E2C0", VA = "0x4E8E2C0")]
	private static object[] ProcessResponse(IMethodReturnMessage mrm, System.Runtime.Remoting.Messaging.MonoMethodMessage call)
	{
		return null;
	}
}
