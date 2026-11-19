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

[Token(Token = "0x200038E")]
internal class ActivationServices
{
	[Token(Token = "0x4000E86")]
	[FieldOffset(Offset = "0x0")]
	private static IActivator _constructionActivator;

	[Token(Token = "0x1700037E")]
	private static IActivator ConstructionActivator
	{
		[Token(Token = "0x6001DF3")]
		[Address(RVA = "0x538A510", Offset = "0x5389510", VA = "0x538A510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DF4")]
	[Address(RVA = "0x537F200", Offset = "0x537E200", VA = "0x537F200")]
	public static IMessage Activate(System.Runtime.Remoting.Proxies.RemotingProxy proxy, ConstructionCall ctorCall)
	{
		return null;
	}

	[Token(Token = "0x6001DF5")]
	[Address(RVA = "0x538A5C0", Offset = "0x53895C0", VA = "0x538A5C0")]
	public static IMessage RemoteActivate(IConstructionCallMessage ctorCall)
	{
		return null;
	}

	[Token(Token = "0x6001DF6")]
	[Address(RVA = "0x537D440", Offset = "0x537C440", VA = "0x537D440")]
	public static ConstructionCall CreateConstructionCall(Type type, string activationUrl, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001DF7")]
	[Address(RVA = "0x538A800", Offset = "0x5389800", VA = "0x538A800")]
	public static IMessage CreateInstanceFromMessage(IConstructionCallMessage ctorCall)
	{
		return null;
	}

	[Token(Token = "0x6001DF8")]
	[Address(RVA = "0x538AC60", Offset = "0x5389C60", VA = "0x538AC60")]
	public static object CreateProxyForType(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001DF9")]
	[Address(RVA = "0x538AC50", Offset = "0x5389C50", VA = "0x538AC50")]
	public static extern object AllocateUninitializedClassInstance(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001DFA")]
	[Address(RVA = "0x538AD80", Offset = "0x5389D80", VA = "0x538AD80")]
	public static extern void EnableProxyActivation(Type type, bool enable);
}
