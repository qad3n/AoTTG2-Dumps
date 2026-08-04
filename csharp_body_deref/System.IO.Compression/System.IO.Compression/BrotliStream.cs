// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.BrotliStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Buffers;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000005")]
public sealed class BrotliStream : Stream
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000006")]
	[CompilerGenerated]
	private struct _003CFinishReadAsyncMemory_003Ed__41 : IAsyncStateMachine
	{
		[Token(Token = "0x400000A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400000B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncValueTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x400000C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BrotliStream _003C_003E4__this;

		[Token(Token = "0x400000D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400000E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Memory<byte> buffer;

		[Token(Token = "0x400000F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003CtotalWritten_003E5__2;

		[Token(Token = "0x4000010")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000031")]
		[Address(RVA = "0x46621E0", Offset = "0x46621E0", VA = "0x46621E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4662B40", Offset = "0x4662B40", VA = "0x4662B40", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000007")]
	[CompilerGenerated]
	private struct _003CWriteAsyncMemoryCore_003Ed__52 : IAsyncStateMachine
	{
		[Token(Token = "0x4000011")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000012")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000013")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BrotliStream _003C_003E4__this;

		[Token(Token = "0x4000014")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public ReadOnlyMemory<byte> buffer;

		[Token(Token = "0x4000015")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000016")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private OperationStatus _003ClastResult_003E5__2;

		[Token(Token = "0x4000017")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4662B90", Offset = "0x4662B90", VA = "0x4662B90", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000034")]
		[Address(RVA = "0x46635B0", Offset = "0x46635B0", VA = "0x46635B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000008")]
	[CompilerGenerated]
	private struct _003CFlushAsyncCore_003Ed__55 : IAsyncStateMachine
	{
		[Token(Token = "0x4000018")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000019")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400001A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BrotliStream _003C_003E4__this;

		[Token(Token = "0x400001B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400001C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private OperationStatus _003ClastResult_003E5__2;

		[Token(Token = "0x400001D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4663610", Offset = "0x4663610", VA = "0x4663610", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000036")]
		[Address(RVA = "0x4663F40", Offset = "0x4663F40", VA = "0x4663F40", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Stream _stream;

	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly byte[] _buffer;

	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool _leaveOpen;

	[Token(Token = "0x4000004")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private readonly CompressionMode _mode;

	[Token(Token = "0x4000005")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int _activeAsyncOperation;

	[Token(Token = "0x4000006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private BrotliDecoder _decoder;

	[Token(Token = "0x4000007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int _bufferOffset;

	[Token(Token = "0x4000008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int _bufferCount;

	[Token(Token = "0x4000009")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private BrotliEncoder _encoder;

	[Token(Token = "0x17000001")]
	public override bool CanRead
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4660210", Offset = "0x4660210", VA = "0x4660210", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4660240", Offset = "0x4660240", VA = "0x4660240", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000003")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4660270", Offset = "0x4660270", VA = "0x4660270", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public override long Length
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x46602C0", Offset = "0x46602C0", VA = "0x46602C0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000005")]
	public override long Position
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4660300", Offset = "0x4660300", VA = "0x4660300", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4660340", Offset = "0x4660340", VA = "0x4660340", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	private bool AsyncOperationIsActive
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x46603C0", Offset = "0x46603C0", VA = "0x46603C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x465F970", Offset = "0x465F970", VA = "0x465F970")]
	public BrotliStream(Stream stream, CompressionMode mode)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x465F980", Offset = "0x465F980", VA = "0x465F980")]
	public BrotliStream(Stream stream, CompressionMode mode, bool leaveOpen)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x465FB80", Offset = "0x465FB80", VA = "0x465FB80")]
	private void EnsureNotDisposed()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x465FBF0", Offset = "0x465FBF0", VA = "0x465FBF0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4660100", Offset = "0x4660100", VA = "0x4660100")]
	private static void ValidateParameters(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4660280", Offset = "0x4660280", VA = "0x4660280", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4660380", Offset = "0x4660380", VA = "0x4660380", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x46603D0", Offset = "0x46603D0", VA = "0x46603D0")]
	private void EnsureNoActiveAsyncOperation()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4660430", Offset = "0x4660430", VA = "0x4660430")]
	private void AsyncOperationStarting()
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4660450", Offset = "0x4660450", VA = "0x4660450")]
	private void AsyncOperationCompleting()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x46603E0", Offset = "0x46603E0", VA = "0x46603E0")]
	private static void ThrowInvalidBeginCall()
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4660470", Offset = "0x4660470", VA = "0x4660470", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4660510", Offset = "0x4660510", VA = "0x4660510", Slot = "33")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4660CC0", Offset = "0x4660CC0", VA = "0x4660CC0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4660E80", Offset = "0x4660E80", VA = "0x4660E80", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4660EC0", Offset = "0x4660EC0", VA = "0x4660EC0", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4660FC0", Offset = "0x4660FC0", VA = "0x4660FC0", Slot = "25")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x46611B0", Offset = "0x46611B0", VA = "0x46611B0")]
	[AsyncStateMachine(typeof(_003CFinishReadAsyncMemory_003Ed__41))]
	private ValueTask<int> FinishReadAsyncMemory(Memory<byte> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4661370", Offset = "0x4661370", VA = "0x4661370")]
	public BrotliStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4661600", Offset = "0x4661600", VA = "0x4661600", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4661690", Offset = "0x4661690", VA = "0x4661690", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x465FD70", Offset = "0x465FD70", VA = "0x465FD70")]
	internal void WriteCore(ReadOnlySpan<byte> buffer, bool isFinalBlock = false)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x46616C0", Offset = "0x46616C0", VA = "0x46616C0", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4661760", Offset = "0x4661760", VA = "0x4661760", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4661850", Offset = "0x4661850", VA = "0x4661850", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4661960", Offset = "0x4661960", VA = "0x4661960", Slot = "29")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4661B30", Offset = "0x4661B30", VA = "0x4661B30")]
	[AsyncStateMachine(typeof(_003CWriteAsyncMemoryCore_003Ed__52))]
	private Task WriteAsyncMemoryCore(ReadOnlyMemory<byte> buffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4661C60", Offset = "0x4661C60", VA = "0x4661C60", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4661F50", Offset = "0x4661F50", VA = "0x4661F50", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x46620E0", Offset = "0x46620E0", VA = "0x46620E0")]
	[AsyncStateMachine(typeof(_003CFlushAsyncCore_003Ed__55))]
	private Task FlushAsyncCore(CancellationToken cancellationToken)
	{
		return null;
	}
}
