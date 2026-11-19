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
		[Address(RVA = "0x5F61800", Offset = "0x5F60800", VA = "0x5F61800", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600003D")]
		[Address(RVA = "0x5F621C0", Offset = "0x5F611C0", VA = "0x5F621C0", Slot = "5")]
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
		[Address(RVA = "0x5F62210", Offset = "0x5F61210", VA = "0x5F62210", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600003F")]
		[Address(RVA = "0x5F62B40", Offset = "0x5F61B40", VA = "0x5F62B40", Slot = "5")]
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
		[Address(RVA = "0x5F62BA0", Offset = "0x5F61BA0", VA = "0x5F62BA0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000041")]
		[Address(RVA = "0x5F63480", Offset = "0x5F62480", VA = "0x5F63480", Slot = "5")]
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
		[Address(RVA = "0x5F5FA00", Offset = "0x5F5EA00", VA = "0x5F5FA00", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000006")]
	public override bool CanWrite
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x5F5FA30", Offset = "0x5F5EA30", VA = "0x5F5FA30", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000007")]
	public override bool CanSeek
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x5F5FA60", Offset = "0x5F5EA60", VA = "0x5F5FA60", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000008")]
	public override long Length
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x5F5FAB0", Offset = "0x5F5EAB0", VA = "0x5F5FAB0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000009")]
	public override long Position
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x5F5FAF0", Offset = "0x5F5EAF0", VA = "0x5F5FAF0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x5F5FB30", Offset = "0x5F5EB30", VA = "0x5F5FB30", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	private bool AsyncOperationIsActive
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x5F5FBB0", Offset = "0x5F5EBB0", VA = "0x5F5FBB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x5F5F250", Offset = "0x5F5E250", VA = "0x5F5F250")]
	public BrotliStream(Stream stream, CompressionMode mode)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x5F5F260", Offset = "0x5F5E260", VA = "0x5F5F260")]
	public BrotliStream(Stream stream, CompressionMode mode, bool leaveOpen)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x5F5F460", Offset = "0x5F5E460", VA = "0x5F5F460")]
	private void EnsureNotDisposed()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x5F5F4D0", Offset = "0x5F5E4D0", VA = "0x5F5F4D0", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x5F5F8F0", Offset = "0x5F5E8F0", VA = "0x5F5F8F0")]
	private static void ValidateParameters(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x5F5FA70", Offset = "0x5F5EA70", VA = "0x5F5FA70", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x5F5FB70", Offset = "0x5F5EB70", VA = "0x5F5FB70", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x5F5FBC0", Offset = "0x5F5EBC0", VA = "0x5F5FBC0")]
	private void EnsureNoActiveAsyncOperation()
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x5F5FC60", Offset = "0x5F5EC60", VA = "0x5F5FC60")]
	private void AsyncOperationStarting()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x5F5FCC0", Offset = "0x5F5ECC0", VA = "0x5F5FCC0")]
	private void AsyncOperationCompleting()
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x5F5FC10", Offset = "0x5F5EC10", VA = "0x5F5FC10")]
	private static void ThrowInvalidBeginCall()
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x5F5FCE0", Offset = "0x5F5ECE0", VA = "0x5F5FCE0", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x5F5FD80", Offset = "0x5F5ED80", VA = "0x5F5FD80", Slot = "34")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x5F604C0", Offset = "0x5F5F4C0", VA = "0x5F604C0", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x5F60560", Offset = "0x5F5F560", VA = "0x5F60560", Slot = "24")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x5F605A0", Offset = "0x5F5F5A0", VA = "0x5F605A0", Slot = "25")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x5F60690", Offset = "0x5F5F690", VA = "0x5F60690", Slot = "26")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x5F608A0", Offset = "0x5F5F8A0", VA = "0x5F608A0")]
	[AsyncStateMachine(typeof(_003CFinishReadAsyncMemory_003Ed__41))]
	private ValueTask<int> FinishReadAsyncMemory(Memory<byte> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x5F60A50", Offset = "0x5F5FA50", VA = "0x5F60A50")]
	public BrotliStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x5F60CE0", Offset = "0x5F5FCE0", VA = "0x5F60CE0", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x5F60D70", Offset = "0x5F5FD70", VA = "0x5F60D70", Slot = "37")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x5F5F640", Offset = "0x5F5E640", VA = "0x5F5F640")]
	internal void WriteCore(ReadOnlySpan<byte> buffer, bool isFinalBlock = false)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x5F60DA0", Offset = "0x5F5FDA0", VA = "0x5F60DA0", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x5F60E40", Offset = "0x5F5FE40", VA = "0x5F60E40", Slot = "28")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x5F60E50", Offset = "0x5F5FE50", VA = "0x5F60E50", Slot = "29")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x5F60F50", Offset = "0x5F5FF50", VA = "0x5F60F50", Slot = "30")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x5F61160", Offset = "0x5F60160", VA = "0x5F61160")]
	[AsyncStateMachine(typeof(_003CWriteAsyncMemoryCore_003Ed__52))]
	private Task WriteAsyncMemoryCore(ReadOnlyMemory<byte> buffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x5F61280", Offset = "0x5F60280", VA = "0x5F61280", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x5F61550", Offset = "0x5F60550", VA = "0x5F61550", Slot = "22")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x5F61710", Offset = "0x5F60710", VA = "0x5F61710")]
	[AsyncStateMachine(typeof(_003CFlushAsyncCore_003Ed__55))]
	private Task FlushAsyncCore(CancellationToken cancellationToken)
	{
		return null;
	}
}
