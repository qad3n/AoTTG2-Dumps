// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Proxies.RemotingProxy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Proxies;

[Token(Token = "0x2000366")]
internal class RemotingProxy : RealProxy, IRemotingTypeInfo
{
	[Token(Token = "0x4000E43")]
	[FieldOffset(Offset = "0x0")]
	private static MethodInfo _cache_GetTypeMethod;

	[Token(Token = "0x4000E44")]
	[FieldOffset(Offset = "0x8")]
	private static MethodInfo _cache_GetHashCodeMethod;

	[Token(Token = "0x4000E45")]
	[FieldOffset(Offset = "0x50")]
	private IMessageSink _sink;

	[Token(Token = "0x4000E46")]
	[FieldOffset(Offset = "0x58")]
	private bool _hasEnvoySink;

	[Token(Token = "0x4000E47")]
	[FieldOffset(Offset = "0x60")]
	private ConstructionCall _ctorCall;

	[Token(Token = "0x17000358")]
	public string TypeName
	{
		[Token(Token = "0x6001D54")]
		[Address(RVA = "0x537F470", Offset = "0x537E470", VA = "0x537F470", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D4F")]
	[Address(RVA = "0x537D3D0", Offset = "0x537C3D0", VA = "0x537D3D0")]
	internal RemotingProxy(Type type, System.Runtime.Remoting.ClientIdentity identity)
	{
	}

	[Token(Token = "0x6001D50")]
	[Address(RVA = "0x537A480", Offset = "0x5379480", VA = "0x537A480")]
	internal RemotingProxy(Type type, string activationUrl, object[] activationAttributes)
	{
	}

	[Token(Token = "0x6001D51")]
	[Address(RVA = "0x537E070", Offset = "0x537D070", VA = "0x537E070", Slot = "5")]
	public override IMessage Invoke(IMessage request)
	{
		return null;
	}

	[Token(Token = "0x6001D52")]
	[Address(RVA = "0x537EB10", Offset = "0x537DB10", VA = "0x537EB10")]
	internal void AttachIdentity(System.Runtime.Remoting.Identity identity)
	{
	}

	[Token(Token = "0x6001D53")]
	[Address(RVA = "0x537BEF0", Offset = "0x537AEF0", VA = "0x537BEF0")]
	internal IMessage ActivateRemoteObject(IMethodMessage request)
	{
		return null;
	}

	[Token(Token = "0x6001D55")]
	[Address(RVA = "0x537F5D0", Offset = "0x537E5D0", VA = "0x537F5D0", Slot = "9")]
	public bool CanCastTo(Type fromType, object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D56")]
	[Address(RVA = "0x537F7E0", Offset = "0x537E7E0", VA = "0x537F7E0", Slot = "1")]
	~RemotingProxy()
	{
	}
}
