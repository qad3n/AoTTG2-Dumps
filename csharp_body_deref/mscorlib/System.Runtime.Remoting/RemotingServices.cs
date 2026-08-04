// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.RemotingServices
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using System.Runtime.Remoting.Proxies;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x200034B")]
[ComVisible(true)]
public static class RemotingServices
{
	[Serializable]
	[Token(Token = "0x200034C")]
	private class CACD
	{
		[Token(Token = "0x4000EAB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public object d;

		[Token(Token = "0x4000EAC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public object c;

		[Token(Token = "0x6001CA7")]
		[Address(RVA = "0x3B6E6C0", Offset = "0x3B6E6C0", VA = "0x3B6E6C0")]
		public CACD()
		{
		}
	}

	[Token(Token = "0x4000EA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Hashtable uri_hash;

	[Token(Token = "0x4000EA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static BinaryFormatter _serializationFormatter;

	[Token(Token = "0x4000EA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static BinaryFormatter _deserializationFormatter;

	[Token(Token = "0x4000EA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static string app_id;

	[Token(Token = "0x4000EA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly object app_id_lock;

	[Token(Token = "0x4000EA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static int next_id;

	[Token(Token = "0x4000EA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly MethodInfo FieldSetterMethod;

	[Token(Token = "0x4000EAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static readonly MethodInfo FieldGetterMethod;

	[Token(Token = "0x6001C7D")]
	[Address(RVA = "0x3B6A5A0", Offset = "0x3B6A5A0", VA = "0x3B6A5A0")]
	static RemotingServices()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C7E")]
	[Address(RVA = "0x3B6A940", Offset = "0x3B6A940", VA = "0x3B6A940")]
	internal static extern object InternalExecute(MethodBase method, object obj, object[] parameters, out object[] out_args);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C7F")]
	[Address(RVA = "0x3B6A950", Offset = "0x3B6A950", VA = "0x3B6A950")]
	internal static extern MethodBase GetVirtualMethod(Type type, MethodBase method);

	[Token(Token = "0x6001C80")]
	[Address(RVA = "0x3B6A960", Offset = "0x3B6A960", VA = "0x3B6A960")]
	public static bool IsTransparentProxy(object proxy)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C81")]
	[Address(RVA = "0x3B6A9A0", Offset = "0x3B6A9A0", VA = "0x3B6A9A0")]
	internal static IMethodReturnMessage InternalExecuteMessage(MarshalByRefObject target, IMethodCallMessage reqMsg)
	{
		return null;
	}

	[Token(Token = "0x6001C82")]
	[Address(RVA = "0x3B6B680", Offset = "0x3B6B680", VA = "0x3B6B680")]
	[ComVisible(true)]
	public static object Connect(Type classToProxy, string url)
	{
		return null;
	}

	[Token(Token = "0x6001C83")]
	[Address(RVA = "0x3B6B7D0", Offset = "0x3B6B7D0", VA = "0x3B6B7D0")]
	[ComVisible(true)]
	public static object Connect(Type classToProxy, string url, object data)
	{
		return null;
	}

	[Token(Token = "0x6001C84")]
	[Address(RVA = "0x3B6B8C0", Offset = "0x3B6B8C0", VA = "0x3B6B8C0")]
	public static Type GetServerTypeForUri(string URI)
	{
		return null;
	}

	[Token(Token = "0x6001C85")]
	[Address(RVA = "0x3B614A0", Offset = "0x3B614A0", VA = "0x3B614A0")]
	public static object Unmarshal(ObjRef objectRef)
	{
		return null;
	}

	[Token(Token = "0x6001C86")]
	[Address(RVA = "0x3B6BC90", Offset = "0x3B6BC90", VA = "0x3B6BC90")]
	public static object Unmarshal(ObjRef objectRef, bool fRefine)
	{
		return null;
	}

	[Token(Token = "0x6001C87")]
	[Address(RVA = "0x3B6C130", Offset = "0x3B6C130", VA = "0x3B6C130")]
	public static ObjRef Marshal(MarshalByRefObject Obj)
	{
		return null;
	}

	[Token(Token = "0x6001C88")]
	[Address(RVA = "0x3B6C170", Offset = "0x3B6C170", VA = "0x3B6C170")]
	public static ObjRef Marshal(MarshalByRefObject Obj, string ObjURI, Type RequestedType)
	{
		return null;
	}

	[Token(Token = "0x6001C89")]
	[Address(RVA = "0x3B6C220", Offset = "0x3B6C220", VA = "0x3B6C220")]
	private static string NewUri()
	{
		return null;
	}

	[Token(Token = "0x6001C8A")]
	[Address(RVA = "0x3B6C1E0", Offset = "0x3B6C1E0", VA = "0x3B6C1E0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static RealProxy GetRealProxy(object proxy)
	{
		return null;
	}

	[Token(Token = "0x6001C8B")]
	[Address(RVA = "0x3B6CAE0", Offset = "0x3B6CAE0", VA = "0x3B6CAE0")]
	public static MethodBase GetMethodBaseFromMethodMessage(IMethodMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001C8C")]
	[Address(RVA = "0x3B6CDD0", Offset = "0x3B6CDD0", VA = "0x3B6CDD0")]
	internal static MethodBase GetMethodBaseFromName(Type type, string methodName, Type[] signature)
	{
		return null;
	}

	[Token(Token = "0x6001C8D")]
	[Address(RVA = "0x3B6CFA0", Offset = "0x3B6CFA0", VA = "0x3B6CFA0")]
	private static MethodBase FindInterfaceMethod(Type type, string methodName, Type[] signature)
	{
		return null;
	}

	[Token(Token = "0x6001C8E")]
	[Address(RVA = "0x3B6D0D0", Offset = "0x3B6D0D0", VA = "0x3B6D0D0")]
	public static void GetObjectData(object obj, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C8F")]
	[Address(RVA = "0x3B6D180", Offset = "0x3B6D180", VA = "0x3B6D180")]
	public static bool IsOneWay(MethodBase method)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C90")]
	[Address(RVA = "0x3B6D200", Offset = "0x3B6D200", VA = "0x3B6D200")]
	internal static object CreateClientProxy(ActivatedClientTypeEntry entry, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001C91")]
	[Address(RVA = "0x3B6D300", Offset = "0x3B6D300", VA = "0x3B6D300")]
	internal static object CreateClientProxy(Type objectType, string url, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001C92")]
	[Address(RVA = "0x3B6D4F0", Offset = "0x3B6D4F0", VA = "0x3B6D4F0")]
	internal static object CreateClientProxy(WellKnownClientTypeEntry entry)
	{
		return null;
	}

	[Token(Token = "0x6001C93")]
	[Address(RVA = "0x3B6D560", Offset = "0x3B6D560", VA = "0x3B6D560")]
	internal static object CreateClientProxyForContextBound(Type type, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001C94")]
	[Address(RVA = "0x3B6B990", Offset = "0x3B6B990", VA = "0x3B6B990")]
	internal static System.Runtime.Remoting.Identity GetIdentityForUri(string uri)
	{
		return null;
	}

	[Token(Token = "0x6001C95")]
	[Address(RVA = "0x3B6D750", Offset = "0x3B6D750", VA = "0x3B6D750")]
	private static string RemoveAppNameFromUri(string uri)
	{
		return null;
	}

	[Token(Token = "0x6001C96")]
	[Address(RVA = "0x3B6D870", Offset = "0x3B6D870", VA = "0x3B6D870")]
	internal static System.Runtime.Remoting.ClientIdentity GetOrCreateClientIdentity(ObjRef objRef, Type proxyType, out object clientProxy)
	{
		return null;
	}

	[Token(Token = "0x6001C97")]
	[Address(RVA = "0x3B6D420", Offset = "0x3B6D420", VA = "0x3B6D420")]
	private static IMessageSink GetClientChannelSinkChain(string url, object channelData, out string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001C98")]
	[Address(RVA = "0x3B6E1E0", Offset = "0x3B6E1E0", VA = "0x3B6E1E0")]
	internal static System.Runtime.Remoting.ClientActivatedIdentity CreateContextBoundObjectIdentity(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6001C99")]
	[Address(RVA = "0x3B6C9B0", Offset = "0x3B6C9B0", VA = "0x3B6C9B0")]
	internal static System.Runtime.Remoting.ClientActivatedIdentity CreateClientActivatedServerIdentity(MarshalByRefObject realObject, Type objectType, string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001C9A")]
	[Address(RVA = "0x3B62A00", Offset = "0x3B62A00", VA = "0x3B62A00")]
	internal static System.Runtime.Remoting.ServerIdentity CreateWellKnownServerIdentity(Type objectType, string objectUri, WellKnownObjectMode mode)
	{
		return null;
	}

	[Token(Token = "0x6001C9B")]
	[Address(RVA = "0x3B6C5D0", Offset = "0x3B6C5D0", VA = "0x3B6C5D0")]
	private static void RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity identity)
	{
	}

	[Token(Token = "0x6001C9C")]
	[Address(RVA = "0x3B6BFE0", Offset = "0x3B6BFE0", VA = "0x3B6BFE0")]
	internal static object GetProxyForRemoteObject(ObjRef objref, Type classToProxy)
	{
		return null;
	}

	[Token(Token = "0x6001C9D")]
	[Address(RVA = "0x3B6B770", Offset = "0x3B6B770", VA = "0x3B6B770")]
	internal static object GetRemoteObject(ObjRef objRef, Type proxyType)
	{
		return null;
	}

	[Token(Token = "0x6001C9E")]
	[Address(RVA = "0x3B6E480", Offset = "0x3B6E480", VA = "0x3B6E480")]
	internal static byte[] SerializeCallData(object obj)
	{
		return null;
	}

	[Token(Token = "0x6001C9F")]
	[Address(RVA = "0x3B6E6D0", Offset = "0x3B6E6D0", VA = "0x3B6E6D0")]
	internal static object DeserializeCallData(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x6001CA0")]
	[Address(RVA = "0x3B6E930", Offset = "0x3B6E930", VA = "0x3B6E930")]
	internal static byte[] SerializeExceptionData(Exception ex)
	{
		return null;
	}

	[Token(Token = "0x6001CA1")]
	[Address(RVA = "0x3B6A8E0", Offset = "0x3B6A8E0", VA = "0x3B6A8E0")]
	private static void RegisterInternalChannels()
	{
	}

	[Token(Token = "0x6001CA2")]
	[Address(RVA = "0x3B6DF60", Offset = "0x3B6DF60", VA = "0x3B6DF60")]
	internal static void DisposeIdentity(System.Runtime.Remoting.Identity ident)
	{
	}

	[Token(Token = "0x6001CA3")]
	[Address(RVA = "0x3B6EAB0", Offset = "0x3B6EAB0", VA = "0x3B6EAB0")]
	internal static System.Runtime.Remoting.Identity GetMessageTargetIdentity(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001CA4")]
	[Address(RVA = "0x3B6EE80", Offset = "0x3B6EE80", VA = "0x3B6EE80")]
	internal static void SetMessageTargetIdentity(IMessage msg, System.Runtime.Remoting.Identity ident)
	{
	}

	[Token(Token = "0x6001CA5")]
	[Address(RVA = "0x3B6EF90", Offset = "0x3B6EF90", VA = "0x3B6EF90")]
	internal static bool UpdateOutArgObject(ParameterInfo pi, object local, object remote)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA6")]
	[Address(RVA = "0x3B6D6F0", Offset = "0x3B6D6F0", VA = "0x3B6D6F0")]
	private static string GetNormalizedUri(string uri)
	{
		return null;
	}
}
