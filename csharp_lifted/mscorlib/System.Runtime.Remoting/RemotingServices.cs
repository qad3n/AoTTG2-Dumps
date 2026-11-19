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

[Token(Token = "0x2000353")]
[ComVisible(true)]
public static class RemotingServices
{
	[Serializable]
	[Token(Token = "0x2000354")]
	private class CACD
	{
		[Token(Token = "0x4000E18")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public object d;

		[Token(Token = "0x4000E19")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public object c;

		[Token(Token = "0x6001CEC")]
		[Address(RVA = "0x53770F0", Offset = "0x53760F0", VA = "0x53770F0")]
		public CACD()
		{
		}
	}

	[Token(Token = "0x4000E10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Hashtable uri_hash;

	[Token(Token = "0x4000E11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static BinaryFormatter _serializationFormatter;

	[Token(Token = "0x4000E12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static BinaryFormatter _deserializationFormatter;

	[Token(Token = "0x4000E13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static string app_id;

	[Token(Token = "0x4000E14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly object app_id_lock;

	[Token(Token = "0x4000E15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static int next_id;

	[Token(Token = "0x4000E16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly MethodInfo FieldSetterMethod;

	[Token(Token = "0x4000E17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static readonly MethodInfo FieldGetterMethod;

	[Token(Token = "0x6001CC2")]
	[Address(RVA = "0x53732D0", Offset = "0x53722D0", VA = "0x53732D0")]
	static RemotingServices()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001CC3")]
	[Address(RVA = "0x5373670", Offset = "0x5372670", VA = "0x5373670")]
	internal static extern object InternalExecute(MethodBase method, object obj, object[] parameters, out object[] out_args);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001CC4")]
	[Address(RVA = "0x5373680", Offset = "0x5372680", VA = "0x5373680")]
	internal static extern MethodBase GetVirtualMethod(Type type, MethodBase method);

	[Token(Token = "0x6001CC5")]
	[Address(RVA = "0x5373690", Offset = "0x5372690", VA = "0x5373690")]
	public static bool IsTransparentProxy(object proxy)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CC6")]
	[Address(RVA = "0x53736D0", Offset = "0x53726D0", VA = "0x53736D0")]
	internal static IMethodReturnMessage InternalExecuteMessage(MarshalByRefObject target, IMethodCallMessage reqMsg)
	{
		return null;
	}

	[Token(Token = "0x6001CC7")]
	[Address(RVA = "0x53741F0", Offset = "0x53731F0", VA = "0x53741F0")]
	[ComVisible(true)]
	public static object Connect(Type classToProxy, string url)
	{
		return null;
	}

	[Token(Token = "0x6001CC8")]
	[Address(RVA = "0x5374340", Offset = "0x5373340", VA = "0x5374340")]
	[ComVisible(true)]
	public static object Connect(Type classToProxy, string url, object data)
	{
		return null;
	}

	[Token(Token = "0x6001CC9")]
	[Address(RVA = "0x5374430", Offset = "0x5373430", VA = "0x5374430")]
	public static Type GetServerTypeForUri(string URI)
	{
		return null;
	}

	[Token(Token = "0x6001CCA")]
	[Address(RVA = "0x536AC10", Offset = "0x5369C10", VA = "0x536AC10")]
	public static object Unmarshal(ObjRef objectRef)
	{
		return null;
	}

	[Token(Token = "0x6001CCB")]
	[Address(RVA = "0x53747A0", Offset = "0x53737A0", VA = "0x53747A0")]
	public static object Unmarshal(ObjRef objectRef, bool fRefine)
	{
		return null;
	}

	[Token(Token = "0x6001CCC")]
	[Address(RVA = "0x5374C40", Offset = "0x5373C40", VA = "0x5374C40")]
	public static ObjRef Marshal(MarshalByRefObject Obj)
	{
		return null;
	}

	[Token(Token = "0x6001CCD")]
	[Address(RVA = "0x5374D00", Offset = "0x5373D00", VA = "0x5374D00")]
	public static ObjRef Marshal(MarshalByRefObject Obj, string ObjURI, Type RequestedType)
	{
		return null;
	}

	[Token(Token = "0x6001CCE")]
	[Address(RVA = "0x5374DB0", Offset = "0x5373DB0", VA = "0x5374DB0")]
	private static string NewUri()
	{
		return null;
	}

	[Token(Token = "0x6001CCF")]
	[Address(RVA = "0x5374D70", Offset = "0x5373D70", VA = "0x5374D70")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static RealProxy GetRealProxy(object proxy)
	{
		return null;
	}

	[Token(Token = "0x6001CD0")]
	[Address(RVA = "0x53755E0", Offset = "0x53745E0", VA = "0x53755E0")]
	public static MethodBase GetMethodBaseFromMethodMessage(IMethodMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001CD1")]
	[Address(RVA = "0x53758E0", Offset = "0x53748E0", VA = "0x53758E0")]
	internal static MethodBase GetMethodBaseFromName(Type type, string methodName, Type[] signature)
	{
		return null;
	}

	[Token(Token = "0x6001CD2")]
	[Address(RVA = "0x5375AB0", Offset = "0x5374AB0", VA = "0x5375AB0")]
	private static MethodBase FindInterfaceMethod(Type type, string methodName, Type[] signature)
	{
		return null;
	}

	[Token(Token = "0x6001CD3")]
	[Address(RVA = "0x5375BF0", Offset = "0x5374BF0", VA = "0x5375BF0")]
	public static void GetObjectData(object obj, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001CD4")]
	[Address(RVA = "0x5375CC0", Offset = "0x5374CC0", VA = "0x5375CC0")]
	public static bool IsOneWay(MethodBase method)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD5")]
	[Address(RVA = "0x5375D40", Offset = "0x5374D40", VA = "0x5375D40")]
	internal static object CreateClientProxy(ActivatedClientTypeEntry entry, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001CD6")]
	[Address(RVA = "0x5375E40", Offset = "0x5374E40", VA = "0x5375E40")]
	internal static object CreateClientProxy(Type objectType, string url, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001CD7")]
	[Address(RVA = "0x5376030", Offset = "0x5375030", VA = "0x5376030")]
	internal static object CreateClientProxy(WellKnownClientTypeEntry entry)
	{
		return null;
	}

	[Token(Token = "0x6001CD8")]
	[Address(RVA = "0x53760A0", Offset = "0x53750A0", VA = "0x53760A0")]
	internal static object CreateClientProxyForContextBound(Type type, object[] activationAttributes)
	{
		return null;
	}

	[Token(Token = "0x6001CD9")]
	[Address(RVA = "0x53744E0", Offset = "0x53734E0", VA = "0x53744E0")]
	internal static System.Runtime.Remoting.Identity GetIdentityForUri(string uri)
	{
		return null;
	}

	[Token(Token = "0x6001CDA")]
	[Address(RVA = "0x5376290", Offset = "0x5375290", VA = "0x5376290")]
	private static string RemoveAppNameFromUri(string uri)
	{
		return null;
	}

	[Token(Token = "0x6001CDB")]
	[Address(RVA = "0x53763B0", Offset = "0x53753B0", VA = "0x53763B0")]
	internal static System.Runtime.Remoting.ClientIdentity GetOrCreateClientIdentity(ObjRef objRef, Type proxyType, out object clientProxy)
	{
		return null;
	}

	[Token(Token = "0x6001CDC")]
	[Address(RVA = "0x5375F60", Offset = "0x5374F60", VA = "0x5375F60")]
	private static IMessageSink GetClientChannelSinkChain(string url, object channelData, out string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001CDD")]
	[Address(RVA = "0x5376C40", Offset = "0x5375C40", VA = "0x5376C40")]
	internal static System.Runtime.Remoting.ClientActivatedIdentity CreateContextBoundObjectIdentity(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6001CDE")]
	[Address(RVA = "0x53754C0", Offset = "0x53744C0", VA = "0x53754C0")]
	internal static System.Runtime.Remoting.ClientActivatedIdentity CreateClientActivatedServerIdentity(MarshalByRefObject realObject, Type objectType, string objectUri)
	{
		return null;
	}

	[Token(Token = "0x6001CDF")]
	[Address(RVA = "0x536BF80", Offset = "0x536AF80", VA = "0x536BF80")]
	internal static System.Runtime.Remoting.ServerIdentity CreateWellKnownServerIdentity(Type objectType, string objectUri, WellKnownObjectMode mode)
	{
		return null;
	}

	[Token(Token = "0x6001CE0")]
	[Address(RVA = "0x5375120", Offset = "0x5374120", VA = "0x5375120")]
	private static void RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity identity)
	{
	}

	[Token(Token = "0x6001CE1")]
	[Address(RVA = "0x5374AF0", Offset = "0x5373AF0", VA = "0x5374AF0")]
	internal static object GetProxyForRemoteObject(ObjRef objref, Type classToProxy)
	{
		return null;
	}

	[Token(Token = "0x6001CE2")]
	[Address(RVA = "0x53742E0", Offset = "0x53732E0", VA = "0x53742E0")]
	internal static object GetRemoteObject(ObjRef objRef, Type proxyType)
	{
		return null;
	}

	[Token(Token = "0x6001CE3")]
	[Address(RVA = "0x5376ED0", Offset = "0x5375ED0", VA = "0x5376ED0")]
	internal static byte[] SerializeCallData(object obj)
	{
		return null;
	}

	[Token(Token = "0x6001CE4")]
	[Address(RVA = "0x5377100", Offset = "0x5376100", VA = "0x5377100")]
	internal static object DeserializeCallData(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x6001CE5")]
	[Address(RVA = "0x5377350", Offset = "0x5376350", VA = "0x5377350")]
	internal static byte[] SerializeExceptionData(Exception ex)
	{
		return null;
	}

	[Token(Token = "0x6001CE6")]
	[Address(RVA = "0x5373610", Offset = "0x5372610", VA = "0x5373610")]
	private static void RegisterInternalChannels()
	{
	}

	[Token(Token = "0x6001CE7")]
	[Address(RVA = "0x53769F0", Offset = "0x53759F0", VA = "0x53769F0")]
	internal static void DisposeIdentity(System.Runtime.Remoting.Identity ident)
	{
	}

	[Token(Token = "0x6001CE8")]
	[Address(RVA = "0x53774B0", Offset = "0x53764B0", VA = "0x53774B0")]
	internal static System.Runtime.Remoting.Identity GetMessageTargetIdentity(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001CE9")]
	[Address(RVA = "0x5377850", Offset = "0x5376850", VA = "0x5377850")]
	internal static void SetMessageTargetIdentity(IMessage msg, System.Runtime.Remoting.Identity ident)
	{
	}

	[Token(Token = "0x6001CEA")]
	[Address(RVA = "0x5377960", Offset = "0x5376960", VA = "0x5377960")]
	internal static bool UpdateOutArgObject(ParameterInfo pi, object local, object remote)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CEB")]
	[Address(RVA = "0x5376230", Offset = "0x5375230", VA = "0x5376230")]
	private static string GetNormalizedUri(string uri)
	{
		return null;
	}
}
