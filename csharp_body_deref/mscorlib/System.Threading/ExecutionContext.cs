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
[Token(Token = "0x2000228")]
public sealed class ExecutionContext : IDisposable, ISerializable
{
	[Token(Token = "0x2000229")]
	private enum Flags
	{
		[Token(Token = "0x4000A12")]
		None = 0,
		[Token(Token = "0x4000A13")]
		IsNewCapture = 1,
		[Token(Token = "0x4000A14")]
		IsFlowSuppressed = 2,
		[Token(Token = "0x4000A15")]
		IsPreAllocatedDefault = 4
	}

	[Token(Token = "0x200022A")]
	internal struct Reader
	{
		[Token(Token = "0x4000A16")]
		[FieldOffset(Offset = "0x0")]
		private ExecutionContext m_ec;

		[Token(Token = "0x170001BC")]
		public bool IsNull
		{
			[Token(Token = "0x60012BE")]
			[Address(RVA = "0x187E270", Offset = "0x187C870", VA = "0x18187E270")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001BD")]
		public bool IsFlowSuppressed
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60012C0")]
			[Address(RVA = "0x1BB2060", Offset = "0x1BB0660", VA = "0x181BB2060")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001BE")]
		public SynchronizationContext SynchronizationContext
		{
			[Token(Token = "0x60012C1")]
			[Address(RVA = "0x1BB20E0", Offset = "0x1BB06E0", VA = "0x181BB20E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001BF")]
		public SynchronizationContext SynchronizationContextNoFlow
		{
			[Token(Token = "0x60012C2")]
			[Address(RVA = "0x1BB20C0", Offset = "0x1BB06C0", VA = "0x181BB20C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001C0")]
		public LogicalCallContext.Reader LogicalCallContext
		{
			[Token(Token = "0x60012C3")]
			[Address(RVA = "0x1BB2080", Offset = "0x1BB0680", VA = "0x181BB2080")]
			get
			{
				return default(LogicalCallContext.Reader);
			}
		}

		[Token(Token = "0x60012BC")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		public Reader(ExecutionContext ec)
		{
		}

		[Token(Token = "0x60012BD")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		public ExecutionContext DangerousGetRawExecutionContext()
		{
			return null;
		}

		[Token(Token = "0x60012BF")]
		[Address(RVA = "0x1BB2040", Offset = "0x1BB0640", VA = "0x181BB2040")]
		public bool IsDefaultFTContext(bool ignoreSyncCtx)
		{
			return default(bool);
		}

		[Token(Token = "0x60012C4")]
		[Address(RVA = "0x1BB2010", Offset = "0x1BB0610", VA = "0x181BB2010")]
		public bool HasSameLocalValues(ExecutionContext other)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200022B")]
	[Flags]
	internal enum CaptureOptions
	{
		[Token(Token = "0x4000A18")]
		None = 0,
		[Token(Token = "0x4000A19")]
		IgnoreSyncCtx = 1,
		[Token(Token = "0x4000A1A")]
		OptimizeDefaultCase = 2
	}

	[Token(Token = "0x4000A08")]
	[FieldOffset(Offset = "0x10")]
	private SynchronizationContext _syncContext;

	[Token(Token = "0x4000A09")]
	[FieldOffset(Offset = "0x18")]
	private SynchronizationContext _syncContextNoFlow;

	[Token(Token = "0x4000A0A")]
	[FieldOffset(Offset = "0x20")]
	private LogicalCallContext _logicalCallContext;

	[Token(Token = "0x4000A0B")]
	[FieldOffset(Offset = "0x28")]
	private System.Runtime.Remoting.Messaging.IllogicalCallContext _illogicalCallContext;

	[Token(Token = "0x4000A0C")]
	[FieldOffset(Offset = "0x30")]
	private Flags _flags;

	[Token(Token = "0x4000A0D")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<System.Threading.IAsyncLocal, object> _localValues;

	[Token(Token = "0x4000A0E")]
	[FieldOffset(Offset = "0x40")]
	private List<System.Threading.IAsyncLocal> _localChangeNotifications;

	[Token(Token = "0x4000A0F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ExecutionContext s_dummyDefaultEC;

	[Token(Token = "0x4000A10")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly ExecutionContext Default;

	[Token(Token = "0x170001B5")]
	internal bool isNewCapture
	{
		[Token(Token = "0x6001297")]
		[Address(RVA = "0x1BA0C10", Offset = "0x1B9F210", VA = "0x181BA0C10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001298")]
		[Address(RVA = "0x1BA0C40", Offset = "0x1B9F240", VA = "0x181BA0C40")]
		set
		{
		}
	}

	[Token(Token = "0x170001B6")]
	internal bool isFlowSuppressed
	{
		[Token(Token = "0x6001299")]
		[Address(RVA = "0x1BA0C00", Offset = "0x1B9F200", VA = "0x181BA0C00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600129A")]
		[Address(RVA = "0x1BA0C20", Offset = "0x1B9F220", VA = "0x181BA0C20")]
		set
		{
		}
	}

	[Token(Token = "0x170001B7")]
	internal bool IsPreAllocatedDefault
	{
		[Token(Token = "0x600129B")]
		[Address(RVA = "0x1BA0B80", Offset = "0x1B9F180", VA = "0x181BA0B80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B8")]
	internal LogicalCallContext LogicalCallContext
	{
		[Token(Token = "0x60012A0")]
		[Address(RVA = "0x1BA0B90", Offset = "0x1B9F190", VA = "0x181BA0B90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012A1")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B9")]
	internal System.Runtime.Remoting.Messaging.IllogicalCallContext IllogicalCallContext
	{
		[Token(Token = "0x60012A2")]
		[Address(RVA = "0x1BA0B10", Offset = "0x1B9F110", VA = "0x181BA0B10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012A3")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x170001BA")]
	internal SynchronizationContext SynchronizationContext
	{
		[Token(Token = "0x60012A4")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return null;
		}
		[Token(Token = "0x60012A5")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		set
		{
		}
	}

	[Token(Token = "0x170001BB")]
	internal SynchronizationContext SynchronizationContextNoFlow
	{
		[Token(Token = "0x60012A6")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return null;
		}
		[Token(Token = "0x60012A7")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		set
		{
		}
	}

	[Token(Token = "0x600129C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal ExecutionContext()
	{
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x1BA09A0", Offset = "0x1B9EFA0", VA = "0x181BA09A0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal ExecutionContext(bool isPreAllocatedDefault)
	{
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x1BA04C0", Offset = "0x1B9EAC0", VA = "0x181BA04C0")]
	internal static void SetLocalValue(System.Threading.IAsyncLocal local, object newValue, bool needChangeNotifications)
	{
	}

	[Token(Token = "0x600129F")]
	[Address(RVA = "0x1B9FA40", Offset = "0x1B9E040", VA = "0x181B9FA40")]
	[HandleProcessCorruptedStateExceptions]
	internal static void OnAsyncLocalContextChanged(ExecutionContext previous, ExecutionContext current)
	{
	}

	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x7C0280", Offset = "0x7BE880", VA = "0x1807C0280", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x1BA01F0", Offset = "0x1B9E7F0", VA = "0x181BA01F0")]
	public static void Run(ExecutionContext executionContext, ContextCallback callback, object state)
	{
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x1BA0180", Offset = "0x1B9E780", VA = "0x181BA0180")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void Run(ExecutionContext executionContext, ContextCallback callback, object state, bool preserveSyncCtx)
	{
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x1BA0100", Offset = "0x1B9E700", VA = "0x181BA0100")]
	internal static void RunInternal(ExecutionContext executionContext, ContextCallback callback, object state)
	{
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x1B9FEA0", Offset = "0x1B9E4A0", VA = "0x181B9FEA0")]
	[HandleProcessCorruptedStateExceptions]
	internal static void RunInternal(ExecutionContext executionContext, ContextCallback callback, object state, bool preserveSyncCtx)
	{
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x1B9F740", Offset = "0x1B9DD40", VA = "0x181B9F740")]
	internal static void EstablishCopyOnWriteScope(ref System.Threading.ExecutionContextSwitcher ecsw)
	{
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x1B9F7E0", Offset = "0x1B9DDE0", VA = "0x181B9F7E0")]
	private static void EstablishCopyOnWriteScope(Thread currentThread, bool knownNullWindowsIdentity, ref System.Threading.ExecutionContextSwitcher ecsw)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x1BA0350", Offset = "0x1B9E950", VA = "0x181BA0350")]
	[HandleProcessCorruptedStateExceptions]
	internal static System.Threading.ExecutionContextSwitcher SetExecutionContext(ExecutionContext executionContext, bool preserveSyncCtx)
	{
		return default(System.Threading.ExecutionContextSwitcher);
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x1B9F420", Offset = "0x1B9DA20", VA = "0x181B9F420")]
	public ExecutionContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x1B9F5A0", Offset = "0x1B9DBA0", VA = "0x181B9F5A0")]
	internal ExecutionContext CreateMutableCopy()
	{
		return null;
	}

	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x1BA0780", Offset = "0x1B9ED80", VA = "0x181BA0780")]
	public static AsyncFlowControl SuppressFlow()
	{
		return default(AsyncFlowControl);
	}

	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x1B9FE00", Offset = "0x1B9E400", VA = "0x181B9FE00")]
	public static void RestoreFlow()
	{
	}

	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x1B9F9E0", Offset = "0x1B9DFE0", VA = "0x181B9F9E0")]
	public static bool IsFlowSuppressed()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x1B9F3D0", Offset = "0x1B9D9D0", VA = "0x181B9F3D0")]
	public static ExecutionContext Capture()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60012B6")]
	[Address(RVA = "0x1B9F850", Offset = "0x1B9DE50", VA = "0x181B9F850")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static ExecutionContext FastCapture()
	{
		return null;
	}

	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x1B9F1A0", Offset = "0x1B9D7A0", VA = "0x181B9F1A0")]
	internal static ExecutionContext Capture(ref System.Threading.StackCrawlMark stackMark, CaptureOptions options)
	{
		return null;
	}

	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x1B9F8A0", Offset = "0x1B9DEA0", VA = "0x181B9F8A0", Slot = "5")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x1BA09D0", Offset = "0x1B9EFD0", VA = "0x181BA09D0")]
	private ExecutionContext(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x1B9F990", Offset = "0x1B9DF90", VA = "0x181B9F990")]
	internal bool IsDefaultFTContext(bool ignoreSyncCtx)
	{
		return default(bool);
	}
}
