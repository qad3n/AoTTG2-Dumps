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
		[Address(RVA = "0x4642C70", Offset = "0x4642C70", VA = "0x4642C70")]
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
		[Address(RVA = "0x4642BE0", Offset = "0x4642BE0", VA = "0x4642BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D9")]
	internal object AsyncObject
	{
		[Token(Token = "0x6000872")]
		[Address(RVA = "0x4642D30", Offset = "0x4642D30", VA = "0x4642D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DA")]
	public object AsyncState
	{
		[Token(Token = "0x6000873")]
		[Address(RVA = "0x4642D40", Offset = "0x4642D40", VA = "0x4642D40", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DB")]
	protected AsyncCallback AsyncCallback
	{
		[Token(Token = "0x6000874")]
		[Address(RVA = "0x4642D50", Offset = "0x4642D50", VA = "0x4642D50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DC")]
	public WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x6000875")]
		[Address(RVA = "0x4642D60", Offset = "0x4642D60", VA = "0x4642D60", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DD")]
	public bool CompletedSynchronously
	{
		[Token(Token = "0x6000877")]
		[Address(RVA = "0x4643010", Offset = "0x4643010", VA = "0x4643010", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DE")]
	public bool IsCompleted
	{
		[Token(Token = "0x6000878")]
		[Address(RVA = "0x4643040", Offset = "0x4643040", VA = "0x4643040", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DF")]
	internal bool InternalPeekCompleted
	{
		[Token(Token = "0x6000879")]
		[Address(RVA = "0x4643000", Offset = "0x4643000", VA = "0x4643000")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E0")]
	internal bool EndCalled
	{
		[Token(Token = "0x600087A")]
		[Address(RVA = "0x4643070", Offset = "0x4643070", VA = "0x4643070")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600087B")]
		[Address(RVA = "0x4643080", Offset = "0x4643080", VA = "0x4643080")]
		set
		{
		}
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x4642C80", Offset = "0x4642C80", VA = "0x4642C80")]
	internal LazyAsyncResult(object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x4642E20", Offset = "0x4642E20", VA = "0x4642E20")]
	private bool LazilyCreateEvent(out ManualResetEvent waitHandle)
	{
		return default(bool);
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x4643090", Offset = "0x4643090", VA = "0x4643090")]
	protected void ProtectedInvokeCallback(object result, IntPtr userToken)
	{
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x46432C0", Offset = "0x46432C0", VA = "0x46432C0")]
	internal void InvokeCallback(object result)
	{
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x46432D0", Offset = "0x46432D0", VA = "0x46432D0")]
	internal void InvokeCallback()
	{
	}

	[Token(Token = "0x600087F")]
	[Address(RVA = "0x46432E0", Offset = "0x46432E0", VA = "0x46432E0", Slot = "8")]
	protected virtual void Complete(IntPtr userToken)
	{
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x4643460", Offset = "0x4643460", VA = "0x4643460")]
	private void WorkerThreadComplete(object state)
	{
	}

	[Token(Token = "0x6000881")]
	[Address(RVA = "0x4643500", Offset = "0x4643500", VA = "0x4643500", Slot = "9")]
	protected virtual void Cleanup()
	{
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x4643510", Offset = "0x4643510", VA = "0x4643510")]
	internal object InternalWaitForCompletion()
	{
		return null;
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x4643520", Offset = "0x4643520", VA = "0x4643520")]
	private object WaitForCompletion(bool snap)
	{
		return null;
	}
}
