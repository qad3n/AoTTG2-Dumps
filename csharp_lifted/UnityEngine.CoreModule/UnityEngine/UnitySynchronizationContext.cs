// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UnitySynchronizationContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001C5")]
internal sealed class UnitySynchronizationContext : SynchronizationContext
{
	[Token(Token = "0x20001C6")]
	private struct WorkRequest
	{
		[Token(Token = "0x400065F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly SendOrPostCallback m_DelagateCallback;

		[Token(Token = "0x4000660")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly object m_DelagateState;

		[Token(Token = "0x4000661")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly ManualResetEvent m_WaitHandle;

		[Token(Token = "0x6000EF4")]
		[Address(RVA = "0x6923720", Offset = "0x6922720", VA = "0x6923720")]
		public WorkRequest(SendOrPostCallback callback, object state, [Optional] ManualResetEvent waitHandle)
		{
		}

		[Token(Token = "0x6000EF5")]
		[Address(RVA = "0x6923B70", Offset = "0x6922B70", VA = "0x6923B70")]
		public void Invoke()
		{
		}
	}

	[Token(Token = "0x400065B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly List<WorkRequest> m_AsyncWorkQueue;

	[Token(Token = "0x400065C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<WorkRequest> m_CurrentFrameWork;

	[Token(Token = "0x400065D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly int m_MainThreadID;

	[Token(Token = "0x400065E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private int m_TrackedCount;

	[Token(Token = "0x17000251")]
	internal int MainThreadId
	{
		[Token(Token = "0x6000EE7")]
		[Address(RVA = "0x6923270", Offset = "0x6922270", VA = "0x6923270")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x6923280", Offset = "0x6922280", VA = "0x6923280")]
	private UnitySynchronizationContext(int mainThreadID)
	{
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x6923340", Offset = "0x6922340", VA = "0x6923340")]
	private UnitySynchronizationContext(List<WorkRequest> queue, int mainThreadID)
	{
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x69233F0", Offset = "0x69223F0", VA = "0x69233F0", Slot = "4")]
	public override void Send(SendOrPostCallback callback, object state)
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x6923760", Offset = "0x6922760", VA = "0x6923760", Slot = "6")]
	public override void OperationStarted()
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x6923770", Offset = "0x6922770", VA = "0x6923770", Slot = "7")]
	public override void OperationCompleted()
	{
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x6923780", Offset = "0x6922780", VA = "0x6923780", Slot = "5")]
	public override void Post(SendOrPostCallback callback, object state)
	{
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x6923920", Offset = "0x6922920", VA = "0x6923920", Slot = "9")]
	public override SynchronizationContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x6923980", Offset = "0x6922980", VA = "0x6923980")]
	public void Exec()
	{
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x6923C50", Offset = "0x6922C50", VA = "0x6923C50")]
	private bool HasPendingTasks()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x6923CA0", Offset = "0x6922CA0", VA = "0x6923CA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InitializeSynchronizationContext()
	{
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x6923DB0", Offset = "0x6922DB0", VA = "0x6923DB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ExecuteTasks()
	{
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x6923E00", Offset = "0x6922E00", VA = "0x6923E00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool ExecutePendingTasks(long millisecondsTimeout)
	{
		return default(bool);
	}
}
