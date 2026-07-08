using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000567")]
public abstract class Stream : MarshalByRefObject, IDisposable
{
	[Token(Token = "0x2000568")]
	private struct ReadWriteParameters
	{
		[Token(Token = "0x4001694")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal byte[] Buffer;

		[Token(Token = "0x4001695")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal int Offset;

		[Token(Token = "0x4001696")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		internal int Count;
	}

	[Token(Token = "0x2000569")]
	private sealed class ReadWriteTask : Task<int>, System.Threading.Tasks.ITaskCompletionAction
	{
		[Token(Token = "0x4001697")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		internal readonly bool _isRead;

		[Token(Token = "0x4001698")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
		internal readonly bool _apm;

		[Token(Token = "0x4001699")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		internal Stream _stream;

		[Token(Token = "0x400169A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		internal byte[] _buffer;

		[Token(Token = "0x400169B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		internal readonly int _offset;

		[Token(Token = "0x400169C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
		internal readonly int _count;

		[Token(Token = "0x400169D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private AsyncCallback _callback;

		[Token(Token = "0x400169E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private ExecutionContext _context;

		[Token(Token = "0x400169F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static ContextCallback s_invokeAsyncCallback;

		[Token(Token = "0x17000611")]
		private bool System_002EThreading_002ETasks_002EITaskCompletionAction_002EInvokeMayRunArbitraryCode
		{
			[Token(Token = "0x60029CB")]
			[Address(RVA = "0x4F41520", Offset = "0x4F41520", VA = "0x4F41520", Slot = "15")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60029C7")]
		[Address(RVA = "0x4F41300", Offset = "0x4F41300", VA = "0x4F41300")]
		internal void ClearBeginState()
		{
		}

		[Token(Token = "0x60029C8")]
		[Address(RVA = "0x4F3EAF0", Offset = "0x4F3EAF0", VA = "0x4F3EAF0")]
		public ReadWriteTask(bool isRead, bool apm, Func<object, int> function, object state, Stream stream, byte[] buffer, int offset, int count, AsyncCallback callback)
		{
		}

		[Token(Token = "0x60029C9")]
		[Address(RVA = "0x4F41330", Offset = "0x4F41330", VA = "0x4F41330")]
		private static void InvokeAsyncCallback(object completedTask)
		{
		}

		[Token(Token = "0x60029CA")]
		[Address(RVA = "0x4F413B0", Offset = "0x4F413B0", VA = "0x4F413B0", Slot = "14")]
		private void System_002EThreading_002ETasks_002EITaskCompletionAction_002EInvoke(Task completingTask)
		{
		}
	}

	[Token(Token = "0x200056A")]
	private sealed class NullStream : Stream
	{
		[Token(Token = "0x40016A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Task<int> s_zeroTask;

		[Token(Token = "0x17000612")]
		public override bool CanRead
		{
			[Token(Token = "0x60029CD")]
			[Address(RVA = "0x4F41530", Offset = "0x4F41530", VA = "0x4F41530", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000613")]
		public override bool CanWrite
		{
			[Token(Token = "0x60029CE")]
			[Address(RVA = "0x4F41540", Offset = "0x4F41540", VA = "0x4F41540", Slot = "10")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000614")]
		public override bool CanSeek
		{
			[Token(Token = "0x60029CF")]
			[Address(RVA = "0x4F41550", Offset = "0x4F41550", VA = "0x4F41550", Slot = "8")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000615")]
		public override long Length
		{
			[Token(Token = "0x60029D0")]
			[Address(RVA = "0x4F41560", Offset = "0x4F41560", VA = "0x4F41560", Slot = "11")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x17000616")]
		public override long Position
		{
			[Token(Token = "0x60029D1")]
			[Address(RVA = "0x4F41570", Offset = "0x4F41570", VA = "0x4F41570", Slot = "12")]
			get
			{
				return default(long);
			}
			[Token(Token = "0x60029D2")]
			[Address(RVA = "0x4F41580", Offset = "0x4F41580", VA = "0x4F41580", Slot = "13")]
			set
			{
			}
		}

		[Token(Token = "0x60029CC")]
		[Address(RVA = "0x4F41290", Offset = "0x4F41290", VA = "0x4F41290")]
		internal NullStream()
		{
		}

		[Token(Token = "0x60029D3")]
		[Address(RVA = "0x4F41590", Offset = "0x4F41590", VA = "0x4F41590", Slot = "19")]
		protected override void Dispose(bool disposing)
		{
		}

		[Token(Token = "0x60029D4")]
		[Address(RVA = "0x4F415A0", Offset = "0x4F415A0", VA = "0x4F415A0", Slot = "20")]
		public override void Flush()
		{
		}

		[Token(Token = "0x60029D5")]
		[Address(RVA = "0x4F415B0", Offset = "0x4F415B0", VA = "0x4F415B0", Slot = "21")]
		public override Task FlushAsync(CancellationToken cancellationToken)
		{
			return null;
		}

		[Token(Token = "0x60029D6")]
		[Address(RVA = "0x4F416B0", Offset = "0x4F416B0", VA = "0x4F416B0", Slot = "22")]
		public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
		{
			return null;
		}

		[Token(Token = "0x60029D7")]
		[Address(RVA = "0x4F41730", Offset = "0x4F41730", VA = "0x4F41730", Slot = "23")]
		public override int EndRead(IAsyncResult asyncResult)
		{
			return default(int);
		}

		[Token(Token = "0x60029D8")]
		[Address(RVA = "0x4F417D0", Offset = "0x4F417D0", VA = "0x4F417D0", Slot = "26")]
		public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
		{
			return null;
		}

		[Token(Token = "0x60029D9")]
		[Address(RVA = "0x4F41850", Offset = "0x4F41850", VA = "0x4F41850", Slot = "27")]
		public override void EndWrite(IAsyncResult asyncResult)
		{
		}

		[Token(Token = "0x60029DA")]
		[Address(RVA = "0x4F418F0", Offset = "0x4F418F0", VA = "0x4F418F0", Slot = "32")]
		public override int Read(byte[] buffer, int offset, int count)
		{
			return default(int);
		}

		[Token(Token = "0x60029DB")]
		[Address(RVA = "0x4F41900", Offset = "0x4F41900", VA = "0x4F41900", Slot = "33")]
		public override int Read(Span<byte> buffer)
		{
			return default(int);
		}

		[Token(Token = "0x60029DC")]
		[Address(RVA = "0x4F41910", Offset = "0x4F41910", VA = "0x4F41910", Slot = "24")]
		public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
		{
			return null;
		}

		[Token(Token = "0x60029DD")]
		[Address(RVA = "0x4F41980", Offset = "0x4F41980", VA = "0x4F41980", Slot = "25")]
		public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
		{
			return default(ValueTask<int>);
		}

		[Token(Token = "0x60029DE")]
		[Address(RVA = "0x4F419D0", Offset = "0x4F419D0", VA = "0x4F419D0", Slot = "34")]
		public override int ReadByte()
		{
			return default(int);
		}

		[Token(Token = "0x60029DF")]
		[Address(RVA = "0x4F419E0", Offset = "0x4F419E0", VA = "0x4F419E0", Slot = "35")]
		public override void Write(byte[] buffer, int offset, int count)
		{
		}

		[Token(Token = "0x60029E0")]
		[Address(RVA = "0x4F419F0", Offset = "0x4F419F0", VA = "0x4F419F0", Slot = "36")]
		public override void Write(ReadOnlySpan<byte> buffer)
		{
		}

		[Token(Token = "0x60029E1")]
		[Address(RVA = "0x4F41A00", Offset = "0x4F41A00", VA = "0x4F41A00", Slot = "28")]
		public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
		{
			return null;
		}

		[Token(Token = "0x60029E2")]
		[Address(RVA = "0x4F41B00", Offset = "0x4F41B00", VA = "0x4F41B00", Slot = "29")]
		public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
		{
			return default(ValueTask);
		}

		[Token(Token = "0x60029E3")]
		[Address(RVA = "0x4F41BD0", Offset = "0x4F41BD0", VA = "0x4F41BD0", Slot = "37")]
		public override void WriteByte(byte value)
		{
		}

		[Token(Token = "0x60029E4")]
		[Address(RVA = "0x4F41BE0", Offset = "0x4F41BE0", VA = "0x4F41BE0", Slot = "30")]
		public override long Seek(long offset, SeekOrigin origin)
		{
			return default(long);
		}

		[Token(Token = "0x60029E5")]
		[Address(RVA = "0x4F41BF0", Offset = "0x4F41BF0", VA = "0x4F41BF0", Slot = "31")]
		public override void SetLength(long length)
		{
		}
	}

	[Token(Token = "0x200056B")]
	private sealed class SynchronousAsyncResult : IAsyncResult
	{
		[Token(Token = "0x40016A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly object _stateObject;

		[Token(Token = "0x40016A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly bool _isWrite;

		[Token(Token = "0x40016A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private ManualResetEvent _waitHandle;

		[Token(Token = "0x40016A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private ExceptionDispatchInfo _exceptionInfo;

		[Token(Token = "0x40016A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool _endXxxCalled;

		[Token(Token = "0x40016A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		private int _bytesRead;

		[Token(Token = "0x17000617")]
		public bool IsCompleted
		{
			[Token(Token = "0x60029EA")]
			[Address(RVA = "0x4F41C90", Offset = "0x4F41C90", VA = "0x4F41C90", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000618")]
		public WaitHandle AsyncWaitHandle
		{
			[Token(Token = "0x60029EB")]
			[Address(RVA = "0x4F41CA0", Offset = "0x4F41CA0", VA = "0x4F41CA0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000619")]
		public object AsyncState
		{
			[Token(Token = "0x60029EC")]
			[Address(RVA = "0x4F41DA0", Offset = "0x4F41DA0", VA = "0x4F41DA0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700061A")]
		public bool CompletedSynchronously
		{
			[Token(Token = "0x60029ED")]
			[Address(RVA = "0x4F41DB0", Offset = "0x4F41DB0", VA = "0x4F41DB0", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60029E7")]
		[Address(RVA = "0x4F40DE0", Offset = "0x4F40DE0", VA = "0x4F40DE0")]
		internal SynchronousAsyncResult(int bytesRead, object asyncStateObject)
		{
		}

		[Token(Token = "0x60029E8")]
		[Address(RVA = "0x4F410D0", Offset = "0x4F410D0", VA = "0x4F410D0")]
		internal SynchronousAsyncResult(object asyncStateObject)
		{
		}

		[Token(Token = "0x60029E9")]
		[Address(RVA = "0x4F40E10", Offset = "0x4F40E10", VA = "0x4F40E10")]
		internal SynchronousAsyncResult(Exception ex, object asyncStateObject, bool isWrite)
		{
		}

		[Token(Token = "0x60029EE")]
		[Address(RVA = "0x4F41DC0", Offset = "0x4F41DC0", VA = "0x4F41DC0")]
		internal void ThrowIfError()
		{
		}

		[Token(Token = "0x60029EF")]
		[Address(RVA = "0x4F40E80", Offset = "0x4F40E80", VA = "0x4F40E80")]
		internal static int EndRead(IAsyncResult asyncResult)
		{
			return default(int);
		}

		[Token(Token = "0x60029F0")]
		[Address(RVA = "0x4F41110", Offset = "0x4F41110", VA = "0x4F41110")]
		internal static void EndWrite(IAsyncResult asyncResult)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200056E")]
	[CompilerGenerated]
	private struct _003CFinishWriteAsync_003Ed__57 : IAsyncStateMachine
	{
		[Token(Token = "0x40016B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40016B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40016B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task writeTask;

		[Token(Token = "0x40016B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] localBuffer;

		[Token(Token = "0x40016B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60029FF")]
		[Address(RVA = "0x4F42440", Offset = "0x4F42440", VA = "0x4F42440", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6002A00")]
		[Address(RVA = "0x4F42720", Offset = "0x4F42720", VA = "0x4F42720", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4001690")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly Stream Null;

	[Token(Token = "0x4001691")]
	private const int DefaultCopyBufferSize = 81920;

	[NonSerialized]
	[Token(Token = "0x4001692")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ReadWriteTask _activeReadWriteTask;

	[NonSerialized]
	[Token(Token = "0x4001693")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private SemaphoreSlim _asyncActiveSemaphore;

	[Token(Token = "0x17000609")]
	public abstract bool CanRead
	{
		[Token(Token = "0x6002994")]
		get;
	}

	[Token(Token = "0x1700060A")]
	public abstract bool CanSeek
	{
		[Token(Token = "0x6002995")]
		get;
	}

	[Token(Token = "0x1700060B")]
	public virtual bool CanTimeout
	{
		[Token(Token = "0x6002996")]
		[Address(RVA = "0x4F3E450", Offset = "0x4F3E450", VA = "0x4F3E450", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700060C")]
	public abstract bool CanWrite
	{
		[Token(Token = "0x6002997")]
		get;
	}

	[Token(Token = "0x1700060D")]
	public abstract long Length
	{
		[Token(Token = "0x6002998")]
		get;
	}

	[Token(Token = "0x1700060E")]
	public abstract long Position
	{
		[Token(Token = "0x6002999")]
		get;
		[Token(Token = "0x600299A")]
		set;
	}

	[Token(Token = "0x1700060F")]
	public virtual int ReadTimeout
	{
		[Token(Token = "0x600299B")]
		[Address(RVA = "0x4F3E460", Offset = "0x4F3E460", VA = "0x4F3E460", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600299C")]
		[Address(RVA = "0x4F3E4B0", Offset = "0x4F3E4B0", VA = "0x4F3E4B0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000610")]
	public virtual int WriteTimeout
	{
		[Token(Token = "0x600299D")]
		[Address(RVA = "0x4F3E500", Offset = "0x4F3E500", VA = "0x4F3E500", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600299E")]
		[Address(RVA = "0x4F3E550", Offset = "0x4F3E550", VA = "0x4F3E550", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x6002993")]
	[Address(RVA = "0x4F3E350", Offset = "0x4F3E350", VA = "0x4F3E350")]
	internal SemaphoreSlim EnsureAsyncActiveSemaphoreInitialized()
	{
		return null;
	}

	[Token(Token = "0x600299F")]
	[Address(RVA = "0x4F3E5A0", Offset = "0x4F3E5A0", VA = "0x4F3E5A0", Slot = "18")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x60029A0")]
	[Address(RVA = "0x4F3E610", Offset = "0x4F3E610", VA = "0x4F3E610", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60029A1")]
	[Address(RVA = "0x4F3E630", Offset = "0x4F3E630", VA = "0x4F3E630", Slot = "19")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60029A2")]
	public abstract void Flush();

	[Token(Token = "0x60029A3")]
	[Address(RVA = "0x4F3E640", Offset = "0x4F3E640", VA = "0x4F3E640", Slot = "21")]
	public virtual Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60029A4")]
	[Address(RVA = "0x4F3E8C0", Offset = "0x4F3E8C0", VA = "0x4F3E8C0", Slot = "22")]
	public virtual IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60029A5")]
	[Address(RVA = "0x4F3E8E0", Offset = "0x4F3E8E0", VA = "0x4F3E8E0")]
	internal IAsyncResult BeginReadInternal(byte[] buffer, int offset, int count, AsyncCallback callback, object state, bool serializeAsynchronously, bool apm)
	{
		return null;
	}

	[Token(Token = "0x60029A6")]
	[Address(RVA = "0x4F3EF20", Offset = "0x4F3EF20", VA = "0x4F3EF20", Slot = "23")]
	public virtual int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60029A7")]
	[Address(RVA = "0x4F3F130", Offset = "0x4F3F130", VA = "0x4F3F130")]
	public Task<int> ReadAsync(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x60029A8")]
	[Address(RVA = "0x4F3F1B0", Offset = "0x4F3F1B0", VA = "0x4F3F1B0", Slot = "24")]
	public virtual Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60029A9")]
	[Address(RVA = "0x4F3F4B0", Offset = "0x4F3F4B0", VA = "0x4F3F4B0", Slot = "25")]
	public virtual ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x60029AA")]
	[Address(RVA = "0x4F3F270", Offset = "0x4F3F270", VA = "0x4F3F270")]
	private Task<int> BeginEndReadAsync(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x60029AB")]
	[Address(RVA = "0x4F3F9C0", Offset = "0x4F3F9C0", VA = "0x4F3F9C0", Slot = "26")]
	public virtual IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60029AC")]
	[Address(RVA = "0x4F3F9E0", Offset = "0x4F3F9E0", VA = "0x4F3F9E0")]
	internal IAsyncResult BeginWriteInternal(byte[] buffer, int offset, int count, AsyncCallback callback, object state, bool serializeAsynchronously, bool apm)
	{
		return null;
	}

	[Token(Token = "0x60029AD")]
	[Address(RVA = "0x4F3EC50", Offset = "0x4F3EC50", VA = "0x4F3EC50")]
	private void RunReadWriteTaskWhenReady(Task asyncWaiter, ReadWriteTask readWriteTask)
	{
	}

	[Token(Token = "0x60029AE")]
	[Address(RVA = "0x4F3EE50", Offset = "0x4F3EE50", VA = "0x4F3EE50")]
	private void RunReadWriteTask(ReadWriteTask readWriteTask)
	{
	}

	[Token(Token = "0x60029AF")]
	[Address(RVA = "0x4F3FBF0", Offset = "0x4F3FBF0", VA = "0x4F3FBF0")]
	private void FinishTrackingAsyncOperation()
	{
	}

	[Token(Token = "0x60029B0")]
	[Address(RVA = "0x4F3FC20", Offset = "0x4F3FC20", VA = "0x4F3FC20", Slot = "27")]
	public virtual void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60029B1")]
	[Address(RVA = "0x4F3FE20", Offset = "0x4F3FE20", VA = "0x4F3FE20")]
	public Task WriteAsync(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x60029B2")]
	[Address(RVA = "0x4F3FEA0", Offset = "0x4F3FEA0", VA = "0x4F3FEA0", Slot = "28")]
	public virtual Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60029B3")]
	[Address(RVA = "0x4F40190", Offset = "0x4F40190", VA = "0x4F40190", Slot = "29")]
	public virtual ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60029B4")]
	[Address(RVA = "0x4F404C0", Offset = "0x4F404C0", VA = "0x4F404C0")]
	[AsyncStateMachine(typeof(_003CFinishWriteAsync_003Ed__57))]
	private Task FinishWriteAsync(Task writeTask, byte[] localBuffer)
	{
		return null;
	}

	[Token(Token = "0x60029B5")]
	[Address(RVA = "0x4F3FF50", Offset = "0x4F3FF50", VA = "0x4F3FF50")]
	private Task BeginEndWriteAsync(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x60029B6")]
	public abstract long Seek(long offset, SeekOrigin origin);

	[Token(Token = "0x60029B7")]
	public abstract void SetLength(long value);

	[Token(Token = "0x60029B8")]
	public abstract int Read(byte[] buffer, int offset, int count);

	[Token(Token = "0x60029B9")]
	[Address(RVA = "0x4F405C0", Offset = "0x4F405C0", VA = "0x4F405C0", Slot = "33")]
	public virtual int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60029BA")]
	[Address(RVA = "0x4F408D0", Offset = "0x4F408D0", VA = "0x4F408D0", Slot = "34")]
	public virtual int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x60029BB")]
	public abstract void Write(byte[] buffer, int offset, int count);

	[Token(Token = "0x60029BC")]
	[Address(RVA = "0x4F40960", Offset = "0x4F40960", VA = "0x4F40960", Slot = "36")]
	public virtual void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x60029BD")]
	[Address(RVA = "0x4F40BD0", Offset = "0x4F40BD0", VA = "0x4F40BD0", Slot = "37")]
	public virtual void WriteByte(byte value)
	{
	}

	[Token(Token = "0x60029BE")]
	[Address(RVA = "0x4F40C50", Offset = "0x4F40C50", VA = "0x4F40C50")]
	internal IAsyncResult BlockingBeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60029BF")]
	[Address(RVA = "0x4F40E70", Offset = "0x4F40E70", VA = "0x4F40E70")]
	internal static int BlockingEndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60029C0")]
	[Address(RVA = "0x4F40F40", Offset = "0x4F40F40", VA = "0x4F40F40")]
	internal IAsyncResult BlockingBeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60029C1")]
	[Address(RVA = "0x4F41100", Offset = "0x4F41100", VA = "0x4F41100")]
	internal static void BlockingEndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60029C2")]
	[Address(RVA = "0x4F3F9B0", Offset = "0x4F3F9B0", VA = "0x4F3F9B0")]
	private bool HasOverriddenBeginEndRead()
	{
		return default(bool);
	}

	[Token(Token = "0x60029C3")]
	[Address(RVA = "0x4F405B0", Offset = "0x4F405B0", VA = "0x4F405B0")]
	private bool HasOverriddenBeginEndWrite()
	{
		return default(bool);
	}

	[Token(Token = "0x60029C4")]
	[Address(RVA = "0x4F411D0", Offset = "0x4F411D0", VA = "0x4F411D0")]
	protected Stream()
	{
	}
}
