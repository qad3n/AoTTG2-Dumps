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

[Token(Token = "0x20001AC")]
internal class ServicePointScheduler
{
	[Token(Token = "0x20001AD")]
	private class ConnectionGroup
	{
		[Token(Token = "0x40008A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		[CompilerGenerated]
		private readonly string _003CName_003Ek__BackingField;

		[Token(Token = "0x40008A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static int nextId;

		[Token(Token = "0x40008A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly int ID;

		[Token(Token = "0x40008A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private LinkedList<WebConnection> connections;

		[Token(Token = "0x40008A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private LinkedList<WebOperation> queue;

		[Token(Token = "0x17000275")]
		public ServicePointScheduler Scheduler
		{
			[Token(Token = "0x6000A8B")]
			[Address(RVA = "0x498F760", Offset = "0x498F760", VA = "0x498F760")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A8C")]
		[Address(RVA = "0x498DCB0", Offset = "0x498DCB0", VA = "0x498DCB0")]
		public ConnectionGroup(ServicePointScheduler scheduler, string name)
		{
		}

		[Token(Token = "0x6000A8D")]
		[Address(RVA = "0x498E4B0", Offset = "0x498E4B0", VA = "0x498E4B0")]
		public bool IsEmpty()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A8E")]
		[Address(RVA = "0x498EC60", Offset = "0x498EC60", VA = "0x498EC60")]
		public void RemoveConnection(WebConnection connection)
		{
		}

		[Token(Token = "0x6000A8F")]
		[Address(RVA = "0x498EDD0", Offset = "0x498EDD0", VA = "0x498EDD0")]
		public void Cleanup()
		{
		}

		[Token(Token = "0x6000A90")]
		[Address(RVA = "0x498F5B0", Offset = "0x498F5B0", VA = "0x498F5B0")]
		public void EnqueueOperation(WebOperation operation)
		{
		}

		[Token(Token = "0x6000A91")]
		[Address(RVA = "0x498F0C0", Offset = "0x498F0C0", VA = "0x498F0C0")]
		public WebOperation GetNextOperation()
		{
			return null;
		}

		[Token(Token = "0x6000A92")]
		[Address(RVA = "0x498F7B0", Offset = "0x498F7B0", VA = "0x498F7B0")]
		public WebConnection FindIdleConnection(WebOperation operation)
		{
			return null;
		}

		[Token(Token = "0x6000A93")]
		[Address(RVA = "0x498EEC0", Offset = "0x498EEC0", VA = "0x498EEC0")]
		public (WebConnection, bool) CreateOrReuseConnection(WebOperation operation, bool force)
		{
			return default((WebConnection, bool));
		}
	}

	[Token(Token = "0x20001AE")]
	private class AsyncManualResetEvent
	{
		[Token(Token = "0x40008AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private TaskCompletionSource<bool> m_tcs;

		[Token(Token = "0x6000A94")]
		[Address(RVA = "0x4990350", Offset = "0x4990350", VA = "0x4990350")]
		public Task<bool> WaitAsync(int millisecondTimeout)
		{
			return null;
		}

		[Token(Token = "0x6000A95")]
		[Address(RVA = "0x498DEA0", Offset = "0x498DEA0", VA = "0x498DEA0")]
		public void Set()
		{
		}

		[Token(Token = "0x6000A96")]
		[Address(RVA = "0x498E6F0", Offset = "0x498E6F0", VA = "0x498E6F0")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000A97")]
		[Address(RVA = "0x498DC20", Offset = "0x498DC20", VA = "0x498DC20")]
		public AsyncManualResetEvent(bool state)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001B0")]
	[CompilerGenerated]
	private struct _003CRunScheduler_003Ed__32 : IAsyncStateMachine
	{
		[Token(Token = "0x40008AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40008AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40008AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ServicePointScheduler _003C_003E4__this;

		[Token(Token = "0x40008B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private (ConnectionGroup, WebOperation)[] _003CoperationArray_003E5__2;

		[Token(Token = "0x40008B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private (ConnectionGroup, WebConnection, Task)[] _003CidleArray_003E5__3;

		[Token(Token = "0x40008B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private List<Task> _003CtaskList_003E5__4;

		[Token(Token = "0x40008B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private Task<bool> _003CschedulerTask_003E5__5;

		[Token(Token = "0x40008B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool _003CfinalCleanup_003E5__6;

		[Token(Token = "0x40008B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000A9B")]
		[Address(RVA = "0x49904A0", Offset = "0x49904A0", VA = "0x49904A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000A9C")]
		[Address(RVA = "0x49913B0", Offset = "0x49913B0", VA = "0x49913B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001B1")]
	[CompilerGenerated]
	private struct _003CWaitAsync_003Ed__46 : IAsyncStateMachine
	{
		[Token(Token = "0x40008B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40008B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x40008B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int millisecondTimeout;

		[Token(Token = "0x40008B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Task workerTask;

		[Token(Token = "0x40008BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenSource _003Ccts_003E5__2;

		[Token(Token = "0x40008BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private Task _003CtimeoutTask_003E5__3;

		[Token(Token = "0x40008BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000A9D")]
		[Address(RVA = "0x4991410", Offset = "0x4991410", VA = "0x4991410", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000A9E")]
		[Address(RVA = "0x49919B0", Offset = "0x49919B0", VA = "0x49919B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000898")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int running;

	[Token(Token = "0x4000899")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int maxIdleTime;

	[Token(Token = "0x400089A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AsyncManualResetEvent schedulerEvent;

	[Token(Token = "0x400089B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private ConnectionGroup defaultGroup;

	[Token(Token = "0x400089C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Dictionary<string, ConnectionGroup> groups;

	[Token(Token = "0x400089D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private LinkedList<(ConnectionGroup, WebOperation)> operations;

	[Token(Token = "0x400089E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private LinkedList<(ConnectionGroup, WebConnection, Task)> idleConnections;

	[Token(Token = "0x400089F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int currentConnections;

	[Token(Token = "0x40008A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int connectionLimit;

	[Token(Token = "0x40008A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private DateTime idleSince;

	[Token(Token = "0x40008A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int nextId;

	[Token(Token = "0x40008A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public readonly int ID;

	[Token(Token = "0x17000273")]
	private ServicePoint ServicePoint
	{
		[Token(Token = "0x6000A77")]
		[Address(RVA = "0x498DBF0", Offset = "0x498DBF0", VA = "0x498DBF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A78")]
		[Address(RVA = "0x498DC00", Offset = "0x498DC00", VA = "0x498DC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000274")]
	public int MaxIdleTime
	{
		[Token(Token = "0x6000A79")]
		[Address(RVA = "0x498DC10", Offset = "0x498DC10", VA = "0x498DC10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x498C5A0", Offset = "0x498C5A0", VA = "0x498C5A0")]
	public ServicePointScheduler(ServicePoint servicePoint, int connectionLimit, int maxIdleTime)
	{
	}

	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x498DDE0", Offset = "0x498DDE0", VA = "0x498DDE0")]
	public void Run()
	{
	}

	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x498E180", Offset = "0x498E180", VA = "0x498E180")]
	[AsyncStateMachine(typeof(_003CRunScheduler_003Ed__32))]
	private Task RunScheduler()
	{
		return null;
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x498E270", Offset = "0x498E270", VA = "0x498E270")]
	private void Cleanup()
	{
	}

	[Token(Token = "0x6000A7E")]
	[Address(RVA = "0x498E510", Offset = "0x498E510", VA = "0x498E510")]
	private void RunSchedulerIteration()
	{
	}

	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x498E890", Offset = "0x498E890", VA = "0x498E890")]
	private bool OperationCompleted(ConnectionGroup group, WebOperation operation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x498F080", Offset = "0x498F080", VA = "0x498F080")]
	private void CloseIdleConnection(ConnectionGroup group, WebConnection connection)
	{
	}

	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x498E7B0", Offset = "0x498E7B0", VA = "0x498E7B0")]
	private bool SchedulerIteration(ConnectionGroup group)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A82")]
	[Address(RVA = "0x498F1B0", Offset = "0x498F1B0", VA = "0x498F1B0")]
	private void RemoveOperation(WebOperation operation)
	{
	}

	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x498ED00", Offset = "0x498ED00", VA = "0x498ED00")]
	private void RemoveIdleConnection(WebConnection connection)
	{
	}

	[Token(Token = "0x6000A84")]
	[Address(RVA = "0x498F290", Offset = "0x498F290", VA = "0x498F290")]
	private void FinalCleanup()
	{
	}

	[Token(Token = "0x6000A85")]
	[Address(RVA = "0x498D080", Offset = "0x498D080", VA = "0x498D080")]
	public void SendRequest(WebOperation operation, string groupName)
	{
	}

	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x498F370", Offset = "0x498F370", VA = "0x498F370")]
	private ConnectionGroup GetConnectionGroup(string name)
	{
		return null;
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x498F600", Offset = "0x498F600", VA = "0x498F600")]
	private void OnConnectionCreated(WebConnection connection)
	{
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x498F610", Offset = "0x498F610", VA = "0x498F610")]
	private void OnConnectionClosed(WebConnection connection)
	{
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x498F630", Offset = "0x498F630", VA = "0x498F630")]
	[AsyncStateMachine(typeof(_003CWaitAsync_003Ed__46))]
	public static Task<bool> WaitAsync(Task workerTask, int millisecondTimeout)
	{
		return null;
	}
}
