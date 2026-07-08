using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200039C")]
[ComVisible(true)]
public class AsyncResult : IAsyncResult, IMessageSink, System.Threading.IThreadPoolWorkItem
{
	[Token(Token = "0x4000F44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object async_state;

	[Token(Token = "0x4000F45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private WaitHandle handle;

	[Token(Token = "0x4000F46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object async_delegate;

	[Token(Token = "0x4000F47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IntPtr data;

	[Token(Token = "0x4000F48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private object object_data;

	[Token(Token = "0x4000F49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool sync_completed;

	[Token(Token = "0x4000F4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	private bool completed;

	[Token(Token = "0x4000F4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	private bool endinvoke_called;

	[Token(Token = "0x4000F4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private object async_callback;

	[Token(Token = "0x4000F4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private ExecutionContext current;

	[Token(Token = "0x4000F4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private ExecutionContext original;

	[Token(Token = "0x4000F4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private long add_time;

	[Token(Token = "0x4000F50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private System.Runtime.Remoting.Messaging.MonoMethodMessage call_message;

	[Token(Token = "0x4000F51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private IMessageCtrl message_ctrl;

	[Token(Token = "0x4000F52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private IMessage reply_message;

	[Token(Token = "0x4000F53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private WaitCallback orig_cb;

	[Token(Token = "0x1700039F")]
	public virtual object AsyncState
	{
		[Token(Token = "0x6001E09")]
		[Address(RVA = "0x4EA0D30", Offset = "0x4EA0D30", VA = "0x4EA0D30", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A0")]
	public virtual WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x6001E0A")]
		[Address(RVA = "0x4EA0D40", Offset = "0x4EA0D40", VA = "0x4EA0D40", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A1")]
	public virtual bool CompletedSynchronously
	{
		[Token(Token = "0x6001E0B")]
		[Address(RVA = "0x4EA0E70", Offset = "0x4EA0E70", VA = "0x4EA0E70", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A2")]
	public virtual bool IsCompleted
	{
		[Token(Token = "0x6001E0C")]
		[Address(RVA = "0x4EA0E80", Offset = "0x4EA0E80", VA = "0x4EA0E80", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A3")]
	public bool EndInvokeCalled
	{
		[Token(Token = "0x6001E0D")]
		[Address(RVA = "0x4EA0E90", Offset = "0x4EA0E90", VA = "0x4EA0E90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E0E")]
		[Address(RVA = "0x4EA0EA0", Offset = "0x4EA0EA0", VA = "0x4EA0EA0")]
		set
		{
		}
	}

	[Token(Token = "0x170003A4")]
	public virtual object AsyncDelegate
	{
		[Token(Token = "0x6001E0F")]
		[Address(RVA = "0x4EA0EB0", Offset = "0x4EA0EB0", VA = "0x4EA0EB0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A5")]
	public IMessageSink NextSink
	{
		[Token(Token = "0x6001E10")]
		[Address(RVA = "0x4EA0EC0", Offset = "0x4EA0EC0", VA = "0x4EA0EC0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A6")]
	internal System.Runtime.Remoting.Messaging.MonoMethodMessage CallMessage
	{
		[Token(Token = "0x6001E17")]
		[Address(RVA = "0x4EA10D0", Offset = "0x4EA10D0", VA = "0x4EA10D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E18")]
		[Address(RVA = "0x4EA10E0", Offset = "0x4EA10E0", VA = "0x4EA10E0")]
		set
		{
		}
	}

	[Token(Token = "0x6001E08")]
	[Address(RVA = "0x4EA0D20", Offset = "0x4EA0D20", VA = "0x4EA0D20")]
	internal AsyncResult()
	{
	}

	[Token(Token = "0x6001E11")]
	[Address(RVA = "0x4EA0ED0", Offset = "0x4EA0ED0", VA = "0x4EA0ED0", Slot = "18")]
	public virtual IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001E12")]
	[Address(RVA = "0x4EA0F10", Offset = "0x4EA0F10", VA = "0x4EA0F10", Slot = "19")]
	public virtual IMessage GetReplyMessage()
	{
		return null;
	}

	[Token(Token = "0x6001E13")]
	[Address(RVA = "0x4EA0F20", Offset = "0x4EA0F20", VA = "0x4EA0F20", Slot = "20")]
	public virtual void SetMessageCtrl(IMessageCtrl mc)
	{
	}

	[Token(Token = "0x6001E14")]
	[Address(RVA = "0x4EA0F30", Offset = "0x4EA0F30", VA = "0x4EA0F30")]
	internal void SetCompletedSynchronously(bool completed)
	{
	}

	[Token(Token = "0x6001E15")]
	[Address(RVA = "0x4E8D9B0", Offset = "0x4E8D9B0", VA = "0x4E8D9B0")]
	internal IMessage EndInvoke()
	{
		return null;
	}

	[Token(Token = "0x6001E16")]
	[Address(RVA = "0x4EA0F40", Offset = "0x4EA0F40", VA = "0x4EA0F40", Slot = "21")]
	public virtual IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E19")]
	[Address(RVA = "0x4EA10F0", Offset = "0x4EA10F0", VA = "0x4EA10F0", Slot = "10")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x6001E1A")]
	[Address(RVA = "0x4EA1110", Offset = "0x4EA1110", VA = "0x4EA1110", Slot = "11")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EMarkAborted(ThreadAbortException tae)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001E1B")]
	[Address(RVA = "0x4EA1100", Offset = "0x4EA1100", VA = "0x4EA1100")]
	internal extern object Invoke();
}
