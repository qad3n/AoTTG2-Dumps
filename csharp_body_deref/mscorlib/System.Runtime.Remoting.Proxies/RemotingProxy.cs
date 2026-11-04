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

[Token(Token = "0x200038D")]
internal class RemotingProxy : RealProxy, IRemotingTypeInfo
{
	[Token(Token = "0x4000EE3")]
	[FieldOffset(Offset = "0x0")]
	private static MethodInfo _cache_GetTypeMethod;

	[Token(Token = "0x4000EE4")]
	[FieldOffset(Offset = "0x8")]
	private static MethodInfo _cache_GetHashCodeMethod;

	[Token(Token = "0x4000EE5")]
	[FieldOffset(Offset = "0x50")]
	private IMessageSink _sink;

	[Token(Token = "0x4000EE6")]
	[FieldOffset(Offset = "0x58")]
	private bool _hasEnvoySink;

	[Token(Token = "0x4000EE7")]
	[FieldOffset(Offset = "0x60")]
	private ConstructionCall _ctorCall;

	[Token(Token = "0x17000359")]
	public string TypeName
	{
		[Token(Token = "0x6001D7E")]
		[Address(RVA = "0x1A07420", Offset = "0x1A05A20", VA = "0x181A07420", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D79")]
	[Address(RVA = "0x1A07250", Offset = "0x1A05850", VA = "0x181A07250")]
	internal RemotingProxy(Type type, System.Runtime.Remoting.ClientIdentity identity)
	{
	}

	[Token(Token = "0x6001D7A")]
	[Address(RVA = "0x1A07350", Offset = "0x1A05950", VA = "0x181A07350")]
	internal RemotingProxy(Type type, string activationUrl, object[] activationAttributes)
	{
	}

	[Token(Token = "0x6001D7B")]
	[Address(RVA = "0x1A06CF0", Offset = "0x1A052F0", VA = "0x181A06CF0", Slot = "5")]
	public override IMessage Invoke(IMessage request)
	{
		return null;
	}

	[Token(Token = "0x6001D7C")]
	[Address(RVA = "0x1A066F0", Offset = "0x1A04CF0", VA = "0x181A066F0")]
	internal void AttachIdentity(System.Runtime.Remoting.Identity identity)
	{
	}

	[Token(Token = "0x6001D7D")]
	[Address(RVA = "0x1A06610", Offset = "0x1A04C10", VA = "0x181A06610")]
	internal IMessage ActivateRemoteObject(IMethodMessage request)
	{
		return null;
	}

	[Token(Token = "0x6001D7F")]
	[Address(RVA = "0x1A069D0", Offset = "0x1A04FD0", VA = "0x181A069D0", Slot = "9")]
	public bool CanCastTo(Type fromType, object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D80")]
	[Address(RVA = "0x1A06C10", Offset = "0x1A05210", VA = "0x181A06C10", Slot = "1")]
	~RemotingProxy()
	{
	}
}
