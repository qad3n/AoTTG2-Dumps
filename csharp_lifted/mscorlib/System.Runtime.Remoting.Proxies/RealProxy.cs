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
[Token(Token = "0x2000365")]
[ComVisible(true)]
public abstract class RealProxy
{
	[Token(Token = "0x4000E3B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Type class_to_proxy;

	[Token(Token = "0x4000E3C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal Context _targetContext;

	[Token(Token = "0x4000E3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal MarshalByRefObject _server;

	[Token(Token = "0x4000E3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int _targetDomainId;

	[Token(Token = "0x4000E3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal string _targetUri;

	[Token(Token = "0x4000E40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal System.Runtime.Remoting.Identity _objectIdentity;

	[Token(Token = "0x4000E41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private object _objTP;

	[Token(Token = "0x4000E42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private object _stubData;

	[Token(Token = "0x17000357")]
	internal System.Runtime.Remoting.Identity ObjectIdentity
	{
		[Token(Token = "0x6001D45")]
		[Address(RVA = "0x537BD20", Offset = "0x537AD20", VA = "0x537BD20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D46")]
		[Address(RVA = "0x537BD30", Offset = "0x537AD30", VA = "0x537BD30")]
		set
		{
		}
	}

	[Token(Token = "0x6001D3E")]
	[Address(RVA = "0x537BAD0", Offset = "0x537AAD0", VA = "0x537BAD0")]
	protected RealProxy()
	{
	}

	[Token(Token = "0x6001D3F")]
	[Address(RVA = "0x537BAE0", Offset = "0x537AAE0", VA = "0x537BAE0")]
	protected RealProxy(Type classToProxy)
	{
	}

	[Token(Token = "0x6001D40")]
	[Address(RVA = "0x537BBD0", Offset = "0x537ABD0", VA = "0x537BBD0")]
	internal RealProxy(Type classToProxy, System.Runtime.Remoting.ClientIdentity identity)
	{
	}

	[Token(Token = "0x6001D41")]
	[Address(RVA = "0x537BAF0", Offset = "0x537AAF0", VA = "0x537BAF0")]
	protected RealProxy(Type classToProxy, IntPtr stub, object stubData)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001D42")]
	[Address(RVA = "0x537BC00", Offset = "0x537AC00", VA = "0x537BC00")]
	private static extern Type InternalGetProxyType(object transparentProxy);

	[Token(Token = "0x6001D43")]
	[Address(RVA = "0x537BC10", Offset = "0x537AC10", VA = "0x537BC10")]
	public Type GetProxiedType()
	{
		return null;
	}

	[Token(Token = "0x6001D44")]
	[Address(RVA = "0x537BCA0", Offset = "0x537ACA0", VA = "0x537BCA0", Slot = "4")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001D47")]
	public abstract IMessage Invoke(IMessage msg);

	[Token(Token = "0x6001D48")]
	[Address(RVA = "0x537AB00", Offset = "0x5379B00", VA = "0x537AB00")]
	internal static object PrivateInvoke(RealProxy rp, IMessage msg, out Exception exc, out object[] out_args)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001D49")]
	[Address(RVA = "0x537CFE0", Offset = "0x537BFE0", VA = "0x537CFE0", Slot = "6")]
	internal virtual extern object InternalGetTransparentProxy(string className);

	[Token(Token = "0x6001D4A")]
	[Address(RVA = "0x537CFF0", Offset = "0x537BFF0", VA = "0x537CFF0", Slot = "7")]
	public virtual object GetTransparentProxy()
	{
		return null;
	}

	[Token(Token = "0x6001D4B")]
	[Address(RVA = "0x537D160", Offset = "0x537C160", VA = "0x537D160")]
	protected void AttachServer(MarshalByRefObject s)
	{
	}

	[Token(Token = "0x6001D4C")]
	[Address(RVA = "0x537D170", Offset = "0x537C170", VA = "0x537D170")]
	internal void SetTargetDomain(int domainId)
	{
	}

	[Token(Token = "0x6001D4D")]
	[Address(RVA = "0x537D180", Offset = "0x537C180", VA = "0x537D180")]
	internal object GetAppDomainTarget()
	{
		return null;
	}

	[Token(Token = "0x6001D4E")]
	[Address(RVA = "0x537C6F0", Offset = "0x537B6F0", VA = "0x537C6F0")]
	private static object[] ProcessResponse(IMethodReturnMessage mrm, System.Runtime.Remoting.Messaging.MonoMethodMessage call)
	{
		return null;
	}
}
