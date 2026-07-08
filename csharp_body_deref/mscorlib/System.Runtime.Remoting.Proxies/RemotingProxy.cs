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
		[Address(RVA = "0x4E91130", Offset = "0x4E91130", VA = "0x4E91130", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D0A")]
	[Address(RVA = "0x4E8EEE0", Offset = "0x4E8EEE0", VA = "0x4E8EEE0")]
	internal RemotingProxy(Type type, System.Runtime.Remoting.ClientIdentity identity)
	{
	}

	[Token(Token = "0x6001D0B")]
	[Address(RVA = "0x4E8C050", Offset = "0x4E8C050", VA = "0x4E8C050")]
	internal RemotingProxy(Type type, string activationUrl, object[] activationAttributes)
	{
	}

	[Token(Token = "0x6001D0C")]
	[Address(RVA = "0x4E8FD10", Offset = "0x4E8FD10", VA = "0x4E8FD10", Slot = "5")]
	public override IMessage Invoke(IMessage request)
	{
		return null;
	}

	[Token(Token = "0x6001D0D")]
	[Address(RVA = "0x4E907D0", Offset = "0x4E907D0", VA = "0x4E907D0")]
	internal void AttachIdentity(System.Runtime.Remoting.Identity identity)
	{
	}

	[Token(Token = "0x6001D0E")]
	[Address(RVA = "0x4E8DAC0", Offset = "0x4E8DAC0", VA = "0x4E8DAC0")]
	internal IMessage ActivateRemoteObject(IMethodMessage request)
	{
		return null;
	}

	[Token(Token = "0x6001D10")]
	[Address(RVA = "0x4E91290", Offset = "0x4E91290", VA = "0x4E91290", Slot = "9")]
	public bool CanCastTo(Type fromType, object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D11")]
	[Address(RVA = "0x4E914A0", Offset = "0x4E914A0", VA = "0x4E914A0", Slot = "1")]
	~RemotingProxy()
	{
	}
}
