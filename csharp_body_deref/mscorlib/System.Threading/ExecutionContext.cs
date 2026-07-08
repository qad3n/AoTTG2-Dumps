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
			[Address(RVA = "0x504D9E0", Offset = "0x504D9E0", VA = "0x504D9E0")]
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
			[Address(RVA = "0x504EAD0", Offset = "0x504EAD0", VA = "0x504EAD0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001BA")]
		public SynchronizationContext SynchronizationContext
		{
			[Token(Token = "0x6001250")]
			[Address(RVA = "0x504DE70", Offset = "0x504DE70", VA = "0x504DE70")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001BB")]
		public SynchronizationContext SynchronizationContextNoFlow
		{
			[Token(Token = "0x6001251")]
			[Address(RVA = "0x504DE80", Offset = "0x504DE80", VA = "0x504DE80")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001BC")]
		public LogicalCallContext.Reader LogicalCallContext
		{
			[Token(Token = "0x6001252")]
			[Address(RVA = "0x504E7B0", Offset = "0x504E7B0", VA = "0x504E7B0")]
			get
			{
				return default(LogicalCallContext.Reader);
			}
		}

		[Token(Token = "0x600124B")]
		[Address(RVA = "0x504EAB0", Offset = "0x504EAB0", VA = "0x504EAB0")]
		public Reader(ExecutionContext ec)
		{
		}

		[Token(Token = "0x600124C")]
		[Address(RVA = "0x504EAC0", Offset = "0x504EAC0", VA = "0x504EAC0")]
		public ExecutionContext DangerousGetRawExecutionContext()
		{
			return null;
		}

		[Token(Token = "0x600124E")]
		[Address(RVA = "0x504D9F0", Offset = "0x504D9F0", VA = "0x504D9F0")]
		public bool IsDefaultFTContext(bool ignoreSyncCtx)
		{
			return default(bool);
		}

		[Token(Token = "0x6001253")]
		[Address(RVA = "0x504DAB0", Offset = "0x504DAB0", VA = "0x504DAB0")]
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
		[Address(RVA = "0x504D090", Offset = "0x504D090", VA = "0x504D090")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001227")]
		[Address(RVA = "0x504D0A0", Offset = "0x504D0A0", VA = "0x504D0A0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B2")]
	internal bool isFlowSuppressed
	{
		[Token(Token = "0x6001228")]
		[Address(RVA = "0x504D0C0", Offset = "0x504D0C0", VA = "0x504D0C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001229")]
		[Address(RVA = "0x504CC80", Offset = "0x504CC80", VA = "0x504CC80")]
		set
		{
		}
	}

	[Token(Token = "0x170001B3")]
	internal bool IsPreAllocatedDefault
	{
		[Token(Token = "0x600122A")]
		[Address(RVA = "0x504D0D0", Offset = "0x504D0D0", VA = "0x504D0D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B4")]
	internal LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x600122F")]
		[Address(RVA = "0x504D490", Offset = "0x504D490", VA = "0x504D490")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001230")]
		[Address(RVA = "0x504D510", Offset = "0x504D510", VA = "0x504D510")]
		set
		{
		}
	}

	[Token(Token = "0x170001B5")]
	internal System.Runtime.Remoting.Messaging.IllogicalCallContext IllogicalCallContext
	{
		[Token(Token = "0x6001231")]
		[Address(RVA = "0x504D520", Offset = "0x504D520", VA = "0x504D520")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001232")]
		[Address(RVA = "0x504D5A0", Offset = "0x504D5A0", VA = "0x504D5A0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B6")]
	internal SynchronizationContext SynchronizationContext
	{
		[Token(Token = "0x6001233")]
		[Address(RVA = "0x504D5B0", Offset = "0x504D5B0", VA = "0x504D5B0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return null;
		}
		[Token(Token = "0x6001234")]
		[Address(RVA = "0x504D5C0", Offset = "0x504D5C0", VA = "0x504D5C0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		set
		{
		}
	}

	[Token(Token = "0x170001B7")]
	internal SynchronizationContext SynchronizationContextNoFlow
	{
		[Token(Token = "0x6001235")]
		[Address(RVA = "0x504D5D0", Offset = "0x504D5D0", VA = "0x504D5D0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return null;
		}
		[Token(Token = "0x6001236")]
		[Address(RVA = "0x504D5E0", Offset = "0x504D5E0", VA = "0x504D5E0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		set
		{
		}
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x504D0E0", Offset = "0x504D0E0", VA = "0x504D0E0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal ExecutionContext()
	{
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x504D0F0", Offset = "0x504D0F0", VA = "0x504D0F0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal ExecutionContext(bool isPreAllocatedDefault)
	{
	}

	[Token(Token = "0x600122D")]
	[Address(RVA = "0x504D120", Offset = "0x504D120", VA = "0x504D120")]
	internal static void SetLocalValue(System.Threading.IAsyncLocal local, object newValue, bool needChangeNotifications)
	{
	}

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x504C410", Offset = "0x504C410", VA = "0x504C410")]
	[HandleProcessCorruptedStateExceptions]
	internal static void OnAsyncLocalContextChanged(ExecutionContext previous, ExecutionContext current)
	{
	}

	[Token(Token = "0x6001237")]
	[Address(RVA = "0x504D5F0", Offset = "0x504D5F0", VA = "0x504D5F0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x5048400", Offset = "0x5048400", VA = "0x5048400")]
	public static void Run(ExecutionContext executionContext, ContextCallback callback, object state)
	{
	}

	[Token(Token = "0x6001239")]
	[Address(RVA = "0x504D600", Offset = "0x504D600", VA = "0x504D600")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void Run(ExecutionContext executionContext, ContextCallback callback, object state, bool preserveSyncCtx)
	{
	}

	[Token(Token = "0x600123A")]
	[Address(RVA = "0x504D980", Offset = "0x504D980", VA = "0x504D980")]
	internal static void RunInternal(ExecutionContext executionContext, ContextCallback callback, object state)
	{
	}

	[Token(Token = "0x600123B")]
	[Address(RVA = "0x504D660", Offset = "0x504D660", VA = "0x504D660")]
	[HandleProcessCorruptedStateExceptions]
	internal static void RunInternal(ExecutionContext executionContext, ContextCallback callback, object state, bool preserveSyncCtx)
	{
	}

	[Token(Token = "0x600123C")]
	[Address(RVA = "0x504DD60", Offset = "0x504DD60", VA = "0x504DD60")]
	internal static void EstablishCopyOnWriteScope(ref System.Threading.ExecutionContextSwitcher ecsw)
	{
	}

	[Token(Token = "0x600123D")]
	[Address(RVA = "0x504DAE0", Offset = "0x504DAE0", VA = "0x504DAE0")]
	private static void EstablishCopyOnWriteScope(Thread currentThread, bool knownNullWindowsIdentity, ref System.Threading.ExecutionContextSwitcher ecsw)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600123E")]
	[Address(RVA = "0x504DB40", Offset = "0x504DB40", VA = "0x504DB40")]
	[HandleProcessCorruptedStateExceptions]
	internal static System.Threading.ExecutionContextSwitcher SetExecutionContext(ExecutionContext executionContext, bool preserveSyncCtx)
	{
		return default(System.Threading.ExecutionContextSwitcher);
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x504DEC0", Offset = "0x504DEC0", VA = "0x504DEC0")]
	public ExecutionContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x6001240")]
	[Address(RVA = "0x504E070", Offset = "0x504E070", VA = "0x504E070")]
	internal ExecutionContext CreateMutableCopy()
	{
		return null;
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x504E250", Offset = "0x504E250", VA = "0x504E250")]
	public static AsyncFlowControl SuppressFlow()
	{
		return default(AsyncFlowControl);
	}

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x504CE40", Offset = "0x504CE40", VA = "0x504CE40")]
	public static void RestoreFlow()
	{
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x504E3C0", Offset = "0x504E3C0", VA = "0x504E3C0")]
	public static bool IsFlowSuppressed()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001244")]
	[Address(RVA = "0x5043380", Offset = "0x5043380", VA = "0x5043380")]
	public static ExecutionContext Capture()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001245")]
	[Address(RVA = "0x504E750", Offset = "0x504E750", VA = "0x504E750")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static ExecutionContext FastCapture()
	{
		return null;
	}

	[Token(Token = "0x6001246")]
	[Address(RVA = "0x504E440", Offset = "0x504E440", VA = "0x504E440")]
	internal static ExecutionContext Capture(ref System.Threading.StackCrawlMark stackMark, CaptureOptions options)
	{
		return null;
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x504E830", Offset = "0x504E830", VA = "0x504E830", Slot = "5")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001248")]
	[Address(RVA = "0x504E910", Offset = "0x504E910", VA = "0x504E910")]
	private ExecutionContext(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x504DA50", Offset = "0x504DA50", VA = "0x504DA50")]
	internal bool IsDefaultFTContext(bool ignoreSyncCtx)
	{
		return default(bool);
	}
}
