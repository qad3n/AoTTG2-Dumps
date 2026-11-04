// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ServicePointScheduler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000334")]
internal class ServicePointScheduler
{
	[Token(Token = "0x2000335")]
	private class ConnectionGroup
	{
		[Token(Token = "0x4000CBB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		[CompilerGenerated]
		private readonly string _003CName_003Ek__BackingField;

		[Token(Token = "0x4000CBC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static int nextId;

		[Token(Token = "0x4000CBD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly int ID;

		[Token(Token = "0x4000CBE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private LinkedList<WebConnection> connections;

		[Token(Token = "0x4000CBF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private LinkedList<WebOperation> queue;

		[Token(Token = "0x170004CB")]
		public ServicePointScheduler Scheduler
		{
			[Token(Token = "0x600164C")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600164D")]
		[Address(RVA = "0x27DD740", Offset = "0x27DBD40", VA = "0x1827DD740")]
		public ConnectionGroup(ServicePointScheduler scheduler, string name)
		{
		}

		[Token(Token = "0x600164E")]
		[Address(RVA = "0x27DD630", Offset = "0x27DBC30", VA = "0x1827DD630")]
		public bool IsEmpty()
		{
			return default(bool);
		}

		[Token(Token = "0x600164F")]
		[Address(RVA = "0x27DD6A0", Offset = "0x27DBCA0", VA = "0x1827DD6A0")]
		public void RemoveConnection(WebConnection connection)
		{
		}

		[Token(Token = "0x6001650")]
		[Address(RVA = "0x27DCF20", Offset = "0x27DB520", VA = "0x1827DCF20")]
		public void Cleanup()
		{
		}

		[Token(Token = "0x6001651")]
		[Address(RVA = "0x27DD1D0", Offset = "0x27DB7D0", VA = "0x1827DD1D0")]
		public void EnqueueOperation(WebOperation operation)
		{
		}

		[Token(Token = "0x6001652")]
		[Address(RVA = "0x27DD540", Offset = "0x27DBB40", VA = "0x1827DD540")]
		public WebOperation GetNextOperation()
		{
			return null;
		}

		[Token(Token = "0x6001653")]
		[Address(RVA = "0x27DD230", Offset = "0x27DB830", VA = "0x1827DD230")]
		public WebConnection FindIdleConnection(WebOperation operation)
		{
			return null;
		}

		[Token(Token = "0x6001654")]
		[Address(RVA = "0x27DD010", Offset = "0x27DB610", VA = "0x1827DD010")]
		public (WebConnection, bool) CreateOrReuseConnection(WebOperation operation, bool force)
		{
			return default((WebConnection, bool));
		}
	}

	[Token(Token = "0x2000336")]
	private class AsyncManualResetEvent
	{
		[Token(Token = "0x4000CC0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private TaskCompletionSource<bool> m_tcs;

		[Token(Token = "0x6001655")]
		[Address(RVA = "0x27DB390", Offset = "0x27D9990", VA = "0x1827DB390")]
		public Task<bool> WaitAsync(int millisecondTimeout)
		{
			return null;
		}

		[Token(Token = "0x6001656")]
		[Address(RVA = "0x27DB150", Offset = "0x27D9750", VA = "0x1827DB150")]
		public void Set()
		{
		}

		[Token(Token = "0x6001657")]
		[Address(RVA = "0x27DB080", Offset = "0x27D9680", VA = "0x1827DB080")]
		public void Reset()
		{
		}

		[Token(Token = "0x6001658")]
		[Address(RVA = "0x27DB4F0", Offset = "0x27D9AF0", VA = "0x1827DB4F0")]
		public AsyncManualResetEvent(bool state)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000338")]
	[CompilerGenerated]
	private struct _003CRunScheduler_003Ed__32 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CC3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CC4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000CC5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ServicePointScheduler _003C_003E4__this;

		[Token(Token = "0x4000CC6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private (ConnectionGroup, WebOperation)[] _003CoperationArray_003E5__2;

		[Token(Token = "0x4000CC7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private (ConnectionGroup, WebConnection, Task)[] _003CidleArray_003E5__3;

		[Token(Token = "0x4000CC8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private List<Task> _003CtaskList_003E5__4;

		[Token(Token = "0x4000CC9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private Task<bool> _003CschedulerTask_003E5__5;

		[Token(Token = "0x4000CCA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool _003CfinalCleanup_003E5__6;

		[Token(Token = "0x4000CCB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600165C")]
		[Address(RVA = "0x27EF490", Offset = "0x27EDA90", VA = "0x1827EF490", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600165D")]
		[Address(RVA = "0x27F04F0", Offset = "0x27EEAF0", VA = "0x1827F04F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000339")]
	[CompilerGenerated]
	private struct _003CWaitAsync_003Ed__46 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CCC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CCD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x4000CCE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int millisecondTimeout;

		[Token(Token = "0x4000CCF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Task workerTask;

		[Token(Token = "0x4000CD0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenSource _003Ccts_003E5__2;

		[Token(Token = "0x4000CD1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private Task _003CtimeoutTask_003E5__3;

		[Token(Token = "0x4000CD2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600165E")]
		[Address(RVA = "0x27F0C70", Offset = "0x27EF270", VA = "0x1827F0C70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600165F")]
		[Address(RVA = "0x27F11B0", Offset = "0x27EF7B0", VA = "0x1827F11B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000CAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int running;

	[Token(Token = "0x4000CAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int maxIdleTime;

	[Token(Token = "0x4000CB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AsyncManualResetEvent schedulerEvent;

	[Token(Token = "0x4000CB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private ConnectionGroup defaultGroup;

	[Token(Token = "0x4000CB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Dictionary<string, ConnectionGroup> groups;

	[Token(Token = "0x4000CB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private LinkedList<(ConnectionGroup, WebOperation)> operations;

	[Token(Token = "0x4000CB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private LinkedList<(ConnectionGroup, WebConnection, Task)> idleConnections;

	[Token(Token = "0x4000CB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int currentConnections;

	[Token(Token = "0x4000CB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int connectionLimit;

	[Token(Token = "0x4000CB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private DateTime idleSince;

	[Token(Token = "0x4000CB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int nextId;

	[Token(Token = "0x4000CB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public readonly int ID;

	[Token(Token = "0x170004C9")]
	private ServicePoint ServicePoint
	{
		[Token(Token = "0x6001638")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001639")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170004CA")]
	public int MaxIdleTime
	{
		[Token(Token = "0x600163A")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600163B")]
	[Address(RVA = "0x27EA3E0", Offset = "0x27E89E0", VA = "0x1827EA3E0")]
	public ServicePointScheduler(ServicePoint servicePoint, int connectionLimit, int maxIdleTime)
	{
	}

	[Token(Token = "0x600163C")]
	[Address(RVA = "0x27E9E70", Offset = "0x27E8470", VA = "0x1827E9E70")]
	public void Run()
	{
	}

	[Token(Token = "0x600163D")]
	[Address(RVA = "0x27E9D90", Offset = "0x27E8390", VA = "0x1827E9D90")]
	[AsyncStateMachine(typeof(_003CRunScheduler_003Ed__32))]
	private Task RunScheduler()
	{
		return null;
	}

	[Token(Token = "0x600163E")]
	[Address(RVA = "0x27E9190", Offset = "0x27E7790", VA = "0x1827E9190")]
	private void Cleanup()
	{
	}

	[Token(Token = "0x600163F")]
	[Address(RVA = "0x27E9B50", Offset = "0x27E8150", VA = "0x1827E9B50")]
	private void RunSchedulerIteration()
	{
	}

	[Token(Token = "0x6001640")]
	[Address(RVA = "0x27E9730", Offset = "0x27E7D30", VA = "0x1827E9730")]
	private bool OperationCompleted(ConnectionGroup group, WebOperation operation)
	{
		return default(bool);
	}

	[Token(Token = "0x6001641")]
	[Address(RVA = "0x27E9360", Offset = "0x27E7960", VA = "0x1827E9360")]
	private void CloseIdleConnection(ConnectionGroup group, WebConnection connection)
	{
	}

	[Token(Token = "0x6001642")]
	[Address(RVA = "0x27E9F40", Offset = "0x27E8540", VA = "0x1827E9F40")]
	private bool SchedulerIteration(ConnectionGroup group)
	{
		return default(bool);
	}

	[Token(Token = "0x6001643")]
	[Address(RVA = "0x27E9A80", Offset = "0x27E8080", VA = "0x1827E9A80")]
	private void RemoveOperation(WebOperation operation)
	{
	}

	[Token(Token = "0x6001644")]
	[Address(RVA = "0x27E99B0", Offset = "0x27E7FB0", VA = "0x1827E99B0")]
	private void RemoveIdleConnection(WebConnection connection)
	{
	}

	[Token(Token = "0x6001645")]
	[Address(RVA = "0x27E93B0", Offset = "0x27E79B0", VA = "0x1827E93B0")]
	private void FinalCleanup()
	{
	}

	[Token(Token = "0x6001646")]
	[Address(RVA = "0x27EA120", Offset = "0x27E8720", VA = "0x1827EA120")]
	public void SendRequest(WebOperation operation, string groupName)
	{
	}

	[Token(Token = "0x6001647")]
	[Address(RVA = "0x27E94F0", Offset = "0x27E7AF0", VA = "0x1827E94F0")]
	private ConnectionGroup GetConnectionGroup(string name)
	{
		return null;
	}

	[Token(Token = "0x6001648")]
	[Address(RVA = "0x27E9720", Offset = "0x27E7D20", VA = "0x1827E9720")]
	private void OnConnectionCreated(WebConnection connection)
	{
	}

	[Token(Token = "0x6001649")]
	[Address(RVA = "0x27E96F0", Offset = "0x27E7CF0", VA = "0x1827E96F0")]
	private void OnConnectionClosed(WebConnection connection)
	{
	}

	[Token(Token = "0x600164A")]
	[Address(RVA = "0x27EA2C0", Offset = "0x27E88C0", VA = "0x1827EA2C0")]
	[AsyncStateMachine(typeof(_003CWaitAsync_003Ed__46))]
	public static Task<bool> WaitAsync(Task workerTask, int millisecondTimeout)
	{
		return null;
	}
}
