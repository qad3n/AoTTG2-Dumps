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

[Token(Token = "0x200037A")]
[ComVisible(true)]
public static class RemotingServices
{
	[Serializable]
	[Token(Token = "0x200037B")]
	private class CACD
	{
		[Token(Token = "0x4000EB8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public object d;

		[Token(Token = "0x4000EB9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public object c;

		[Token(Token = "0x6001D16")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public CACD()
		{
		}
	}

	[Token(Token = "0x4000EB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Hashtable uri_hash;

	[Token(Token = "0x4000EB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static BinaryFormatter _serializationFormatter;

	[Token(Token = "0x4000EB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static BinaryFormatter _deserializationFormatter;

	[Token(Token = "0x4000EB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static string app_id;

	[Token(Token = "0x4000EB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly object app_id_lock;

	[Token(Token = "0x4000EB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static int next_id;

	[Token(Token = "0x4000EB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly MethodInfo FieldSetterMethod;

	[Token(Token = "0x4000EB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static readonly MethodInfo FieldGetterMethod;

	[Token(Token = "0x6001CEC")]
	[Address(RVA = "0x19E4280", Offset = "0x19E2880", VA = "0x1819E4280")]
	static RemotingServices()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001CED")]
	[Address(RVA = "0x19E3040", Offset = "0x19E1640", VA = "0x1819E3040")]
	internal static extern object InternalExecute(MethodBase method, object obj, object[] parameters, out object[] out_args);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001CEE")]
	[Address(RVA = "0x19E28A0", Offset = "0x19E0EA0", VA = "0x1819E28A0")]
	internal static extern MethodBase GetVirtualMethod(Type type, MethodBase method);

	[Token(Token = "0x6001CEF")]
	[Address(RVA = "0x19E30D0", Offset = "0x19E16D0", VA = "0x1819E30D0")]
	public static bool IsTransparentProxy(object proxy)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CF0")]
	[Address(RVA = "0x19E28B0", Offset = "0x19E0EB0", VA = "0x1819E28B0")]
	internal static IMethodReturnMessage InternalExecuteMessage(MarshalByRefObject target, IMethodCallMessage reqMsg)
	{
		return null;
	}

	[Token(Token = "0x6001CF1")]
	[Address(RVA = "0x19E0210", Offset = "0x19DE810", VA = "0x1819E0210")]
	[ComVisible(true)]
	public static object Connect(Type classToProxy, string url)
	{
		return null;
	}

	[Token(Token = "0x6001CF2")]
	[Address(RVA = "0x19E0130", Offset = "0x19DE730", VA = "0x1819E0130")]
	[ComVisible(true)]
	public static object Connect(Type classToProxy, string url, object data)
	{
		return null;
	}

	[Token(Token = "0x6001CF3")]
	[Address(RVA = "0x19E2800", Offset = "0x19E0E00", VA = "0x1819E2800")]
	public static Type GetServerTypeForUri(string URI)
	{
		return null;
	}

	[Token(Token = "0x6001CF4")]
	[Address(RVA = "0x19E3CC0", Offset = "0x19E22C0", VA = "0x1819E3CC0")]
	public static object Unmarshal(ObjRef objectRef)
	{
		return null;
	}

	[Token(Token = "0x6001CF5")]
	[Address(RVA = "0x19E3D10", Offset = "0x19E2310", VA = "0x1819E3D10")]
	public static object Unmarshal(ObjRef objectRef, bool fRefine)
	{
		return null;
	}

	[Token(Token = "0x6001CF6")]
	[Address(RVA = "0x19E3180", Offset = "0x19E1780", VA = "0x1819E3180")]
	public static ObjRef Marshal(MarshalByRefObject Obj)
	{
		return null;
	}

	[Token(Token = "0x6001CF7")]
	[Address(RVA = "0x19E3110", Offset = "0x19E1710", VA = "0x1819E3110")]
	public static ObjRef Marshal(MarshalByRefObject Obj, string ObjURI, Type RequestedType)
	{
		return null;
	}

	[Token(Token = "0x6001CF8")]
	[Address(RVA = "0x19E31D0", Offset = "0x19E17D0", VA = "0x1819E31D0")]
	private static string NewUri()
	{
		return null;
	}

	[Token(Token = "0x6001CF9")]
	[Address(RVA = "0x19E2740", Offset = "0x19E0D40", VA = "0x1819E2740")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static RealProxy GetRealProxy(object proxy)
	{
		return null;
	}

	[Token(Token = "0x6001CFA")]
	[Address(RVA = "0x19E19C0", Offset = "0x19DFFC0", VA = "0x1819E19C0")]
	public static MethodBase GetMethodBaseFromMethodMessage(IMethodMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001CFB")]
	[Address(RVA = "0x19E1BC0", Offset = "0x19E01C0", VA = "0x1819E1BC0")]
	internal static MethodBase GetMethodBaseFromName(Type type, string methodName, Type[] signature)
	{
		return null;
	}

	[Token(Token = "0x6001CFC")]
	[Address(RVA = "0x19E1090", Offset = "0x19DF690", VA = "0x1819E1090")]
	private static MethodBase FindInterfaceMethod(Type type, string methodName, Type[] signature)
	{
		return null;
	}

	[Token(Token = "0x6001CFD")]
	[Address(RVA = "0x19E1E20", Offset = "0x19E0420", VA = "0x1819E1E20")]
	public static void GetObjectData(object obj, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001CFE")]
	[Address(RVA = "0x19E3050", Offset = "0x19E1650", VA = "0x1819E3050")]
	public static bool IsOneWay(MethodBase method)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CFF")]
	[Address(RVA = "0x19E08A0", Offset = "0x19DEEA0", VA = "0x1819E08A0")]
	internal static object CreateClientProxy(ActivatedClientTypeEntry entry, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001D00")]
	[Address(RVA = "0x19E0540", Offset = "0x19DEB40", VA = "0x1819E0540")]
	internal static object CreateClientProxy(Type objectType, string url, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001D01")]
	[Address(RVA = "0x19E0770", Offset = "0x19DED70", VA = "0x1819E0770")]
	internal static object CreateClientProxy(WellKnownClientTypeEntry entry)
	{
		return null;
	}

	[Token(Token = "0x6001D02")]
	[Address(RVA = "0x19E03A0", Offset = "0x19DE9A0", VA = "0x1819E03A0")]
	internal static object CreateClientProxyForContextBound(Type type, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001D03")]
	[Address(RVA = "0x19E1300", Offset = "0x19DF900", VA = "0x1819E1300")]
	internal static System.Runtime.Remoting.Identity GetIdentityForUri(string uri)
	{
		return null;
	}

	[Token(Token = "0x6001D04")]
	[Address(RVA = "0x19E3770", Offset = "0x19E1D70", VA = "0x1819E3770")]
	private static string RemoveAppNameFromUri(string uri)
	{
		return null;
	}

	[Token(Token = "0x6001D05")]
	[Address(RVA = "0x19E1ED0", Offset = "0x19E04D0", VA = "0x1819E1ED0")]
	internal static System.Runtime.Remoting.ClientIdentity GetOrCreateClientIdentity(ObjRef objRef, Type proxyType, out object clientProxy)
	{
		return null;
	}

	[Token(Token = "0x6001D06")]
	[Address(RVA = "0x19E11D0", Offset = "0x19DF7D0", VA = "0x1819E11D0")]
	private static IMessageSink GetClientChannelSinkChain(string url, object channelData, out string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001D07")]
	[Address(RVA = "0x19E09B0", Offset = "0x19DEFB0", VA = "0x1819E09B0")]
	internal static System.Runtime.Remoting.ClientActivatedIdentity CreateContextBoundObjectIdentity(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6001D08")]
	[Address(RVA = "0x19E02F0", Offset = "0x19DE8F0", VA = "0x1819E02F0")]
	internal static System.Runtime.Remoting.ClientActivatedIdentity CreateClientActivatedServerIdentity(MarshalByRefObject realObject, Type objectType, string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001D09")]
	[Address(RVA = "0x19E0AB0", Offset = "0x19DF0B0", VA = "0x1819E0AB0")]
	internal static System.Runtime.Remoting.ServerIdentity CreateWellKnownServerIdentity(Type objectType, string objectUri, WellKnownObjectMode mode)
	{
		return null;
	}

	[Token(Token = "0x6001D0A")]
	[Address(RVA = "0x19E3560", Offset = "0x19E1B60", VA = "0x1819E3560")]
	private static void RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity identity)
	{
	}

	[Token(Token = "0x6001D0B")]
	[Address(RVA = "0x19E2640", Offset = "0x19E0C40", VA = "0x1819E2640")]
	internal static object GetProxyForRemoteObject(ObjRef objref, Type classToProxy)
	{
		return null;
	}

	[Token(Token = "0x6001D0C")]
	[Address(RVA = "0x19E2790", Offset = "0x19E0D90", VA = "0x1819E2790")]
	internal static object GetRemoteObject(ObjRef objRef, Type proxyType)
	{
		return null;
	}

	[Token(Token = "0x6001D0D")]
	[Address(RVA = "0x19E3870", Offset = "0x19E1E70", VA = "0x1819E3870")]
	internal static byte[] SerializeCallData(object obj)
	{
		return null;
	}

	[Token(Token = "0x6001D0E")]
	[Address(RVA = "0x19E0BC0", Offset = "0x19DF1C0", VA = "0x1819E0BC0")]
	internal static object DeserializeCallData(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x6001D0F")]
	[Address(RVA = "0x19E3AD0", Offset = "0x19E20D0", VA = "0x1819E3AD0")]
	internal static byte[] SerializeExceptionData(Exception ex)
	{
		return null;
	}

	[Token(Token = "0x6001D10")]
	[Address(RVA = "0x19E3520", Offset = "0x19E1B20", VA = "0x1819E3520")]
	private static void RegisterInternalChannels()
	{
	}

	[Token(Token = "0x6001D11")]
	[Address(RVA = "0x19E0E40", Offset = "0x19DF440", VA = "0x1819E0E40")]
	internal static void DisposeIdentity(System.Runtime.Remoting.Identity ident)
	{
	}

	[Token(Token = "0x6001D12")]
	[Address(RVA = "0x19E1660", Offset = "0x19DFC60", VA = "0x1819E1660")]
	internal static System.Runtime.Remoting.Identity GetMessageTargetIdentity(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D13")]
	[Address(RVA = "0x19E3B90", Offset = "0x19E2190", VA = "0x1819E3B90")]
	internal static void SetMessageTargetIdentity(IMessage msg, System.Runtime.Remoting.Identity ident)
	{
	}

	[Token(Token = "0x6001D14")]
	[Address(RVA = "0x19E4110", Offset = "0x19E2710", VA = "0x1819E4110")]
	internal static bool UpdateOutArgObject(ParameterInfo pi, object local, object remote)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D15")]
	[Address(RVA = "0x19E1DB0", Offset = "0x19E03B0", VA = "0x1819E1DB0")]
	private static string GetNormalizedUri(string uri)
	{
		return null;
	}
}
