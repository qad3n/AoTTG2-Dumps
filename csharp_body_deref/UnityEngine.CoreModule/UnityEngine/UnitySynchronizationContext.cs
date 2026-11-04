// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UnitySynchronizationContext
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001C4")]
internal sealed class UnitySynchronizationContext : SynchronizationContext
{
	[Token(Token = "0x20001C5")]
	private struct WorkRequest
	{
		[Token(Token = "0x400065A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly SendOrPostCallback m_DelagateCallback;

		[Token(Token = "0x400065B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly object m_DelagateState;

		[Token(Token = "0x400065C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly ManualResetEvent m_WaitHandle;

		[Token(Token = "0x6000EE2")]
		[Address(RVA = "0x1046250", Offset = "0x1044850", VA = "0x181046250")]
		public WorkRequest(SendOrPostCallback callback, object state, [Optional] ManualResetEvent waitHandle)
		{
		}

		[Token(Token = "0x6000EE3")]
		[Address(RVA = "0x2F2D640", Offset = "0x2F2BC40", VA = "0x182F2D640")]
		public void Invoke()
		{
		}
	}

	[Token(Token = "0x4000656")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly List<WorkRequest> m_AsyncWorkQueue;

	[Token(Token = "0x4000657")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<WorkRequest> m_CurrentFrameWork;

	[Token(Token = "0x4000658")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly int m_MainThreadID;

	[Token(Token = "0x4000659")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private int m_TrackedCount;

	[Token(Token = "0x1700024C")]
	internal int MainThreadId
	{
		[Token(Token = "0x6000ED5")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x2F2C7D0", Offset = "0x2F2ADD0", VA = "0x182F2C7D0")]
	private UnitySynchronizationContext(int mainThreadID)
	{
	}

	[Token(Token = "0x6000ED7")]
	[Address(RVA = "0x2F2C730", Offset = "0x2F2AD30", VA = "0x182F2C730")]
	private UnitySynchronizationContext(List<WorkRequest> queue, int mainThreadID)
	{
	}

	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x2F2C470", Offset = "0x2F2AA70", VA = "0x182F2C470", Slot = "4")]
	public override void Send(SendOrPostCallback callback, object state)
	{
	}

	[Token(Token = "0x6000ED9")]
	[Address(RVA = "0x2F2C2A0", Offset = "0x2F2A8A0", VA = "0x182F2C2A0", Slot = "6")]
	public override void OperationStarted()
	{
	}

	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x2F2C290", Offset = "0x2F2A890", VA = "0x182F2C290", Slot = "7")]
	public override void OperationCompleted()
	{
	}

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x2F2C2B0", Offset = "0x2F2A8B0", VA = "0x182F2C2B0", Slot = "5")]
	public override void Post(SendOrPostCallback callback, object state)
	{
	}

	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x2F2BC00", Offset = "0x2F2A200", VA = "0x182F2BC00", Slot = "9")]
	public override SynchronizationContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x2F2BCD0", Offset = "0x2F2A2D0", VA = "0x182F2BCD0")]
	public void Exec()
	{
	}

	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x2F2C070", Offset = "0x2F2A670", VA = "0x182F2C070")]
	private bool HasPendingTasks()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x2F2C0D0", Offset = "0x2F2A6D0", VA = "0x182F2C0D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InitializeSynchronizationContext()
	{
	}

	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x2F2C010", Offset = "0x2F2A610", VA = "0x182F2C010")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ExecuteTasks()
	{
	}

	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x2F2BEB0", Offset = "0x2F2A4B0", VA = "0x182F2BEB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool ExecutePendingTasks(long millisecondsTimeout)
	{
		return default(bool);
	}
}
