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
[Token(Token = "0x2000669")]
public abstract class Stream : MarshalByRefObject, IDisposable
{
	[Token(Token = "0x200066A")]
	private struct ReadWriteParameters
	{
		[Token(Token = "0x40019D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal byte[] Buffer;

		[Token(Token = "0x40019D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal int Offset;

		[Token(Token = "0x40019D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		internal int Count;
	}

	[Token(Token = "0x200066B")]
	private sealed class ReadWriteTask : Task<int>, System.Threading.Tasks.ITaskCompletionAction
	{
		[Token(Token = "0x40019DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		internal readonly bool _isRead;

		[Token(Token = "0x40019DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
		internal readonly bool _apm;

		[Token(Token = "0x40019DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		internal Stream _stream;

		[Token(Token = "0x40019DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		internal byte[] _buffer;

		[Token(Token = "0x40019DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		internal readonly int _offset;

		[Token(Token = "0x40019DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
		internal readonly int _count;

		[Token(Token = "0x40019E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private AsyncCallback _callback;

		[Token(Token = "0x40019E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private ExecutionContext _context;

		[Token(Token = "0x40019E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static ContextCallback s_invokeAsyncCallback;

		[Token(Token = "0x17000826")]
		private bool System_002EThreading_002ETasks_002EITaskCompletionAction_002EInvokeMayRunArbitraryCode
		{
			[Token(Token = "0x600325E")]
			[Address(RVA = "0x547F780", Offset = "0x547E780", VA = "0x547F780", Slot = "15")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600325A")]
		[Address(RVA = "0x547F560", Offset = "0x547E560", VA = "0x547F560")]
		internal void ClearBeginState()
		{
		}

		[Token(Token = "0x600325B")]
		[Address(RVA = "0x547D3C0", Offset = "0x547C3C0", VA = "0x547D3C0")]
		public ReadWriteTask(bool isRead, bool apm, Func<object, int> function, object state, Stream stream, byte[] buffer, int offset, int count, AsyncCallback callback)
		{
		}

		[Token(Token = "0x600325C")]
		[Address(RVA = "0x547F590", Offset = "0x547E590", VA = "0x547F590")]
		private static void InvokeAsyncCallback(object completedTask)
		{
		}

		[Token(Token = "0x600325D")]
		[Address(RVA = "0x547F610", Offset = "0x547E610", VA = "0x547F610", Slot = "14")]
		private void System_002EThreading_002ETasks_002EITaskCompletionAction_002EInvoke(Task completingTask)
		{
		}
	}

	[Token(Token = "0x200066C")]
	private sealed class NullStream : Stream
	{
		[Token(Token = "0x40019E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Task<int> s_zeroTask;

		[Token(Token = "0x17000827")]
		public override bool CanRead
		{
			[Token(Token = "0x6003260")]
			[Address(RVA = "0x547F790", Offset = "0x547E790", VA = "0x547F790", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000828")]
		public override bool CanWrite
		{
			[Token(Token = "0x6003261")]
			[Address(RVA = "0x547F7A0", Offset = "0x547E7A0", VA = "0x547F7A0", Slot = "10")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000829")]
		public override bool CanSeek
		{
			[Token(Token = "0x6003262")]
			[Address(RVA = "0x547F7B0", Offset = "0x547E7B0", VA = "0x547F7B0", Slot = "8")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700082A")]
		public override long Length
		{
			[Token(Token = "0x6003263")]
			[Address(RVA = "0x547F7C0", Offset = "0x547E7C0", VA = "0x547F7C0", Slot = "11")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x1700082B")]
		public override long Position
		{
			[Token(Token = "0x6003264")]
			[Address(RVA = "0x547F7D0", Offset = "0x547E7D0", VA = "0x547F7D0", Slot = "12")]
			get
			{
				return default(long);
			}
			[Token(Token = "0x6003265")]
			[Address(RVA = "0x547F7E0", Offset = "0x547E7E0", VA = "0x547F7E0", Slot = "13")]
			set
			{
			}
		}

		[Token(Token = "0x600325F")]
		[Address(RVA = "0x547F4F0", Offset = "0x547E4F0", VA = "0x547F4F0")]
		internal NullStream()
		{
		}

		[Token(Token = "0x6003266")]
		[Address(RVA = "0x547F7F0", Offset = "0x547E7F0", VA = "0x547F7F0", Slot = "18")]
		public override void CopyTo(Stream destination, int bufferSize)
		{
		}

		[Token(Token = "0x6003267")]
		[Address(RVA = "0x547F800", Offset = "0x547E800", VA = "0x547F800", Slot = "20")]
		protected override void Dispose(bool disposing)
		{
		}

		[Token(Token = "0x6003268")]
		[Address(RVA = "0x547F810", Offset = "0x547E810", VA = "0x547F810", Slot = "21")]
		public override void Flush()
		{
		}

		[Token(Token = "0x6003269")]
		[Address(RVA = "0x547F820", Offset = "0x547E820", VA = "0x547F820", Slot = "22")]
		public override Task FlushAsync(CancellationToken cancellationToken)
		{
			return null;
		}

		[Token(Token = "0x600326A")]
		[Address(RVA = "0x547F920", Offset = "0x547E920", VA = "0x547F920", Slot = "23")]
		public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
		{
			return null;
		}

		[Token(Token = "0x600326B")]
		[Address(RVA = "0x547F9A0", Offset = "0x547E9A0", VA = "0x547F9A0", Slot = "24")]
		public override int EndRead(IAsyncResult asyncResult)
		{
			return default(int);
		}

		[Token(Token = "0x600326C")]
		[Address(RVA = "0x547FA40", Offset = "0x547EA40", VA = "0x547FA40", Slot = "27")]
		public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
		{
			return null;
		}

		[Token(Token = "0x600326D")]
		[Address(RVA = "0x547FAC0", Offset = "0x547EAC0", VA = "0x547FAC0", Slot = "28")]
		public override void EndWrite(IAsyncResult asyncResult)
		{
		}

		[Token(Token = "0x600326E")]
		[Address(RVA = "0x547FB60", Offset = "0x547EB60", VA = "0x547FB60", Slot = "33")]
		public override int Read(byte[] buffer, int offset, int count)
		{
			return default(int);
		}

		[Token(Token = "0x600326F")]
		[Address(RVA = "0x547FB70", Offset = "0x547EB70", VA = "0x547FB70", Slot = "34")]
		public override int Read(Span<byte> buffer)
		{
			return default(int);
		}

		[Token(Token = "0x6003270")]
		[Address(RVA = "0x547FB80", Offset = "0x547EB80", VA = "0x547FB80", Slot = "25")]
		public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
		{
			return null;
		}

		[Token(Token = "0x6003271")]
		[Address(RVA = "0x547FBF0", Offset = "0x547EBF0", VA = "0x547FBF0", Slot = "26")]
		public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
		{
			return default(ValueTask<int>);
		}

		[Token(Token = "0x6003272")]
		[Address(RVA = "0x547FC40", Offset = "0x547EC40", VA = "0x547FC40", Slot = "35")]
		public override int ReadByte()
		{
			return default(int);
		}

		[Token(Token = "0x6003273")]
		[Address(RVA = "0x547FC50", Offset = "0x547EC50", VA = "0x547FC50", Slot = "36")]
		public override void Write(byte[] buffer, int offset, int count)
		{
		}

		[Token(Token = "0x6003274")]
		[Address(RVA = "0x547FC60", Offset = "0x547EC60", VA = "0x547FC60", Slot = "37")]
		public override void Write(ReadOnlySpan<byte> buffer)
		{
		}

		[Token(Token = "0x6003275")]
		[Address(RVA = "0x547FC70", Offset = "0x547EC70", VA = "0x547FC70", Slot = "29")]
		public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
		{
			return null;
		}

		[Token(Token = "0x6003276")]
		[Address(RVA = "0x547FD70", Offset = "0x547ED70", VA = "0x547FD70", Slot = "30")]
		public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
		{
			return default(ValueTask);
		}

		[Token(Token = "0x6003277")]
		[Address(RVA = "0x547FE50", Offset = "0x547EE50", VA = "0x547FE50", Slot = "38")]
		public override void WriteByte(byte value)
		{
		}

		[Token(Token = "0x6003278")]
		[Address(RVA = "0x547FE60", Offset = "0x547EE60", VA = "0x547FE60", Slot = "31")]
		public override long Seek(long offset, SeekOrigin origin)
		{
			return default(long);
		}

		[Token(Token = "0x6003279")]
		[Address(RVA = "0x547FE70", Offset = "0x547EE70", VA = "0x547FE70", Slot = "32")]
		public override void SetLength(long length)
		{
		}
	}

	[Token(Token = "0x200066D")]
	private sealed class SynchronousAsyncResult : IAsyncResult
	{
		[Token(Token = "0x40019E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly object _stateObject;

		[Token(Token = "0x40019E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly bool _isWrite;

		[Token(Token = "0x40019E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private ManualResetEvent _waitHandle;

		[Token(Token = "0x40019E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private ExceptionDispatchInfo _exceptionInfo;

		[Token(Token = "0x40019E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool _endXxxCalled;

		[Token(Token = "0x40019E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		private int _bytesRead;

		[Token(Token = "0x1700082C")]
		public bool IsCompleted
		{
			[Token(Token = "0x600327E")]
			[Address(RVA = "0x547FF10", Offset = "0x547EF10", VA = "0x547FF10", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700082D")]
		public WaitHandle AsyncWaitHandle
		{
			[Token(Token = "0x600327F")]
			[Address(RVA = "0x547FF20", Offset = "0x547EF20", VA = "0x547FF20", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700082E")]
		public object AsyncState
		{
			[Token(Token = "0x6003280")]
			[Address(RVA = "0x5480050", Offset = "0x547F050", VA = "0x5480050", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700082F")]
		public bool CompletedSynchronously
		{
			[Token(Token = "0x6003281")]
			[Address(RVA = "0x5480060", Offset = "0x547F060", VA = "0x5480060", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600327B")]
		[Address(RVA = "0x547F080", Offset = "0x547E080", VA = "0x547F080")]
		internal SynchronousAsyncResult(int bytesRead, object asyncStateObject)
		{
		}

		[Token(Token = "0x600327C")]
		[Address(RVA = "0x547F340", Offset = "0x547E340", VA = "0x547F340")]
		internal SynchronousAsyncResult(object asyncStateObject)
		{
		}

		[Token(Token = "0x600327D")]
		[Address(RVA = "0x547F0B0", Offset = "0x547E0B0", VA = "0x547F0B0")]
		internal SynchronousAsyncResult(Exception ex, object asyncStateObject, bool isWrite)
		{
		}

		[Token(Token = "0x6003282")]
		[Address(RVA = "0x5480070", Offset = "0x547F070", VA = "0x5480070")]
		internal void ThrowIfError()
		{
		}

		[Token(Token = "0x6003283")]
		[Address(RVA = "0x547F120", Offset = "0x547E120", VA = "0x547F120")]
		internal static int EndRead(IAsyncResult asyncResult)
		{
			return default(int);
		}

		[Token(Token = "0x6003284")]
		[Address(RVA = "0x547F380", Offset = "0x547E380", VA = "0x547F380")]
		internal static void EndWrite(IAsyncResult asyncResult)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000670")]
	[CompilerGenerated]
	private struct _003CFinishWriteAsync_003Ed__57 : IAsyncStateMachine
	{
		[Token(Token = "0x40019F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40019F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40019F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task writeTask;

		[Token(Token = "0x40019F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] localBuffer;

		[Token(Token = "0x40019FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6003293")]
		[Address(RVA = "0x54806F0", Offset = "0x547F6F0", VA = "0x54806F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6003294")]
		[Address(RVA = "0x54809A0", Offset = "0x547F9A0", VA = "0x54809A0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40019D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly Stream Null;

	[NonSerialized]
	[Token(Token = "0x40019D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ReadWriteTask _activeReadWriteTask;

	[NonSerialized]
	[Token(Token = "0x40019D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private SemaphoreSlim _asyncActiveSemaphore;

	[Token(Token = "0x1700081E")]
	public abstract bool CanRead
	{
		[Token(Token = "0x6003224")]
		get;
	}

	[Token(Token = "0x1700081F")]
	public abstract bool CanSeek
	{
		[Token(Token = "0x6003225")]
		get;
	}

	[Token(Token = "0x17000820")]
	public virtual bool CanTimeout
	{
		[Token(Token = "0x6003226")]
		[Address(RVA = "0x547C940", Offset = "0x547B940", VA = "0x547C940", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000821")]
	public abstract bool CanWrite
	{
		[Token(Token = "0x6003227")]
		get;
	}

	[Token(Token = "0x17000822")]
	public abstract long Length
	{
		[Token(Token = "0x6003228")]
		get;
	}

	[Token(Token = "0x17000823")]
	public abstract long Position
	{
		[Token(Token = "0x6003229")]
		get;
		[Token(Token = "0x600322A")]
		set;
	}

	[Token(Token = "0x17000824")]
	public virtual int ReadTimeout
	{
		[Token(Token = "0x600322B")]
		[Address(RVA = "0x547C950", Offset = "0x547B950", VA = "0x547C950", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600322C")]
		[Address(RVA = "0x547C9A0", Offset = "0x547B9A0", VA = "0x547C9A0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000825")]
	public virtual int WriteTimeout
	{
		[Token(Token = "0x600322D")]
		[Address(RVA = "0x547C9F0", Offset = "0x547B9F0", VA = "0x547C9F0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600322E")]
		[Address(RVA = "0x547CA40", Offset = "0x547BA40", VA = "0x547CA40", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x6003223")]
	[Address(RVA = "0x547C810", Offset = "0x547B810", VA = "0x547C810")]
	internal SemaphoreSlim EnsureAsyncActiveSemaphoreInitialized()
	{
		return null;
	}

	[Token(Token = "0x600322F")]
	[Address(RVA = "0x547CA90", Offset = "0x547BA90", VA = "0x547CA90")]
	public void CopyTo(Stream destination)
	{
	}

	[Token(Token = "0x6003230")]
	[Address(RVA = "0x547CC10", Offset = "0x547BC10", VA = "0x547CC10", Slot = "18")]
	public virtual void CopyTo(Stream destination, int bufferSize)
	{
	}

	[Token(Token = "0x6003231")]
	[Address(RVA = "0x547CB60", Offset = "0x547BB60", VA = "0x547CB60")]
	private int GetCopyBufferSize()
	{
		return default(int);
	}

	[Token(Token = "0x6003232")]
	[Address(RVA = "0x547CE90", Offset = "0x547BE90", VA = "0x547CE90", Slot = "19")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6003233")]
	[Address(RVA = "0x547CF00", Offset = "0x547BF00", VA = "0x547CF00", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6003234")]
	[Address(RVA = "0x54742D0", Offset = "0x54732D0", VA = "0x54742D0", Slot = "20")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6003235")]
	public abstract void Flush();

	[Token(Token = "0x6003236")]
	[Address(RVA = "0x547CF20", Offset = "0x547BF20", VA = "0x547CF20", Slot = "22")]
	public virtual Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6003237")]
	[Address(RVA = "0x547D1A0", Offset = "0x547C1A0", VA = "0x547D1A0", Slot = "23")]
	public virtual IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6003238")]
	[Address(RVA = "0x547D1C0", Offset = "0x547C1C0", VA = "0x547D1C0")]
	internal IAsyncResult BeginReadInternal(byte[] buffer, int offset, int count, AsyncCallback callback, object state, bool serializeAsynchronously, bool apm)
	{
		return null;
	}

	[Token(Token = "0x6003239")]
	[Address(RVA = "0x547D7F0", Offset = "0x547C7F0", VA = "0x547D7F0", Slot = "24")]
	public virtual int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x600323A")]
	[Address(RVA = "0x547D9E0", Offset = "0x547C9E0", VA = "0x547D9E0")]
	public Task<int> ReadAsync(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x600323B")]
	[Address(RVA = "0x547DA60", Offset = "0x547CA60", VA = "0x547DA60", Slot = "25")]
	public virtual Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600323C")]
	[Address(RVA = "0x547DD50", Offset = "0x547CD50", VA = "0x547DD50", Slot = "26")]
	public virtual ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x600323D")]
	[Address(RVA = "0x547DB20", Offset = "0x547CB20", VA = "0x547DB20")]
	private Task<int> BeginEndReadAsync(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x600323E")]
	[Address(RVA = "0x547E250", Offset = "0x547D250", VA = "0x547E250", Slot = "27")]
	public virtual IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600323F")]
	[Address(RVA = "0x547E270", Offset = "0x547D270", VA = "0x547E270")]
	internal IAsyncResult BeginWriteInternal(byte[] buffer, int offset, int count, AsyncCallback callback, object state, bool serializeAsynchronously, bool apm)
	{
		return null;
	}

	[Token(Token = "0x6003240")]
	[Address(RVA = "0x547D520", Offset = "0x547C520", VA = "0x547D520")]
	private void RunReadWriteTaskWhenReady(Task asyncWaiter, ReadWriteTask readWriteTask)
	{
	}

	[Token(Token = "0x6003241")]
	[Address(RVA = "0x547D720", Offset = "0x547C720", VA = "0x547D720")]
	private void RunReadWriteTask(ReadWriteTask readWriteTask)
	{
	}

	[Token(Token = "0x6003242")]
	[Address(RVA = "0x547E470", Offset = "0x547D470", VA = "0x547E470")]
	private void FinishTrackingAsyncOperation()
	{
	}

	[Token(Token = "0x6003243")]
	[Address(RVA = "0x547E4A0", Offset = "0x547D4A0", VA = "0x547E4A0", Slot = "28")]
	public virtual void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6003244")]
	[Address(RVA = "0x547E680", Offset = "0x547D680", VA = "0x547E680")]
	public Task WriteAsync(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x6003245")]
	[Address(RVA = "0x547E700", Offset = "0x547D700", VA = "0x547E700", Slot = "29")]
	public virtual Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6003246")]
	[Address(RVA = "0x547E9E0", Offset = "0x547D9E0", VA = "0x547E9E0", Slot = "30")]
	public virtual ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6003247")]
	[Address(RVA = "0x547ED10", Offset = "0x547DD10", VA = "0x547ED10")]
	[AsyncStateMachine(typeof(_003CFinishWriteAsync_003Ed__57))]
	private Task FinishWriteAsync(Task writeTask, byte[] localBuffer)
	{
		return null;
	}

	[Token(Token = "0x6003248")]
	[Address(RVA = "0x547E7B0", Offset = "0x547D7B0", VA = "0x547E7B0")]
	private Task BeginEndWriteAsync(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x6003249")]
	public abstract long Seek(long offset, SeekOrigin origin);

	[Token(Token = "0x600324A")]
	public abstract void SetLength(long value);

	[Token(Token = "0x600324B")]
	public abstract int Read(byte[] buffer, int offset, int count);

	[Token(Token = "0x600324C")]
	[Address(RVA = "0x5474BF0", Offset = "0x5473BF0", VA = "0x5474BF0", Slot = "34")]
	public virtual int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x600324D")]
	[Address(RVA = "0x547EE10", Offset = "0x547DE10", VA = "0x547EE10", Slot = "35")]
	public virtual int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x600324E")]
	public abstract void Write(byte[] buffer, int offset, int count);

	[Token(Token = "0x600324F")]
	[Address(RVA = "0x5475F90", Offset = "0x5474F90", VA = "0x5475F90", Slot = "37")]
	public virtual void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x6003250")]
	[Address(RVA = "0x547EEA0", Offset = "0x547DEA0", VA = "0x547EEA0", Slot = "38")]
	public virtual void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6003251")]
	[Address(RVA = "0x547EF20", Offset = "0x547DF20", VA = "0x547EF20")]
	internal IAsyncResult BlockingBeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6003252")]
	[Address(RVA = "0x547F110", Offset = "0x547E110", VA = "0x547F110")]
	internal static int BlockingEndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6003253")]
	[Address(RVA = "0x547F1E0", Offset = "0x547E1E0", VA = "0x547F1E0")]
	internal IAsyncResult BlockingBeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6003254")]
	[Address(RVA = "0x547F370", Offset = "0x547E370", VA = "0x547F370")]
	internal static void BlockingEndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6003255")]
	[Address(RVA = "0x547E240", Offset = "0x547D240", VA = "0x547E240")]
	private bool HasOverriddenBeginEndRead()
	{
		return default(bool);
	}

	[Token(Token = "0x6003256")]
	[Address(RVA = "0x547EE00", Offset = "0x547DE00", VA = "0x547EE00")]
	private bool HasOverriddenBeginEndWrite()
	{
		return default(bool);
	}

	[Token(Token = "0x6003257")]
	[Address(RVA = "0x5473FB0", Offset = "0x5472FB0", VA = "0x5473FB0")]
	protected Stream()
	{
	}
}
