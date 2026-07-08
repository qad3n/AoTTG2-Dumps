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
		[Address(RVA = "0x4324A80", Offset = "0x4324A80", VA = "0x4324A80", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000032")]
		[Address(RVA = "0x43253E0", Offset = "0x43253E0", VA = "0x43253E0", Slot = "5")]
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
		[Address(RVA = "0x4325430", Offset = "0x4325430", VA = "0x4325430", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4325E50", Offset = "0x4325E50", VA = "0x4325E50", Slot = "5")]
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
		[Address(RVA = "0x4325EB0", Offset = "0x4325EB0", VA = "0x4325EB0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000036")]
		[Address(RVA = "0x43267E0", Offset = "0x43267E0", VA = "0x43267E0", Slot = "5")]
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
		[Address(RVA = "0x4322AB0", Offset = "0x4322AB0", VA = "0x4322AB0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4322AE0", Offset = "0x4322AE0", VA = "0x4322AE0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000003")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4322B10", Offset = "0x4322B10", VA = "0x4322B10", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public override long Length
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4322B60", Offset = "0x4322B60", VA = "0x4322B60", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000005")]
	public override long Position
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4322BA0", Offset = "0x4322BA0", VA = "0x4322BA0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4322BE0", Offset = "0x4322BE0", VA = "0x4322BE0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	private bool AsyncOperationIsActive
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x4322C60", Offset = "0x4322C60", VA = "0x4322C60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4322210", Offset = "0x4322210", VA = "0x4322210")]
	public BrotliStream(Stream stream, CompressionMode mode)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4322220", Offset = "0x4322220", VA = "0x4322220")]
	public BrotliStream(Stream stream, CompressionMode mode, bool leaveOpen)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4322420", Offset = "0x4322420", VA = "0x4322420")]
	private void EnsureNotDisposed()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4322490", Offset = "0x4322490", VA = "0x4322490", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x43229A0", Offset = "0x43229A0", VA = "0x43229A0")]
	private static void ValidateParameters(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4322B20", Offset = "0x4322B20", VA = "0x4322B20", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4322C20", Offset = "0x4322C20", VA = "0x4322C20", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4322C70", Offset = "0x4322C70", VA = "0x4322C70")]
	private void EnsureNoActiveAsyncOperation()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4322CD0", Offset = "0x4322CD0", VA = "0x4322CD0")]
	private void AsyncOperationStarting()
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4322CF0", Offset = "0x4322CF0", VA = "0x4322CF0")]
	private void AsyncOperationCompleting()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4322C80", Offset = "0x4322C80", VA = "0x4322C80")]
	private static void ThrowInvalidBeginCall()
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4322D10", Offset = "0x4322D10", VA = "0x4322D10", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4322DB0", Offset = "0x4322DB0", VA = "0x4322DB0", Slot = "33")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4323560", Offset = "0x4323560", VA = "0x4323560", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4323720", Offset = "0x4323720", VA = "0x4323720", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4323760", Offset = "0x4323760", VA = "0x4323760", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4323860", Offset = "0x4323860", VA = "0x4323860", Slot = "25")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4323A50", Offset = "0x4323A50", VA = "0x4323A50")]
	[AsyncStateMachine(typeof(_003CFinishReadAsyncMemory_003Ed__41))]
	private ValueTask<int> FinishReadAsyncMemory(Memory<byte> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4323C10", Offset = "0x4323C10", VA = "0x4323C10")]
	public BrotliStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4323EA0", Offset = "0x4323EA0", VA = "0x4323EA0", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4323F30", Offset = "0x4323F30", VA = "0x4323F30", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4322610", Offset = "0x4322610", VA = "0x4322610")]
	internal void WriteCore(ReadOnlySpan<byte> buffer, bool isFinalBlock = false)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4323F60", Offset = "0x4323F60", VA = "0x4323F60", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4324000", Offset = "0x4324000", VA = "0x4324000", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x43240F0", Offset = "0x43240F0", VA = "0x43240F0", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4324200", Offset = "0x4324200", VA = "0x4324200", Slot = "29")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x43243D0", Offset = "0x43243D0", VA = "0x43243D0")]
	[AsyncStateMachine(typeof(_003CWriteAsyncMemoryCore_003Ed__52))]
	private Task WriteAsyncMemoryCore(ReadOnlyMemory<byte> buffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4324500", Offset = "0x4324500", VA = "0x4324500", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x43247F0", Offset = "0x43247F0", VA = "0x43247F0", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4324980", Offset = "0x4324980", VA = "0x4324980")]
	[AsyncStateMachine(typeof(_003CFlushAsyncCore_003Ed__55))]
	private Task FlushAsyncCore(CancellationToken cancellationToken)
	{
		return null;
	}
}
