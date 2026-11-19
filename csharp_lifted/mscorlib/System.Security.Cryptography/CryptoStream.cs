// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.CryptoStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002C2")]
public class CryptoStream : Stream, IDisposable
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20002C3")]
	[CompilerGenerated]
	private struct _003CReadAsyncInternal_003Ed__37 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BF1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BF2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000BF3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CryptoStream _003C_003E4__this;

		[Token(Token = "0x4000BF4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] buffer;

		[Token(Token = "0x4000BF5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int offset;

		[Token(Token = "0x4000BF6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int count;

		[Token(Token = "0x4000BF7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000BF8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private SemaphoreSlim _003Csemaphore_003E5__2;

		[Token(Token = "0x4000BF9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private System.Threading.Tasks.ForceAsyncAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000BFA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private TaskAwaiter<int> _003C_003Eu__2;

		[Token(Token = "0x6001865")]
		[Address(RVA = "0x53307B0", Offset = "0x532F7B0", VA = "0x53307B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001866")]
		[Address(RVA = "0x5330CC0", Offset = "0x532FCC0", VA = "0x5330CC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20002C4")]
	[CompilerGenerated]
	private struct _003CReadAsyncCore_003Ed__42 : IAsyncStateMachine
	{
		[Token(Token = "0x4000BFB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000BFC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000BFD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int count;

		[Token(Token = "0x4000BFE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public int offset;

		[Token(Token = "0x4000BFF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CryptoStream _003C_003E4__this;

		[Token(Token = "0x4000C00")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public byte[] buffer;

		[Token(Token = "0x4000C01")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool useAsync;

		[Token(Token = "0x4000C02")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C03")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003CbytesToDeliver_003E5__2;

		[Token(Token = "0x4000C04")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private int _003CcurrentOutputIndex_003E5__3;

		[Token(Token = "0x4000C05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private int _003CnumWholeBlocksInBytes_003E5__4;

		[Token(Token = "0x4000C06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private byte[] _003CtempInputBuffer_003E5__5;

		[Token(Token = "0x4000C07")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private byte[] _003CtempOutputBuffer_003E5__6;

		[Token(Token = "0x4000C08")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ValueTaskAwaiter<int> _003C_003Eu__1;

		[Token(Token = "0x6001867")]
		[Address(RVA = "0x5330D30", Offset = "0x532FD30", VA = "0x5330D30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001868")]
		[Address(RVA = "0x5332030", Offset = "0x5331030", VA = "0x5332030", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20002C5")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInternal_003Ed__46 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C09")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C0A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000C0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CryptoStream _003C_003E4__this;

		[Token(Token = "0x4000C0C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] buffer;

		[Token(Token = "0x4000C0D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int offset;

		[Token(Token = "0x4000C0E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int count;

		[Token(Token = "0x4000C0F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C10")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private SemaphoreSlim _003Csemaphore_003E5__2;

		[Token(Token = "0x4000C11")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private System.Threading.Tasks.ForceAsyncAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000C12")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001869")]
		[Address(RVA = "0x53320A0", Offset = "0x53310A0", VA = "0x53320A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600186A")]
		[Address(RVA = "0x5332540", Offset = "0x5331540", VA = "0x5332540", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20002C6")]
	[CompilerGenerated]
	private struct _003CWriteAsyncCore_003Ed__49 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C13")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C14")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000C15")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int count;

		[Token(Token = "0x4000C16")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public int offset;

		[Token(Token = "0x4000C17")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CryptoStream _003C_003E4__this;

		[Token(Token = "0x4000C18")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public byte[] buffer;

		[Token(Token = "0x4000C19")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool useAsync;

		[Token(Token = "0x4000C1A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C1B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003CbytesToWrite_003E5__2;

		[Token(Token = "0x4000C1C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private int _003CcurrentInputIndex_003E5__3;

		[Token(Token = "0x4000C1D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private int _003CnumOutputBytes_003E5__4;

		[Token(Token = "0x4000C1E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000C1F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private int _003CnumWholeBlocksInBytes_003E5__5;

		[Token(Token = "0x4000C20")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private byte[] _003CtempOutputBuffer_003E5__6;

		[Token(Token = "0x600186B")]
		[Address(RVA = "0x53325A0", Offset = "0x53315A0", VA = "0x53325A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600186C")]
		[Address(RVA = "0x5333AA0", Offset = "0x5332AA0", VA = "0x5333AA0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000BE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Stream _stream;

	[Token(Token = "0x4000BE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly ICryptoTransform _transform;

	[Token(Token = "0x4000BE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly CryptoStreamMode _transformMode;

	[Token(Token = "0x4000BE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private byte[] _inputBuffer;

	[Token(Token = "0x4000BE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _inputBufferIndex;

	[Token(Token = "0x4000BE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int _inputBlockSize;

	[Token(Token = "0x4000BE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private byte[] _outputBuffer;

	[Token(Token = "0x4000BEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int _outputBufferIndex;

	[Token(Token = "0x4000BEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int _outputBlockSize;

	[Token(Token = "0x4000BEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool _canRead;

	[Token(Token = "0x4000BED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool _canWrite;

	[Token(Token = "0x4000BEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x62")]
	private bool _finalBlockTransformed;

	[Token(Token = "0x4000BEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private SemaphoreSlim _lazyAsyncActiveSemaphore;

	[Token(Token = "0x4000BF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly bool _leaveOpen;

	[Token(Token = "0x17000272")]
	public override bool CanRead
	{
		[Token(Token = "0x6001845")]
		[Address(RVA = "0x532F4B0", Offset = "0x532E4B0", VA = "0x532F4B0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000273")]
	public override bool CanSeek
	{
		[Token(Token = "0x6001846")]
		[Address(RVA = "0x532F4C0", Offset = "0x532E4C0", VA = "0x532F4C0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000274")]
	public override bool CanWrite
	{
		[Token(Token = "0x6001847")]
		[Address(RVA = "0x532F4D0", Offset = "0x532E4D0", VA = "0x532F4D0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000275")]
	public override long Length
	{
		[Token(Token = "0x6001848")]
		[Address(RVA = "0x532F4E0", Offset = "0x532E4E0", VA = "0x532F4E0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000276")]
	public override long Position
	{
		[Token(Token = "0x6001849")]
		[Address(RVA = "0x532F530", Offset = "0x532E530", VA = "0x532F530", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600184A")]
		[Address(RVA = "0x532F580", Offset = "0x532E580", VA = "0x532F580", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000277")]
	public bool HasFlushedFinalBlock
	{
		[Token(Token = "0x600184B")]
		[Address(RVA = "0x532F5D0", Offset = "0x532E5D0", VA = "0x532F5D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000278")]
	private SemaphoreSlim AsyncActiveSemaphore
	{
		[Token(Token = "0x6001864")]
		[Address(RVA = "0x5330680", Offset = "0x532F680", VA = "0x5330680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001843")]
	[Address(RVA = "0x532F120", Offset = "0x532E120", VA = "0x532F120")]
	public CryptoStream(Stream stream, ICryptoTransform transform, CryptoStreamMode mode)
	{
	}

	[Token(Token = "0x6001844")]
	[Address(RVA = "0x532F130", Offset = "0x532E130", VA = "0x532F130")]
	public CryptoStream(Stream stream, ICryptoTransform transform, CryptoStreamMode mode, bool leaveOpen)
	{
	}

	[Token(Token = "0x600184C")]
	[Address(RVA = "0x532F5E0", Offset = "0x532E5E0", VA = "0x532F5E0")]
	public void FlushFinalBlock()
	{
	}

	[Token(Token = "0x600184D")]
	[Address(RVA = "0x532F800", Offset = "0x532E800", VA = "0x532F800", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600184E")]
	[Address(RVA = "0x532F810", Offset = "0x532E810", VA = "0x532F810", Slot = "22")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600184F")]
	[Address(RVA = "0x532F980", Offset = "0x532E980", VA = "0x532F980", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6001850")]
	[Address(RVA = "0x532F9D0", Offset = "0x532E9D0", VA = "0x532F9D0", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6001851")]
	[Address(RVA = "0x532FA20", Offset = "0x532EA20", VA = "0x532FA20", Slot = "25")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001852")]
	[Address(RVA = "0x532FCE0", Offset = "0x532ECE0", VA = "0x532FCE0", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001853")]
	[Address(RVA = "0x532FD80", Offset = "0x532ED80", VA = "0x532FD80", Slot = "24")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6001854")]
	[Address(RVA = "0x532FB90", Offset = "0x532EB90", VA = "0x532FB90")]
	[AsyncStateMachine(typeof(_003CReadAsyncInternal_003Ed__37))]
	private Task<int> ReadAsyncInternal(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001855")]
	[Address(RVA = "0x532FDC0", Offset = "0x532EDC0", VA = "0x532FDC0", Slot = "35")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6001856")]
	[Address(RVA = "0x532FE20", Offset = "0x532EE20", VA = "0x532FE20", Slot = "38")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6001857")]
	[Address(RVA = "0x532FE60", Offset = "0x532EE60", VA = "0x532FE60", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001858")]
	[Address(RVA = "0x532FA60", Offset = "0x532EA60", VA = "0x532FA60")]
	private void CheckReadArguments(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6001859")]
	[Address(RVA = "0x532FF10", Offset = "0x532EF10", VA = "0x532FF10")]
	[AsyncStateMachine(typeof(_003CReadAsyncCore_003Ed__42))]
	private Task<int> ReadAsyncCore(byte[] buffer, int offset, int count, CancellationToken cancellationToken, bool useAsync)
	{
		return null;
	}

	[Token(Token = "0x600185A")]
	[Address(RVA = "0x5330090", Offset = "0x532F090", VA = "0x5330090", Slot = "29")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600185B")]
	[Address(RVA = "0x5330320", Offset = "0x532F320", VA = "0x5330320", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600185C")]
	[Address(RVA = "0x53303C0", Offset = "0x532F3C0", VA = "0x53303C0", Slot = "28")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x600185D")]
	[Address(RVA = "0x5330200", Offset = "0x532F200", VA = "0x5330200")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__46))]
	private Task WriteAsyncInternal(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600185E")]
	[Address(RVA = "0x53303D0", Offset = "0x532F3D0", VA = "0x53303D0", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x600185F")]
	[Address(RVA = "0x53300D0", Offset = "0x532F0D0", VA = "0x53300D0")]
	private void CheckWriteArguments(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6001860")]
	[Address(RVA = "0x5330440", Offset = "0x532F440", VA = "0x5330440")]
	[AsyncStateMachine(typeof(_003CWriteAsyncCore_003Ed__49))]
	private Task WriteAsyncCore(byte[] buffer, int offset, int count, CancellationToken cancellationToken, bool useAsync)
	{
		return null;
	}

	[Token(Token = "0x6001861")]
	[Address(RVA = "0x53305A0", Offset = "0x532F5A0", VA = "0x53305A0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001862")]
	[Address(RVA = "0x53305C0", Offset = "0x532F5C0", VA = "0x53305C0", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001863")]
	[Address(RVA = "0x532F320", Offset = "0x532E320", VA = "0x532F320")]
	private void InitializeBuffer()
	{
	}
}
