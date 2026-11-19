// ==================== AoTTG2 cross-reference ====================
// Type: System.AppDomain
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Contexts;
using System.Runtime.Remoting.Messaging;
using System.Security.Policy;
using System.Threading;
using Il2CppDummyDll;

namespace System;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000176")]
[ClassInterface(ClassInterfaceType.None)]
[ComVisible(true)]
public sealed class AppDomain : MarshalByRefObject
{
	[Token(Token = "0x40005CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr _mono_app_domain;

	[Token(Token = "0x40005D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static string _process_guid;

	[Token(Token = "0x40005D1")]
	[ThreadStatic]
	private static Dictionary<string, object> type_resolve_in_progress;

	[Token(Token = "0x40005D2")]
	[ThreadStatic]
	private static Dictionary<string, object> assembly_resolve_in_progress;

	[Token(Token = "0x40005D3")]
	[ThreadStatic]
	private static Dictionary<string, object> assembly_resolve_in_progress_refonly;

	[Token(Token = "0x40005D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object _evidence;

	[Token(Token = "0x40005D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object _granted;

	[Token(Token = "0x40005D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int _principalPolicy;

	[Token(Token = "0x40005D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	private AssemblyLoadEventHandler AssemblyLoad;

	[Token(Token = "0x40005D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	private ResolveEventHandler AssemblyResolve;

	[Token(Token = "0x40005D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[CompilerGenerated]
	private EventHandler m_DomainUnload;

	[Token(Token = "0x40005DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private EventHandler ProcessExit;

	[Token(Token = "0x40005DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private ResolveEventHandler ResourceResolve;

	[Token(Token = "0x40005DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[CompilerGenerated]
	private ResolveEventHandler TypeResolve;

	[Token(Token = "0x40005DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[CompilerGenerated]
	private UnhandledExceptionEventHandler m_UnhandledException;

	[Token(Token = "0x40005DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[CompilerGenerated]
	private EventHandler<FirstChanceExceptionEventArgs> FirstChanceException;

	[Token(Token = "0x40005DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private object _domain_manager;

	[Token(Token = "0x40005E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	[CompilerGenerated]
	private ResolveEventHandler ReflectionOnlyAssemblyResolve;

	[Token(Token = "0x40005E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private object _activation;

	[Token(Token = "0x40005E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private object _applicationIdentity;

	[Token(Token = "0x40005E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private List<string> compatibility_switch;

	[Token(Token = "0x17000153")]
	public static AppDomain CurrentDomain
	{
		[Token(Token = "0x6000F1E")]
		[Address(RVA = "0x5508670", Offset = "0x5507670", VA = "0x5508670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000154")]
	[System.MonoTODO]
	public bool IsHomogenous
	{
		[Token(Token = "0x6000F40")]
		[Address(RVA = "0x5509A80", Offset = "0x5508A80", VA = "0x5509A80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000155")]
	[System.MonoTODO]
	public bool IsFullyTrusted
	{
		[Token(Token = "0x6000F41")]
		[Address(RVA = "0x5509A90", Offset = "0x5508A90", VA = "0x5509A90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000003")]
	public event EventHandler DomainUnload
	{
		[Token(Token = "0x6000F3C")]
		[Address(RVA = "0x55095A0", Offset = "0x55085A0", VA = "0x55095A0", Slot = "9")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000F3D")]
		[Address(RVA = "0x5509780", Offset = "0x5508780", VA = "0x5509780", Slot = "10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event UnhandledExceptionEventHandler UnhandledException
	{
		[Token(Token = "0x6000F3E")]
		[Address(RVA = "0x5509960", Offset = "0x5508960", VA = "0x5509960", Slot = "11")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000F3F")]
		[Address(RVA = "0x55099F0", Offset = "0x55089F0", VA = "0x55099F0", Slot = "12")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000F1A")]
	[Address(RVA = "0x5508620", Offset = "0x5507620", VA = "0x5508620")]
	[System.Runtime.CompilerServices.Intrinsic]
	internal static bool IsAppXModel()
	{
		return default(bool);
	}

	[Token(Token = "0x6000F1B")]
	[Address(RVA = "0x5508630", Offset = "0x5507630", VA = "0x5508630")]
	private AppDomain()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F1C")]
	[Address(RVA = "0x5508650", Offset = "0x5507650", VA = "0x5508650")]
	private extern string getFriendlyName();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F1D")]
	[Address(RVA = "0x5508660", Offset = "0x5507660", VA = "0x5508660")]
	private static extern AppDomain getCurDomain();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F1F")]
	[Address(RVA = "0x5508680", Offset = "0x5507680", VA = "0x5508680")]
	private extern Assembly[] GetAssemblies(bool refOnly);

	[Token(Token = "0x6000F20")]
	[Address(RVA = "0x5508690", Offset = "0x5507690", VA = "0x5508690", Slot = "6")]
	public Assembly[] GetAssemblies()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x55086A0", Offset = "0x55076A0", VA = "0x55086A0", Slot = "7")]
	public extern object GetData(string name);

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x55086B0", Offset = "0x55076B0", VA = "0x55086B0", Slot = "5")]
	public override object InitializeLifetimeService()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F23")]
	[Address(RVA = "0x55086C0", Offset = "0x55076C0", VA = "0x55086C0")]
	internal extern Assembly LoadAssembly(string assemblyRef, Evidence securityEvidence, bool refOnly, ref System.Threading.StackCrawlMark stackMark);

	[Token(Token = "0x6000F24")]
	[Address(RVA = "0x55086D0", Offset = "0x55076D0", VA = "0x55086D0")]
	internal Assembly LoadSatellite(AssemblyName assemblyRef, bool throwOnError, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x55087C0", Offset = "0x55077C0", VA = "0x55087C0", Slot = "8")]
	public Assembly Load(string assemblyString)
	{
		return null;
	}

	[Token(Token = "0x6000F26")]
	[Address(RVA = "0x55087E0", Offset = "0x55077E0", VA = "0x55087E0")]
	internal Assembly Load(string assemblyString, Evidence assemblySecurity, bool refonly, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x55088C0", Offset = "0x55078C0", VA = "0x55088C0")]
	private static extern AppDomain InternalSetDomainByID(int domain_id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x55088D0", Offset = "0x55078D0", VA = "0x55088D0")]
	private static extern AppDomain InternalSetDomain(AppDomain context);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F29")]
	[Address(RVA = "0x55088E0", Offset = "0x55078E0", VA = "0x55088E0")]
	internal static extern void InternalPushDomainRefByID(int domain_id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x55088F0", Offset = "0x55078F0", VA = "0x55088F0")]
	internal static extern void InternalPopDomainRef();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x5508900", Offset = "0x5507900", VA = "0x5508900")]
	internal static extern Context InternalSetContext(Context context);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x5508910", Offset = "0x5507910", VA = "0x5508910")]
	internal static extern Context InternalGetContext();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x5508920", Offset = "0x5507920", VA = "0x5508920")]
	internal static extern Context InternalGetDefaultContext();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x5508930", Offset = "0x5507930", VA = "0x5508930")]
	internal static extern string InternalGetProcessGuid(string newguid);

	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x5508940", Offset = "0x5507940", VA = "0x5508940")]
	internal static object InvokeInDomainByID(int domain_id, MethodInfo method, object obj, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x5508AC0", Offset = "0x5507AC0", VA = "0x5508AC0")]
	internal static string GetProcessGuid()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F31")]
	[Address(RVA = "0x5508B60", Offset = "0x5507B60", VA = "0x5508B60")]
	private static extern bool InternalIsFinalizingForUnload(int domain_id);

	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x5508B70", Offset = "0x5507B70", VA = "0x5508B70")]
	public bool IsFinalizingForUnload()
	{
		return default(bool);
	}

	[Token(Token = "0x6000F33")]
	[Address(RVA = "0x5508B80", Offset = "0x5507B80", VA = "0x5508B80")]
	private int getDomainID()
	{
		return default(int);
	}

	[Token(Token = "0x6000F34")]
	[Address(RVA = "0x5508B90", Offset = "0x5507B90", VA = "0x5508B90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000F35")]
	[Address(RVA = "0x5508BA0", Offset = "0x5507BA0", VA = "0x5508BA0")]
	private void DoAssemblyLoad(Assembly assembly)
	{
	}

	[Token(Token = "0x6000F36")]
	[Address(RVA = "0x5508C20", Offset = "0x5507C20", VA = "0x5508C20")]
	private Assembly DoAssemblyResolve(string name, Assembly requestingAssembly, bool refonly)
	{
		return null;
	}

	[Token(Token = "0x6000F37")]
	[Address(RVA = "0x5508F70", Offset = "0x5507F70", VA = "0x5508F70")]
	internal Assembly DoTypeResolve(string name)
	{
		return null;
	}

	[Token(Token = "0x6000F38")]
	[Address(RVA = "0x5509250", Offset = "0x5508250", VA = "0x5509250")]
	internal Assembly DoResourceResolve(string name, Assembly requesting)
	{
		return null;
	}

	[Token(Token = "0x6000F39")]
	[Address(RVA = "0x5509370", Offset = "0x5508370", VA = "0x5509370")]
	private void DoDomainUnload()
	{
	}

	[Token(Token = "0x6000F3A")]
	[Address(RVA = "0x5509390", Offset = "0x5508390", VA = "0x5509390")]
	internal byte[] GetMarshalledDomainObjRef()
	{
		return null;
	}

	[Token(Token = "0x6000F3B")]
	[Address(RVA = "0x5509450", Offset = "0x5508450", VA = "0x5509450")]
	internal void ProcessMessageInDomain(byte[] arrRequest, System.Runtime.Remoting.Messaging.CADMethodCallMessage cadMsg, out byte[] arrResponse, out System.Runtime.Remoting.Messaging.CADMethodReturnMessage cadMrm)
	{
	}
}
