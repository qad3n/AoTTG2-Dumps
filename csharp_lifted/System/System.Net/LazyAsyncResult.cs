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

[Token(Token = "0x20002A7")]
internal class LazyAsyncResult : IAsyncResult
{
	[Token(Token = "0x20002A8")]
	private class ThreadContext
	{
		[Token(Token = "0x4000A4C")]
		[FieldOffset(Offset = "0x10")]
		internal int m_NestedIOCount;

		[Token(Token = "0x6001286")]
		[Address(RVA = "0x62AF5E0", Offset = "0x62AE5E0", VA = "0x62AF5E0")]
		public ThreadContext()
		{
		}
	}

	[Token(Token = "0x4000A43")]
	[ThreadStatic]
	private static ThreadContext t_ThreadContext;

	[Token(Token = "0x4000A44")]
	[FieldOffset(Offset = "0x10")]
	private object m_AsyncObject;

	[Token(Token = "0x4000A45")]
	[FieldOffset(Offset = "0x18")]
	private object m_AsyncState;

	[Token(Token = "0x4000A46")]
	[FieldOffset(Offset = "0x20")]
	private AsyncCallback m_AsyncCallback;

	[Token(Token = "0x4000A47")]
	[FieldOffset(Offset = "0x28")]
	private object m_Result;

	[Token(Token = "0x4000A48")]
	[FieldOffset(Offset = "0x30")]
	private int m_IntCompleted;

	[Token(Token = "0x4000A49")]
	[FieldOffset(Offset = "0x34")]
	private bool m_EndCalled;

	[Token(Token = "0x4000A4A")]
	[FieldOffset(Offset = "0x35")]
	private bool m_UserEvent;

	[Token(Token = "0x4000A4B")]
	[FieldOffset(Offset = "0x38")]
	private object m_Event;

	[Token(Token = "0x170003FE")]
	private static ThreadContext CurrentThreadContext
	{
		[Token(Token = "0x6001272")]
		[Address(RVA = "0x62AF550", Offset = "0x62AE550", VA = "0x62AF550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FF")]
	internal object AsyncObject
	{
		[Token(Token = "0x6001274")]
		[Address(RVA = "0x62AF6A0", Offset = "0x62AE6A0", VA = "0x62AF6A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000400")]
	public object AsyncState
	{
		[Token(Token = "0x6001275")]
		[Address(RVA = "0x62AF6B0", Offset = "0x62AE6B0", VA = "0x62AF6B0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000401")]
	protected AsyncCallback AsyncCallback
	{
		[Token(Token = "0x6001276")]
		[Address(RVA = "0x62AF6C0", Offset = "0x62AE6C0", VA = "0x62AF6C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000402")]
	public WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x6001277")]
		[Address(RVA = "0x62AF6D0", Offset = "0x62AE6D0", VA = "0x62AF6D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000403")]
	public bool CompletedSynchronously
	{
		[Token(Token = "0x6001279")]
		[Address(RVA = "0x62AF930", Offset = "0x62AE930", VA = "0x62AF930", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000404")]
	public bool IsCompleted
	{
		[Token(Token = "0x600127A")]
		[Address(RVA = "0x62AF960", Offset = "0x62AE960", VA = "0x62AF960", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000405")]
	internal bool InternalPeekCompleted
	{
		[Token(Token = "0x600127B")]
		[Address(RVA = "0x62AF920", Offset = "0x62AE920", VA = "0x62AF920")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000406")]
	internal bool EndCalled
	{
		[Token(Token = "0x600127C")]
		[Address(RVA = "0x62AF990", Offset = "0x62AE990", VA = "0x62AF990")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600127D")]
		[Address(RVA = "0x62AF9A0", Offset = "0x62AE9A0", VA = "0x62AF9A0")]
		set
		{
		}
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x62AF5F0", Offset = "0x62AE5F0", VA = "0x62AF5F0")]
	internal LazyAsyncResult(object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6001278")]
	[Address(RVA = "0x62AF770", Offset = "0x62AE770", VA = "0x62AF770")]
	private bool LazilyCreateEvent(out ManualResetEvent waitHandle)
	{
		return default(bool);
	}

	[Token(Token = "0x600127E")]
	[Address(RVA = "0x62AF9B0", Offset = "0x62AE9B0", VA = "0x62AF9B0")]
	protected void ProtectedInvokeCallback(object result, IntPtr userToken)
	{
	}

	[Token(Token = "0x600127F")]
	[Address(RVA = "0x62AFBD0", Offset = "0x62AEBD0", VA = "0x62AFBD0")]
	internal void InvokeCallback(object result)
	{
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x62AFBE0", Offset = "0x62AEBE0", VA = "0x62AFBE0")]
	internal void InvokeCallback()
	{
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x62AFBF0", Offset = "0x62AEBF0", VA = "0x62AFBF0", Slot = "8")]
	protected virtual void Complete(IntPtr userToken)
	{
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x62AFD50", Offset = "0x62AED50", VA = "0x62AFD50")]
	private void WorkerThreadComplete(object state)
	{
	}

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x62AFDF0", Offset = "0x62AEDF0", VA = "0x62AFDF0", Slot = "9")]
	protected virtual void Cleanup()
	{
	}

	[Token(Token = "0x6001284")]
	[Address(RVA = "0x62AFE00", Offset = "0x62AEE00", VA = "0x62AFE00")]
	internal object InternalWaitForCompletion()
	{
		return null;
	}

	[Token(Token = "0x6001285")]
	[Address(RVA = "0x62AFE10", Offset = "0x62AEE10", VA = "0x62AFE10")]
	private object WaitForCompletion(bool snap)
	{
		return null;
	}
}
