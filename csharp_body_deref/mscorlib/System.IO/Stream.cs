// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Stream
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x200068F")]
public abstract class Stream : MarshalByRefObject, IDisposable
{
	[Token(Token = "0x2000690")]
	private struct ReadWriteParameters
	{
		[Token(Token = "0x4001A71")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal byte[] Buffer;

		[Token(Token = "0x4001A72")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal int Offset;

		[Token(Token = "0x4001A73")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		internal int Count;
	}

	[Token(Token = "0x2000691")]
	private sealed class ReadWriteTask : Task<int>, System.Threading.Tasks.ITaskCompletionAction
	{
		[Token(Token = "0x4001A74")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		internal readonly bool _isRead;

		[Token(Token = "0x4001A75")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
		internal readonly bool _apm;

		[Token(Token = "0x4001A76")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		internal Stream _stream;

		[Token(Token = "0x4001A77")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		internal byte[] _buffer;

		[Token(Token = "0x4001A78")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		internal readonly int _offset;

		[Token(Token = "0x4001A79")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
		internal readonly int _count;

		[Token(Token = "0x4001A7A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private AsyncCallback _callback;

		[Token(Token = "0x4001A7B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private ExecutionContext _context;

		[Token(Token = "0x4001A7C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static ContextCallback s_invokeAsyncCallback;

		[Token(Token = "0x17000827")]
		private bool System_002EThreading_002ETasks_002EITaskCompletionAction_002EInvokeMayRunArbitraryCode
		{
			[Token(Token = "0x6003292")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600328E")]
		[Address(RVA = "0x1AF6AB0", Offset = "0x1AF50B0", VA = "0x181AF6AB0")]
		internal void ClearBeginState()
		{
		}

		[Token(Token = "0x600328F")]
		[Address(RVA = "0x1AF6CD0", Offset = "0x1AF52D0", VA = "0x181AF6CD0")]
		public ReadWriteTask(bool isRead, bool apm, Func<object, int> function, object state, Stream stream, byte[] buffer, int offset, int count, AsyncCallback callback)
		{
		}

		[Token(Token = "0x6003290")]
		[Address(RVA = "0x1AF6AF0", Offset = "0x1AF50F0", VA = "0x181AF6AF0")]
		private static void InvokeAsyncCallback(object completedTask)
		{
		}

		[Token(Token = "0x6003291")]
		[Address(RVA = "0x1AF6B80", Offset = "0x1AF5180", VA = "0x181AF6B80", Slot = "14")]
		private void System_002EThreading_002ETasks_002EITaskCompletionAction_002EInvoke(Task completingTask)
		{
		}
	}

	[Token(Token = "0x2000692")]
	private sealed class NullStream : Stream
	{
		[Token(Token = "0x4001A7D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Task<int> s_zeroTask;

		[Token(Token = "0x17000828")]
		public override bool CanRead
		{
			[Token(Token = "0x6003294")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000829")]
		public override bool CanWrite
		{
			[Token(Token = "0x6003295")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700082A")]
		public override bool CanSeek
		{
			[Token(Token = "0x6003296")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700082B")]
		public override long Length
		{
			[Token(Token = "0x6003297")]
			[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "11")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x1700082C")]
		public override long Position
		{
			[Token(Token = "0x6003298")]
			[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "12")]
			get
			{
				return default(long);
			}
			[Token(Token = "0x6003299")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
			set
			{
			}
		}

		[Token(Token = "0x6003293")]
		[Address(RVA = "0x1AF15A0", Offset = "0x1AEFBA0", VA = "0x181AF15A0")]
		internal NullStream()
		{
		}

		[Token(Token = "0x600329A")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "19")]
		protected override void Dispose(bool disposing)
		{
		}

		[Token(Token = "0x600329B")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
		public override void Flush()
		{
		}

		[Token(Token = "0x600329C")]
		[Address(RVA = "0x1AF11B0", Offset = "0x1AEF7B0", VA = "0x181AF11B0", Slot = "21")]
		public override Task FlushAsync(CancellationToken cancellationToken)
		{
			return null;
		}

		[Token(Token = "0x600329D")]
		[Address(RVA = "0x1AF0DC0", Offset = "0x1AEF3C0", VA = "0x181AF0DC0", Slot = "22")]
		public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
		{
			return null;
		}

		[Token(Token = "0x600329E")]
		[Address(RVA = "0x1AF0EA0", Offset = "0x1AEF4A0", VA = "0x181AF0EA0", Slot = "23")]
		public override int EndRead(IAsyncResult asyncResult)
		{
			return default(int);
		}

		[Token(Token = "0x600329F")]
		[Address(RVA = "0x1AF0E30", Offset = "0x1AEF430", VA = "0x181AF0E30", Slot = "26")]
		public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
		{
			return null;
		}

		[Token(Token = "0x60032A0")]
		[Address(RVA = "0x1AF1030", Offset = "0x1AEF630", VA = "0x181AF1030", Slot = "27")]
		public override void EndWrite(IAsyncResult asyncResult)
		{
		}

		[Token(Token = "0x60032A1")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "32")]
		public override int Read(byte[] buffer, int offset, int count)
		{
			return default(int);
		}

		[Token(Token = "0x60032A2")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "33")]
		public override int Read(Span<byte> buffer)
		{
			return default(int);
		}

		[Token(Token = "0x60032A3")]
		[Address(RVA = "0x1AF1290", Offset = "0x1AEF890", VA = "0x181AF1290", Slot = "24")]
		public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
		{
			return null;
		}

		[Token(Token = "0x60032A4")]
		[Address(RVA = "0x1AF12E0", Offset = "0x1AEF8E0", VA = "0x181AF12E0", Slot = "25")]
		public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
		{
			return default(ValueTask<int>);
		}

		[Token(Token = "0x60032A5")]
		[Address(RVA = "0x1A5F1E0", Offset = "0x1A5D7E0", VA = "0x181A5F1E0", Slot = "34")]
		public override int ReadByte()
		{
			return default(int);
		}

		[Token(Token = "0x60032A6")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "35")]
		public override void Write(byte[] buffer, int offset, int count)
		{
		}

		[Token(Token = "0x60032A7")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "36")]
		public override void Write(ReadOnlySpan<byte> buffer)
		{
		}

		[Token(Token = "0x60032A8")]
		[Address(RVA = "0x1AF1430", Offset = "0x1AEFA30", VA = "0x181AF1430", Slot = "28")]
		public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
		{
			return null;
		}

		[Token(Token = "0x60032A9")]
		[Address(RVA = "0x1AF1340", Offset = "0x1AEF940", VA = "0x181AF1340", Slot = "29")]
		public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
		{
			return default(ValueTask);
		}

		[Token(Token = "0x60032AA")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "37")]
		public override void WriteByte(byte value)
		{
		}

		[Token(Token = "0x60032AB")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "30")]
		public override long Seek(long offset, SeekOrigin origin)
		{
			return default(long);
		}

		[Token(Token = "0x60032AC")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "31")]
		public override void SetLength(long length)
		{
		}
	}

	[Token(Token = "0x2000693")]
	private sealed class SynchronousAsyncResult : IAsyncResult
	{
		[Token(Token = "0x4001A7E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly object _stateObject;

		[Token(Token = "0x4001A7F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly bool _isWrite;

		[Token(Token = "0x4001A80")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private ManualResetEvent _waitHandle;

		[Token(Token = "0x4001A81")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private ExceptionDispatchInfo _exceptionInfo;

		[Token(Token = "0x4001A82")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool _endXxxCalled;

		[Token(Token = "0x4001A83")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		private int _bytesRead;

		[Token(Token = "0x1700082D")]
		public bool IsCompleted
		{
			[Token(Token = "0x60032B1")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700082E")]
		public WaitHandle AsyncWaitHandle
		{
			[Token(Token = "0x60032B2")]
			[Address(RVA = "0x1AFB400", Offset = "0x1AF9A00", VA = "0x181AFB400", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700082F")]
		public object AsyncState
		{
			[Token(Token = "0x60032B3")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000830")]
		public bool CompletedSynchronously
		{
			[Token(Token = "0x60032B4")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60032AE")]
		[Address(RVA = "0x1AFB3C0", Offset = "0x1AF99C0", VA = "0x181AFB3C0")]
		internal SynchronousAsyncResult(int bytesRead, object asyncStateObject)
		{
		}

		[Token(Token = "0x60032AF")]
		[Address(RVA = "0x19BCD70", Offset = "0x19BB370", VA = "0x1819BCD70")]
		internal SynchronousAsyncResult(object asyncStateObject)
		{
		}

		[Token(Token = "0x60032B0")]
		[Address(RVA = "0x1AFB360", Offset = "0x1AF9960", VA = "0x181AFB360")]
		internal SynchronousAsyncResult(Exception ex, object asyncStateObject, bool isWrite)
		{
		}

		[Token(Token = "0x60032B5")]
		[Address(RVA = "0x1AFB340", Offset = "0x1AF9940", VA = "0x181AFB340")]
		internal void ThrowIfError()
		{
		}

		[Token(Token = "0x60032B6")]
		[Address(RVA = "0x1AF7910", Offset = "0x1AF5F10", VA = "0x181AF7910")]
		internal static int EndRead(IAsyncResult asyncResult)
		{
			return default(int);
		}

		[Token(Token = "0x60032B7")]
		[Address(RVA = "0x1AF7A20", Offset = "0x1AF6020", VA = "0x181AF7A20")]
		internal static void EndWrite(IAsyncResult asyncResult)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000696")]
	[CompilerGenerated]
	private struct _003CFinishWriteAsync_003Ed__57 : IAsyncStateMachine
	{
		[Token(Token = "0x4001A90")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001A91")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001A92")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task writeTask;

		[Token(Token = "0x4001A93")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] localBuffer;

		[Token(Token = "0x4001A94")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60032C6")]
		[Address(RVA = "0x1AFD450", Offset = "0x1AFBA50", VA = "0x181AFD450", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60032C7")]
		[Address(RVA = "0x1AFD6A0", Offset = "0x1AFBCA0", VA = "0x181AFD6A0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4001A6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly Stream Null;

	[NonSerialized]
	[Token(Token = "0x4001A6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ReadWriteTask _activeReadWriteTask;

	[NonSerialized]
	[Token(Token = "0x4001A70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private SemaphoreSlim _asyncActiveSemaphore;

	[Token(Token = "0x1700081F")]
	public abstract bool CanRead
	{
		[Token(Token = "0x600325B")]
		get;
	}

	[Token(Token = "0x17000820")]
	public abstract bool CanSeek
	{
		[Token(Token = "0x600325C")]
		get;
	}

	[Token(Token = "0x17000821")]
	public virtual bool CanTimeout
	{
		[Token(Token = "0x600325D")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000822")]
	public abstract bool CanWrite
	{
		[Token(Token = "0x600325E")]
		get;
	}

	[Token(Token = "0x17000823")]
	public abstract long Length
	{
		[Token(Token = "0x600325F")]
		get;
	}

	[Token(Token = "0x17000824")]
	public abstract long Position
	{
		[Token(Token = "0x6003260")]
		get;
		[Token(Token = "0x6003261")]
		set;
	}

	[Token(Token = "0x17000825")]
	public virtual int ReadTimeout
	{
		[Token(Token = "0x6003262")]
		[Address(RVA = "0x1AF9790", Offset = "0x1AF7D90", VA = "0x181AF9790", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6003263")]
		[Address(RVA = "0x1AF9830", Offset = "0x1AF7E30", VA = "0x181AF9830", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000826")]
	public virtual int WriteTimeout
	{
		[Token(Token = "0x6003264")]
		[Address(RVA = "0x1AF97E0", Offset = "0x1AF7DE0", VA = "0x181AF97E0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6003265")]
		[Address(RVA = "0x1AF9880", Offset = "0x1AF7E80", VA = "0x181AF9880", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x600325A")]
	[Address(RVA = "0x1AF7FC0", Offset = "0x1AF65C0", VA = "0x181AF7FC0")]
	internal SemaphoreSlim EnsureAsyncActiveSemaphoreInitialized()
	{
		return null;
	}

	[Token(Token = "0x6003266")]
	[Address(RVA = "0x1AF7B20", Offset = "0x1AF6120", VA = "0x181AF7B20", Slot = "18")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6003267")]
	[Address(RVA = "0x198B170", Offset = "0x1989770", VA = "0x18198B170", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6003268")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "19")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6003269")]
	public abstract void Flush();

	[Token(Token = "0x600326A")]
	[Address(RVA = "0x1AF8220", Offset = "0x1AF6820", VA = "0x181AF8220", Slot = "21")]
	public virtual Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600326B")]
	[Address(RVA = "0x1AF7470", Offset = "0x1AF5A70", VA = "0x181AF7470", Slot = "22")]
	public virtual IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600326C")]
	[Address(RVA = "0x1AF7230", Offset = "0x1AF5830", VA = "0x181AF7230")]
	internal IAsyncResult BeginReadInternal(byte[] buffer, int offset, int count, AsyncCallback callback, object state, bool serializeAsynchronously, bool apm)
	{
		return null;
	}

	[Token(Token = "0x600326D")]
	[Address(RVA = "0x1AF7B80", Offset = "0x1AF6180", VA = "0x181AF7B80", Slot = "23")]
	public virtual int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x600326E")]
	[Address(RVA = "0x1AF8890", Offset = "0x1AF6E90", VA = "0x181AF8890")]
	public Task<int> ReadAsync(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x600326F")]
	[Address(RVA = "0x1AF8410", Offset = "0x1AF6A10", VA = "0x181AF8410", Slot = "24")]
	public virtual Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6003270")]
	[Address(RVA = "0x1AF84E0", Offset = "0x1AF6AE0", VA = "0x181AF84E0", Slot = "25")]
	public virtual ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6003271")]
	[Address(RVA = "0x1AF6E10", Offset = "0x1AF5410", VA = "0x181AF6E10")]
	private Task<int> BeginEndReadAsync(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x6003272")]
	[Address(RVA = "0x1AF76F0", Offset = "0x1AF5CF0", VA = "0x181AF76F0", Slot = "26")]
	public virtual IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6003273")]
	[Address(RVA = "0x1AF74B0", Offset = "0x1AF5AB0", VA = "0x181AF74B0")]
	internal IAsyncResult BeginWriteInternal(byte[] buffer, int offset, int count, AsyncCallback callback, object state, bool serializeAsynchronously, bool apm)
	{
		return null;
	}

	[Token(Token = "0x6003274")]
	[Address(RVA = "0x1AF8C00", Offset = "0x1AF7200", VA = "0x181AF8C00")]
	private void RunReadWriteTaskWhenReady(Task asyncWaiter, ReadWriteTask readWriteTask)
	{
	}

	[Token(Token = "0x6003275")]
	[Address(RVA = "0x1AF8DD0", Offset = "0x1AF73D0", VA = "0x181AF8DD0")]
	private void RunReadWriteTask(ReadWriteTask readWriteTask)
	{
	}

	[Token(Token = "0x6003276")]
	[Address(RVA = "0x1AF80E0", Offset = "0x1AF66E0", VA = "0x181AF80E0")]
	private void FinishTrackingAsyncOperation()
	{
	}

	[Token(Token = "0x6003277")]
	[Address(RVA = "0x1AF7DA0", Offset = "0x1AF63A0", VA = "0x181AF7DA0", Slot = "27")]
	public virtual void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6003278")]
	[Address(RVA = "0x1AF9380", Offset = "0x1AF7980", VA = "0x181AF9380")]
	public Task WriteAsync(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x6003279")]
	[Address(RVA = "0x1AF9400", Offset = "0x1AF7A00", VA = "0x181AF9400", Slot = "28")]
	public virtual Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600327A")]
	[Address(RVA = "0x1AF9010", Offset = "0x1AF7610", VA = "0x181AF9010", Slot = "29")]
	public virtual ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x600327B")]
	[Address(RVA = "0x1AF8120", Offset = "0x1AF6720", VA = "0x181AF8120")]
	[AsyncStateMachine(typeof(_003CFinishWriteAsync_003Ed__57))]
	private Task FinishWriteAsync(Task writeTask, byte[] localBuffer)
	{
		return null;
	}

	[Token(Token = "0x600327C")]
	[Address(RVA = "0x1AF7020", Offset = "0x1AF5620", VA = "0x181AF7020")]
	private Task BeginEndWriteAsync(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x600327D")]
	public abstract long Seek(long offset, SeekOrigin origin);

	[Token(Token = "0x600327E")]
	public abstract void SetLength(long value);

	[Token(Token = "0x600327F")]
	public abstract int Read(byte[] buffer, int offset, int count);

	[Token(Token = "0x6003280")]
	[Address(RVA = "0x1AF89B0", Offset = "0x1AF6FB0", VA = "0x181AF89B0", Slot = "33")]
	public virtual int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6003281")]
	[Address(RVA = "0x1AF8910", Offset = "0x1AF6F10", VA = "0x181AF8910", Slot = "34")]
	public virtual int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6003282")]
	public abstract void Write(byte[] buffer, int offset, int count);

	[Token(Token = "0x6003283")]
	[Address(RVA = "0x1AF9550", Offset = "0x1AF7B50", VA = "0x181AF9550", Slot = "36")]
	public virtual void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x6003284")]
	[Address(RVA = "0x1AF94C0", Offset = "0x1AF7AC0", VA = "0x181AF94C0", Slot = "37")]
	public virtual void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6003285")]
	[Address(RVA = "0x1AF7730", Offset = "0x1AF5D30", VA = "0x181AF7730")]
	internal IAsyncResult BlockingBeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6003286")]
	[Address(RVA = "0x1AF7910", Offset = "0x1AF5F10", VA = "0x181AF7910")]
	internal static int BlockingEndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6003287")]
	[Address(RVA = "0x1AF7820", Offset = "0x1AF5E20", VA = "0x181AF7820")]
	internal IAsyncResult BlockingBeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6003288")]
	[Address(RVA = "0x1AF7A20", Offset = "0x1AF6020", VA = "0x181AF7A20")]
	internal static void BlockingEndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6003289")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	private bool HasOverriddenBeginEndRead()
	{
		return default(bool);
	}

	[Token(Token = "0x600328A")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	private bool HasOverriddenBeginEndWrite()
	{
		return default(bool);
	}

	[Token(Token = "0x600328B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected Stream()
	{
	}
}
