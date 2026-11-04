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

[Token(Token = "0x20003B5")]
internal class ActivationServices
{
	[Token(Token = "0x4000F26")]
	[FieldOffset(Offset = "0x0")]
	private static IActivator _constructionActivator;

	[Token(Token = "0x1700037F")]
	private static IActivator ConstructionActivator
	{
		[Token(Token = "0x6001E1D")]
		[Address(RVA = "0x19ED1E0", Offset = "0x19EB7E0", VA = "0x1819ED1E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E1E")]
	[Address(RVA = "0x19EC280", Offset = "0x19EA880", VA = "0x1819EC280")]
	public static IMessage Activate(System.Runtime.Remoting.Proxies.RemotingProxy proxy, ConstructionCall ctorCall)
	{
		return null;
	}

	[Token(Token = "0x6001E1F")]
	[Address(RVA = "0x19ED120", Offset = "0x19EB720", VA = "0x1819ED120")]
	public static IMessage RemoteActivate(IConstructionCallMessage ctorCall)
	{
		return null;
	}

	[Token(Token = "0x6001E20")]
	[Address(RVA = "0x19EC450", Offset = "0x19EAA50", VA = "0x1819EC450")]
	public static ConstructionCall CreateConstructionCall(Type type, string activationUrl, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001E21")]
	[Address(RVA = "0x19ECCA0", Offset = "0x19EB2A0", VA = "0x1819ECCA0")]
	public static IMessage CreateInstanceFromMessage(IConstructionCallMessage ctorCall)
	{
		return null;
	}

	[Token(Token = "0x6001E22")]
	[Address(RVA = "0x19ECFD0", Offset = "0x19EB5D0", VA = "0x1819ECFD0")]
	public static object CreateProxyForType(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001E23")]
	[Address(RVA = "0x19EC440", Offset = "0x19EAA40", VA = "0x1819EC440")]
	public static extern object AllocateUninitializedClassInstance(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001E24")]
	[Address(RVA = "0x19ED110", Offset = "0x19EB710", VA = "0x1819ED110")]
	public static extern void EnableProxyActivation(Type type, bool enable);
}
