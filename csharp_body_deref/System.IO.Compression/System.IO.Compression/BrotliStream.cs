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

[Token(Token = "0x2000008")]
public sealed class BrotliStream : Stream
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000009")]
	[CompilerGenerated]
	private struct _003CFinishReadAsyncMemory_003Ed__41 : IAsyncStateMachine
	{
		[Token(Token = "0x400000F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000010")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncValueTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000011")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BrotliStream _003C_003E4__this;

		[Token(Token = "0x4000012")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000013")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Memory<byte> buffer;

		[Token(Token = "0x4000014")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003CtotalWritten_003E5__2;

		[Token(Token = "0x4000015")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600003C")]
		[Address(RVA = "0x25B9110", Offset = "0x25B7710", VA = "0x1825B9110", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600003D")]
		[Address(RVA = "0x25B9B50", Offset = "0x25B8150", VA = "0x1825B9B50", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200000A")]
	[CompilerGenerated]
	private struct _003CWriteAsyncMemoryCore_003Ed__52 : IAsyncStateMachine
	{
		[Token(Token = "0x4000016")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000017")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000018")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BrotliStream _003C_003E4__this;

		[Token(Token = "0x4000019")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public ReadOnlyMemory<byte> buffer;

		[Token(Token = "0x400001A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400001B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private OperationStatus _003ClastResult_003E5__2;

		[Token(Token = "0x400001C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600003E")]
		[Address(RVA = "0x25BA290", Offset = "0x25B8890", VA = "0x1825BA290", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600003F")]
		[Address(RVA = "0x25BA890", Offset = "0x25B8E90", VA = "0x1825BA890", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200000B")]
	[CompilerGenerated]
	private struct _003CFlushAsyncCore_003Ed__55 : IAsyncStateMachine
	{
		[Token(Token = "0x400001D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400001E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400001F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BrotliStream _003C_003E4__this;

		[Token(Token = "0x4000020")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000021")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private OperationStatus _003ClastResult_003E5__2;

		[Token(Token = "0x4000022")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000040")]
		[Address(RVA = "0x25B9BA0", Offset = "0x25B81A0", VA = "0x1825B9BA0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000041")]
		[Address(RVA = "0x25BA230", Offset = "0x25B8830", VA = "0x1825BA230", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Stream _stream;

	[Token(Token = "0x4000007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly byte[] _buffer;

	[Token(Token = "0x4000008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool _leaveOpen;

	[Token(Token = "0x4000009")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private readonly CompressionMode _mode;

	[Token(Token = "0x400000A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int _activeAsyncOperation;

	[Token(Token = "0x400000B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private BrotliDecoder _decoder;

	[Token(Token = "0x400000C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int _bufferOffset;

	[Token(Token = "0x400000D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int _bufferCount;

	[Token(Token = "0x400000E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private BrotliEncoder _encoder;

	[Token(Token = "0x17000005")]
	public override bool CanRead
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x25B8620", Offset = "0x25B6C20", VA = "0x1825B8620", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000006")]
	public override bool CanWrite
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x25B8650", Offset = "0x25B6C50", VA = "0x1825B8650", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000007")]
	public override bool CanSeek
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000008")]
	public override long Length
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x25B8680", Offset = "0x25B6C80", VA = "0x1825B8680", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000009")]
	public override long Position
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x25B86C0", Offset = "0x25B6CC0", VA = "0x1825B86C0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x25B8700", Offset = "0x25B6D00", VA = "0x1825B8700", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	private bool AsyncOperationIsActive
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x25B8610", Offset = "0x25B6C10", VA = "0x1825B8610")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x25B8590", Offset = "0x25B6B90", VA = "0x1825B8590")]
	public BrotliStream(Stream stream, CompressionMode mode)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x25B8320", Offset = "0x25B6920", VA = "0x1825B8320")]
	public BrotliStream(Stream stream, CompressionMode mode, bool leaveOpen)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x25B67C0", Offset = "0x25B4DC0", VA = "0x1825B67C0")]
	private void EnsureNotDisposed()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x25B6580", Offset = "0x25B4B80", VA = "0x1825B6580", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x25B7940", Offset = "0x25B5F40", VA = "0x1825B7940")]
	private static void ValidateParameters(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x25B7870", Offset = "0x25B5E70", VA = "0x1825B7870", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x25B78B0", Offset = "0x25B5EB0", VA = "0x1825B78B0", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x25B67A0", Offset = "0x25B4DA0", VA = "0x1825B67A0")]
	private void EnsureNoActiveAsyncOperation()
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x25B6410", Offset = "0x25B4A10", VA = "0x1825B6410")]
	private void AsyncOperationStarting()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x25B63F0", Offset = "0x25B49F0", VA = "0x1825B63F0")]
	private void AsyncOperationCompleting()
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x25B78F0", Offset = "0x25B5EF0", VA = "0x1825B78F0")]
	private static void ThrowInvalidBeginCall()
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x25B7340", Offset = "0x25B5940", VA = "0x1825B7340", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x25B7400", Offset = "0x25B5A00", VA = "0x1825B7400", Slot = "33")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x25B6440", Offset = "0x25B4A40", VA = "0x1825B6440", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x25B6660", Offset = "0x25B4C60", VA = "0x1825B6660", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x25B7230", Offset = "0x25B5830", VA = "0x1825B7230", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x25B6F70", Offset = "0x25B5570", VA = "0x1825B6F70", Slot = "25")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x25B6840", Offset = "0x25B4E40", VA = "0x1825B6840")]
	[AsyncStateMachine(typeof(_003CFinishReadAsyncMemory_003Ed__41))]
	private ValueTask<int> FinishReadAsyncMemory(Memory<byte> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x25B85B0", Offset = "0x25B6BB0", VA = "0x1825B85B0")]
	public BrotliStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x25B8240", Offset = "0x25B6840", VA = "0x1825B8240", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x25B82F0", Offset = "0x25B68F0", VA = "0x1825B82F0", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x25B7F60", Offset = "0x25B6560", VA = "0x1825B7F60")]
	internal void WriteCore(ReadOnlySpan<byte> buffer, bool isFinalBlock = false)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x25B64E0", Offset = "0x25B4AE0", VA = "0x1825B64E0", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x25B66A0", Offset = "0x25B4CA0", VA = "0x1825B66A0", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x25B7E40", Offset = "0x25B6440", VA = "0x1825B7E40", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x25B7BF0", Offset = "0x25B61F0", VA = "0x1825B7BF0", Slot = "29")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x25B7AC0", Offset = "0x25B60C0", VA = "0x1825B7AC0")]
	[AsyncStateMachine(typeof(_003CWriteAsyncMemoryCore_003Ed__52))]
	private Task WriteAsyncMemoryCore(ReadOnlyMemory<byte> buffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x25B6CF0", Offset = "0x25B52F0", VA = "0x1825B6CF0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x25B6AC0", Offset = "0x25B50C0", VA = "0x1825B6AC0", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x25B69B0", Offset = "0x25B4FB0", VA = "0x1825B69B0")]
	[AsyncStateMachine(typeof(_003CFlushAsyncCore_003Ed__55))]
	private Task FlushAsyncCore(CancellationToken cancellationToken)
	{
		return null;
	}
}
