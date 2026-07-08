using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x200054B")]
public class StreamWriter : TextWriter
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200054C")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInternal_003Ed__57 : IAsyncStateMachine
	{
		[Token(Token = "0x4001610")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001611")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001612")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int charPos;

		[Token(Token = "0x4001613")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public int charLen;

		[Token(Token = "0x4001614")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public StreamWriter _this;

		[Token(Token = "0x4001615")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public char[] charBuffer;

		[Token(Token = "0x4001616")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public char value;

		[Token(Token = "0x4001617")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
		public bool appendNewLine;

		[Token(Token = "0x4001618")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public char[] coreNewLine;

		[Token(Token = "0x4001619")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public bool autoFlush;

		[Token(Token = "0x400161A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400161B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x600289E")]
		[Address(RVA = "0x4F10F40", Offset = "0x4F10F40", VA = "0x4F10F40", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600289F")]
		[Address(RVA = "0x4F11580", Offset = "0x4F11580", VA = "0x4F11580", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200054D")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInternal_003Ed__59 : IAsyncStateMachine
	{
		[Token(Token = "0x400161C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400161D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400161E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string value;

		[Token(Token = "0x400161F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int charPos;

		[Token(Token = "0x4001620")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public int charLen;

		[Token(Token = "0x4001621")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public StreamWriter _this;

		[Token(Token = "0x4001622")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public char[] charBuffer;

		[Token(Token = "0x4001623")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool appendNewLine;

		[Token(Token = "0x4001624")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public char[] coreNewLine;

		[Token(Token = "0x4001625")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public bool autoFlush;

		[Token(Token = "0x4001626")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		private int _003Ccount_003E5__2;

		[Token(Token = "0x4001627")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private int _003Cindex_003E5__3;

		[Token(Token = "0x4001628")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4001629")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private int _003Ci_003E5__4;

		[Token(Token = "0x60028A0")]
		[Address(RVA = "0x4F115E0", Offset = "0x4F115E0", VA = "0x4F115E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60028A1")]
		[Address(RVA = "0x4F11C90", Offset = "0x4F11C90", VA = "0x4F11C90", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200054E")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInternal_003Ed__62 : IAsyncStateMachine
	{
		[Token(Token = "0x400162A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400162B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400162C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int charPos;

		[Token(Token = "0x400162D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public int charLen;

		[Token(Token = "0x400162E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public StreamWriter _this;

		[Token(Token = "0x400162F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public char[] charBuffer;

		[Token(Token = "0x4001630")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4001631")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public ReadOnlyMemory<char> source;

		[Token(Token = "0x4001632")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public bool appendNewLine;

		[Token(Token = "0x4001633")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public char[] coreNewLine;

		[Token(Token = "0x4001634")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public bool autoFlush;

		[Token(Token = "0x4001635")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		private int _003Ccopied_003E5__2;

		[Token(Token = "0x4001636")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4001637")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x60028A2")]
		[Address(RVA = "0x4F11CF0", Offset = "0x4F11CF0", VA = "0x4F11CF0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60028A3")]
		[Address(RVA = "0x4F12520", Offset = "0x4F12520", VA = "0x4F12520", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200054F")]
	[CompilerGenerated]
	private struct _003CFlushAsyncInternal_003Ed__74 : IAsyncStateMachine
	{
		[Token(Token = "0x4001638")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001639")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400163A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool haveWrittenPreamble;

		[Token(Token = "0x400163B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public StreamWriter _this;

		[Token(Token = "0x400163C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Encoding encoding;

		[Token(Token = "0x400163D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Stream stream;

		[Token(Token = "0x400163E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400163F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Encoder encoder;

		[Token(Token = "0x4001640")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public char[] charBuffer;

		[Token(Token = "0x4001641")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public int charPos;

		[Token(Token = "0x4001642")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public byte[] byteBuffer;

		[Token(Token = "0x4001643")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public bool flushEncoder;

		[Token(Token = "0x4001644")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x69")]
		public bool flushStream;

		[Token(Token = "0x4001645")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4001646")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x60028A4")]
		[Address(RVA = "0x4F12580", Offset = "0x4F12580", VA = "0x4F12580", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60028A5")]
		[Address(RVA = "0x4F13230", Offset = "0x4F13230", VA = "0x4F13230", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4001604")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly StreamWriter Null;

	[Token(Token = "0x4001605")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Stream _stream;

	[Token(Token = "0x4001606")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Encoding _encoding;

	[Token(Token = "0x4001607")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Encoder _encoder;

	[Token(Token = "0x4001608")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private byte[] _byteBuffer;

	[Token(Token = "0x4001609")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private char[] _charBuffer;

	[Token(Token = "0x400160A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int _charPos;

	[Token(Token = "0x400160B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int _charLen;

	[Token(Token = "0x400160C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool _autoFlush;

	[Token(Token = "0x400160D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool _haveWrittenPreamble;

	[Token(Token = "0x400160E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x62")]
	private bool _closable;

	[Token(Token = "0x400160F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Task _asyncWriteTask;

	[Token(Token = "0x170005DC")]
	private static Encoding UTF8NoBOM
	{
		[Token(Token = "0x600287B")]
		[Address(RVA = "0x4F0DAB0", Offset = "0x4F0DAB0", VA = "0x4F0DAB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DD")]
	public virtual bool AutoFlush
	{
		[Token(Token = "0x6002888")]
		[Address(RVA = "0x4F0E960", Offset = "0x4F0E960", VA = "0x4F0E960", Slot = "26")]
		set
		{
		}
	}

	[Token(Token = "0x170005DE")]
	public virtual Stream BaseStream
	{
		[Token(Token = "0x6002889")]
		[Address(RVA = "0x4F0E9E0", Offset = "0x4F0E9E0", VA = "0x4F0E9E0", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DF")]
	internal bool LeaveOpen
	{
		[Token(Token = "0x600288A")]
		[Address(RVA = "0x4F0E9F0", Offset = "0x4F0E9F0", VA = "0x4F0E9F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005E0")]
	public override Encoding Encoding
	{
		[Token(Token = "0x600288B")]
		[Address(RVA = "0x4F0EA00", Offset = "0x4F0EA00", VA = "0x4F0EA00", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E1")]
	private int CharPos_Prop
	{
		[Token(Token = "0x6002899")]
		[Address(RVA = "0x4F10C00", Offset = "0x4F10C00", VA = "0x4F10C00")]
		set
		{
		}
	}

	[Token(Token = "0x170005E2")]
	private bool HaveWrittenPreamble_Prop
	{
		[Token(Token = "0x600289A")]
		[Address(RVA = "0x4F10C10", Offset = "0x4F10C10", VA = "0x4F10C10")]
		set
		{
		}
	}

	[Token(Token = "0x6002879")]
	[Address(RVA = "0x4F0DA10", Offset = "0x4F0DA10", VA = "0x4F0DA10")]
	private void CheckAsyncTaskInProgress()
	{
	}

	[Token(Token = "0x600287A")]
	[Address(RVA = "0x4F0DA60", Offset = "0x4F0DA60", VA = "0x4F0DA60")]
	private static void ThrowAsyncIOInProgress()
	{
	}

	[Token(Token = "0x600287C")]
	[Address(RVA = "0x4F0DB10", Offset = "0x4F0DB10", VA = "0x4F0DB10")]
	internal StreamWriter()
	{
	}

	[Token(Token = "0x600287D")]
	[Address(RVA = "0x4F0DCB0", Offset = "0x4F0DCB0", VA = "0x4F0DCB0")]
	public StreamWriter(Stream stream)
	{
	}

	[Token(Token = "0x600287E")]
	[Address(RVA = "0x4F0DFF0", Offset = "0x4F0DFF0", VA = "0x4F0DFF0")]
	public StreamWriter(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x600287F")]
	[Address(RVA = "0x4F0DD80", Offset = "0x4F0DD80", VA = "0x4F0DD80")]
	public StreamWriter(Stream stream, Encoding encoding, int bufferSize, bool leaveOpen)
	{
	}

	[Token(Token = "0x6002880")]
	[Address(RVA = "0x4F0E160", Offset = "0x4F0E160", VA = "0x4F0E160")]
	public StreamWriter(string path)
	{
	}

	[Token(Token = "0x6002881")]
	[Address(RVA = "0x4F0E4C0", Offset = "0x4F0E4C0", VA = "0x4F0E4C0")]
	public StreamWriter(string path, bool append)
	{
	}

	[Token(Token = "0x6002882")]
	[Address(RVA = "0x4F0E230", Offset = "0x4F0E230", VA = "0x4F0E230")]
	public StreamWriter(string path, bool append, Encoding encoding, int bufferSize)
	{
	}

	[Token(Token = "0x6002883")]
	[Address(RVA = "0x4F0E000", Offset = "0x4F0E000", VA = "0x4F0E000")]
	private void Init(Stream streamArg, Encoding encodingArg, int bufferSize, bool shouldLeaveOpen)
	{
	}

	[Token(Token = "0x6002884")]
	[Address(RVA = "0x4F0E630", Offset = "0x4F0E630", VA = "0x4F0E630", Slot = "8")]
	public override void Close()
	{
	}

	[Token(Token = "0x6002885")]
	[Address(RVA = "0x4F0E6A0", Offset = "0x4F0E6A0", VA = "0x4F0E6A0", Slot = "9")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002886")]
	[Address(RVA = "0x4F0E900", Offset = "0x4F0E900", VA = "0x4F0E900", Slot = "10")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6002887")]
	[Address(RVA = "0x4F0E790", Offset = "0x4F0E790", VA = "0x4F0E790")]
	private void Flush(bool flushStream, bool flushEncoder)
	{
	}

	[Token(Token = "0x600288C")]
	[Address(RVA = "0x4F0EA10", Offset = "0x4F0EA10", VA = "0x4F0EA10", Slot = "13")]
	public override void Write(char value)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600288D")]
	[Address(RVA = "0x4F0EAC0", Offset = "0x4F0EAC0", VA = "0x4F0EAC0", Slot = "14")]
	public override void Write(char[] buffer)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600288E")]
	[Address(RVA = "0x4F0EB10", Offset = "0x4F0EB10", VA = "0x4F0EB10", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600288F")]
	[Address(RVA = "0x4F0ECD0", Offset = "0x4F0ECD0", VA = "0x4F0ECD0")]
	private void WriteSpan(ReadOnlySpan<char> buffer, bool appendNewLine)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002890")]
	[Address(RVA = "0x4F0F010", Offset = "0x4F0F010", VA = "0x4F0F010", Slot = "18")]
	public override void Write(string value)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002891")]
	[Address(RVA = "0x4F0F070", Offset = "0x4F0F070", VA = "0x4F0F070", Slot = "21")]
	public override void WriteLine(string value)
	{
	}

	[Token(Token = "0x6002892")]
	[Address(RVA = "0x4F0F120", Offset = "0x4F0F120", VA = "0x4F0F120", Slot = "22")]
	public override Task WriteAsync(char value)
	{
		return null;
	}

	[Token(Token = "0x6002893")]
	[Address(RVA = "0x4F0F5E0", Offset = "0x4F0F5E0", VA = "0x4F0F5E0")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__57))]
	private static Task WriteAsyncInternal(StreamWriter _this, char value, char[] charBuffer, int charPos, int charLen, char[] coreNewLine, bool autoFlush, bool appendNewLine)
	{
		return null;
	}

	[Token(Token = "0x6002894")]
	[Address(RVA = "0x4F0F750", Offset = "0x4F0F750", VA = "0x4F0F750", Slot = "23")]
	public override Task WriteAsync(string value)
	{
		return null;
	}

	[Token(Token = "0x6002895")]
	[Address(RVA = "0x4F0FC90", Offset = "0x4F0FC90", VA = "0x4F0FC90")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__59))]
	private static Task WriteAsyncInternal(StreamWriter _this, string value, char[] charBuffer, int charPos, int charLen, char[] coreNewLine, bool autoFlush, bool appendNewLine)
	{
		return null;
	}

	[Token(Token = "0x6002896")]
	[Address(RVA = "0x4F0FE20", Offset = "0x4F0FE20", VA = "0x4F0FE20", Slot = "24")]
	public override Task WriteAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002897")]
	[Address(RVA = "0x4F10440", Offset = "0x4F10440", VA = "0x4F10440")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__62))]
	private static Task WriteAsyncInternal(StreamWriter _this, ReadOnlyMemory<char> source, char[] charBuffer, int charPos, int charLen, char[] coreNewLine, bool autoFlush, bool appendNewLine, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6002898")]
	[Address(RVA = "0x4F105F0", Offset = "0x4F105F0", VA = "0x4F105F0", Slot = "25")]
	public override Task FlushAsync()
	{
		return null;
	}

	[Token(Token = "0x600289B")]
	[Address(RVA = "0x4F10A20", Offset = "0x4F10A20", VA = "0x4F10A20")]
	private Task FlushAsyncInternal(bool flushStream, bool flushEncoder, char[] sCharBuffer, int sCharPos, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600289C")]
	[Address(RVA = "0x4F10C20", Offset = "0x4F10C20", VA = "0x4F10C20")]
	[AsyncStateMachine(typeof(_003CFlushAsyncInternal_003Ed__74))]
	private static Task FlushAsyncInternal(StreamWriter _this, bool flushStream, bool flushEncoder, char[] charBuffer, int charPos, bool haveWrittenPreamble, Encoding encoding, Encoder encoder, byte[] byteBuffer, Stream stream, CancellationToken cancellationToken)
	{
		return null;
	}
}
