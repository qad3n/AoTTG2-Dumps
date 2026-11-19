// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ExecutionContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.ExceptionServices;
using System.Runtime.Remoting.Messaging;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x2000200")]
public sealed class ExecutionContext : IDisposable, ISerializable
{
	[Token(Token = "0x2000201")]
	private enum Flags
	{
		[Token(Token = "0x4000970")]
		None = 0,
		[Token(Token = "0x4000971")]
		IsNewCapture = 1,
		[Token(Token = "0x4000972")]
		IsFlowSuppressed = 2,
		[Token(Token = "0x4000973")]
		IsPreAllocatedDefault = 4
	}

	[Token(Token = "0x2000202")]
	internal struct Reader
	{
		[Token(Token = "0x4000974")]
		[FieldOffset(Offset = "0x0")]
		private ExecutionContext m_ec;

		[Token(Token = "0x170001BB")]
		public bool IsNull
		{
			[Token(Token = "0x6001295")]
			[Address(RVA = "0x5536260", Offset = "0x5535260", VA = "0x5536260")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001BC")]
		public bool IsFlowSuppressed
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6001297")]
			[Address(RVA = "0x5537330", Offset = "0x5536330", VA = "0x5537330")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001BD")]
		public SynchronizationContext SynchronizationContext
		{
			[Token(Token = "0x6001298")]
			[Address(RVA = "0x55366F0", Offset = "0x55356F0", VA = "0x55366F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001BE")]
		public SynchronizationContext SynchronizationContextNoFlow
		{
			[Token(Token = "0x6001299")]
			[Address(RVA = "0x5536700", Offset = "0x5535700", VA = "0x5536700")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001BF")]
		public LogicalCallContext.Reader LogicalCallContext
		{
			[Token(Token = "0x600129A")]
			[Address(RVA = "0x5537010", Offset = "0x5536010", VA = "0x5537010")]
			get
			{
				return default(LogicalCallContext.Reader);
			}
		}

		[Token(Token = "0x6001293")]
		[Address(RVA = "0x5537310", Offset = "0x5536310", VA = "0x5537310")]
		public Reader(ExecutionContext ec)
		{
		}

		[Token(Token = "0x6001294")]
		[Address(RVA = "0x5537320", Offset = "0x5536320", VA = "0x5537320")]
		public ExecutionContext DangerousGetRawExecutionContext()
		{
			return null;
		}

		[Token(Token = "0x6001296")]
		[Address(RVA = "0x5536270", Offset = "0x5535270", VA = "0x5536270")]
		public bool IsDefaultFTContext(bool ignoreSyncCtx)
		{
			return default(bool);
		}

		[Token(Token = "0x600129B")]
		[Address(RVA = "0x5536330", Offset = "0x5535330", VA = "0x5536330")]
		public bool HasSameLocalValues(ExecutionContext other)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000203")]
	[Flags]
	internal enum CaptureOptions
	{
		[Token(Token = "0x4000976")]
		None = 0,
		[Token(Token = "0x4000977")]
		IgnoreSyncCtx = 1,
		[Token(Token = "0x4000978")]
		OptimizeDefaultCase = 2
	}

	[Token(Token = "0x4000966")]
	[FieldOffset(Offset = "0x10")]
	private SynchronizationContext _syncContext;

	[Token(Token = "0x4000967")]
	[FieldOffset(Offset = "0x18")]
	private SynchronizationContext _syncContextNoFlow;

	[Token(Token = "0x4000968")]
	[FieldOffset(Offset = "0x20")]
	private LogicalCallContext _logicalCallContext;

	[Token(Token = "0x4000969")]
	[FieldOffset(Offset = "0x28")]
	private System.Runtime.Remoting.Messaging.IllogicalCallContext _illogicalCallContext;

	[Token(Token = "0x400096A")]
	[FieldOffset(Offset = "0x30")]
	private Flags _flags;

	[Token(Token = "0x400096B")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<System.Threading.IAsyncLocal, object> _localValues;

	[Token(Token = "0x400096C")]
	[FieldOffset(Offset = "0x40")]
	private List<System.Threading.IAsyncLocal> _localChangeNotifications;

	[Token(Token = "0x400096D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ExecutionContext s_dummyDefaultEC;

	[Token(Token = "0x400096E")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly ExecutionContext Default;

	[Token(Token = "0x170001B4")]
	internal bool isNewCapture
	{
		[Token(Token = "0x600126E")]
		[Address(RVA = "0x5535900", Offset = "0x5534900", VA = "0x5535900")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600126F")]
		[Address(RVA = "0x5535910", Offset = "0x5534910", VA = "0x5535910")]
		set
		{
		}
	}

	[Token(Token = "0x170001B5")]
	internal bool isFlowSuppressed
	{
		[Token(Token = "0x6001270")]
		[Address(RVA = "0x5535920", Offset = "0x5534920", VA = "0x5535920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001271")]
		[Address(RVA = "0x5535430", Offset = "0x5534430", VA = "0x5535430")]
		set
		{
		}
	}

	[Token(Token = "0x170001B6")]
	internal bool IsPreAllocatedDefault
	{
		[Token(Token = "0x6001272")]
		[Address(RVA = "0x5535930", Offset = "0x5534930", VA = "0x5535930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B7")]
	internal LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x6001277")]
		[Address(RVA = "0x5535D40", Offset = "0x5534D40", VA = "0x5535D40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001278")]
		[Address(RVA = "0x5535DC0", Offset = "0x5534DC0", VA = "0x5535DC0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B8")]
	internal System.Runtime.Remoting.Messaging.IllogicalCallContext IllogicalCallContext
	{
		[Token(Token = "0x6001279")]
		[Address(RVA = "0x5535DD0", Offset = "0x5534DD0", VA = "0x5535DD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600127A")]
		[Address(RVA = "0x5535E50", Offset = "0x5534E50", VA = "0x5535E50")]
		set
		{
		}
	}

	[Token(Token = "0x170001B9")]
	internal SynchronizationContext SynchronizationContext
	{
		[Token(Token = "0x600127B")]
		[Address(RVA = "0x5535E60", Offset = "0x5534E60", VA = "0x5535E60")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return null;
		}
		[Token(Token = "0x600127C")]
		[Address(RVA = "0x5535E70", Offset = "0x5534E70", VA = "0x5535E70")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		set
		{
		}
	}

	[Token(Token = "0x170001BA")]
	internal SynchronizationContext SynchronizationContextNoFlow
	{
		[Token(Token = "0x600127D")]
		[Address(RVA = "0x5535E80", Offset = "0x5534E80", VA = "0x5535E80")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return null;
		}
		[Token(Token = "0x600127E")]
		[Address(RVA = "0x5535E90", Offset = "0x5534E90", VA = "0x5535E90")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		set
		{
		}
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x5535940", Offset = "0x5534940", VA = "0x5535940")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal ExecutionContext()
	{
	}

	[Token(Token = "0x6001274")]
	[Address(RVA = "0x5535950", Offset = "0x5534950", VA = "0x5535950")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal ExecutionContext(bool isPreAllocatedDefault)
	{
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x5535980", Offset = "0x5534980", VA = "0x5535980")]
	internal static void SetLocalValue(System.Threading.IAsyncLocal local, object newValue, bool needChangeNotifications)
	{
	}

	[Token(Token = "0x6001276")]
	[Address(RVA = "0x5534D30", Offset = "0x5533D30", VA = "0x5534D30")]
	[HandleProcessCorruptedStateExceptions]
	internal static void OnAsyncLocalContextChanged(ExecutionContext previous, ExecutionContext current)
	{
	}

	[Token(Token = "0x600127F")]
	[Address(RVA = "0x5535EA0", Offset = "0x5534EA0", VA = "0x5535EA0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x55310F0", Offset = "0x55300F0", VA = "0x55310F0")]
	public static void Run(ExecutionContext executionContext, ContextCallback callback, object state)
	{
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x5535EB0", Offset = "0x5534EB0", VA = "0x5535EB0")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void Run(ExecutionContext executionContext, ContextCallback callback, object state, bool preserveSyncCtx)
	{
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x5536200", Offset = "0x5535200", VA = "0x5536200")]
	internal static void RunInternal(ExecutionContext executionContext, ContextCallback callback, object state)
	{
	}

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x5535F20", Offset = "0x5534F20", VA = "0x5535F20")]
	[HandleProcessCorruptedStateExceptions]
	internal static void RunInternal(ExecutionContext executionContext, ContextCallback callback, object state, bool preserveSyncCtx)
	{
	}

	[Token(Token = "0x6001284")]
	[Address(RVA = "0x55365E0", Offset = "0x55355E0", VA = "0x55365E0")]
	internal static void EstablishCopyOnWriteScope(ref System.Threading.ExecutionContextSwitcher ecsw)
	{
	}

	[Token(Token = "0x6001285")]
	[Address(RVA = "0x5536360", Offset = "0x5535360", VA = "0x5536360")]
	private static void EstablishCopyOnWriteScope(Thread currentThread, bool knownNullWindowsIdentity, ref System.Threading.ExecutionContextSwitcher ecsw)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001286")]
	[Address(RVA = "0x55363C0", Offset = "0x55353C0", VA = "0x55363C0")]
	[HandleProcessCorruptedStateExceptions]
	internal static System.Threading.ExecutionContextSwitcher SetExecutionContext(ExecutionContext executionContext, bool preserveSyncCtx)
	{
		return default(System.Threading.ExecutionContextSwitcher);
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x5536740", Offset = "0x5535740", VA = "0x5536740")]
	public ExecutionContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x55368F0", Offset = "0x55358F0", VA = "0x55368F0")]
	internal ExecutionContext CreateMutableCopy()
	{
		return null;
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x5536AD0", Offset = "0x5535AD0", VA = "0x5536AD0")]
	public static AsyncFlowControl SuppressFlow()
	{
		return default(AsyncFlowControl);
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x5535650", Offset = "0x5534650", VA = "0x5535650")]
	public static void RestoreFlow()
	{
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x5536C40", Offset = "0x5535C40", VA = "0x5536C40")]
	public static bool IsFlowSuppressed()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600128C")]
	[Address(RVA = "0x552C260", Offset = "0x552B260", VA = "0x552C260")]
	public static ExecutionContext Capture()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600128D")]
	[Address(RVA = "0x5536FB0", Offset = "0x5535FB0", VA = "0x5536FB0")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static ExecutionContext FastCapture()
	{
		return null;
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x5536CC0", Offset = "0x5535CC0", VA = "0x5536CC0")]
	internal static ExecutionContext Capture(ref System.Threading.StackCrawlMark stackMark, CaptureOptions options)
	{
		return null;
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x5537090", Offset = "0x5536090", VA = "0x5537090", Slot = "5")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001290")]
	[Address(RVA = "0x5537170", Offset = "0x5536170", VA = "0x5537170")]
	private ExecutionContext(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001291")]
	[Address(RVA = "0x55362D0", Offset = "0x55352D0", VA = "0x55362D0")]
	internal bool IsDefaultFTContext(bool ignoreSyncCtx)
	{
		return default(bool);
	}
}
