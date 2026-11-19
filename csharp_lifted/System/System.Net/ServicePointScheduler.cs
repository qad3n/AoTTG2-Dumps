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

[Token(Token = "0x20002F5")]
internal class ServicePointScheduler
{
	[Token(Token = "0x20002F6")]
	private class ConnectionGroup
	{
		[Token(Token = "0x4000BEC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		[CompilerGenerated]
		private readonly string _003CName_003Ek__BackingField;

		[Token(Token = "0x4000BED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static int nextId;

		[Token(Token = "0x4000BEE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly int ID;

		[Token(Token = "0x4000BEF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private LinkedList<WebConnection> connections;

		[Token(Token = "0x4000BF0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private LinkedList<WebOperation> queue;

		[Token(Token = "0x1700049C")]
		public ServicePointScheduler Scheduler
		{
			[Token(Token = "0x600148E")]
			[Address(RVA = "0x6191950", Offset = "0x6190950", VA = "0x6191950")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600148F")]
		[Address(RVA = "0x618FD20", Offset = "0x618ED20", VA = "0x618FD20")]
		public ConnectionGroup(ServicePointScheduler scheduler, string name)
		{
		}

		[Token(Token = "0x6001490")]
		[Address(RVA = "0x6190500", Offset = "0x618F500", VA = "0x6190500")]
		public bool IsEmpty()
		{
			return default(bool);
		}

		[Token(Token = "0x6001491")]
		[Address(RVA = "0x6190EC0", Offset = "0x618FEC0", VA = "0x6190EC0")]
		public void RemoveConnection(WebConnection connection)
		{
		}

		[Token(Token = "0x6001492")]
		[Address(RVA = "0x6191030", Offset = "0x6190030", VA = "0x6191030")]
		public void Cleanup()
		{
		}

		[Token(Token = "0x6001493")]
		[Address(RVA = "0x61917C0", Offset = "0x61907C0", VA = "0x61917C0")]
		public void EnqueueOperation(WebOperation operation)
		{
		}

		[Token(Token = "0x6001494")]
		[Address(RVA = "0x6191320", Offset = "0x6190320", VA = "0x6191320")]
		public WebOperation GetNextOperation()
		{
			return null;
		}

		[Token(Token = "0x6001495")]
		[Address(RVA = "0x61919A0", Offset = "0x61909A0", VA = "0x61919A0")]
		public WebConnection FindIdleConnection(WebOperation operation)
		{
			return null;
		}

		[Token(Token = "0x6001496")]
		[Address(RVA = "0x6191120", Offset = "0x6190120", VA = "0x6191120")]
		public (WebConnection, bool) CreateOrReuseConnection(WebOperation operation, bool force)
		{
			return default((WebConnection, bool));
		}
	}

	[Token(Token = "0x20002F7")]
	private class AsyncManualResetEvent
	{
		[Token(Token = "0x4000BF1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private TaskCompletionSource<bool> m_tcs;

		[Token(Token = "0x6001497")]
		[Address(RVA = "0x61923B0", Offset = "0x61913B0", VA = "0x61923B0")]
		public Task<bool> WaitAsync(int millisecondTimeout)
		{
			return null;
		}

		[Token(Token = "0x6001498")]
		[Address(RVA = "0x618FF00", Offset = "0x618EF00", VA = "0x618FF00")]
		public void Set()
		{
		}

		[Token(Token = "0x6001499")]
		[Address(RVA = "0x6190990", Offset = "0x618F990", VA = "0x6190990")]
		public void Reset()
		{
		}

		[Token(Token = "0x600149A")]
		[Address(RVA = "0x618FC90", Offset = "0x618EC90", VA = "0x618FC90")]
		public AsyncManualResetEvent(bool state)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20002F9")]
	[CompilerGenerated]
	private struct _003CRunScheduler_003Ed__32 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BF4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BF5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000BF6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ServicePointScheduler _003C_003E4__this;

		[Token(Token = "0x4000BF7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private (ConnectionGroup, WebOperation)[] _003CoperationArray_003E5__2;

		[Token(Token = "0x4000BF8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private (ConnectionGroup, WebConnection, Task)[] _003CidleArray_003E5__3;

		[Token(Token = "0x4000BF9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private List<Task> _003CtaskList_003E5__4;

		[Token(Token = "0x4000BFA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private Task<bool> _003CschedulerTask_003E5__5;

		[Token(Token = "0x4000BFB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool _003CfinalCleanup_003E5__6;

		[Token(Token = "0x4000BFC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600149E")]
		[Address(RVA = "0x6192500", Offset = "0x6191500", VA = "0x6192500", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600149F")]
		[Address(RVA = "0x6193290", Offset = "0x6192290", VA = "0x6193290", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20002FA")]
	[CompilerGenerated]
	private struct _003CWaitAsync_003Ed__46 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BFD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BFE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x4000BFF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int millisecondTimeout;

		[Token(Token = "0x4000C00")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Task workerTask;

		[Token(Token = "0x4000C01")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CancellationTokenSource _003Ccts_003E5__2;

		[Token(Token = "0x4000C02")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private Task _003CtimeoutTask_003E5__3;

		[Token(Token = "0x4000C03")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60014A0")]
		[Address(RVA = "0x61932F0", Offset = "0x61922F0", VA = "0x61932F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60014A1")]
		[Address(RVA = "0x6193830", Offset = "0x6192830", VA = "0x6193830", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000BDF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int running;

	[Token(Token = "0x4000BE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int maxIdleTime;

	[Token(Token = "0x4000BE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private AsyncManualResetEvent schedulerEvent;

	[Token(Token = "0x4000BE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private ConnectionGroup defaultGroup;

	[Token(Token = "0x4000BE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Dictionary<string, ConnectionGroup> groups;

	[Token(Token = "0x4000BE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private LinkedList<(ConnectionGroup, WebOperation)> operations;

	[Token(Token = "0x4000BE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private LinkedList<(ConnectionGroup, WebConnection, Task)> idleConnections;

	[Token(Token = "0x4000BE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int currentConnections;

	[Token(Token = "0x4000BE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int connectionLimit;

	[Token(Token = "0x4000BE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private DateTime idleSince;

	[Token(Token = "0x4000BE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int nextId;

	[Token(Token = "0x4000BEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public readonly int ID;

	[Token(Token = "0x1700049A")]
	private ServicePoint ServicePoint
	{
		[Token(Token = "0x600147A")]
		[Address(RVA = "0x618FC60", Offset = "0x618EC60", VA = "0x618FC60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600147B")]
		[Address(RVA = "0x618FC70", Offset = "0x618EC70", VA = "0x618FC70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700049B")]
	public int MaxIdleTime
	{
		[Token(Token = "0x600147C")]
		[Address(RVA = "0x618FC80", Offset = "0x618EC80", VA = "0x618FC80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x618E630", Offset = "0x618D630", VA = "0x618E630")]
	public ServicePointScheduler(ServicePoint servicePoint, int connectionLimit, int maxIdleTime)
	{
	}

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x618FE40", Offset = "0x618EE40", VA = "0x618FE40")]
	public void Run()
	{
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x61901E0", Offset = "0x618F1E0", VA = "0x61901E0")]
	[AsyncStateMachine(typeof(_003CRunScheduler_003Ed__32))]
	private Task RunScheduler()
	{
		return null;
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x61902C0", Offset = "0x618F2C0", VA = "0x61902C0")]
	private void Cleanup()
	{
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x6190560", Offset = "0x618F560", VA = "0x6190560")]
	private void RunSchedulerIteration()
	{
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x6190B30", Offset = "0x618FB30", VA = "0x6190B30")]
	private bool OperationCompleted(ConnectionGroup group, WebOperation operation)
	{
		return default(bool);
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x61912E0", Offset = "0x61902E0", VA = "0x61912E0")]
	private void CloseIdleConnection(ConnectionGroup group, WebConnection connection)
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x6190A50", Offset = "0x618FA50", VA = "0x6190A50")]
	private bool SchedulerIteration(ConnectionGroup group)
	{
		return default(bool);
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x6191410", Offset = "0x6190410", VA = "0x6191410")]
	private void RemoveOperation(WebOperation operation)
	{
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x6190F60", Offset = "0x618FF60", VA = "0x6190F60")]
	private void RemoveIdleConnection(WebConnection connection)
	{
	}

	[Token(Token = "0x6001487")]
	[Address(RVA = "0x61914E0", Offset = "0x61904E0", VA = "0x61914E0")]
	private void FinalCleanup()
	{
	}

	[Token(Token = "0x6001488")]
	[Address(RVA = "0x618F120", Offset = "0x618E120", VA = "0x618F120")]
	public void SendRequest(WebOperation operation, string groupName)
	{
	}

	[Token(Token = "0x6001489")]
	[Address(RVA = "0x61915C0", Offset = "0x61905C0", VA = "0x61915C0")]
	private ConnectionGroup GetConnectionGroup(string name)
	{
		return null;
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x6191810", Offset = "0x6190810", VA = "0x6191810")]
	private void OnConnectionCreated(WebConnection connection)
	{
	}

	[Token(Token = "0x600148B")]
	[Address(RVA = "0x6191820", Offset = "0x6190820", VA = "0x6191820")]
	private void OnConnectionClosed(WebConnection connection)
	{
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x6191840", Offset = "0x6190840", VA = "0x6191840")]
	[AsyncStateMachine(typeof(_003CWaitAsync_003Ed__46))]
	public static Task<bool> WaitAsync(Task workerTask, int millisecondTimeout)
	{
		return null;
	}
}
