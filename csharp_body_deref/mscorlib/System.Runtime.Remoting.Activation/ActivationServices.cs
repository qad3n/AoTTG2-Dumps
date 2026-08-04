// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Activation.ActivationServices
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.Remoting.Messaging;
using System.Runtime.Remoting.Proxies;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x2000386")]
internal class ActivationServices
{
	[Token(Token = "0x4000F19")]
	[FieldOffset(Offset = "0x0")]
	private static IActivator _constructionActivator;

	[Token(Token = "0x1700037D")]
	private static IActivator ConstructionActivator
	{
		[Token(Token = "0x6001DAE")]
		[Address(RVA = "0x3B82610", Offset = "0x3B82610", VA = "0x3B82610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DAF")]
	[Address(RVA = "0x3B769E0", Offset = "0x3B769E0", VA = "0x3B769E0")]
	public static IMessage Activate(System.Runtime.Remoting.Proxies.RemotingProxy proxy, ConstructionCall ctorCall)
	{
		return null;
	}

	[Token(Token = "0x6001DB0")]
	[Address(RVA = "0x3B826C0", Offset = "0x3B826C0", VA = "0x3B826C0")]
	public static IMessage RemoteActivate(IConstructionCallMessage ctorCall)
	{
		return null;
	}

	[Token(Token = "0x6001DB1")]
	[Address(RVA = "0x3B74A70", Offset = "0x3B74A70", VA = "0x3B74A70")]
	public static ConstructionCall CreateConstructionCall(Type type, string activationUrl, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001DB2")]
	[Address(RVA = "0x3B82930", Offset = "0x3B82930", VA = "0x3B82930")]
	public static IMessage CreateInstanceFromMessage(IConstructionCallMessage ctorCall)
	{
		return null;
	}

	[Token(Token = "0x6001DB3")]
	[Address(RVA = "0x3B82D90", Offset = "0x3B82D90", VA = "0x3B82D90")]
	public static object CreateProxyForType(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001DB4")]
	[Address(RVA = "0x3B82D80", Offset = "0x3B82D80", VA = "0x3B82D80")]
	public static extern object AllocateUninitializedClassInstance(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001DB5")]
	[Address(RVA = "0x3B82EB0", Offset = "0x3B82EB0", VA = "0x3B82EB0")]
	public static extern void EnableProxyActivation(Type type, bool enable);
}
