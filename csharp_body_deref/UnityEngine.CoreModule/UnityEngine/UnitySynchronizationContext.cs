using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000187")]
internal sealed class UnitySynchronizationContext : SynchronizationContext
{
	[Token(Token = "0x2000188")]
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

		[Token(Token = "0x6000B50")]
		[Address(RVA = "0x4ADBA40", Offset = "0x4ADBA40", VA = "0x4ADBA40")]
		public WorkRequest(SendOrPostCallback callback, object state, [Optional] ManualResetEvent waitHandle)
		{
		}

		[Token(Token = "0x6000B51")]
		[Address(RVA = "0x4ADBEC0", Offset = "0x4ADBEC0", VA = "0x4ADBEC0")]
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

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x4ADB520", Offset = "0x4ADB520", VA = "0x4ADB520")]
	private UnitySynchronizationContext(int mainThreadID)
	{
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x4ADB5E0", Offset = "0x4ADB5E0", VA = "0x4ADB5E0")]
	private UnitySynchronizationContext(List<WorkRequest> queue, int mainThreadID)
	{
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x4ADB690", Offset = "0x4ADB690", VA = "0x4ADB690", Slot = "4")]
	public override void Send(SendOrPostCallback callback, object state)
	{
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x4ADBA80", Offset = "0x4ADBA80", VA = "0x4ADBA80", Slot = "6")]
	public override void OperationStarted()
	{
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x4ADBA90", Offset = "0x4ADBA90", VA = "0x4ADBA90", Slot = "7")]
	public override void OperationCompleted()
	{
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x4ADBAA0", Offset = "0x4ADBAA0", VA = "0x4ADBAA0", Slot = "5")]
	public override void Post(SendOrPostCallback callback, object state)
	{
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x4ADBC60", Offset = "0x4ADBC60", VA = "0x4ADBC60", Slot = "9")]
	public override SynchronizationContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x4ADBCC0", Offset = "0x4ADBCC0", VA = "0x4ADBCC0")]
	public void Exec()
	{
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x4ADBF70", Offset = "0x4ADBF70", VA = "0x4ADBF70")]
	private bool HasPendingTasks()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x4ADBFC0", Offset = "0x4ADBFC0", VA = "0x4ADBFC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InitializeSynchronizationContext()
	{
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x4ADC0C0", Offset = "0x4ADC0C0", VA = "0x4ADC0C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ExecuteTasks()
	{
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x4ADC110", Offset = "0x4ADC110", VA = "0x4ADC110")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool ExecutePendingTasks(long millisecondsTimeout)
	{
		return default(bool);
	}
}
