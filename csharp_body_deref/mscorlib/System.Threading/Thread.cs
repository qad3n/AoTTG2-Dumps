// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Thread
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Contexts;
using System.Security.Principal;
using Il2CppDummyDll;

namespace System.Threading;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000234")]
public sealed class Thread : CriticalFinalizerObject
{
	[Token(Token = "0x4000A29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static System.LocalDataStoreMgr s_LocalDataStoreMgr;

	[Token(Token = "0x4000A2A")]
	[ThreadStatic]
	private static System.LocalDataStoreHolder s_LocalDataStore;

	[Token(Token = "0x4000A2B")]
	[ThreadStatic]
	internal static CultureInfo m_CurrentCulture;

	[Token(Token = "0x4000A2C")]
	[ThreadStatic]
	internal static CultureInfo m_CurrentUICulture;

	[Token(Token = "0x4000A2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static AsyncLocal<CultureInfo> s_asyncLocalCurrentCulture;

	[Token(Token = "0x4000A2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static AsyncLocal<CultureInfo> s_asyncLocalCurrentUICulture;

	[Token(Token = "0x4000A2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.Threading.InternalThread internal_thread;

	[Token(Token = "0x4000A30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object m_ThreadStartArg;

	[Token(Token = "0x4000A31")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object pending_exception;

	[Token(Token = "0x4000A32")]
	[ThreadStatic]
	private static Thread current_thread;

	[Token(Token = "0x4000A33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private MulticastDelegate m_Delegate;

	[Token(Token = "0x4000A34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ExecutionContext m_ExecutionContext;

	[Token(Token = "0x4000A35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool m_ExecutionContextBelongsToOuterScope;

	[Token(Token = "0x4000A36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private IPrincipal principal;

	[Token(Token = "0x4000A37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int principal_version;

	[Token(Token = "0x170001C4")]
	internal bool ExecutionContextBelongsToCurrentScope
	{
		[Token(Token = "0x6001305")]
		[Address(RVA = "0x1BC3220", Offset = "0x1BC1820", VA = "0x181BC3220")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001306")]
		[Address(RVA = "0x1BC37A0", Offset = "0x1BC1DA0", VA = "0x181BC37A0")]
		set
		{
		}
	}

	[Token(Token = "0x170001C5")]
	public CultureInfo CurrentUICulture
	{
		[Token(Token = "0x600130F")]
		[Address(RVA = "0x1BC31E0", Offset = "0x1BC17E0", VA = "0x181BC31E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001310")]
		[Address(RVA = "0x1BC3580", Offset = "0x1BC1B80", VA = "0x181BC3580")]
		set
		{
		}
	}

	[Token(Token = "0x170001C6")]
	public CultureInfo CurrentCulture
	{
		[Token(Token = "0x6001312")]
		[Address(RVA = "0x1BC30E0", Offset = "0x1BC16E0", VA = "0x181BC30E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001313")]
		[Address(RVA = "0x1BC3380", Offset = "0x1BC1980", VA = "0x181BC3380")]
		set
		{
		}
	}

	[Token(Token = "0x170001C7")]
	private System.Threading.InternalThread Internal
	{
		[Token(Token = "0x6001318")]
		[Address(RVA = "0x1BC3230", Offset = "0x1BC1830", VA = "0x181BC3230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C8")]
	public static Context CurrentContext
	{
		[Token(Token = "0x6001319")]
		[Address(RVA = "0x19F8110", Offset = "0x19F6710", VA = "0x1819F8110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C9")]
	public static Thread CurrentThread
	{
		[Token(Token = "0x600131C")]
		[Address(RVA = "0x1BC3190", Offset = "0x1BC1790", VA = "0x181BC3190")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CA")]
	internal static int CurrentThreadId
	{
		[Token(Token = "0x600131D")]
		[Address(RVA = "0x1BC3120", Offset = "0x1BC1720", VA = "0x181BC3120")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001CB")]
	public bool IsThreadPoolThread
	{
		[Token(Token = "0x6001321")]
		[Address(RVA = "0x1BC3290", Offset = "0x1BC1890", VA = "0x181BC3290")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CC")]
	internal bool IsThreadPoolThreadInternal
	{
		[Token(Token = "0x6001322")]
		[Address(RVA = "0x1BC3290", Offset = "0x1BC1890", VA = "0x181BC3290")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CD")]
	public bool IsAlive
	{
		[Token(Token = "0x6001323")]
		[Address(RVA = "0x1BC3260", Offset = "0x1BC1860", VA = "0x181BC3260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CE")]
	public bool IsBackground
	{
		[Token(Token = "0x6001324")]
		[Address(RVA = "0x1BC37B0", Offset = "0x1BC1DB0", VA = "0x181BC37B0")]
		set
		{
		}
	}

	[Token(Token = "0x170001CF")]
	public string Name
	{
		[Token(Token = "0x6001327")]
		[Address(RVA = "0x1BC3880", Offset = "0x1BC1E80", VA = "0x181BC3880")]
		set
		{
		}
	}

	[Token(Token = "0x170001D0")]
	public int ManagedThreadId
	{
		[Token(Token = "0x6001334")]
		[Address(RVA = "0x1BC2640", Offset = "0x1BC0C40", VA = "0x181BC2640")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x1BC2240", Offset = "0x1BC0840", VA = "0x181BC2240")]
	private static void AsyncLocalSetCurrentCulture(AsyncLocalValueChangedArgs<CultureInfo> args)
	{
	}

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x1BC22B0", Offset = "0x1BC08B0", VA = "0x181BC22B0")]
	private static void AsyncLocalSetCurrentUICulture(AsyncLocalValueChangedArgs<CultureInfo> args)
	{
	}

	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x1BC2FE0", Offset = "0x1BC15E0", VA = "0x181BC2FE0")]
	public Thread(ThreadStart start)
	{
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x1BC3060", Offset = "0x1BC1660", VA = "0x181BC3060")]
	public Thread(ParameterizedThreadStart start)
	{
	}

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x1BC2EE0", Offset = "0x1BC14E0", VA = "0x181BC2EE0")]
	public Thread(ParameterizedThreadStart start, int maxStackSize)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001301")]
	[Address(RVA = "0x1BC2BD0", Offset = "0x1BC11D0", VA = "0x181BC2BD0")]
	public void Start()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001302")]
	[Address(RVA = "0x1BC2D40", Offset = "0x1BC1340", VA = "0x181BC2D40")]
	public void Start(object parameter)
	{
	}

	[Token(Token = "0x6001303")]
	[Address(RVA = "0x1BC2BF0", Offset = "0x1BC11F0", VA = "0x181BC2BF0")]
	private void Start(ref System.Threading.StackCrawlMark stackMark)
	{
	}

	[Token(Token = "0x6001304")]
	[Address(RVA = "0x1BC2610", Offset = "0x1BC0C10", VA = "0x181BC2610")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal ExecutionContext.Reader GetExecutionContextReader()
	{
		return default(ExecutionContext.Reader);
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x1BC2670", Offset = "0x1BC0C70", VA = "0x181BC2670")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	internal ExecutionContext GetMutableExecutionContext()
	{
		return null;
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x1BC27C0", Offset = "0x1BC0DC0", VA = "0x181BC27C0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal void SetExecutionContext(ExecutionContext value, bool belongsToCurrentScope)
	{
	}

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x1BC27C0", Offset = "0x1BC0DC0", VA = "0x181BC27C0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal void SetExecutionContext(ExecutionContext.Reader value, bool belongsToCurrentScope)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600130A")]
	[Address(RVA = "0x1BC2A80", Offset = "0x1BC1080", VA = "0x181BC2A80")]
	private static extern void SleepInternal(int millisecondsTimeout);

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x1BC2A90", Offset = "0x1BC1090", VA = "0x181BC2A90")]
	public static void Sleep(int millisecondsTimeout)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600130C")]
	[Address(RVA = "0x1BC2ED0", Offset = "0x1BC14D0", VA = "0x181BC2ED0")]
	private static extern bool YieldInternal();

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x1BC2ED0", Offset = "0x1BC14D0", VA = "0x181BC2ED0")]
	public static bool Yield()
	{
		return default(bool);
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x1BC2860", Offset = "0x1BC0E60", VA = "0x181BC2860")]
	private void SetStartHelper(Delegate start, int maxStackSize)
	{
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x1BC2560", Offset = "0x1BC0B60", VA = "0x181BC2560")]
	internal CultureInfo GetCurrentUICultureNoAppX()
	{
		return null;
	}

	[Token(Token = "0x6001314")]
	[Address(RVA = "0x1BC2480", Offset = "0x1BC0A80", VA = "0x181BC2480")]
	private CultureInfo GetCurrentCultureNoAppX()
	{
		return null;
	}

	[Token(Token = "0x6001315")]
	[Address(RVA = "0x1BC32D0", Offset = "0x1BC18D0", VA = "0x181BC32D0")]
	private static void nativeInitCultureAccessors()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001316")]
	[Address(RVA = "0x1BAF800", Offset = "0x1BADE00", VA = "0x181BAF800")]
	public static extern void MemoryBarrier();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001317")]
	[Address(RVA = "0x1BC23D0", Offset = "0x1BC09D0", VA = "0x181BC23D0")]
	private extern void ConstructInternalThread();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600131A")]
	[Address(RVA = "0x1BC2520", Offset = "0x1BC0B20", VA = "0x181BC2520")]
	private static extern void GetCurrentThread_icall(ref Thread thread);

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x1BC2530", Offset = "0x1BC0B30", VA = "0x181BC2530")]
	private static Thread GetCurrentThread()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600131E")]
	[Address(RVA = "0x1BC2600", Offset = "0x1BC0C00", VA = "0x181BC2600")]
	public static extern int GetDomainID();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600131F")]
	[Address(RVA = "0x1BC2E30", Offset = "0x1BC1430", VA = "0x181BC2E30")]
	private extern bool Thread_internal(MulticastDelegate start);

	[Token(Token = "0x6001320")]
	[Address(RVA = "0x1BB1C20", Offset = "0x1BB0220", VA = "0x181BB1C20", Slot = "1")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	~Thread()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001325")]
	[Address(RVA = "0x1BC2800", Offset = "0x1BC0E00", VA = "0x181BC2800")]
	private unsafe static extern void SetName_icall(System.Threading.InternalThread thread, char* name, int nameLength);

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x1BC2810", Offset = "0x1BC0E10", VA = "0x181BC2810")]
	private static void SetName_internal(System.Threading.InternalThread thread, string name)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001328")]
	[Address(RVA = "0x1BC2200", Offset = "0x1BC0800", VA = "0x181BC2200")]
	private static extern void Abort_internal(System.Threading.InternalThread thread, object stateInfo);

	[Token(Token = "0x6001329")]
	[Address(RVA = "0x1BC2210", Offset = "0x1BC0810", VA = "0x181BC2210")]
	public void Abort()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600132A")]
	[Address(RVA = "0x1A703C0", Offset = "0x1A6E9C0", VA = "0x181A703C0")]
	private static extern void SpinWait_nop();

	[Token(Token = "0x600132B")]
	[Address(RVA = "0x1BC2B20", Offset = "0x1BC1120", VA = "0x181BC2B20")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void SpinWait(int iterations)
	{
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x1BC2B50", Offset = "0x1BC1150", VA = "0x181BC2B50")]
	private void StartInternal(object principal, ref System.Threading.StackCrawlMark stackMark)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600132D")]
	[Address(RVA = "0x1BC2A70", Offset = "0x1BC1070", VA = "0x181BC2A70")]
	private static extern void SetState(System.Threading.InternalThread thread, ThreadState set);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600132E")]
	[Address(RVA = "0x1BC23C0", Offset = "0x1BC09C0", VA = "0x181BC23C0")]
	private static extern void ClrState(System.Threading.InternalThread thread, ThreadState clr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600132F")]
	[Address(RVA = "0x1BC27B0", Offset = "0x1BC0DB0", VA = "0x181BC27B0")]
	private static extern ThreadState GetState(System.Threading.InternalThread thread);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001330")]
	[Address(RVA = "0x1BC2EC0", Offset = "0x1BC14C0", VA = "0x181BC2EC0")]
	public static extern object VolatileRead(ref object address);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001331")]
	[Address(RVA = "0x1BC2E20", Offset = "0x1BC1420", VA = "0x181BC2E20")]
	private static extern int SystemMaxStackStize();

	[Token(Token = "0x6001332")]
	[Address(RVA = "0x1BC2710", Offset = "0x1BC0D10", VA = "0x181BC2710")]
	private static int GetProcessDefaultStackSize(int maxStackSize)
	{
		return default(int);
	}

	[Token(Token = "0x6001333")]
	[Address(RVA = "0x1BC2A20", Offset = "0x1BC1020", VA = "0x181BC2A20")]
	private void SetStart(MulticastDelegate start, int maxStackSize)
	{
	}

	[Token(Token = "0x6001335")]
	[Address(RVA = "0x1BC2320", Offset = "0x1BC0920", VA = "0x181BC2320")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static void BeginCriticalRegion()
	{
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x1BC23E0", Offset = "0x1BC09E0", VA = "0x181BC23E0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void EndCriticalRegion()
	{
	}

	[Token(Token = "0x6001337")]
	[Address(RVA = "0x1BC2640", Offset = "0x1BC0C40", VA = "0x181BC2640", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x1BC2E40", Offset = "0x1BC1440", VA = "0x181BC2E40")]
	private ThreadState ValidateThreadState()
	{
		return default(ThreadState);
	}
}
