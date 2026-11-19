// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.DeflateManagedStream
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000015")]
internal sealed class DeflateManagedStream : Stream
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000016")]
	[CompilerGenerated]
	private struct _003CReadAsyncCore_003Ed__40 : IAsyncStateMachine
	{
		[Token(Token = "0x4000046")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000047")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000048")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task<int> readTask;

		[Token(Token = "0x4000049")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public DeflateManagedStream _003C_003E4__this;

		[Token(Token = "0x400004A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400004B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public byte[] array;

		[Token(Token = "0x400004C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public int offset;

		[Token(Token = "0x400004D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		public int count;

		[Token(Token = "0x400004E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000081")]
		[Address(RVA = "0x5F66190", Offset = "0x5F65190", VA = "0x5F66190", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000082")]
		[Address(RVA = "0x5F66710", Offset = "0x5F65710", VA = "0x5F66710", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000017")]
	[CompilerGenerated]
	private struct _003CWriteAsyncCore_003Ed__47 : IAsyncStateMachine
	{
		[Token(Token = "0x400004F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000050")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000051")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DeflateManagedStream _003C_003E4__this;

		[Token(Token = "0x4000052")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] array;

		[Token(Token = "0x4000053")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int offset;

		[Token(Token = "0x4000054")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int count;

		[Token(Token = "0x4000055")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000056")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000083")]
		[Address(RVA = "0x5F66780", Offset = "0x5F65780", VA = "0x5F66780", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000084")]
		[Address(RVA = "0x5F66AB0", Offset = "0x5F65AB0", VA = "0x5F66AB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x400003C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Stream _stream;

	[Token(Token = "0x400003D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private CompressionMode _mode;

	[Token(Token = "0x400003E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private bool _leaveOpen;

	[Token(Token = "0x400003F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private InflaterManaged _inflater;

	[Token(Token = "0x4000040")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private DeflaterManaged _deflater;

	[Token(Token = "0x4000041")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private byte[] _buffer;

	[Token(Token = "0x4000042")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private int _asyncOperations;

	[Token(Token = "0x4000043")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private IFileFormatWriter _formatWriter;

	[Token(Token = "0x4000044")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool _wroteHeader;

	[Token(Token = "0x4000045")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool _wroteBytes;

	[Token(Token = "0x1700000E")]
	public override bool CanRead
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x5F64570", Offset = "0x5F63570", VA = "0x5F64570", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000F")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x5F645A0", Offset = "0x5F635A0", VA = "0x5F645A0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x5F645D0", Offset = "0x5F635D0", VA = "0x5F645D0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public override long Length
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x5F645E0", Offset = "0x5F635E0", VA = "0x5F645E0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000012")]
	public override long Position
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x5F64630", Offset = "0x5F63630", VA = "0x5F64630", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x5F64680", Offset = "0x5F63680", VA = "0x5F64680", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x5F64140", Offset = "0x5F63140", VA = "0x5F64140")]
	internal DeflateManagedStream(Stream stream, ZipArchiveEntry.CompressionMethodValues method)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x5F64270", Offset = "0x5F63270", VA = "0x5F64270")]
	internal void InitializeInflater(Stream stream, bool leaveOpen, [Optional] IFileFormatReader reader, ZipArchiveEntry.CompressionMethodValues method = ZipArchiveEntry.CompressionMethodValues.Deflate)
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x5F646D0", Offset = "0x5F636D0", VA = "0x5F646D0", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x5F646F0", Offset = "0x5F636F0", VA = "0x5F646F0", Slot = "22")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x5F64800", Offset = "0x5F63800", VA = "0x5F64800", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x5F64850", Offset = "0x5F63850", VA = "0x5F64850", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x5F648A0", Offset = "0x5F638A0", VA = "0x5F648A0", Slot = "33")]
	public override int Read(byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x5F64A20", Offset = "0x5F63A20", VA = "0x5F64A20")]
	private void ValidateParameters(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x5F646E0", Offset = "0x5F636E0", VA = "0x5F646E0")]
	private void EnsureNotDisposed()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600006E")]
	[Address(RVA = "0x5F64DE0", Offset = "0x5F63DE0", VA = "0x5F64DE0")]
	private static void ThrowStreamClosedException()
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x5F64A10", Offset = "0x5F63A10", VA = "0x5F64A10")]
	private void EnsureDecompressionMode()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000070")]
	[Address(RVA = "0x5F64E30", Offset = "0x5F63E30", VA = "0x5F64E30")]
	private static void ThrowCannotReadFromDeflateManagedStreamException()
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x5F64E80", Offset = "0x5F63E80", VA = "0x5F64E80")]
	private void EnsureCompressionMode()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000072")]
	[Address(RVA = "0x5F64E90", Offset = "0x5F63E90", VA = "0x5F64E90")]
	private static void ThrowCannotWriteToDeflateManagedStreamException()
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x5F64EE0", Offset = "0x5F63EE0", VA = "0x5F64EE0", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x5F64F80", Offset = "0x5F63F80", VA = "0x5F64F80", Slot = "24")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x5F64FC0", Offset = "0x5F63FC0", VA = "0x5F64FC0", Slot = "25")]
	public override Task<int> ReadAsync(byte[] array, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x5F65340", Offset = "0x5F64340", VA = "0x5F65340")]
	[AsyncStateMachine(typeof(_003CReadAsyncCore_003Ed__40))]
	private Task<int> ReadAsyncCore(Task<int> readTask, byte[] array, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x5F654C0", Offset = "0x5F644C0", VA = "0x5F654C0", Slot = "36")]
	public override void Write(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x5F65720", Offset = "0x5F64720", VA = "0x5F65720")]
	private void WriteDeflaterOutput()
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x5F65590", Offset = "0x5F64590", VA = "0x5F65590")]
	private void DoMaintenance(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x5F65B80", Offset = "0x5F64B80", VA = "0x5F65B80")]
	private void PurgeBuffers(bool disposing)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x5F65D90", Offset = "0x5F64D90", VA = "0x5F65D90", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x5F65E60", Offset = "0x5F64E60", VA = "0x5F65E60", Slot = "29")]
	public override Task WriteAsync(byte[] array, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x5F65FB0", Offset = "0x5F64FB0", VA = "0x5F65FB0")]
	[AsyncStateMachine(typeof(_003CWriteAsyncCore_003Ed__47))]
	private Task WriteAsyncCore(byte[] array, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x5F660D0", Offset = "0x5F650D0", VA = "0x5F660D0", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x5F66170", Offset = "0x5F65170", VA = "0x5F66170", Slot = "28")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}
}
