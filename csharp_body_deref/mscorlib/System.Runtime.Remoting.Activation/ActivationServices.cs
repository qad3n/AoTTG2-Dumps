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
		[Address(RVA = "0x4E9CAF0", Offset = "0x4E9CAF0", VA = "0x4E9CAF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DAF")]
	[Address(RVA = "0x4E90EC0", Offset = "0x4E90EC0", VA = "0x4E90EC0")]
	public static IMessage Activate(System.Runtime.Remoting.Proxies.RemotingProxy proxy, ConstructionCall ctorCall)
	{
		return null;
	}

	[Token(Token = "0x6001DB0")]
	[Address(RVA = "0x4E9CBA0", Offset = "0x4E9CBA0", VA = "0x4E9CBA0")]
	public static IMessage RemoteActivate(IConstructionCallMessage ctorCall)
	{
		return null;
	}

	[Token(Token = "0x6001DB1")]
	[Address(RVA = "0x4E8EF50", Offset = "0x4E8EF50", VA = "0x4E8EF50")]
	public static ConstructionCall CreateConstructionCall(Type type, string activationUrl, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001DB2")]
	[Address(RVA = "0x4E9CE10", Offset = "0x4E9CE10", VA = "0x4E9CE10")]
	public static IMessage CreateInstanceFromMessage(IConstructionCallMessage ctorCall)
	{
		return null;
	}

	[Token(Token = "0x6001DB3")]
	[Address(RVA = "0x4E9D270", Offset = "0x4E9D270", VA = "0x4E9D270")]
	public static object CreateProxyForType(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001DB4")]
	[Address(RVA = "0x4E9D260", Offset = "0x4E9D260", VA = "0x4E9D260")]
	public static extern object AllocateUninitializedClassInstance(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001DB5")]
	[Address(RVA = "0x4E9D390", Offset = "0x4E9D390", VA = "0x4E9D390")]
	public static extern void EnableProxyActivation(Type type, bool enable);
}
