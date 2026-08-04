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
		[Address(RVA = "0x3D33970", Offset = "0x3D33970", VA = "0x3D33970")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001295")]
		[Address(RVA = "0x3D33980", Offset = "0x3D33980", VA = "0x3D33980")]
		set
		{
		}
	}

	[Token(Token = "0x170001C1")]
	public CultureInfo CurrentUICulture
	{
		[Token(Token = "0x600129E")]
		[Address(RVA = "0x3D36250", Offset = "0x3D36250", VA = "0x3D36250")]
		get
		{
			return null;
		}
		[Token(Token = "0x600129F")]
		[Address(RVA = "0x3D36310", Offset = "0x3D36310", VA = "0x3D36310")]
		set
		{
		}
	}

	[Token(Token = "0x170001C2")]
	public CultureInfo CurrentCulture
	{
		[Token(Token = "0x60012A1")]
		[Address(RVA = "0x3D365D0", Offset = "0x3D365D0", VA = "0x3D365D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012A2")]
		[Address(RVA = "0x3D36690", Offset = "0x3D36690", VA = "0x3D36690")]
		set
		{
		}
	}

	[Token(Token = "0x170001C3")]
	private System.Threading.InternalThread Internal
	{
		[Token(Token = "0x60012A7")]
		[Address(RVA = "0x3D368A0", Offset = "0x3D368A0", VA = "0x3D368A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C4")]
	public static Context CurrentContext
	{
		[Token(Token = "0x60012A8")]
		[Address(RVA = "0x3D368C0", Offset = "0x3D368C0", VA = "0x3D368C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C5")]
	public static Thread CurrentThread
	{
		[Token(Token = "0x60012AB")]
		[Address(RVA = "0x3D31710", Offset = "0x3D31710", VA = "0x3D31710")]
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
		[Address(RVA = "0x3D36900", Offset = "0x3D36900", VA = "0x3D36900")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C7")]
	public bool IsThreadPoolThread
	{
		[Token(Token = "0x60012B0")]
		[Address(RVA = "0x3D369A0", Offset = "0x3D369A0", VA = "0x3D369A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C8")]
	internal bool IsThreadPoolThreadInternal
	{
		[Token(Token = "0x60012B1")]
		[Address(RVA = "0x3D369D0", Offset = "0x3D369D0", VA = "0x3D369D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C9")]
	public bool IsAlive
	{
		[Token(Token = "0x60012B2")]
		[Address(RVA = "0x3D36A00", Offset = "0x3D36A00", VA = "0x3D36A00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CA")]
	public bool IsBackground
	{
		[Token(Token = "0x60012B3")]
		[Address(RVA = "0x3D36A50", Offset = "0x3D36A50", VA = "0x3D36A50")]
		set
		{
		}
	}

	[Token(Token = "0x170001CB")]
	public string Name
	{
		[Token(Token = "0x60012B6")]
		[Address(RVA = "0x3D36B80", Offset = "0x3D36B80", VA = "0x3D36B80")]
		set
		{
		}
	}

	[Token(Token = "0x170001CC")]
	public int ManagedThreadId
	{
		[Token(Token = "0x60012C3")]
		[Address(RVA = "0x3D31760", Offset = "0x3D31760", VA = "0x3D31760")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x3D35A60", Offset = "0x3D35A60", VA = "0x3D35A60")]
	private static void AsyncLocalSetCurrentCulture(AsyncLocalValueChangedArgs<CultureInfo> args)
	{
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x3D35AD0", Offset = "0x3D35AD0", VA = "0x3D35AD0")]
	private static void AsyncLocalSetCurrentUICulture(AsyncLocalValueChangedArgs<CultureInfo> args)
	{
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x3D35B40", Offset = "0x3D35B40", VA = "0x3D35B40")]
	public Thread(ThreadStart start)
	{
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x3D35DF0", Offset = "0x3D35DF0", VA = "0x3D35DF0")]
	public Thread(ParameterizedThreadStart start)
	{
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x3D35E70", Offset = "0x3D35E70", VA = "0x3D35E70")]
	public Thread(ParameterizedThreadStart start, int maxStackSize)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001290")]
	[Address(RVA = "0x3D35F50", Offset = "0x3D35F50", VA = "0x3D35F50")]
	public void Start()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001291")]
	[Address(RVA = "0x3D36020", Offset = "0x3D36020", VA = "0x3D36020")]
	public void Start(object parameter)
	{
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x3D35F60", Offset = "0x3D35F60", VA = "0x3D35F60")]
	private void Start(ref System.Threading.StackCrawlMark stackMark)
	{
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x3D31EE0", Offset = "0x3D31EE0", VA = "0x3D31EE0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal ExecutionContext.Reader GetExecutionContextReader()
	{
		return default(ExecutionContext.Reader);
	}

	[Token(Token = "0x6001296")]
	[Address(RVA = "0x3D32720", Offset = "0x3D32720", VA = "0x3D32720")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	internal ExecutionContext GetMutableExecutionContext()
	{
		return null;
	}

	[Token(Token = "0x6001297")]
	[Address(RVA = "0x3D339B0", Offset = "0x3D339B0", VA = "0x3D339B0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal void SetExecutionContext(ExecutionContext value, bool belongsToCurrentScope)
	{
	}

	[Token(Token = "0x6001298")]
	[Address(RVA = "0x3D31F00", Offset = "0x3D31F00", VA = "0x3D31F00")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal void SetExecutionContext(ExecutionContext.Reader value, bool belongsToCurrentScope)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001299")]
	[Address(RVA = "0x3D36150", Offset = "0x3D36150", VA = "0x3D36150")]
	private static extern void SleepInternal(int millisecondsTimeout);

	[Token(Token = "0x600129A")]
	[Address(RVA = "0x3D31680", Offset = "0x3D31680", VA = "0x3D31680")]
	public static void Sleep(int millisecondsTimeout)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600129B")]
	[Address(RVA = "0x3D36160", Offset = "0x3D36160", VA = "0x3D36160")]
	private static extern bool YieldInternal();

	[Token(Token = "0x600129C")]
	[Address(RVA = "0x3D31700", Offset = "0x3D31700", VA = "0x3D31700")]
	public static bool Yield()
	{
		return default(bool);
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x3D35BB0", Offset = "0x3D35BB0", VA = "0x3D35BB0")]
	private void SetStartHelper(Delegate start, int maxStackSize)
	{
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x3D36270", Offset = "0x3D36270", VA = "0x3D36270")]
	internal CultureInfo GetCurrentUICultureNoAppX()
	{
		return null;
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x3D365F0", Offset = "0x3D365F0", VA = "0x3D365F0")]
	private CultureInfo GetCurrentCultureNoAppX()
	{
		return null;
	}

	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x3D36520", Offset = "0x3D36520", VA = "0x3D36520")]
	private static void nativeInitCultureAccessors()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x3D36880", Offset = "0x3D36880", VA = "0x3D36880")]
	public static extern void MemoryBarrier();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x3D36890", Offset = "0x3D36890", VA = "0x3D36890")]
	private extern void ConstructInternalThread();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x3D368D0", Offset = "0x3D368D0", VA = "0x3D368D0")]
	private static extern void GetCurrentThread_icall(ref Thread thread);

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x3D368E0", Offset = "0x3D368E0", VA = "0x3D368E0")]
	private static Thread GetCurrentThread()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x3D36970", Offset = "0x3D36970", VA = "0x3D36970")]
	public static extern int GetDomainID();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x3D36980", Offset = "0x3D36980", VA = "0x3D36980")]
	private extern bool Thread_internal(MulticastDelegate start);

	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x3D36990", Offset = "0x3D36990", VA = "0x3D36990", Slot = "1")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	~Thread()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x3D36B30", Offset = "0x3D36B30", VA = "0x3D36B30")]
	private unsafe static extern void SetName_icall(System.Threading.InternalThread thread, char* name, int nameLength);

	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x3D36B40", Offset = "0x3D36B40", VA = "0x3D36B40")]
	private static void SetName_internal(System.Threading.InternalThread thread, string name)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x3D36BD0", Offset = "0x3D36BD0", VA = "0x3D36BD0")]
	private static extern void Abort_internal(System.Threading.InternalThread thread, object stateInfo);

	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x3D36BE0", Offset = "0x3D36BE0", VA = "0x3D36BE0")]
	public void Abort()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x3D36C10", Offset = "0x3D36C10", VA = "0x3D36C10")]
	private static extern void SpinWait_nop();

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x3D31660", Offset = "0x3D31660", VA = "0x3D31660")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void SpinWait(int iterations)
	{
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x3D360E0", Offset = "0x3D360E0", VA = "0x3D360E0")]
	private void StartInternal(object principal, ref System.Threading.StackCrawlMark stackMark)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x3D36B10", Offset = "0x3D36B10", VA = "0x3D36B10")]
	private static extern void SetState(System.Threading.InternalThread thread, ThreadState set);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x3D36B20", Offset = "0x3D36B20", VA = "0x3D36B20")]
	private static extern void ClrState(System.Threading.InternalThread thread, ThreadState clr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x3D36A40", Offset = "0x3D36A40", VA = "0x3D36A40")]
	private static extern ThreadState GetState(System.Threading.InternalThread thread);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x3D36C20", Offset = "0x3D36C20", VA = "0x3D36C20")]
	public static extern object VolatileRead(ref object address);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x3D36C30", Offset = "0x3D36C30", VA = "0x3D36C30")]
	private static extern int SystemMaxStackStize();

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x3D36170", Offset = "0x3D36170", VA = "0x3D36170")]
	private static int GetProcessDefaultStackSize(int maxStackSize)
	{
		return default(int);
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x3D36200", Offset = "0x3D36200", VA = "0x3D36200")]
	private void SetStart(MulticastDelegate start, int maxStackSize)
	{
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x3D30990", Offset = "0x3D30990", VA = "0x3D30990")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static void BeginCriticalRegion()
	{
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x3D31130", Offset = "0x3D31130", VA = "0x3D31130")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void EndCriticalRegion()
	{
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x3D36C40", Offset = "0x3D36C40", VA = "0x3D36C40", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x3D36AA0", Offset = "0x3D36AA0", VA = "0x3D36AA0")]
	private ThreadState ValidateThreadState()
	{
		return default(ThreadState);
	}
}
