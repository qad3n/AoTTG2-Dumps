// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.LazyAsyncResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200015E")]
internal class LazyAsyncResult : IAsyncResult
{
	[Token(Token = "0x200015F")]
	private class ThreadContext
	{
		[Token(Token = "0x4000705")]
		[FieldOffset(Offset = "0x10")]
		internal int m_NestedIOCount;

		[Token(Token = "0x6000884")]
		[Address(RVA = "0x4967D70", Offset = "0x4967D70", VA = "0x4967D70")]
		public ThreadContext()
		{
		}
	}

	[Token(Token = "0x40006FC")]
	[ThreadStatic]
	private static ThreadContext t_ThreadContext;

	[Token(Token = "0x40006FD")]
	[FieldOffset(Offset = "0x10")]
	private object m_AsyncObject;

	[Token(Token = "0x40006FE")]
	[FieldOffset(Offset = "0x18")]
	private object m_AsyncState;

	[Token(Token = "0x40006FF")]
	[FieldOffset(Offset = "0x20")]
	private AsyncCallback m_AsyncCallback;

	[Token(Token = "0x4000700")]
	[FieldOffset(Offset = "0x28")]
	private object m_Result;

	[Token(Token = "0x4000701")]
	[FieldOffset(Offset = "0x30")]
	private int m_IntCompleted;

	[Token(Token = "0x4000702")]
	[FieldOffset(Offset = "0x34")]
	private bool m_EndCalled;

	[Token(Token = "0x4000703")]
	[FieldOffset(Offset = "0x35")]
	private bool m_UserEvent;

	[Token(Token = "0x4000704")]
	[FieldOffset(Offset = "0x38")]
	private object m_Event;

	[Token(Token = "0x170001D8")]
	private static ThreadContext CurrentThreadContext
	{
		[Token(Token = "0x6000870")]
		[Address(RVA = "0x4967CE0", Offset = "0x4967CE0", VA = "0x4967CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D9")]
	internal object AsyncObject
	{
		[Token(Token = "0x6000872")]
		[Address(RVA = "0x4967E30", Offset = "0x4967E30", VA = "0x4967E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DA")]
	public object AsyncState
	{
		[Token(Token = "0x6000873")]
		[Address(RVA = "0x4967E40", Offset = "0x4967E40", VA = "0x4967E40", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DB")]
	protected AsyncCallback AsyncCallback
	{
		[Token(Token = "0x6000874")]
		[Address(RVA = "0x4967E50", Offset = "0x4967E50", VA = "0x4967E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DC")]
	public WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x6000875")]
		[Address(RVA = "0x4967E60", Offset = "0x4967E60", VA = "0x4967E60", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DD")]
	public bool CompletedSynchronously
	{
		[Token(Token = "0x6000877")]
		[Address(RVA = "0x4968110", Offset = "0x4968110", VA = "0x4968110", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DE")]
	public bool IsCompleted
	{
		[Token(Token = "0x6000878")]
		[Address(RVA = "0x4968140", Offset = "0x4968140", VA = "0x4968140", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DF")]
	internal bool InternalPeekCompleted
	{
		[Token(Token = "0x6000879")]
		[Address(RVA = "0x4968100", Offset = "0x4968100", VA = "0x4968100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E0")]
	internal bool EndCalled
	{
		[Token(Token = "0x600087A")]
		[Address(RVA = "0x4968170", Offset = "0x4968170", VA = "0x4968170")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600087B")]
		[Address(RVA = "0x4968180", Offset = "0x4968180", VA = "0x4968180")]
		set
		{
		}
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x4967D80", Offset = "0x4967D80", VA = "0x4967D80")]
	internal LazyAsyncResult(object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x4967F20", Offset = "0x4967F20", VA = "0x4967F20")]
	private bool LazilyCreateEvent(out ManualResetEvent waitHandle)
	{
		return default(bool);
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x4968190", Offset = "0x4968190", VA = "0x4968190")]
	protected void ProtectedInvokeCallback(object result, IntPtr userToken)
	{
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x49683C0", Offset = "0x49683C0", VA = "0x49683C0")]
	internal void InvokeCallback(object result)
	{
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x49683D0", Offset = "0x49683D0", VA = "0x49683D0")]
	internal void InvokeCallback()
	{
	}

	[Token(Token = "0x600087F")]
	[Address(RVA = "0x49683E0", Offset = "0x49683E0", VA = "0x49683E0", Slot = "8")]
	protected virtual void Complete(IntPtr userToken)
	{
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x4968560", Offset = "0x4968560", VA = "0x4968560")]
	private void WorkerThreadComplete(object state)
	{
	}

	[Token(Token = "0x6000881")]
	[Address(RVA = "0x4968600", Offset = "0x4968600", VA = "0x4968600", Slot = "9")]
	protected virtual void Cleanup()
	{
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x4968610", Offset = "0x4968610", VA = "0x4968610")]
	internal object InternalWaitForCompletion()
	{
		return null;
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x4968620", Offset = "0x4968620", VA = "0x4968620")]
	private object WaitForCompletion(bool snap)
	{
		return null;
	}
}
