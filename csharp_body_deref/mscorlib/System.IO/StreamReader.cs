// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.StreamReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000670")]
public class StreamReader : TextReader
{
	[Token(Token = "0x2000671")]
	private class NullStreamReader : StreamReader
	{
		[Token(Token = "0x170007F1")]
		public override Stream BaseStream
		{
			[Token(Token = "0x6003141")]
			[Address(RVA = "0x1AD8770", Offset = "0x1AD6D70", VA = "0x181AD8770", Slot = "18")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007F2")]
		public override Encoding CurrentEncoding
		{
			[Token(Token = "0x6003142")]
			[Address(RVA = "0x1AD87C0", Offset = "0x1AD6DC0", VA = "0x181AD87C0", Slot = "17")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003140")]
		[Address(RVA = "0x1AD8630", Offset = "0x1AD6C30", VA = "0x181AD8630")]
		internal NullStreamReader()
		{
		}

		[Token(Token = "0x6003143")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
		protected override void Dispose(bool disposing)
		{
		}

		[Token(Token = "0x6003144")]
		[Address(RVA = "0x1A5F1E0", Offset = "0x1A5D7E0", VA = "0x181A5F1E0", Slot = "9")]
		public override int Peek()
		{
			return default(int);
		}

		[Token(Token = "0x6003145")]
		[Address(RVA = "0x1A5F1E0", Offset = "0x1A5D7E0", VA = "0x181A5F1E0", Slot = "10")]
		public override int Read()
		{
			return default(int);
		}

		[Token(Token = "0x6003146")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "11")]
		public override int Read(char[] buffer, int index, int count)
		{
			return default(int);
		}

		[Token(Token = "0x6003147")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "14")]
		public override string ReadLine()
		{
			return null;
		}

		[Token(Token = "0x6003148")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "13")]
		public override string ReadToEnd()
		{
			return null;
		}

		[Token(Token = "0x6003149")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "19")]
		internal override int ReadBuffer()
		{
			return default(int);
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000672")]
	[CompilerGenerated]
	private struct _003CReadAsyncInternal_003Ed__66 : IAsyncStateMachine
	{
		[Token(Token = "0x40019D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40019D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncValueTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x40019D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public StreamReader _003C_003E4__this;

		[Token(Token = "0x40019D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Memory<char> buffer;

		[Token(Token = "0x40019D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40019D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003CcharsRead_003E5__2;

		[Token(Token = "0x40019D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private bool _003CreadToUserBuffer_003E5__3;

		[Token(Token = "0x40019D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private byte[] _003CtmpByteBuffer_003E5__4;

		[Token(Token = "0x40019DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private Stream _003CtmpStream_003E5__5;

		[Token(Token = "0x40019DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private int _003Ccount_003E5__6;

		[Token(Token = "0x40019DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40019DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private int _003Cn_003E5__7;

		[Token(Token = "0x40019DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600314A")]
		[Address(RVA = "0x1AE09F0", Offset = "0x1ADEFF0", VA = "0x181AE09F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600314B")]
		[Address(RVA = "0x1AE1B70", Offset = "0x1AE0170", VA = "0x181AE1B70", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000673")]
	[CompilerGenerated]
	private struct _003CReadBufferAsync_003Ed__69 : IAsyncStateMachine
	{
		[Token(Token = "0x40019DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40019E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x40019E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public StreamReader _003C_003E4__this;

		[Token(Token = "0x40019E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private byte[] _003CtmpByteBuffer_003E5__2;

		[Token(Token = "0x40019E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Stream _003CtmpStream_003E5__3;

		[Token(Token = "0x40019E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600314C")]
		[Address(RVA = "0x1AE1BC0", Offset = "0x1AE01C0", VA = "0x181AE1BC0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600314D")]
		[Address(RVA = "0x1AE29B0", Offset = "0x1AE0FB0", VA = "0x181AE29B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40019C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly StreamReader Null;

	[Token(Token = "0x40019C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Stream _stream;

	[Token(Token = "0x40019C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Encoding _encoding;

	[Token(Token = "0x40019C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Decoder _decoder;

	[Token(Token = "0x40019C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private byte[] _byteBuffer;

	[Token(Token = "0x40019C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private char[] _charBuffer;

	[Token(Token = "0x40019C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int _charPos;

	[Token(Token = "0x40019C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private int _charLen;

	[Token(Token = "0x40019CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _byteLen;

	[Token(Token = "0x40019CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int _bytePos;

	[Token(Token = "0x40019CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private int _maxCharsPerBuffer;

	[Token(Token = "0x40019CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private bool _detectEncoding;

	[Token(Token = "0x40019CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
	private bool _checkPreamble;

	[Token(Token = "0x40019CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x56")]
	private bool _isBlocked;

	[Token(Token = "0x40019D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x57")]
	private bool _closable;

	[Token(Token = "0x40019D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Task _asyncReadTask;

	[Token(Token = "0x170007EE")]
	public virtual Encoding CurrentEncoding
	{
		[Token(Token = "0x600312C")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007EF")]
	public virtual Stream BaseStream
	{
		[Token(Token = "0x600312D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007F0")]
	internal bool LeaveOpen
	{
		[Token(Token = "0x600312E")]
		[Address(RVA = "0x1ADD400", Offset = "0x1ADBA00", VA = "0x181ADD400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600311C")]
	[Address(RVA = "0x1ADA7C0", Offset = "0x1AD8DC0", VA = "0x181ADA7C0")]
	private void CheckAsyncTaskInProgress()
	{
	}

	[Token(Token = "0x600311D")]
	[Address(RVA = "0x1ADCA80", Offset = "0x1ADB080", VA = "0x181ADCA80")]
	private static void ThrowAsyncIOInProgress()
	{
	}

	[Token(Token = "0x600311E")]
	[Address(RVA = "0x1ADCD40", Offset = "0x1ADB340", VA = "0x181ADCD40")]
	internal StreamReader()
	{
	}

	[Token(Token = "0x600311F")]
	[Address(RVA = "0x1ADD360", Offset = "0x1ADB960", VA = "0x181ADD360")]
	public StreamReader(Stream stream)
	{
	}

	[Token(Token = "0x6003120")]
	[Address(RVA = "0x1ADCE00", Offset = "0x1ADB400", VA = "0x181ADCE00")]
	public StreamReader(Stream stream, bool detectEncodingFromByteOrderMarks)
	{
	}

	[Token(Token = "0x6003121")]
	[Address(RVA = "0x1ADCD10", Offset = "0x1ADB310", VA = "0x181ADCD10")]
	public StreamReader(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6003122")]
	[Address(RVA = "0x1ADD3D0", Offset = "0x1ADB9D0", VA = "0x181ADD3D0")]
	public StreamReader(Stream stream, Encoding encoding, bool detectEncodingFromByteOrderMarks)
	{
	}

	[Token(Token = "0x6003123")]
	[Address(RVA = "0x1ADCE60", Offset = "0x1ADB460", VA = "0x181ADCE60")]
	public StreamReader(Stream stream, Encoding encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen)
	{
	}

	[Token(Token = "0x6003124")]
	[Address(RVA = "0x1ADCC60", Offset = "0x1ADB260", VA = "0x181ADCC60")]
	public StreamReader(string path)
	{
	}

	[Token(Token = "0x6003125")]
	[Address(RVA = "0x1ADCCB0", Offset = "0x1ADB2B0", VA = "0x181ADCCB0")]
	public StreamReader(string path, bool detectEncodingFromByteOrderMarks)
	{
	}

	[Token(Token = "0x6003126")]
	[Address(RVA = "0x1ADD3B0", Offset = "0x1ADB9B0", VA = "0x181ADD3B0")]
	public StreamReader(string path, Encoding encoding, bool detectEncodingFromByteOrderMarks)
	{
	}

	[Token(Token = "0x6003127")]
	[Address(RVA = "0x1ADD090", Offset = "0x1ADB690", VA = "0x181ADD090")]
	public StreamReader(string path, Encoding encoding, bool detectEncodingFromByteOrderMarks, int bufferSize)
	{
	}

	[Token(Token = "0x6003128")]
	[Address(RVA = "0x1ADAC00", Offset = "0x1AD9200", VA = "0x181ADAC00")]
	private void Init(Stream stream, Encoding encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen)
	{
	}

	[Token(Token = "0x6003129")]
	[Address(RVA = "0x1ADABE0", Offset = "0x1AD91E0", VA = "0x181ADABE0")]
	internal void Init(Stream stream)
	{
	}

	[Token(Token = "0x600312A")]
	[Address(RVA = "0x19E9D70", Offset = "0x19E8370", VA = "0x1819E9D70", Slot = "7")]
	public override void Close()
	{
	}

	[Token(Token = "0x600312B")]
	[Address(RVA = "0x1ADAB60", Offset = "0x1AD9160", VA = "0x181ADAB60", Slot = "8")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600312F")]
	[Address(RVA = "0x1ADAE70", Offset = "0x1AD9470", VA = "0x181ADAE70", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x6003130")]
	[Address(RVA = "0x1ADC7B0", Offset = "0x1ADADB0", VA = "0x181ADC7B0", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x6003131")]
	[Address(RVA = "0x1ADC8C0", Offset = "0x1ADAEC0", VA = "0x181ADC8C0", Slot = "11")]
	public override int Read(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003132")]
	[Address(RVA = "0x1ADC710", Offset = "0x1ADAD10", VA = "0x181ADC710", Slot = "12")]
	public override int Read(Span<char> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6003133")]
	[Address(RVA = "0x1ADC2B0", Offset = "0x1ADA8B0", VA = "0x181ADC2B0")]
	private int ReadSpan(Span<char> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6003134")]
	[Address(RVA = "0x1ADC5A0", Offset = "0x1ADABA0", VA = "0x181ADC5A0", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}

	[Token(Token = "0x6003135")]
	[Address(RVA = "0x1ADA820", Offset = "0x1AD8E20", VA = "0x181ADA820")]
	private void CompressBuffer(int n)
	{
	}

	[Token(Token = "0x6003136")]
	[Address(RVA = "0x1ADA870", Offset = "0x1AD8E70", VA = "0x181ADA870")]
	private void DetectEncoding()
	{
	}

	[Token(Token = "0x6003137")]
	[Address(RVA = "0x1ADAD50", Offset = "0x1AD9350", VA = "0x181ADAD50")]
	private bool IsPreamble()
	{
		return default(bool);
	}

	[Token(Token = "0x6003138")]
	[Address(RVA = "0x1ADB530", Offset = "0x1AD9B30", VA = "0x181ADB530", Slot = "19")]
	internal virtual int ReadBuffer()
	{
		return default(int);
	}

	[Token(Token = "0x6003139")]
	[Address(RVA = "0x1ADB9C0", Offset = "0x1AD9FC0", VA = "0x181ADB9C0")]
	private int ReadBuffer(Span<char> userBuffer, out bool readToUserBuffer)
	{
		return default(int);
	}

	[Token(Token = "0x600313A")]
	[Address(RVA = "0x1ADC030", Offset = "0x1ADA630", VA = "0x181ADC030", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x600313B")]
	[Address(RVA = "0x1ADB100", Offset = "0x1AD9700", VA = "0x181ADB100", Slot = "15")]
	public override Task<int> ReadAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x600313C")]
	[Address(RVA = "0x1ADAF80", Offset = "0x1AD9580", VA = "0x181ADAF80", Slot = "16")]
	[AsyncStateMachine(typeof(_003CReadAsyncInternal_003Ed__66))]
	internal override ValueTask<int> ReadAsyncInternal(Memory<char> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x600313D")]
	[Address(RVA = "0x1ADB420", Offset = "0x1AD9A20", VA = "0x181ADB420")]
	[AsyncStateMachine(typeof(_003CReadBufferAsync_003Ed__69))]
	private Task<int> ReadBufferAsync()
	{
		return null;
	}

	[Token(Token = "0x600313E")]
	[Address(RVA = "0x1ADA860", Offset = "0x1AD8E60", VA = "0x181ADA860")]
	internal bool DataAvailable()
	{
		return default(bool);
	}
}
