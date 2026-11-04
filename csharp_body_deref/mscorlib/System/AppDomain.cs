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
[Token(Token = "0x200019E")]
[ClassInterface(ClassInterfaceType.None)]
[ComVisible(true)]
public sealed class AppDomain : MarshalByRefObject
{
	[Token(Token = "0x4000671")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr _mono_app_domain;

	[Token(Token = "0x4000672")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static string _process_guid;

	[Token(Token = "0x4000673")]
	[ThreadStatic]
	private static Dictionary<string, object> type_resolve_in_progress;

	[Token(Token = "0x4000674")]
	[ThreadStatic]
	private static Dictionary<string, object> assembly_resolve_in_progress;

	[Token(Token = "0x4000675")]
	[ThreadStatic]
	private static Dictionary<string, object> assembly_resolve_in_progress_refonly;

	[Token(Token = "0x4000676")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object _evidence;

	[Token(Token = "0x4000677")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object _granted;

	[Token(Token = "0x4000678")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int _principalPolicy;

	[Token(Token = "0x4000679")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	private AssemblyLoadEventHandler AssemblyLoad;

	[Token(Token = "0x400067A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	private ResolveEventHandler AssemblyResolve;

	[Token(Token = "0x400067B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[CompilerGenerated]
	private EventHandler m_DomainUnload;

	[Token(Token = "0x400067C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private EventHandler ProcessExit;

	[Token(Token = "0x400067D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private ResolveEventHandler ResourceResolve;

	[Token(Token = "0x400067E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[CompilerGenerated]
	private ResolveEventHandler TypeResolve;

	[Token(Token = "0x400067F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[CompilerGenerated]
	private UnhandledExceptionEventHandler m_UnhandledException;

	[Token(Token = "0x4000680")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[CompilerGenerated]
	private EventHandler<FirstChanceExceptionEventArgs> FirstChanceException;

	[Token(Token = "0x4000681")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private object _domain_manager;

	[Token(Token = "0x4000682")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	[CompilerGenerated]
	private ResolveEventHandler ReflectionOnlyAssemblyResolve;

	[Token(Token = "0x4000683")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private object _activation;

	[Token(Token = "0x4000684")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private object _applicationIdentity;

	[Token(Token = "0x4000685")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private List<string> compatibility_switch;

	[Token(Token = "0x17000153")]
	public static AppDomain CurrentDomain
	{
		[Token(Token = "0x6000F44")]
		[Address(RVA = "0x1B7BB10", Offset = "0x1B7A110", VA = "0x181B7BB10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000154")]
	[System.MonoTODO]
	public bool IsHomogenous
	{
		[Token(Token = "0x6000F66")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000155")]
	[System.MonoTODO]
	public bool IsFullyTrusted
	{
		[Token(Token = "0x6000F67")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000003")]
	public event EventHandler DomainUnload
	{
		[Token(Token = "0x6000F62")]
		[Address(RVA = "0x1B7B9D0", Offset = "0x1B79FD0", VA = "0x181B7B9D0", Slot = "9")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000F63")]
		[Address(RVA = "0x1B7BB30", Offset = "0x1B7A130", VA = "0x181B7BB30", Slot = "10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event UnhandledExceptionEventHandler UnhandledException
	{
		[Token(Token = "0x6000F64")]
		[Address(RVA = "0x1B7BA70", Offset = "0x1B7A070", VA = "0x181B7BA70", Slot = "11")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000F65")]
		[Address(RVA = "0x1B7BBD0", Offset = "0x1B7A1D0", VA = "0x181B7BBD0", Slot = "12")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000F40")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	[System.Runtime.CompilerServices.Intrinsic]
	internal static bool IsAppXModel()
	{
		return default(bool);
	}

	[Token(Token = "0x6000F41")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private AppDomain()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F42")]
	[Address(RVA = "0x1B7B9C0", Offset = "0x1B79FC0", VA = "0x181B7B9C0")]
	private extern string getFriendlyName();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F43")]
	[Address(RVA = "0x1B7BB10", Offset = "0x1B7A110", VA = "0x181B7BB10")]
	private static extern AppDomain getCurDomain();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F45")]
	[Address(RVA = "0x1B7B190", Offset = "0x1B79790", VA = "0x181B7B190")]
	private extern Assembly[] GetAssemblies(bool refOnly);

	[Token(Token = "0x6000F46")]
	[Address(RVA = "0x1B7B180", Offset = "0x1B79780", VA = "0x181B7B180", Slot = "6")]
	public Assembly[] GetAssemblies()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x1B7B1A0", Offset = "0x1B797A0", VA = "0x181B7B1A0", Slot = "7")]
	public extern object GetData(string name);

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
	public override object InitializeLifetimeService()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x1B7B540", Offset = "0x1B79B40", VA = "0x181B7B540")]
	internal extern Assembly LoadAssembly(string assemblyRef, Evidence securityEvidence, bool refOnly, ref System.Threading.StackCrawlMark stackMark);

	[Token(Token = "0x6000F4A")]
	[Address(RVA = "0x1B7B550", Offset = "0x1B79B50", VA = "0x181B7B550")]
	internal Assembly LoadSatellite(AssemblyName assemblyRef, bool throwOnError, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x1B7B770", Offset = "0x1B79D70", VA = "0x181B7B770", Slot = "8")]
	public Assembly Load(string assemblyString)
	{
		return null;
	}

	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x1B7B650", Offset = "0x1B79C50", VA = "0x181B7B650")]
	internal Assembly Load(string assemblyString, Evidence assemblySecurity, bool refonly, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x1B7B370", Offset = "0x1B79970", VA = "0x181B7B370")]
	private static extern AppDomain InternalSetDomainByID(int domain_id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x1B7B380", Offset = "0x1B79980", VA = "0x181B7B380")]
	private static extern AppDomain InternalSetDomain(AppDomain context);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x1B7B350", Offset = "0x1B79950", VA = "0x181B7B350")]
	internal static extern void InternalPushDomainRefByID(int domain_id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x1B7B340", Offset = "0x1B79940", VA = "0x181B7B340")]
	internal static extern void InternalPopDomainRef();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F51")]
	[Address(RVA = "0x1B7B360", Offset = "0x1B79960", VA = "0x181B7B360")]
	internal static extern Context InternalSetContext(Context context);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F52")]
	[Address(RVA = "0x1B7B320", Offset = "0x1B79920", VA = "0x181B7B320")]
	internal static extern Context InternalGetContext();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x1B7B320", Offset = "0x1B79920", VA = "0x181B7B320")]
	internal static extern Context InternalGetDefaultContext();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F54")]
	[Address(RVA = "0x1B7B330", Offset = "0x1B79930", VA = "0x181B7B330")]
	internal static extern string InternalGetProcessGuid(string newguid);

	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x1B7B390", Offset = "0x1B79990", VA = "0x181B7B390")]
	internal static object InvokeInDomainByID(int domain_id, MethodInfo method, object obj, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x1B7B270", Offset = "0x1B79870", VA = "0x181B7B270")]
	internal static string GetProcessGuid()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x1948290", Offset = "0x1946890", VA = "0x181948290")]
	private static extern bool InternalIsFinalizingForUnload(int domain_id);

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x1B7B520", Offset = "0x1B79B20", VA = "0x181B7B520")]
	public bool IsFinalizingForUnload()
	{
		return default(bool);
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x1B7BB20", Offset = "0x1B7A120", VA = "0x181B7BB20")]
	private int getDomainID()
	{
		return default(int);
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x1B7B9C0", Offset = "0x1B79FC0", VA = "0x181B7B9C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x1B7A8D0", Offset = "0x1B78ED0", VA = "0x181B7A8D0")]
	private void DoAssemblyLoad(Assembly assembly)
	{
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x1B7A960", Offset = "0x1B78F60", VA = "0x181B7A960")]
	private Assembly DoAssemblyResolve(string name, Assembly requestingAssembly, bool refonly)
	{
		return null;
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x1B7AE60", Offset = "0x1B79460", VA = "0x181B7AE60")]
	internal Assembly DoTypeResolve(string name)
	{
		return null;
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x1B7AD10", Offset = "0x1B79310", VA = "0x181B7AD10")]
	internal Assembly DoResourceResolve(string name, Assembly requesting)
	{
		return null;
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x1B7ACF0", Offset = "0x1B792F0", VA = "0x181B7ACF0")]
	private void DoDomainUnload()
	{
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x1B7B1B0", Offset = "0x1B797B0", VA = "0x181B7B1B0")]
	internal byte[] GetMarshalledDomainObjRef()
	{
		return null;
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x1B7B8A0", Offset = "0x1B79EA0", VA = "0x181B7B8A0")]
	internal void ProcessMessageInDomain(byte[] arrRequest, System.Runtime.Remoting.Messaging.CADMethodCallMessage cadMsg, out byte[] arrResponse, out System.Runtime.Remoting.Messaging.CADMethodReturnMessage cadMrm)
	{
	}
}
