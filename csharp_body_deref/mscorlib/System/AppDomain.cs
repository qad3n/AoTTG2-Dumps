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
[Token(Token = "0x2000173")]
[ClassInterface(ClassInterfaceType.None)]
[ComVisible(true)]
public sealed class AppDomain : MarshalByRefObject
{
	[Token(Token = "0x400060D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr _mono_app_domain;

	[Token(Token = "0x400060E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static string _process_guid;

	[Token(Token = "0x400060F")]
	[ThreadStatic]
	private static Dictionary<string, object> type_resolve_in_progress;

	[Token(Token = "0x4000610")]
	[ThreadStatic]
	private static Dictionary<string, object> assembly_resolve_in_progress;

	[Token(Token = "0x4000611")]
	[ThreadStatic]
	private static Dictionary<string, object> assembly_resolve_in_progress_refonly;

	[Token(Token = "0x4000612")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object _evidence;

	[Token(Token = "0x4000613")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object _granted;

	[Token(Token = "0x4000614")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int _principalPolicy;

	[Token(Token = "0x4000615")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	private AssemblyLoadEventHandler AssemblyLoad;

	[Token(Token = "0x4000616")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	private ResolveEventHandler AssemblyResolve;

	[Token(Token = "0x4000618")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private EventHandler ProcessExit;

	[Token(Token = "0x4000619")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private ResolveEventHandler ResourceResolve;

	[Token(Token = "0x400061A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[CompilerGenerated]
	private ResolveEventHandler TypeResolve;

	[Token(Token = "0x400061C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[CompilerGenerated]
	private EventHandler<FirstChanceExceptionEventArgs> FirstChanceException;

	[Token(Token = "0x400061D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private object _domain_manager;

	[Token(Token = "0x400061E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	[CompilerGenerated]
	private ResolveEventHandler ReflectionOnlyAssemblyResolve;

	[Token(Token = "0x400061F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private object _activation;

	[Token(Token = "0x4000620")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private object _applicationIdentity;

	[Token(Token = "0x4000621")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private List<string> compatibility_switch;

	[Token(Token = "0x17000152")]
	public static AppDomain CurrentDomain
	{
		[Token(Token = "0x6000EF3")]
		[Address(RVA = "0x3D04E30", Offset = "0x3D04E30", VA = "0x3D04E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000153")]
	[System.MonoTODO]
	public bool IsHomogenous
	{
		[Token(Token = "0x6000F15")]
		[Address(RVA = "0x3D06200", Offset = "0x3D06200", VA = "0x3D06200")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000154")]
	[System.MonoTODO]
	public bool IsFullyTrusted
	{
		[Token(Token = "0x6000F16")]
		[Address(RVA = "0x3D06210", Offset = "0x3D06210", VA = "0x3D06210")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000003")]
	public event EventHandler DomainUnload
	{
		[Token(Token = "0x6000F11")]
		[Address(RVA = "0x3D05D20", Offset = "0x3D05D20", VA = "0x3D05D20", Slot = "9")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000F12")]
		[Address(RVA = "0x3D05F00", Offset = "0x3D05F00", VA = "0x3D05F00", Slot = "10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event UnhandledExceptionEventHandler UnhandledException
	{
		[Token(Token = "0x6000F13")]
		[Address(RVA = "0x3D060E0", Offset = "0x3D060E0", VA = "0x3D060E0", Slot = "11")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000F14")]
		[Address(RVA = "0x3D06170", Offset = "0x3D06170", VA = "0x3D06170", Slot = "12")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x3D04DE0", Offset = "0x3D04DE0", VA = "0x3D04DE0")]
	[System.Runtime.CompilerServices.Intrinsic]
	internal static bool IsAppXModel()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x3D04DF0", Offset = "0x3D04DF0", VA = "0x3D04DF0")]
	private AppDomain()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x3D04E10", Offset = "0x3D04E10", VA = "0x3D04E10")]
	private extern string getFriendlyName();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x3D04E20", Offset = "0x3D04E20", VA = "0x3D04E20")]
	private static extern AppDomain getCurDomain();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x3D04E40", Offset = "0x3D04E40", VA = "0x3D04E40")]
	private extern Assembly[] GetAssemblies(bool refOnly);

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x3D04E50", Offset = "0x3D04E50", VA = "0x3D04E50", Slot = "6")]
	public Assembly[] GetAssemblies()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x3D04E60", Offset = "0x3D04E60", VA = "0x3D04E60", Slot = "7")]
	public extern object GetData(string name);

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x3D04E70", Offset = "0x3D04E70", VA = "0x3D04E70", Slot = "5")]
	public override object InitializeLifetimeService()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EF8")]
	[Address(RVA = "0x3D04E80", Offset = "0x3D04E80", VA = "0x3D04E80")]
	internal extern Assembly LoadAssembly(string assemblyRef, Evidence securityEvidence, bool refOnly, ref System.Threading.StackCrawlMark stackMark);

	[Token(Token = "0x6000EF9")]
	[Address(RVA = "0x3D04E90", Offset = "0x3D04E90", VA = "0x3D04E90")]
	internal Assembly LoadSatellite(AssemblyName assemblyRef, bool throwOnError, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000EFA")]
	[Address(RVA = "0x3D04F80", Offset = "0x3D04F80", VA = "0x3D04F80", Slot = "8")]
	public Assembly Load(string assemblyString)
	{
		return null;
	}

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x3D04FA0", Offset = "0x3D04FA0", VA = "0x3D04FA0")]
	internal Assembly Load(string assemblyString, Evidence assemblySecurity, bool refonly, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x3D05080", Offset = "0x3D05080", VA = "0x3D05080")]
	private static extern AppDomain InternalSetDomainByID(int domain_id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x3D05090", Offset = "0x3D05090", VA = "0x3D05090")]
	private static extern AppDomain InternalSetDomain(AppDomain context);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EFE")]
	[Address(RVA = "0x3D050A0", Offset = "0x3D050A0", VA = "0x3D050A0")]
	internal static extern void InternalPushDomainRefByID(int domain_id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x3D050B0", Offset = "0x3D050B0", VA = "0x3D050B0")]
	internal static extern void InternalPopDomainRef();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x3D050C0", Offset = "0x3D050C0", VA = "0x3D050C0")]
	internal static extern Context InternalSetContext(Context context);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x3D050D0", Offset = "0x3D050D0", VA = "0x3D050D0")]
	internal static extern Context InternalGetContext();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x3D050E0", Offset = "0x3D050E0", VA = "0x3D050E0")]
	internal static extern Context InternalGetDefaultContext();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x3D050F0", Offset = "0x3D050F0", VA = "0x3D050F0")]
	internal static extern string InternalGetProcessGuid(string newguid);

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x3D05100", Offset = "0x3D05100", VA = "0x3D05100")]
	internal static object InvokeInDomainByID(int domain_id, MethodInfo method, object obj, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x3D05280", Offset = "0x3D05280", VA = "0x3D05280")]
	internal static string GetProcessGuid()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x3D05320", Offset = "0x3D05320", VA = "0x3D05320")]
	private static extern bool InternalIsFinalizingForUnload(int domain_id);

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x3D05330", Offset = "0x3D05330", VA = "0x3D05330")]
	public bool IsFinalizingForUnload()
	{
		return default(bool);
	}

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x3D05340", Offset = "0x3D05340", VA = "0x3D05340")]
	private int getDomainID()
	{
		return default(int);
	}

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x3D05350", Offset = "0x3D05350", VA = "0x3D05350", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x3D05360", Offset = "0x3D05360", VA = "0x3D05360")]
	private void DoAssemblyLoad(Assembly assembly)
	{
	}

	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x3D053E0", Offset = "0x3D053E0", VA = "0x3D053E0")]
	private Assembly DoAssemblyResolve(string name, Assembly requestingAssembly, bool refonly)
	{
		return null;
	}

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x3D056F0", Offset = "0x3D056F0", VA = "0x3D056F0")]
	internal Assembly DoTypeResolve(string name)
	{
		return null;
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x3D059E0", Offset = "0x3D059E0", VA = "0x3D059E0")]
	internal Assembly DoResourceResolve(string name, Assembly requesting)
	{
		return null;
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x3D05AF0", Offset = "0x3D05AF0", VA = "0x3D05AF0")]
	private void DoDomainUnload()
	{
	}

	[Token(Token = "0x6000F0F")]
	[Address(RVA = "0x3D05B10", Offset = "0x3D05B10", VA = "0x3D05B10")]
	internal byte[] GetMarshalledDomainObjRef()
	{
		return null;
	}

	[Token(Token = "0x6000F10")]
	[Address(RVA = "0x3D05BD0", Offset = "0x3D05BD0", VA = "0x3D05BD0")]
	internal void ProcessMessageInDomain(byte[] arrRequest, System.Runtime.Remoting.Messaging.CADMethodCallMessage cadMsg, out byte[] arrResponse, out System.Runtime.Remoting.Messaging.CADMethodReturnMessage cadMrm)
	{
	}
}
