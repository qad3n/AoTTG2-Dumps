using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Contexts;
using System.Security.Principal;
using Il2CppDummyDll;

namespace System.Threading;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000203")]
public sealed class Thread : CriticalFinalizerObject
{
	[Token(Token = "0x40009CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static System.LocalDataStoreMgr s_LocalDataStoreMgr;

	[Token(Token = "0x40009CC")]
	[ThreadStatic]
	private static System.LocalDataStoreHolder s_LocalDataStore;

	[Token(Token = "0x40009CD")]
	[ThreadStatic]
	internal static CultureInfo m_CurrentCulture;

	[Token(Token = "0x40009CE")]
	[ThreadStatic]
	internal static CultureInfo m_CurrentUICulture;

	[Token(Token = "0x40009CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static AsyncLocal<CultureInfo> s_asyncLocalCurrentCulture;

	[Token(Token = "0x40009D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static AsyncLocal<CultureInfo> s_asyncLocalCurrentUICulture;

	[Token(Token = "0x40009D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.Threading.InternalThread internal_thread;

	[Token(Token = "0x40009D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object m_ThreadStartArg;

	[Token(Token = "0x40009D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object pending_exception;

	[Token(Token = "0x40009D4")]
	[ThreadStatic]
	private static Thread current_thread;

	[Token(Token = "0x40009D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private MulticastDelegate m_Delegate;

	[Token(Token = "0x40009D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ExecutionContext m_ExecutionContext;

	[Token(Token = "0x40009D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool m_ExecutionContextBelongsToOuterScope;

	[Token(Token = "0x40009D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private IPrincipal principal;

	[Token(Token = "0x40009D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int principal_version;

	[Token(Token = "0x170001C0")]
	internal bool ExecutionContextBelongsToCurrentScope
	{
		[Token(Token = "0x6001294")]
		[Address(RVA = "0x504DE50", Offset = "0x504DE50", VA = "0x504DE50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001295")]
		[Address(RVA = "0x504DE60", Offset = "0x504DE60", VA = "0x504DE60")]
		set
		{
		}
	}

	[Token(Token = "0x170001C1")]
	public CultureInfo CurrentUICulture
	{
		[Token(Token = "0x600129E")]
		[Address(RVA = "0x5050730", Offset = "0x5050730", VA = "0x5050730")]
		get
		{
			return null;
		}
		[Token(Token = "0x600129F")]
		[Address(RVA = "0x50507F0", Offset = "0x50507F0", VA = "0x50507F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001C2")]
	public CultureInfo CurrentCulture
	{
		[Token(Token = "0x60012A1")]
		[Address(RVA = "0x5050AB0", Offset = "0x5050AB0", VA = "0x5050AB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012A2")]
		[Address(RVA = "0x5050B70", Offset = "0x5050B70", VA = "0x5050B70")]
		set
		{
		}
	}

	[Token(Token = "0x170001C3")]
	private System.Threading.InternalThread Internal
	{
		[Token(Token = "0x60012A7")]
		[Address(RVA = "0x5050D80", Offset = "0x5050D80", VA = "0x5050D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C4")]
	public static Context CurrentContext
	{
		[Token(Token = "0x60012A8")]
		[Address(RVA = "0x5050DA0", Offset = "0x5050DA0", VA = "0x5050DA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C5")]
	public static Thread CurrentThread
	{
		[Token(Token = "0x60012AB")]
		[Address(RVA = "0x504BBF0", Offset = "0x504BBF0", VA = "0x504BBF0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C6")]
	internal static int CurrentThreadId
	{
		[Token(Token = "0x60012AC")]
		[Address(RVA = "0x5050DE0", Offset = "0x5050DE0", VA = "0x5050DE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C7")]
	public bool IsThreadPoolThread
	{
		[Token(Token = "0x60012B0")]
		[Address(RVA = "0x5050E80", Offset = "0x5050E80", VA = "0x5050E80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C8")]
	internal bool IsThreadPoolThreadInternal
	{
		[Token(Token = "0x60012B1")]
		[Address(RVA = "0x5050EB0", Offset = "0x5050EB0", VA = "0x5050EB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C9")]
	public bool IsAlive
	{
		[Token(Token = "0x60012B2")]
		[Address(RVA = "0x5050EE0", Offset = "0x5050EE0", VA = "0x5050EE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CA")]
	public bool IsBackground
	{
		[Token(Token = "0x60012B3")]
		[Address(RVA = "0x5050F30", Offset = "0x5050F30", VA = "0x5050F30")]
		set
		{
		}
	}

	[Token(Token = "0x170001CB")]
	public string Name
	{
		[Token(Token = "0x60012B6")]
		[Address(RVA = "0x5051060", Offset = "0x5051060", VA = "0x5051060")]
		set
		{
		}
	}

	[Token(Token = "0x170001CC")]
	public int ManagedThreadId
	{
		[Token(Token = "0x60012C3")]
		[Address(RVA = "0x504BC40", Offset = "0x504BC40", VA = "0x504BC40")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x504FF40", Offset = "0x504FF40", VA = "0x504FF40")]
	private static void AsyncLocalSetCurrentCulture(AsyncLocalValueChangedArgs<CultureInfo> args)
	{
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x504FFB0", Offset = "0x504FFB0", VA = "0x504FFB0")]
	private static void AsyncLocalSetCurrentUICulture(AsyncLocalValueChangedArgs<CultureInfo> args)
	{
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x5050020", Offset = "0x5050020", VA = "0x5050020")]
	public Thread(ThreadStart start)
	{
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x50502D0", Offset = "0x50502D0", VA = "0x50502D0")]
	public Thread(ParameterizedThreadStart start)
	{
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x5050350", Offset = "0x5050350", VA = "0x5050350")]
	public Thread(ParameterizedThreadStart start, int maxStackSize)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001290")]
	[Address(RVA = "0x5050430", Offset = "0x5050430", VA = "0x5050430")]
	public void Start()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001291")]
	[Address(RVA = "0x5050500", Offset = "0x5050500", VA = "0x5050500")]
	public void Start(object parameter)
	{
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x5050440", Offset = "0x5050440", VA = "0x5050440")]
	private void Start(ref System.Threading.StackCrawlMark stackMark)
	{
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x504C3C0", Offset = "0x504C3C0", VA = "0x504C3C0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal ExecutionContext.Reader GetExecutionContextReader()
	{
		return default(ExecutionContext.Reader);
	}

	[Token(Token = "0x6001296")]
	[Address(RVA = "0x504CC00", Offset = "0x504CC00", VA = "0x504CC00")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	internal ExecutionContext GetMutableExecutionContext()
	{
		return null;
	}

	[Token(Token = "0x6001297")]
	[Address(RVA = "0x504DE90", Offset = "0x504DE90", VA = "0x504DE90")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal void SetExecutionContext(ExecutionContext value, bool belongsToCurrentScope)
	{
	}

	[Token(Token = "0x6001298")]
	[Address(RVA = "0x504C3E0", Offset = "0x504C3E0", VA = "0x504C3E0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal void SetExecutionContext(ExecutionContext.Reader value, bool belongsToCurrentScope)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001299")]
	[Address(RVA = "0x5050630", Offset = "0x5050630", VA = "0x5050630")]
	private static extern void SleepInternal(int millisecondsTimeout);

	[Token(Token = "0x600129A")]
	[Address(RVA = "0x504BB60", Offset = "0x504BB60", VA = "0x504BB60")]
	public static void Sleep(int millisecondsTimeout)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600129B")]
	[Address(RVA = "0x5050640", Offset = "0x5050640", VA = "0x5050640")]
	private static extern bool YieldInternal();

	[Token(Token = "0x600129C")]
	[Address(RVA = "0x504BBE0", Offset = "0x504BBE0", VA = "0x504BBE0")]
	public static bool Yield()
	{
		return default(bool);
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x5050090", Offset = "0x5050090", VA = "0x5050090")]
	private void SetStartHelper(Delegate start, int maxStackSize)
	{
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x5050750", Offset = "0x5050750", VA = "0x5050750")]
	internal CultureInfo GetCurrentUICultureNoAppX()
	{
		return null;
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x5050AD0", Offset = "0x5050AD0", VA = "0x5050AD0")]
	private CultureInfo GetCurrentCultureNoAppX()
	{
		return null;
	}

	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x5050A00", Offset = "0x5050A00", VA = "0x5050A00")]
	private static void nativeInitCultureAccessors()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x5050D60", Offset = "0x5050D60", VA = "0x5050D60")]
	public static extern void MemoryBarrier();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x5050D70", Offset = "0x5050D70", VA = "0x5050D70")]
	private extern void ConstructInternalThread();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x5050DB0", Offset = "0x5050DB0", VA = "0x5050DB0")]
	private static extern void GetCurrentThread_icall(ref Thread thread);

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x5050DC0", Offset = "0x5050DC0", VA = "0x5050DC0")]
	private static Thread GetCurrentThread()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x5050E50", Offset = "0x5050E50", VA = "0x5050E50")]
	public static extern int GetDomainID();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x5050E60", Offset = "0x5050E60", VA = "0x5050E60")]
	private extern bool Thread_internal(MulticastDelegate start);

	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x5050E70", Offset = "0x5050E70", VA = "0x5050E70", Slot = "1")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	~Thread()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x5051010", Offset = "0x5051010", VA = "0x5051010")]
	private unsafe static extern void SetName_icall(System.Threading.InternalThread thread, char* name, int nameLength);

	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x5051020", Offset = "0x5051020", VA = "0x5051020")]
	private static void SetName_internal(System.Threading.InternalThread thread, string name)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x50510B0", Offset = "0x50510B0", VA = "0x50510B0")]
	private static extern void Abort_internal(System.Threading.InternalThread thread, object stateInfo);

	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x50510C0", Offset = "0x50510C0", VA = "0x50510C0")]
	public void Abort()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x50510F0", Offset = "0x50510F0", VA = "0x50510F0")]
	private static extern void SpinWait_nop();

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x504BB40", Offset = "0x504BB40", VA = "0x504BB40")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void SpinWait(int iterations)
	{
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x50505C0", Offset = "0x50505C0", VA = "0x50505C0")]
	private void StartInternal(object principal, ref System.Threading.StackCrawlMark stackMark)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x5050FF0", Offset = "0x5050FF0", VA = "0x5050FF0")]
	private static extern void SetState(System.Threading.InternalThread thread, ThreadState set);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x5051000", Offset = "0x5051000", VA = "0x5051000")]
	private static extern void ClrState(System.Threading.InternalThread thread, ThreadState clr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x5050F20", Offset = "0x5050F20", VA = "0x5050F20")]
	private static extern ThreadState GetState(System.Threading.InternalThread thread);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x5051100", Offset = "0x5051100", VA = "0x5051100")]
	public static extern object VolatileRead(ref object address);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x5051110", Offset = "0x5051110", VA = "0x5051110")]
	private static extern int SystemMaxStackStize();

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x5050650", Offset = "0x5050650", VA = "0x5050650")]
	private static int GetProcessDefaultStackSize(int maxStackSize)
	{
		return default(int);
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x50506E0", Offset = "0x50506E0", VA = "0x50506E0")]
	private void SetStart(MulticastDelegate start, int maxStackSize)
	{
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x504AE70", Offset = "0x504AE70", VA = "0x504AE70")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static void BeginCriticalRegion()
	{
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x504B610", Offset = "0x504B610", VA = "0x504B610")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void EndCriticalRegion()
	{
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x5051120", Offset = "0x5051120", VA = "0x5051120", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x5050F80", Offset = "0x5050F80", VA = "0x5050F80")]
	private ThreadState ValidateThreadState()
	{
		return default(ThreadState);
	}
}
