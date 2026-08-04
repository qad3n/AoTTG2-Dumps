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

[Token(Token = "0x200018A")]
internal sealed class UnitySynchronizationContext : SynchronizationContext
{
	[Token(Token = "0x200018B")]
	private struct WorkRequest
	{
		[Token(Token = "0x40005BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly SendOrPostCallback m_DelagateCallback;

		[Token(Token = "0x40005BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly object m_DelagateState;

		[Token(Token = "0x40005C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly ManualResetEvent m_WaitHandle;

		[Token(Token = "0x6000B52")]
		[Address(RVA = "0x4E03370", Offset = "0x4E03370", VA = "0x4E03370")]
		public WorkRequest(SendOrPostCallback callback, object state, [Optional] ManualResetEvent waitHandle)
		{
		}

		[Token(Token = "0x6000B53")]
		[Address(RVA = "0x4E037F0", Offset = "0x4E037F0", VA = "0x4E037F0")]
		public void Invoke()
		{
		}
	}

	[Token(Token = "0x40005BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly List<WorkRequest> m_AsyncWorkQueue;

	[Token(Token = "0x40005BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<WorkRequest> m_CurrentFrameWork;

	[Token(Token = "0x40005BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly int m_MainThreadID;

	[Token(Token = "0x40005BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private int m_TrackedCount;

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x4E02E50", Offset = "0x4E02E50", VA = "0x4E02E50")]
	private UnitySynchronizationContext(int mainThreadID)
	{
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x4E02F10", Offset = "0x4E02F10", VA = "0x4E02F10")]
	private UnitySynchronizationContext(List<WorkRequest> queue, int mainThreadID)
	{
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x4E02FC0", Offset = "0x4E02FC0", VA = "0x4E02FC0", Slot = "4")]
	public override void Send(SendOrPostCallback callback, object state)
	{
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x4E033B0", Offset = "0x4E033B0", VA = "0x4E033B0", Slot = "6")]
	public override void OperationStarted()
	{
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x4E033C0", Offset = "0x4E033C0", VA = "0x4E033C0", Slot = "7")]
	public override void OperationCompleted()
	{
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x4E033D0", Offset = "0x4E033D0", VA = "0x4E033D0", Slot = "5")]
	public override void Post(SendOrPostCallback callback, object state)
	{
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x4E03590", Offset = "0x4E03590", VA = "0x4E03590", Slot = "9")]
	public override SynchronizationContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x4E035F0", Offset = "0x4E035F0", VA = "0x4E035F0")]
	public void Exec()
	{
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x4E038A0", Offset = "0x4E038A0", VA = "0x4E038A0")]
	private bool HasPendingTasks()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x4E038F0", Offset = "0x4E038F0", VA = "0x4E038F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InitializeSynchronizationContext()
	{
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x4E039F0", Offset = "0x4E039F0", VA = "0x4E039F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ExecuteTasks()
	{
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x4E03A40", Offset = "0x4E03A40", VA = "0x4E03A40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool ExecutePendingTasks(long millisecondsTimeout)
	{
		return default(bool);
	}
}
