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
[Token(Token = "0x200020C")]
public sealed class Thread : CriticalFinalizerObject
{
	[Token(Token = "0x4000987")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static System.LocalDataStoreMgr s_LocalDataStoreMgr;

	[Token(Token = "0x4000988")]
	[ThreadStatic]
	private static System.LocalDataStoreHolder s_LocalDataStore;

	[Token(Token = "0x4000989")]
	[ThreadStatic]
	internal static CultureInfo m_CurrentCulture;

	[Token(Token = "0x400098A")]
	[ThreadStatic]
	internal static CultureInfo m_CurrentUICulture;

	[Token(Token = "0x400098B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static AsyncLocal<CultureInfo> s_asyncLocalCurrentCulture;

	[Token(Token = "0x400098C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static AsyncLocal<CultureInfo> s_asyncLocalCurrentUICulture;

	[Token(Token = "0x400098D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.Threading.InternalThread internal_thread;

	[Token(Token = "0x400098E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object m_ThreadStartArg;

	[Token(Token = "0x400098F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object pending_exception;

	[Token(Token = "0x4000990")]
	[ThreadStatic]
	private static Thread current_thread;

	[Token(Token = "0x4000991")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private MulticastDelegate m_Delegate;

	[Token(Token = "0x4000992")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ExecutionContext m_ExecutionContext;

	[Token(Token = "0x4000993")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool m_ExecutionContextBelongsToOuterScope;

	[Token(Token = "0x4000994")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private IPrincipal principal;

	[Token(Token = "0x4000995")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int principal_version;

	[Token(Token = "0x170001C3")]
	internal bool ExecutionContextBelongsToCurrentScope
	{
		[Token(Token = "0x60012DC")]
		[Address(RVA = "0x55366D0", Offset = "0x55356D0", VA = "0x55366D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60012DD")]
		[Address(RVA = "0x55366E0", Offset = "0x55356E0", VA = "0x55366E0")]
		set
		{
		}
	}

	[Token(Token = "0x170001C4")]
	public CultureInfo CurrentUICulture
	{
		[Token(Token = "0x60012E6")]
		[Address(RVA = "0x5539030", Offset = "0x5538030", VA = "0x5539030")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012E7")]
		[Address(RVA = "0x5539100", Offset = "0x5538100", VA = "0x5539100")]
		set
		{
		}
	}

	[Token(Token = "0x170001C5")]
	public CultureInfo CurrentCulture
	{
		[Token(Token = "0x60012E9")]
		[Address(RVA = "0x55393C0", Offset = "0x55383C0", VA = "0x55393C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012EA")]
		[Address(RVA = "0x5539490", Offset = "0x5538490", VA = "0x5539490")]
		set
		{
		}
	}

	[Token(Token = "0x170001C6")]
	private System.Threading.InternalThread Internal
	{
		[Token(Token = "0x60012EF")]
		[Address(RVA = "0x55396A0", Offset = "0x55386A0", VA = "0x55396A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C7")]
	public static Context CurrentContext
	{
		[Token(Token = "0x60012F0")]
		[Address(RVA = "0x55396C0", Offset = "0x55386C0", VA = "0x55396C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C8")]
	public static Thread CurrentThread
	{
		[Token(Token = "0x60012F3")]
		[Address(RVA = "0x55343E0", Offset = "0x55333E0", VA = "0x55343E0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C9")]
	internal static int CurrentThreadId
	{
		[Token(Token = "0x60012F4")]
		[Address(RVA = "0x5539700", Offset = "0x5538700", VA = "0x5539700")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001CA")]
	public bool IsThreadPoolThread
	{
		[Token(Token = "0x60012F8")]
		[Address(RVA = "0x55397A0", Offset = "0x55387A0", VA = "0x55397A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CB")]
	internal bool IsThreadPoolThreadInternal
	{
		[Token(Token = "0x60012F9")]
		[Address(RVA = "0x55397D0", Offset = "0x55387D0", VA = "0x55397D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CC")]
	public bool IsAlive
	{
		[Token(Token = "0x60012FA")]
		[Address(RVA = "0x5539800", Offset = "0x5538800", VA = "0x5539800")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CD")]
	public bool IsBackground
	{
		[Token(Token = "0x60012FB")]
		[Address(RVA = "0x5539840", Offset = "0x5538840", VA = "0x5539840")]
		set
		{
		}
	}

	[Token(Token = "0x170001CE")]
	public string Name
	{
		[Token(Token = "0x60012FE")]
		[Address(RVA = "0x5539980", Offset = "0x5538980", VA = "0x5539980")]
		set
		{
		}
	}

	[Token(Token = "0x170001CF")]
	public int ManagedThreadId
	{
		[Token(Token = "0x600130B")]
		[Address(RVA = "0x5534430", Offset = "0x5533430", VA = "0x5534430")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x5538850", Offset = "0x5537850", VA = "0x5538850")]
	private static void AsyncLocalSetCurrentCulture(AsyncLocalValueChangedArgs<CultureInfo> args)
	{
	}

	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x55388C0", Offset = "0x55378C0", VA = "0x55388C0")]
	private static void AsyncLocalSetCurrentUICulture(AsyncLocalValueChangedArgs<CultureInfo> args)
	{
	}

	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x5538930", Offset = "0x5537930", VA = "0x5538930")]
	public Thread(ThreadStart start)
	{
	}

	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x5538BD0", Offset = "0x5537BD0", VA = "0x5538BD0")]
	public Thread(ParameterizedThreadStart start)
	{
	}

	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x5538C50", Offset = "0x5537C50", VA = "0x5538C50")]
	public Thread(ParameterizedThreadStart start, int maxStackSize)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x5538D30", Offset = "0x5537D30", VA = "0x5538D30")]
	public void Start()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012D9")]
	[Address(RVA = "0x5538E00", Offset = "0x5537E00", VA = "0x5538E00")]
	public void Start(object parameter)
	{
	}

	[Token(Token = "0x60012DA")]
	[Address(RVA = "0x5538D40", Offset = "0x5537D40", VA = "0x5538D40")]
	private void Start(ref System.Threading.StackCrawlMark stackMark)
	{
	}

	[Token(Token = "0x60012DB")]
	[Address(RVA = "0x5534CE0", Offset = "0x5533CE0", VA = "0x5534CE0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal ExecutionContext.Reader GetExecutionContextReader()
	{
		return default(ExecutionContext.Reader);
	}

	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x55353B0", Offset = "0x55343B0", VA = "0x55353B0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	internal ExecutionContext GetMutableExecutionContext()
	{
		return null;
	}

	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x5536710", Offset = "0x5535710", VA = "0x5536710")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal void SetExecutionContext(ExecutionContext value, bool belongsToCurrentScope)
	{
	}

	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x5534D00", Offset = "0x5533D00", VA = "0x5534D00")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal void SetExecutionContext(ExecutionContext.Reader value, bool belongsToCurrentScope)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x5538F30", Offset = "0x5537F30", VA = "0x5538F30")]
	private static extern void SleepInternal(int millisecondsTimeout);

	[Token(Token = "0x60012E2")]
	[Address(RVA = "0x5534350", Offset = "0x5533350", VA = "0x5534350")]
	public static void Sleep(int millisecondsTimeout)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x5538F40", Offset = "0x5537F40", VA = "0x5538F40")]
	private static extern bool YieldInternal();

	[Token(Token = "0x60012E4")]
	[Address(RVA = "0x55343D0", Offset = "0x55333D0", VA = "0x55343D0")]
	public static bool Yield()
	{
		return default(bool);
	}

	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x55389B0", Offset = "0x55379B0", VA = "0x55389B0")]
	private void SetStartHelper(Delegate start, int maxStackSize)
	{
	}

	[Token(Token = "0x60012E8")]
	[Address(RVA = "0x5539060", Offset = "0x5538060", VA = "0x5539060")]
	internal CultureInfo GetCurrentUICultureNoAppX()
	{
		return null;
	}

	[Token(Token = "0x60012EB")]
	[Address(RVA = "0x55393F0", Offset = "0x55383F0", VA = "0x55393F0")]
	private CultureInfo GetCurrentCultureNoAppX()
	{
		return null;
	}

	[Token(Token = "0x60012EC")]
	[Address(RVA = "0x5539310", Offset = "0x5538310", VA = "0x5539310")]
	private static void nativeInitCultureAccessors()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x5539680", Offset = "0x5538680", VA = "0x5539680")]
	public static extern void MemoryBarrier();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x5539690", Offset = "0x5538690", VA = "0x5539690")]
	private extern void ConstructInternalThread();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x55396D0", Offset = "0x55386D0", VA = "0x55396D0")]
	private static extern void GetCurrentThread_icall(ref Thread thread);

	[Token(Token = "0x60012F2")]
	[Address(RVA = "0x55396E0", Offset = "0x55386E0", VA = "0x55396E0")]
	private static Thread GetCurrentThread()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012F5")]
	[Address(RVA = "0x5539770", Offset = "0x5538770", VA = "0x5539770")]
	public static extern int GetDomainID();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x5539780", Offset = "0x5538780", VA = "0x5539780")]
	private extern bool Thread_internal(MulticastDelegate start);

	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x5539790", Offset = "0x5538790", VA = "0x5539790", Slot = "1")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	~Thread()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x5539930", Offset = "0x5538930", VA = "0x5539930")]
	private unsafe static extern void SetName_icall(System.Threading.InternalThread thread, char* name, int nameLength);

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x5539940", Offset = "0x5538940", VA = "0x5539940")]
	private static void SetName_internal(System.Threading.InternalThread thread, string name)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x55399D0", Offset = "0x55389D0", VA = "0x55399D0")]
	private static extern void Abort_internal(System.Threading.InternalThread thread, object stateInfo);

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x55399E0", Offset = "0x55389E0", VA = "0x55399E0")]
	public void Abort()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001301")]
	[Address(RVA = "0x5539A10", Offset = "0x5538A10", VA = "0x5539A10")]
	private static extern void SpinWait_nop();

	[Token(Token = "0x6001302")]
	[Address(RVA = "0x5534330", Offset = "0x5533330", VA = "0x5534330")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void SpinWait(int iterations)
	{
	}

	[Token(Token = "0x6001303")]
	[Address(RVA = "0x5538EC0", Offset = "0x5537EC0", VA = "0x5538EC0")]
	private void StartInternal(object principal, ref System.Threading.StackCrawlMark stackMark)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001304")]
	[Address(RVA = "0x5539910", Offset = "0x5538910", VA = "0x5539910")]
	private static extern void SetState(System.Threading.InternalThread thread, ThreadState set);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001305")]
	[Address(RVA = "0x5539920", Offset = "0x5538920", VA = "0x5539920")]
	private static extern void ClrState(System.Threading.InternalThread thread, ThreadState clr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001306")]
	[Address(RVA = "0x5539830", Offset = "0x5538830", VA = "0x5539830")]
	private static extern ThreadState GetState(System.Threading.InternalThread thread);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001307")]
	[Address(RVA = "0x5539A20", Offset = "0x5538A20", VA = "0x5539A20")]
	public static extern object VolatileRead(ref object address);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001308")]
	[Address(RVA = "0x5539A30", Offset = "0x5538A30", VA = "0x5539A30")]
	private static extern int SystemMaxStackStize();

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x5538F50", Offset = "0x5537F50", VA = "0x5538F50")]
	private static int GetProcessDefaultStackSize(int maxStackSize)
	{
		return default(int);
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x5538FE0", Offset = "0x5537FE0", VA = "0x5538FE0")]
	private void SetStart(MulticastDelegate start, int maxStackSize)
	{
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x55337F0", Offset = "0x55327F0", VA = "0x55337F0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static void BeginCriticalRegion()
	{
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x5533ED0", Offset = "0x5532ED0", VA = "0x5533ED0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void EndCriticalRegion()
	{
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x5539A40", Offset = "0x5538A40", VA = "0x5539A40", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x55398A0", Offset = "0x55388A0", VA = "0x55398A0")]
	private ThreadState ValidateThreadState()
	{
		return default(ThreadState);
	}
}
