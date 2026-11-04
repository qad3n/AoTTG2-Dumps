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

[Token(Token = "0x20002E6")]
internal class LazyAsyncResult : IAsyncResult
{
	[Token(Token = "0x20002E7")]
	private class ThreadContext
	{
		[Token(Token = "0x4000B1B")]
		[FieldOffset(Offset = "0x10")]
		internal int m_NestedIOCount;

		[Token(Token = "0x6001444")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ThreadContext()
		{
		}
	}

	[Token(Token = "0x4000B12")]
	[ThreadStatic]
	private static ThreadContext t_ThreadContext;

	[Token(Token = "0x4000B13")]
	[FieldOffset(Offset = "0x10")]
	private object m_AsyncObject;

	[Token(Token = "0x4000B14")]
	[FieldOffset(Offset = "0x18")]
	private object m_AsyncState;

	[Token(Token = "0x4000B15")]
	[FieldOffset(Offset = "0x20")]
	private AsyncCallback m_AsyncCallback;

	[Token(Token = "0x4000B16")]
	[FieldOffset(Offset = "0x28")]
	private object m_Result;

	[Token(Token = "0x4000B17")]
	[FieldOffset(Offset = "0x30")]
	private int m_IntCompleted;

	[Token(Token = "0x4000B18")]
	[FieldOffset(Offset = "0x34")]
	private bool m_EndCalled;

	[Token(Token = "0x4000B19")]
	[FieldOffset(Offset = "0x35")]
	private bool m_UserEvent;

	[Token(Token = "0x4000B1A")]
	[FieldOffset(Offset = "0x38")]
	private object m_Event;

	[Token(Token = "0x1700042D")]
	private static ThreadContext CurrentThreadContext
	{
		[Token(Token = "0x6001430")]
		[Address(RVA = "0x27CFC70", Offset = "0x27CE270", VA = "0x1827CFC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700042E")]
	internal object AsyncObject
	{
		[Token(Token = "0x6001432")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700042F")]
	public object AsyncState
	{
		[Token(Token = "0x6001433")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000430")]
	protected AsyncCallback AsyncCallback
	{
		[Token(Token = "0x6001434")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000431")]
	public WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x6001435")]
		[Address(RVA = "0x27CFBA0", Offset = "0x27CE1A0", VA = "0x1827CFBA0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000432")]
	public bool CompletedSynchronously
	{
		[Token(Token = "0x6001437")]
		[Address(RVA = "0x27CFC40", Offset = "0x27CE240", VA = "0x1827CFC40", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000433")]
	public bool IsCompleted
	{
		[Token(Token = "0x6001438")]
		[Address(RVA = "0x27CFD20", Offset = "0x27CE320", VA = "0x1827CFD20", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000434")]
	internal bool InternalPeekCompleted
	{
		[Token(Token = "0x6001439")]
		[Address(RVA = "0x27CFD10", Offset = "0x27CE310", VA = "0x1827CFD10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000435")]
	internal bool EndCalled
	{
		[Token(Token = "0x600143A")]
		[Address(RVA = "0xAB9F70", Offset = "0xAB8570", VA = "0x180AB9F70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600143B")]
		[Address(RVA = "0xAB9F80", Offset = "0xAB8580", VA = "0x180AB9F80")]
		set
		{
		}
	}

	[Token(Token = "0x6001431")]
	[Address(RVA = "0x27CFAF0", Offset = "0x27CE0F0", VA = "0x1827CFAF0")]
	internal LazyAsyncResult(object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6001436")]
	[Address(RVA = "0x27CF580", Offset = "0x27CDB80", VA = "0x1827CF580")]
	private bool LazilyCreateEvent(out ManualResetEvent waitHandle)
	{
		return default(bool);
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x27CF700", Offset = "0x27CDD00", VA = "0x1827CF700")]
	protected void ProtectedInvokeCallback(object result, IntPtr userToken)
	{
	}

	[Token(Token = "0x600143D")]
	[Address(RVA = "0x27CF570", Offset = "0x27CDB70", VA = "0x1827CF570")]
	internal void InvokeCallback(object result)
	{
	}

	[Token(Token = "0x600143E")]
	[Address(RVA = "0x27CF560", Offset = "0x27CDB60", VA = "0x1827CF560")]
	internal void InvokeCallback()
	{
	}

	[Token(Token = "0x600143F")]
	[Address(RVA = "0x27CF360", Offset = "0x27CD960", VA = "0x1827CF360", Slot = "8")]
	protected virtual void Complete(IntPtr userToken)
	{
	}

	[Token(Token = "0x6001440")]
	[Address(RVA = "0x27CFA70", Offset = "0x27CE070", VA = "0x1827CFA70")]
	private void WorkerThreadComplete(object state)
	{
	}

	[Token(Token = "0x6001441")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	protected virtual void Cleanup()
	{
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x27CF550", Offset = "0x27CDB50", VA = "0x1827CF550")]
	internal object InternalWaitForCompletion()
	{
		return null;
	}

	[Token(Token = "0x6001443")]
	[Address(RVA = "0x27CF890", Offset = "0x27CDE90", VA = "0x1827CF890")]
	private object WaitForCompletion(bool snap)
	{
		return null;
	}
}
