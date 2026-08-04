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

[Token(Token = "0x200035E")]
internal class RemotingProxy : RealProxy, IRemotingTypeInfo
{
	[Token(Token = "0x4000ED6")]
	[FieldOffset(Offset = "0x0")]
	private static MethodInfo _cache_GetTypeMethod;

	[Token(Token = "0x4000ED7")]
	[FieldOffset(Offset = "0x8")]
	private static MethodInfo _cache_GetHashCodeMethod;

	[Token(Token = "0x4000ED8")]
	[FieldOffset(Offset = "0x50")]
	private IMessageSink _sink;

	[Token(Token = "0x4000ED9")]
	[FieldOffset(Offset = "0x58")]
	private bool _hasEnvoySink;

	[Token(Token = "0x4000EDA")]
	[FieldOffset(Offset = "0x60")]
	private ConstructionCall _ctorCall;

	[Token(Token = "0x17000357")]
	public string TypeName
	{
		[Token(Token = "0x6001D0F")]
		[Address(RVA = "0x3B76C50", Offset = "0x3B76C50", VA = "0x3B76C50", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D0A")]
	[Address(RVA = "0x3B74A00", Offset = "0x3B74A00", VA = "0x3B74A00")]
	internal RemotingProxy(Type type, System.Runtime.Remoting.ClientIdentity identity)
	{
	}

	[Token(Token = "0x6001D0B")]
	[Address(RVA = "0x3B71B70", Offset = "0x3B71B70", VA = "0x3B71B70")]
	internal RemotingProxy(Type type, string activationUrl, object[] activationAttributes)
	{
	}

	[Token(Token = "0x6001D0C")]
	[Address(RVA = "0x3B75830", Offset = "0x3B75830", VA = "0x3B75830", Slot = "5")]
	public override IMessage Invoke(IMessage request)
	{
		return null;
	}

	[Token(Token = "0x6001D0D")]
	[Address(RVA = "0x3B762F0", Offset = "0x3B762F0", VA = "0x3B762F0")]
	internal void AttachIdentity(System.Runtime.Remoting.Identity identity)
	{
	}

	[Token(Token = "0x6001D0E")]
	[Address(RVA = "0x3B735E0", Offset = "0x3B735E0", VA = "0x3B735E0")]
	internal IMessage ActivateRemoteObject(IMethodMessage request)
	{
		return null;
	}

	[Token(Token = "0x6001D10")]
	[Address(RVA = "0x3B76DB0", Offset = "0x3B76DB0", VA = "0x3B76DB0", Slot = "9")]
	public bool CanCastTo(Type fromType, object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D11")]
	[Address(RVA = "0x3B76FC0", Offset = "0x3B76FC0", VA = "0x3B76FC0", Slot = "1")]
	~RemotingProxy()
	{
	}
}
