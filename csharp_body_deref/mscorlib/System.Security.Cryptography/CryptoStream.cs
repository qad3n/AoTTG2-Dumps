using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002BA")]
public class CryptoStream : Stream, IDisposable
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20002BB")]
	[CompilerGenerated]
	private struct _003CReadAsyncInternal_003Ed__37 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C84")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C85")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000C86")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CryptoStream _003C_003E4__this;

		[Token(Token = "0x4000C87")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] buffer;

		[Token(Token = "0x4000C88")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int offset;

		[Token(Token = "0x4000C89")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int count;

		[Token(Token = "0x4000C8A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C8B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private SemaphoreSlim _003Csemaphore_003E5__2;

		[Token(Token = "0x4000C8C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private System.Threading.Tasks.ForceAsyncAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000C8D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private TaskAwaiter<int> _003C_003Eu__2;

		[Token(Token = "0x6001820")]
		[Address(RVA = "0x4E40A30", Offset = "0x4E40A30", VA = "0x4E40A30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001821")]
		[Address(RVA = "0x4E40F10", Offset = "0x4E40F10", VA = "0x4E40F10", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20002BC")]
	[CompilerGenerated]
	private struct _003CReadAsyncCore_003Ed__42 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C8E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C8F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000C90")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int count;

		[Token(Token = "0x4000C91")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public int offset;

		[Token(Token = "0x4000C92")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CryptoStream _003C_003E4__this;

		[Token(Token = "0x4000C93")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public byte[] buffer;

		[Token(Token = "0x4000C94")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool useAsync;

		[Token(Token = "0x4000C95")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C96")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003CbytesToDeliver_003E5__2;

		[Token(Token = "0x4000C97")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private int _003CcurrentOutputIndex_003E5__3;

		[Token(Token = "0x4000C98")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private int _003CnumWholeBlocksInBytes_003E5__4;

		[Token(Token = "0x4000C99")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private byte[] _003CtempInputBuffer_003E5__5;

		[Token(Token = "0x4000C9A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private byte[] _003CtempOutputBuffer_003E5__6;

		[Token(Token = "0x4000C9B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ValueTaskAwaiter<int> _003C_003Eu__1;

		[Token(Token = "0x6001822")]
		[Address(RVA = "0x4E40F80", Offset = "0x4E40F80", VA = "0x4E40F80", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001823")]
		[Address(RVA = "0x4E42370", Offset = "0x4E42370", VA = "0x4E42370", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20002BD")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInternal_003Ed__46 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C9C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C9D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000C9E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CryptoStream _003C_003E4__this;

		[Token(Token = "0x4000C9F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] buffer;

		[Token(Token = "0x4000CA0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int offset;

		[Token(Token = "0x4000CA1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int count;

		[Token(Token = "0x4000CA2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CA3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private SemaphoreSlim _003Csemaphore_003E5__2;

		[Token(Token = "0x4000CA4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private System.Threading.Tasks.ForceAsyncAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000CA5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001824")]
		[Address(RVA = "0x4E423E0", Offset = "0x4E423E0", VA = "0x4E423E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001825")]
		[Address(RVA = "0x4E42850", Offset = "0x4E42850", VA = "0x4E42850", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20002BE")]
	[CompilerGenerated]
	private struct _003CWriteAsyncCore_003Ed__49 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CA6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CA7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000CA8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int count;

		[Token(Token = "0x4000CA9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public int offset;

		[Token(Token = "0x4000CAA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CryptoStream _003C_003E4__this;

		[Token(Token = "0x4000CAB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public byte[] buffer;

		[Token(Token = "0x4000CAC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool useAsync;

		[Token(Token = "0x4000CAD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CAE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003CbytesToWrite_003E5__2;

		[Token(Token = "0x4000CAF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private int _003CcurrentInputIndex_003E5__3;

		[Token(Token = "0x4000CB0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private int _003CnumOutputBytes_003E5__4;

		[Token(Token = "0x4000CB1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000CB2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private int _003CnumWholeBlocksInBytes_003E5__5;

		[Token(Token = "0x4000CB3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private byte[] _003CtempOutputBuffer_003E5__6;

		[Token(Token = "0x6001826")]
		[Address(RVA = "0x4E428B0", Offset = "0x4E428B0", VA = "0x4E428B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001827")]
		[Address(RVA = "0x4E43ED0", Offset = "0x4E43ED0", VA = "0x4E43ED0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000C76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Stream _stream;

	[Token(Token = "0x4000C77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly ICryptoTransform _transform;

	[Token(Token = "0x4000C78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly CryptoStreamMode _transformMode;

	[Token(Token = "0x4000C79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private byte[] _inputBuffer;

	[Token(Token = "0x4000C7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _inputBufferIndex;

	[Token(Token = "0x4000C7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int _inputBlockSize;

	[Token(Token = "0x4000C7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private byte[] _outputBuffer;

	[Token(Token = "0x4000C7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int _outputBufferIndex;

	[Token(Token = "0x4000C7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int _outputBlockSize;

	[Token(Token = "0x4000C7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool _canRead;

	[Token(Token = "0x4000C80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool _canWrite;

	[Token(Token = "0x4000C81")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x62")]
	private bool _finalBlockTransformed;

	[Token(Token = "0x4000C82")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private SemaphoreSlim _lazyAsyncActiveSemaphore;

	[Token(Token = "0x4000C83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly bool _leaveOpen;

	[Token(Token = "0x17000271")]
	public override bool CanRead
	{
		[Token(Token = "0x6001800")]
		[Address(RVA = "0x4E3F570", Offset = "0x4E3F570", VA = "0x4E3F570", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000272")]
	public override bool CanSeek
	{
		[Token(Token = "0x6001801")]
		[Address(RVA = "0x4E3F580", Offset = "0x4E3F580", VA = "0x4E3F580", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000273")]
	public override bool CanWrite
	{
		[Token(Token = "0x6001802")]
		[Address(RVA = "0x4E3F590", Offset = "0x4E3F590", VA = "0x4E3F590", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000274")]
	public override long Length
	{
		[Token(Token = "0x6001803")]
		[Address(RVA = "0x4E3F5A0", Offset = "0x4E3F5A0", VA = "0x4E3F5A0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000275")]
	public override long Position
	{
		[Token(Token = "0x6001804")]
		[Address(RVA = "0x4E3F5F0", Offset = "0x4E3F5F0", VA = "0x4E3F5F0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6001805")]
		[Address(RVA = "0x4E3F640", Offset = "0x4E3F640", VA = "0x4E3F640", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000276")]
	public bool HasFlushedFinalBlock
	{
		[Token(Token = "0x6001806")]
		[Address(RVA = "0x4E3F690", Offset = "0x4E3F690", VA = "0x4E3F690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000277")]
	private SemaphoreSlim AsyncActiveSemaphore
	{
		[Token(Token = "0x600181F")]
		[Address(RVA = "0x4E407A0", Offset = "0x4E407A0", VA = "0x4E407A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x4E3F1E0", Offset = "0x4E3F1E0", VA = "0x4E3F1E0")]
	public CryptoStream(Stream stream, ICryptoTransform transform, CryptoStreamMode mode)
	{
	}

	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x4E3F1F0", Offset = "0x4E3F1F0", VA = "0x4E3F1F0")]
	public CryptoStream(Stream stream, ICryptoTransform transform, CryptoStreamMode mode, bool leaveOpen)
	{
	}

	[Token(Token = "0x6001807")]
	[Address(RVA = "0x4E3F6A0", Offset = "0x4E3F6A0", VA = "0x4E3F6A0")]
	public void FlushFinalBlock()
	{
	}

	[Token(Token = "0x6001808")]
	[Address(RVA = "0x4E3F8D0", Offset = "0x4E3F8D0", VA = "0x4E3F8D0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6001809")]
	[Address(RVA = "0x4E3F8E0", Offset = "0x4E3F8E0", VA = "0x4E3F8E0", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600180A")]
	[Address(RVA = "0x4E3FA50", Offset = "0x4E3FA50", VA = "0x4E3FA50", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x600180B")]
	[Address(RVA = "0x4E3FAA0", Offset = "0x4E3FAA0", VA = "0x4E3FAA0", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x600180C")]
	[Address(RVA = "0x4E3FAF0", Offset = "0x4E3FAF0", VA = "0x4E3FAF0", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600180D")]
	[Address(RVA = "0x4E3FDC0", Offset = "0x4E3FDC0", VA = "0x4E3FDC0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600180E")]
	[Address(RVA = "0x4E3FE60", Offset = "0x4E3FE60", VA = "0x4E3FE60", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x600180F")]
	[Address(RVA = "0x4E3FC60", Offset = "0x4E3FC60", VA = "0x4E3FC60")]
	[AsyncStateMachine(typeof(_003CReadAsyncInternal_003Ed__37))]
	private Task<int> ReadAsyncInternal(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001810")]
	[Address(RVA = "0x4E3FEA0", Offset = "0x4E3FEA0", VA = "0x4E3FEA0", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6001811")]
	[Address(RVA = "0x4E3FF00", Offset = "0x4E3FF00", VA = "0x4E3FF00", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6001812")]
	[Address(RVA = "0x4E3FF40", Offset = "0x4E3FF40", VA = "0x4E3FF40", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001813")]
	[Address(RVA = "0x4E3FB30", Offset = "0x4E3FB30", VA = "0x4E3FB30")]
	private void CheckReadArguments(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6001814")]
	[Address(RVA = "0x4E3FFF0", Offset = "0x4E3FFF0", VA = "0x4E3FFF0")]
	[AsyncStateMachine(typeof(_003CReadAsyncCore_003Ed__42))]
	private Task<int> ReadAsyncCore(byte[] buffer, int offset, int count, CancellationToken cancellationToken, bool useAsync)
	{
		return null;
	}

	[Token(Token = "0x6001815")]
	[Address(RVA = "0x4E40180", Offset = "0x4E40180", VA = "0x4E40180", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001816")]
	[Address(RVA = "0x4E40430", Offset = "0x4E40430", VA = "0x4E40430", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001817")]
	[Address(RVA = "0x4E404D0", Offset = "0x4E404D0", VA = "0x4E404D0", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001818")]
	[Address(RVA = "0x4E402F0", Offset = "0x4E402F0", VA = "0x4E402F0")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__46))]
	private Task WriteAsyncInternal(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001819")]
	[Address(RVA = "0x4E404E0", Offset = "0x4E404E0", VA = "0x4E404E0", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x600181A")]
	[Address(RVA = "0x4E401C0", Offset = "0x4E401C0", VA = "0x4E401C0")]
	private void CheckWriteArguments(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x600181B")]
	[Address(RVA = "0x4E40550", Offset = "0x4E40550", VA = "0x4E40550")]
	[AsyncStateMachine(typeof(_003CWriteAsyncCore_003Ed__49))]
	private Task WriteAsyncCore(byte[] buffer, int offset, int count, CancellationToken cancellationToken, bool useAsync)
	{
		return null;
	}

	[Token(Token = "0x600181C")]
	[Address(RVA = "0x4E406C0", Offset = "0x4E406C0", VA = "0x4E406C0")]
	public void Clear()
	{
	}

	[Token(Token = "0x600181D")]
	[Address(RVA = "0x4E406E0", Offset = "0x4E406E0", VA = "0x4E406E0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600181E")]
	[Address(RVA = "0x4E3F3E0", Offset = "0x4E3F3E0", VA = "0x4E3F3E0")]
	private void InitializeBuffer()
	{
	}
}
