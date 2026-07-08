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
		[Address(RVA = "0x4E88BA0", Offset = "0x4E88BA0", VA = "0x4E88BA0")]
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
	[Address(RVA = "0x4E84A80", Offset = "0x4E84A80", VA = "0x4E84A80")]
	static RemotingServices()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C7E")]
	[Address(RVA = "0x4E84E20", Offset = "0x4E84E20", VA = "0x4E84E20")]
	internal static extern object InternalExecute(MethodBase method, object obj, object[] parameters, out object[] out_args);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C7F")]
	[Address(RVA = "0x4E84E30", Offset = "0x4E84E30", VA = "0x4E84E30")]
	internal static extern MethodBase GetVirtualMethod(Type type, MethodBase method);

	[Token(Token = "0x6001C80")]
	[Address(RVA = "0x4E84E40", Offset = "0x4E84E40", VA = "0x4E84E40")]
	public static bool IsTransparentProxy(object proxy)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C81")]
	[Address(RVA = "0x4E84E80", Offset = "0x4E84E80", VA = "0x4E84E80")]
	internal static IMethodReturnMessage InternalExecuteMessage(MarshalByRefObject target, IMethodCallMessage reqMsg)
	{
		return null;
	}

	[Token(Token = "0x6001C82")]
	[Address(RVA = "0x4E85B60", Offset = "0x4E85B60", VA = "0x4E85B60")]
	[ComVisible(true)]
	public static object Connect(Type classToProxy, string url)
	{
		return null;
	}

	[Token(Token = "0x6001C83")]
	[Address(RVA = "0x4E85CB0", Offset = "0x4E85CB0", VA = "0x4E85CB0")]
	[ComVisible(true)]
	public static object Connect(Type classToProxy, string url, object data)
	{
		return null;
	}

	[Token(Token = "0x6001C84")]
	[Address(RVA = "0x4E85DA0", Offset = "0x4E85DA0", VA = "0x4E85DA0")]
	public static Type GetServerTypeForUri(string URI)
	{
		return null;
	}

	[Token(Token = "0x6001C85")]
	[Address(RVA = "0x4E7B980", Offset = "0x4E7B980", VA = "0x4E7B980")]
	public static object Unmarshal(ObjRef objectRef)
	{
		return null;
	}

	[Token(Token = "0x6001C86")]
	[Address(RVA = "0x4E86170", Offset = "0x4E86170", VA = "0x4E86170")]
	public static object Unmarshal(ObjRef objectRef, bool fRefine)
	{
		return null;
	}

	[Token(Token = "0x6001C87")]
	[Address(RVA = "0x4E86610", Offset = "0x4E86610", VA = "0x4E86610")]
	public static ObjRef Marshal(MarshalByRefObject Obj)
	{
		return null;
	}

	[Token(Token = "0x6001C88")]
	[Address(RVA = "0x4E86650", Offset = "0x4E86650", VA = "0x4E86650")]
	public static ObjRef Marshal(MarshalByRefObject Obj, string ObjURI, Type RequestedType)
	{
		return null;
	}

	[Token(Token = "0x6001C89")]
	[Address(RVA = "0x4E86700", Offset = "0x4E86700", VA = "0x4E86700")]
	private static string NewUri()
	{
		return null;
	}

	[Token(Token = "0x6001C8A")]
	[Address(RVA = "0x4E866C0", Offset = "0x4E866C0", VA = "0x4E866C0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static RealProxy GetRealProxy(object proxy)
	{
		return null;
	}

	[Token(Token = "0x6001C8B")]
	[Address(RVA = "0x4E86FC0", Offset = "0x4E86FC0", VA = "0x4E86FC0")]
	public static MethodBase GetMethodBaseFromMethodMessage(IMethodMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001C8C")]
	[Address(RVA = "0x4E872B0", Offset = "0x4E872B0", VA = "0x4E872B0")]
	internal static MethodBase GetMethodBaseFromName(Type type, string methodName, Type[] signature)
	{
		return null;
	}

	[Token(Token = "0x6001C8D")]
	[Address(RVA = "0x4E87480", Offset = "0x4E87480", VA = "0x4E87480")]
	private static MethodBase FindInterfaceMethod(Type type, string methodName, Type[] signature)
	{
		return null;
	}

	[Token(Token = "0x6001C8E")]
	[Address(RVA = "0x4E875B0", Offset = "0x4E875B0", VA = "0x4E875B0")]
	public static void GetObjectData(object obj, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C8F")]
	[Address(RVA = "0x4E87660", Offset = "0x4E87660", VA = "0x4E87660")]
	public static bool IsOneWay(MethodBase method)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C90")]
	[Address(RVA = "0x4E876E0", Offset = "0x4E876E0", VA = "0x4E876E0")]
	internal static object CreateClientProxy(ActivatedClientTypeEntry entry, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001C91")]
	[Address(RVA = "0x4E877E0", Offset = "0x4E877E0", VA = "0x4E877E0")]
	internal static object CreateClientProxy(Type objectType, string url, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001C92")]
	[Address(RVA = "0x4E879D0", Offset = "0x4E879D0", VA = "0x4E879D0")]
	internal static object CreateClientProxy(WellKnownClientTypeEntry entry)
	{
		return null;
	}

	[Token(Token = "0x6001C93")]
	[Address(RVA = "0x4E87A40", Offset = "0x4E87A40", VA = "0x4E87A40")]
	internal static object CreateClientProxyForContextBound(Type type, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001C94")]
	[Address(RVA = "0x4E85E70", Offset = "0x4E85E70", VA = "0x4E85E70")]
	internal static System.Runtime.Remoting.Identity GetIdentityForUri(string uri)
	{
		return null;
	}

	[Token(Token = "0x6001C95")]
	[Address(RVA = "0x4E87C30", Offset = "0x4E87C30", VA = "0x4E87C30")]
	private static string RemoveAppNameFromUri(string uri)
	{
		return null;
	}

	[Token(Token = "0x6001C96")]
	[Address(RVA = "0x4E87D50", Offset = "0x4E87D50", VA = "0x4E87D50")]
	internal static System.Runtime.Remoting.ClientIdentity GetOrCreateClientIdentity(ObjRef objRef, Type proxyType, out object clientProxy)
	{
		return null;
	}

	[Token(Token = "0x6001C97")]
	[Address(RVA = "0x4E87900", Offset = "0x4E87900", VA = "0x4E87900")]
	private static IMessageSink GetClientChannelSinkChain(string url, object channelData, out string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001C98")]
	[Address(RVA = "0x4E886C0", Offset = "0x4E886C0", VA = "0x4E886C0")]
	internal static System.Runtime.Remoting.ClientActivatedIdentity CreateContextBoundObjectIdentity(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6001C99")]
	[Address(RVA = "0x4E86E90", Offset = "0x4E86E90", VA = "0x4E86E90")]
	internal static System.Runtime.Remoting.ClientActivatedIdentity CreateClientActivatedServerIdentity(MarshalByRefObject realObject, Type objectType, string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001C9A")]
	[Address(RVA = "0x4E7CEE0", Offset = "0x4E7CEE0", VA = "0x4E7CEE0")]
	internal static System.Runtime.Remoting.ServerIdentity CreateWellKnownServerIdentity(Type objectType, string objectUri, WellKnownObjectMode mode)
	{
		return null;
	}

	[Token(Token = "0x6001C9B")]
	[Address(RVA = "0x4E86AB0", Offset = "0x4E86AB0", VA = "0x4E86AB0")]
	private static void RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity identity)
	{
	}

	[Token(Token = "0x6001C9C")]
	[Address(RVA = "0x4E864C0", Offset = "0x4E864C0", VA = "0x4E864C0")]
	internal static object GetProxyForRemoteObject(ObjRef objref, Type classToProxy)
	{
		return null;
	}

	[Token(Token = "0x6001C9D")]
	[Address(RVA = "0x4E85C50", Offset = "0x4E85C50", VA = "0x4E85C50")]
	internal static object GetRemoteObject(ObjRef objRef, Type proxyType)
	{
		return null;
	}

	[Token(Token = "0x6001C9E")]
	[Address(RVA = "0x4E88960", Offset = "0x4E88960", VA = "0x4E88960")]
	internal static byte[] SerializeCallData(object obj)
	{
		return null;
	}

	[Token(Token = "0x6001C9F")]
	[Address(RVA = "0x4E88BB0", Offset = "0x4E88BB0", VA = "0x4E88BB0")]
	internal static object DeserializeCallData(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x6001CA0")]
	[Address(RVA = "0x4E88E10", Offset = "0x4E88E10", VA = "0x4E88E10")]
	internal static byte[] SerializeExceptionData(Exception ex)
	{
		return null;
	}

	[Token(Token = "0x6001CA1")]
	[Address(RVA = "0x4E84DC0", Offset = "0x4E84DC0", VA = "0x4E84DC0")]
	private static void RegisterInternalChannels()
	{
	}

	[Token(Token = "0x6001CA2")]
	[Address(RVA = "0x4E88440", Offset = "0x4E88440", VA = "0x4E88440")]
	internal static void DisposeIdentity(System.Runtime.Remoting.Identity ident)
	{
	}

	[Token(Token = "0x6001CA3")]
	[Address(RVA = "0x4E88F90", Offset = "0x4E88F90", VA = "0x4E88F90")]
	internal static System.Runtime.Remoting.Identity GetMessageTargetIdentity(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001CA4")]
	[Address(RVA = "0x4E89360", Offset = "0x4E89360", VA = "0x4E89360")]
	internal static void SetMessageTargetIdentity(IMessage msg, System.Runtime.Remoting.Identity ident)
	{
	}

	[Token(Token = "0x6001CA5")]
	[Address(RVA = "0x4E89470", Offset = "0x4E89470", VA = "0x4E89470")]
	internal static bool UpdateOutArgObject(ParameterInfo pi, object local, object remote)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA6")]
	[Address(RVA = "0x4E87BD0", Offset = "0x4E87BD0", VA = "0x4E87BD0")]
	private static string GetNormalizedUri(string uri)
	{
		return null;
	}
}
