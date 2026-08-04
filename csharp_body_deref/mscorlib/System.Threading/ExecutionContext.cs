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
[Token(Token = "0x20001F7")]
public sealed class ExecutionContext : IDisposable, ISerializable
{
	[Token(Token = "0x20001F8")]
	private enum Flags
	{
		[Token(Token = "0x40009AF")]
		None = 0,
		[Token(Token = "0x40009B0")]
		IsNewCapture = 1,
		[Token(Token = "0x40009B1")]
		IsFlowSuppressed = 2,
		[Token(Token = "0x40009B2")]
		IsPreAllocatedDefault = 4
	}

	[Token(Token = "0x20001F9")]
	internal struct Reader
	{
		[Token(Token = "0x40009B3")]
		[FieldOffset(Offset = "0x0")]
		private ExecutionContext m_ec;

		[Token(Token = "0x170001B8")]
		public bool IsNull
		{
			[Token(Token = "0x600124D")]
			[Address(RVA = "0x3D33500", Offset = "0x3D33500", VA = "0x3D33500")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001B9")]
		public bool IsFlowSuppressed
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600124F")]
			[Address(RVA = "0x3D345F0", Offset = "0x3D345F0", VA = "0x3D345F0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001BA")]
		public SynchronizationContext SynchronizationContext
		{
			[Token(Token = "0x6001250")]
			[Address(RVA = "0x3D33990", Offset = "0x3D33990", VA = "0x3D33990")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001BB")]
		public SynchronizationContext SynchronizationContextNoFlow
		{
			[Token(Token = "0x6001251")]
			[Address(RVA = "0x3D339A0", Offset = "0x3D339A0", VA = "0x3D339A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001BC")]
		public LogicalCallContext.Reader LogicalCallContext
		{
			[Token(Token = "0x6001252")]
			[Address(RVA = "0x3D342D0", Offset = "0x3D342D0", VA = "0x3D342D0")]
			get
			{
				return default(LogicalCallContext.Reader);
			}
		}

		[Token(Token = "0x600124B")]
		[Address(RVA = "0x3D345D0", Offset = "0x3D345D0", VA = "0x3D345D0")]
		public Reader(ExecutionContext ec)
		{
		}

		[Token(Token = "0x600124C")]
		[Address(RVA = "0x3D345E0", Offset = "0x3D345E0", VA = "0x3D345E0")]
		public ExecutionContext DangerousGetRawExecutionContext()
		{
			return null;
		}

		[Token(Token = "0x600124E")]
		[Address(RVA = "0x3D33510", Offset = "0x3D33510", VA = "0x3D33510")]
		public bool IsDefaultFTContext(bool ignoreSyncCtx)
		{
			return default(bool);
		}

		[Token(Token = "0x6001253")]
		[Address(RVA = "0x3D335D0", Offset = "0x3D335D0", VA = "0x3D335D0")]
		public bool HasSameLocalValues(ExecutionContext other)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20001FA")]
	[Flags]
	internal enum CaptureOptions
	{
		[Token(Token = "0x40009B5")]
		None = 0,
		[Token(Token = "0x40009B6")]
		IgnoreSyncCtx = 1,
		[Token(Token = "0x40009B7")]
		OptimizeDefaultCase = 2
	}

	[Token(Token = "0x40009A5")]
	[FieldOffset(Offset = "0x10")]
	private SynchronizationContext _syncContext;

	[Token(Token = "0x40009A6")]
	[FieldOffset(Offset = "0x18")]
	private SynchronizationContext _syncContextNoFlow;

	[Token(Token = "0x40009A7")]
	[FieldOffset(Offset = "0x20")]
	private LogicalCallContext _logicalCallContext;

	[Token(Token = "0x40009A8")]
	[FieldOffset(Offset = "0x28")]
	private System.Runtime.Remoting.Messaging.IllogicalCallContext _illogicalCallContext;

	[Token(Token = "0x40009A9")]
	[FieldOffset(Offset = "0x30")]
	private Flags _flags;

	[Token(Token = "0x40009AA")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<System.Threading.IAsyncLocal, object> _localValues;

	[Token(Token = "0x40009AB")]
	[FieldOffset(Offset = "0x40")]
	private List<System.Threading.IAsyncLocal> _localChangeNotifications;

	[Token(Token = "0x40009AC")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ExecutionContext s_dummyDefaultEC;

	[Token(Token = "0x40009AD")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly ExecutionContext Default;

	[Token(Token = "0x170001B1")]
	internal bool isNewCapture
	{
		[Token(Token = "0x6001226")]
		[Address(RVA = "0x3D32BB0", Offset = "0x3D32BB0", VA = "0x3D32BB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001227")]
		[Address(RVA = "0x3D32BC0", Offset = "0x3D32BC0", VA = "0x3D32BC0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B2")]
	internal bool isFlowSuppressed
	{
		[Token(Token = "0x6001228")]
		[Address(RVA = "0x3D32BE0", Offset = "0x3D32BE0", VA = "0x3D32BE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001229")]
		[Address(RVA = "0x3D327A0", Offset = "0x3D327A0", VA = "0x3D327A0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B3")]
	internal bool IsPreAllocatedDefault
	{
		[Token(Token = "0x600122A")]
		[Address(RVA = "0x3D32BF0", Offset = "0x3D32BF0", VA = "0x3D32BF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B4")]
	internal LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x600122F")]
		[Address(RVA = "0x3D32FB0", Offset = "0x3D32FB0", VA = "0x3D32FB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001230")]
		[Address(RVA = "0x3D33030", Offset = "0x3D33030", VA = "0x3D33030")]
		set
		{
		}
	}

	[Token(Token = "0x170001B5")]
	internal System.Runtime.Remoting.Messaging.IllogicalCallContext IllogicalCallContext
	{
		[Token(Token = "0x6001231")]
		[Address(RVA = "0x3D33040", Offset = "0x3D33040", VA = "0x3D33040")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001232")]
		[Address(RVA = "0x3D330C0", Offset = "0x3D330C0", VA = "0x3D330C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B6")]
	internal SynchronizationContext SynchronizationContext
	{
		[Token(Token = "0x6001233")]
		[Address(RVA = "0x3D330D0", Offset = "0x3D330D0", VA = "0x3D330D0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return null;
		}
		[Token(Token = "0x6001234")]
		[Address(RVA = "0x3D330E0", Offset = "0x3D330E0", VA = "0x3D330E0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		set
		{
		}
	}

	[Token(Token = "0x170001B7")]
	internal SynchronizationContext SynchronizationContextNoFlow
	{
		[Token(Token = "0x6001235")]
		[Address(RVA = "0x3D330F0", Offset = "0x3D330F0", VA = "0x3D330F0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return null;
		}
		[Token(Token = "0x6001236")]
		[Address(RVA = "0x3D33100", Offset = "0x3D33100", VA = "0x3D33100")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		set
		{
		}
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x3D32C00", Offset = "0x3D32C00", VA = "0x3D32C00")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal ExecutionContext()
	{
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x3D32C10", Offset = "0x3D32C10", VA = "0x3D32C10")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal ExecutionContext(bool isPreAllocatedDefault)
	{
	}

	[Token(Token = "0x600122D")]
	[Address(RVA = "0x3D32C40", Offset = "0x3D32C40", VA = "0x3D32C40")]
	internal static void SetLocalValue(System.Threading.IAsyncLocal local, object newValue, bool needChangeNotifications)
	{
	}

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x3D31F30", Offset = "0x3D31F30", VA = "0x3D31F30")]
	[HandleProcessCorruptedStateExceptions]
	internal static void OnAsyncLocalContextChanged(ExecutionContext previous, ExecutionContext current)
	{
	}

	[Token(Token = "0x6001237")]
	[Address(RVA = "0x3D33110", Offset = "0x3D33110", VA = "0x3D33110", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x3D2DF20", Offset = "0x3D2DF20", VA = "0x3D2DF20")]
	public static void Run(ExecutionContext executionContext, ContextCallback callback, object state)
	{
	}

	[Token(Token = "0x6001239")]
	[Address(RVA = "0x3D33120", Offset = "0x3D33120", VA = "0x3D33120")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void Run(ExecutionContext executionContext, ContextCallback callback, object state, bool preserveSyncCtx)
	{
	}

	[Token(Token = "0x600123A")]
	[Address(RVA = "0x3D334A0", Offset = "0x3D334A0", VA = "0x3D334A0")]
	internal static void RunInternal(ExecutionContext executionContext, ContextCallback callback, object state)
	{
	}

	[Token(Token = "0x600123B")]
	[Address(RVA = "0x3D33180", Offset = "0x3D33180", VA = "0x3D33180")]
	[HandleProcessCorruptedStateExceptions]
	internal static void RunInternal(ExecutionContext executionContext, ContextCallback callback, object state, bool preserveSyncCtx)
	{
	}

	[Token(Token = "0x600123C")]
	[Address(RVA = "0x3D33880", Offset = "0x3D33880", VA = "0x3D33880")]
	internal static void EstablishCopyOnWriteScope(ref System.Threading.ExecutionContextSwitcher ecsw)
	{
	}

	[Token(Token = "0x600123D")]
	[Address(RVA = "0x3D33600", Offset = "0x3D33600", VA = "0x3D33600")]
	private static void EstablishCopyOnWriteScope(Thread currentThread, bool knownNullWindowsIdentity, ref System.Threading.ExecutionContextSwitcher ecsw)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600123E")]
	[Address(RVA = "0x3D33660", Offset = "0x3D33660", VA = "0x3D33660")]
	[HandleProcessCorruptedStateExceptions]
	internal static System.Threading.ExecutionContextSwitcher SetExecutionContext(ExecutionContext executionContext, bool preserveSyncCtx)
	{
		return default(System.Threading.ExecutionContextSwitcher);
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x3D339E0", Offset = "0x3D339E0", VA = "0x3D339E0")]
	public ExecutionContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x6001240")]
	[Address(RVA = "0x3D33B90", Offset = "0x3D33B90", VA = "0x3D33B90")]
	internal ExecutionContext CreateMutableCopy()
	{
		return null;
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x3D33D70", Offset = "0x3D33D70", VA = "0x3D33D70")]
	public static AsyncFlowControl SuppressFlow()
	{
		return default(AsyncFlowControl);
	}

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x3D32960", Offset = "0x3D32960", VA = "0x3D32960")]
	public static void RestoreFlow()
	{
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x3D33EE0", Offset = "0x3D33EE0", VA = "0x3D33EE0")]
	public static bool IsFlowSuppressed()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001244")]
	[Address(RVA = "0x3D28EA0", Offset = "0x3D28EA0", VA = "0x3D28EA0")]
	public static ExecutionContext Capture()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001245")]
	[Address(RVA = "0x3D34270", Offset = "0x3D34270", VA = "0x3D34270")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static ExecutionContext FastCapture()
	{
		return null;
	}

	[Token(Token = "0x6001246")]
	[Address(RVA = "0x3D33F60", Offset = "0x3D33F60", VA = "0x3D33F60")]
	internal static ExecutionContext Capture(ref System.Threading.StackCrawlMark stackMark, CaptureOptions options)
	{
		return null;
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x3D34350", Offset = "0x3D34350", VA = "0x3D34350", Slot = "5")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001248")]
	[Address(RVA = "0x3D34430", Offset = "0x3D34430", VA = "0x3D34430")]
	private ExecutionContext(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x3D33570", Offset = "0x3D33570", VA = "0x3D33570")]
	internal bool IsDefaultFTContext(bool ignoreSyncCtx)
	{
		return default(bool);
	}
}
