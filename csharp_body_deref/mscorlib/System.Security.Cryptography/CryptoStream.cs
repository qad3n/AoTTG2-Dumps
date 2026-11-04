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

[Token(Token = "0x20002E9")]
public class CryptoStream : Stream, IDisposable
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20002EA")]
	[CompilerGenerated]
	private struct _003CReadAsyncInternal_003Ed__37 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C91")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C92")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000C93")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CryptoStream _003C_003E4__this;

		[Token(Token = "0x4000C94")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] buffer;

		[Token(Token = "0x4000C95")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int offset;

		[Token(Token = "0x4000C96")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int count;

		[Token(Token = "0x4000C97")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C98")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private SemaphoreSlim _003Csemaphore_003E5__2;

		[Token(Token = "0x4000C99")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private System.Threading.Tasks.ForceAsyncAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000C9A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private TaskAwaiter<int> _003C_003Eu__2;

		[Token(Token = "0x6001888")]
		[Address(RVA = "0x19B80A0", Offset = "0x19B66A0", VA = "0x1819B80A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001889")]
		[Address(RVA = "0x19B85A0", Offset = "0x19B6BA0", VA = "0x1819B85A0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20002EB")]
	[CompilerGenerated]
	private struct _003CReadAsyncCore_003Ed__42 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C9B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C9C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000C9D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int count;

		[Token(Token = "0x4000C9E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public int offset;

		[Token(Token = "0x4000C9F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CryptoStream _003C_003E4__this;

		[Token(Token = "0x4000CA0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public byte[] buffer;

		[Token(Token = "0x4000CA1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool useAsync;

		[Token(Token = "0x4000CA2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CA3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003CbytesToDeliver_003E5__2;

		[Token(Token = "0x4000CA4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private int _003CcurrentOutputIndex_003E5__3;

		[Token(Token = "0x4000CA5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private int _003CnumWholeBlocksInBytes_003E5__4;

		[Token(Token = "0x4000CA6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private byte[] _003CtempInputBuffer_003E5__5;

		[Token(Token = "0x4000CA7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private byte[] _003CtempOutputBuffer_003E5__6;

		[Token(Token = "0x4000CA8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ValueTaskAwaiter<int> _003C_003Eu__1;

		[Token(Token = "0x600188A")]
		[Address(RVA = "0x19B7010", Offset = "0x19B5610", VA = "0x1819B7010", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600188B")]
		[Address(RVA = "0x19B8030", Offset = "0x19B6630", VA = "0x1819B8030", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20002EC")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInternal_003Ed__46 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CA9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CAA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000CAB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CryptoStream _003C_003E4__this;

		[Token(Token = "0x4000CAC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] buffer;

		[Token(Token = "0x4000CAD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int offset;

		[Token(Token = "0x4000CAE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int count;

		[Token(Token = "0x4000CAF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CB0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private SemaphoreSlim _003Csemaphore_003E5__2;

		[Token(Token = "0x4000CB1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private System.Threading.Tasks.ForceAsyncAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000CB2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600188C")]
		[Address(RVA = "0x19B9580", Offset = "0x19B7B80", VA = "0x1819B9580", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600188D")]
		[Address(RVA = "0x19B9A20", Offset = "0x19B8020", VA = "0x1819B9A20", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20002ED")]
	[CompilerGenerated]
	private struct _003CWriteAsyncCore_003Ed__49 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CB3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CB4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000CB5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int count;

		[Token(Token = "0x4000CB6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public int offset;

		[Token(Token = "0x4000CB7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CryptoStream _003C_003E4__this;

		[Token(Token = "0x4000CB8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public byte[] buffer;

		[Token(Token = "0x4000CB9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool useAsync;

		[Token(Token = "0x4000CBA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CBB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003CbytesToWrite_003E5__2;

		[Token(Token = "0x4000CBC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private int _003CcurrentInputIndex_003E5__3;

		[Token(Token = "0x4000CBD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private int _003CnumOutputBytes_003E5__4;

		[Token(Token = "0x4000CBE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000CBF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private int _003CnumWholeBlocksInBytes_003E5__5;

		[Token(Token = "0x4000CC0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private byte[] _003CtempOutputBuffer_003E5__6;

		[Token(Token = "0x600188E")]
		[Address(RVA = "0x19B86D0", Offset = "0x19B6CD0", VA = "0x1819B86D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600188F")]
		[Address(RVA = "0x19B9520", Offset = "0x19B7B20", VA = "0x1819B9520", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000C83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Stream _stream;

	[Token(Token = "0x4000C84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly ICryptoTransform _transform;

	[Token(Token = "0x4000C85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly CryptoStreamMode _transformMode;

	[Token(Token = "0x4000C86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private byte[] _inputBuffer;

	[Token(Token = "0x4000C87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _inputBufferIndex;

	[Token(Token = "0x4000C88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int _inputBlockSize;

	[Token(Token = "0x4000C89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private byte[] _outputBuffer;

	[Token(Token = "0x4000C8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int _outputBufferIndex;

	[Token(Token = "0x4000C8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int _outputBlockSize;

	[Token(Token = "0x4000C8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool _canRead;

	[Token(Token = "0x4000C8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool _canWrite;

	[Token(Token = "0x4000C8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x62")]
	private bool _finalBlockTransformed;

	[Token(Token = "0x4000C8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private SemaphoreSlim _lazyAsyncActiveSemaphore;

	[Token(Token = "0x4000C90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly bool _leaveOpen;

	[Token(Token = "0x17000273")]
	public override bool CanRead
	{
		[Token(Token = "0x6001868")]
		[Address(RVA = "0x198C740", Offset = "0x198AD40", VA = "0x18198C740", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000274")]
	public override bool CanSeek
	{
		[Token(Token = "0x6001869")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000275")]
	public override bool CanWrite
	{
		[Token(Token = "0x600186A")]
		[Address(RVA = "0x198C750", Offset = "0x198AD50", VA = "0x18198C750", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000276")]
	public override long Length
	{
		[Token(Token = "0x600186B")]
		[Address(RVA = "0x198C760", Offset = "0x198AD60", VA = "0x18198C760", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000277")]
	public override long Position
	{
		[Token(Token = "0x600186C")]
		[Address(RVA = "0x198C7B0", Offset = "0x198ADB0", VA = "0x18198C7B0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600186D")]
		[Address(RVA = "0x198C800", Offset = "0x198AE00", VA = "0x18198C800", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000278")]
	public bool HasFlushedFinalBlock
	{
		[Token(Token = "0x600186E")]
		[Address(RVA = "0xCDE7F0", Offset = "0xCDCDF0", VA = "0x180CDE7F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000279")]
	private SemaphoreSlim AsyncActiveSemaphore
	{
		[Token(Token = "0x6001887")]
		[Address(RVA = "0x198C620", Offset = "0x198AC20", VA = "0x18198C620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001866")]
	[Address(RVA = "0x198C600", Offset = "0x198AC00", VA = "0x18198C600")]
	public CryptoStream(Stream stream, ICryptoTransform transform, CryptoStreamMode mode)
	{
	}

	[Token(Token = "0x6001867")]
	[Address(RVA = "0x198C320", Offset = "0x198A920", VA = "0x18198C320")]
	public CryptoStream(Stream stream, ICryptoTransform transform, CryptoStreamMode mode, bool leaveOpen)
	{
	}

	[Token(Token = "0x600186F")]
	[Address(RVA = "0x198B3E0", Offset = "0x19899E0", VA = "0x18198B3E0")]
	public void FlushFinalBlock()
	{
	}

	[Token(Token = "0x6001870")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6001871")]
	[Address(RVA = "0x198B270", Offset = "0x1989870", VA = "0x18198B270", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001872")]
	[Address(RVA = "0x198BD20", Offset = "0x198A320", VA = "0x18198BD20", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6001873")]
	[Address(RVA = "0x198BD70", Offset = "0x198A370", VA = "0x18198BD70", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6001874")]
	[Address(RVA = "0x198B990", Offset = "0x1989F90", VA = "0x18198B990", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001875")]
	[Address(RVA = "0x198ACD0", Offset = "0x19892D0", VA = "0x18198ACD0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001876")]
	[Address(RVA = "0x198B220", Offset = "0x1989820", VA = "0x18198B220", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6001877")]
	[Address(RVA = "0x198B850", Offset = "0x1989E50", VA = "0x18198B850")]
	[AsyncStateMachine(typeof(_003CReadAsyncInternal_003Ed__37))]
	private Task<int> ReadAsyncInternal(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001878")]
	[Address(RVA = "0x198BAD0", Offset = "0x198A0D0", VA = "0x18198BAD0", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6001879")]
	[Address(RVA = "0x198C160", Offset = "0x198A760", VA = "0x18198C160", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x600187A")]
	[Address(RVA = "0x198BB50", Offset = "0x198A150", VA = "0x18198BB50", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600187B")]
	[Address(RVA = "0x198AE10", Offset = "0x1989410", VA = "0x18198AE10")]
	private void CheckReadArguments(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x600187C")]
	[Address(RVA = "0x198B700", Offset = "0x1989D00", VA = "0x18198B700")]
	[AsyncStateMachine(typeof(_003CReadAsyncCore_003Ed__42))]
	private Task<int> ReadAsyncCore(byte[] buffer, int offset, int count, CancellationToken cancellationToken, bool useAsync)
	{
		return null;
	}

	[Token(Token = "0x600187D")]
	[Address(RVA = "0x198C010", Offset = "0x198A610", VA = "0x18198C010", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600187E")]
	[Address(RVA = "0x198AD70", Offset = "0x1989370", VA = "0x18198AD70", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600187F")]
	[Address(RVA = "0x198B260", Offset = "0x1989860", VA = "0x18198B260", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001880")]
	[Address(RVA = "0x198BEE0", Offset = "0x198A4E0", VA = "0x18198BEE0")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__46))]
	private Task WriteAsyncInternal(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001881")]
	[Address(RVA = "0x198C1B0", Offset = "0x198A7B0", VA = "0x18198C1B0", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6001882")]
	[Address(RVA = "0x198AFC0", Offset = "0x19895C0", VA = "0x18198AFC0")]
	private void CheckWriteArguments(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6001883")]
	[Address(RVA = "0x198BDC0", Offset = "0x198A3C0", VA = "0x18198BDC0")]
	[AsyncStateMachine(typeof(_003CWriteAsyncCore_003Ed__49))]
	private Task WriteAsyncCore(byte[] buffer, int offset, int count, CancellationToken cancellationToken, bool useAsync)
	{
		return null;
	}

	[Token(Token = "0x6001884")]
	[Address(RVA = "0x198B170", Offset = "0x1989770", VA = "0x18198B170")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001885")]
	[Address(RVA = "0x198B190", Offset = "0x1989790", VA = "0x18198B190", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001886")]
	[Address(RVA = "0x198B640", Offset = "0x1989C40", VA = "0x18198B640")]
	private void InitializeBuffer()
	{
	}
}
