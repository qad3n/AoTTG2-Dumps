// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.StreamWriter
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
		[Address(RVA = "0x3BF6A60", Offset = "0x3BF6A60", VA = "0x3BF6A60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600289F")]
		[Address(RVA = "0x3BF70A0", Offset = "0x3BF70A0", VA = "0x3BF70A0", Slot = "5")]
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
		[Address(RVA = "0x3BF7100", Offset = "0x3BF7100", VA = "0x3BF7100", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60028A1")]
		[Address(RVA = "0x3BF77B0", Offset = "0x3BF77B0", VA = "0x3BF77B0", Slot = "5")]
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
		[Address(RVA = "0x3BF7810", Offset = "0x3BF7810", VA = "0x3BF7810", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60028A3")]
		[Address(RVA = "0x3BF8040", Offset = "0x3BF8040", VA = "0x3BF8040", Slot = "5")]
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
		[Address(RVA = "0x3BF80A0", Offset = "0x3BF80A0", VA = "0x3BF80A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60028A5")]
		[Address(RVA = "0x3BF8D50", Offset = "0x3BF8D50", VA = "0x3BF8D50", Slot = "5")]
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
		[Address(RVA = "0x3BF35D0", Offset = "0x3BF35D0", VA = "0x3BF35D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DD")]
	public virtual bool AutoFlush
	{
		[Token(Token = "0x6002888")]
		[Address(RVA = "0x3BF4480", Offset = "0x3BF4480", VA = "0x3BF4480", Slot = "26")]
		set
		{
		}
	}

	[Token(Token = "0x170005DE")]
	public virtual Stream BaseStream
	{
		[Token(Token = "0x6002889")]
		[Address(RVA = "0x3BF4500", Offset = "0x3BF4500", VA = "0x3BF4500", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DF")]
	internal bool LeaveOpen
	{
		[Token(Token = "0x600288A")]
		[Address(RVA = "0x3BF4510", Offset = "0x3BF4510", VA = "0x3BF4510")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005E0")]
	public override Encoding Encoding
	{
		[Token(Token = "0x600288B")]
		[Address(RVA = "0x3BF4520", Offset = "0x3BF4520", VA = "0x3BF4520", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E1")]
	private int CharPos_Prop
	{
		[Token(Token = "0x6002899")]
		[Address(RVA = "0x3BF6720", Offset = "0x3BF6720", VA = "0x3BF6720")]
		set
		{
		}
	}

	[Token(Token = "0x170005E2")]
	private bool HaveWrittenPreamble_Prop
	{
		[Token(Token = "0x600289A")]
		[Address(RVA = "0x3BF6730", Offset = "0x3BF6730", VA = "0x3BF6730")]
		set
		{
		}
	}

	[Token(Token = "0x6002879")]
	[Address(RVA = "0x3BF3530", Offset = "0x3BF3530", VA = "0x3BF3530")]
	private void CheckAsyncTaskInProgress()
	{
	}

	[Token(Token = "0x600287A")]
	[Address(RVA = "0x3BF3580", Offset = "0x3BF3580", VA = "0x3BF3580")]
	private static void ThrowAsyncIOInProgress()
	{
	}

	[Token(Token = "0x600287C")]
	[Address(RVA = "0x3BF3630", Offset = "0x3BF3630", VA = "0x3BF3630")]
	internal StreamWriter()
	{
	}

	[Token(Token = "0x600287D")]
	[Address(RVA = "0x3BF37D0", Offset = "0x3BF37D0", VA = "0x3BF37D0")]
	public StreamWriter(Stream stream)
	{
	}

	[Token(Token = "0x600287E")]
	[Address(RVA = "0x3BF3B10", Offset = "0x3BF3B10", VA = "0x3BF3B10")]
	public StreamWriter(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x600287F")]
	[Address(RVA = "0x3BF38A0", Offset = "0x3BF38A0", VA = "0x3BF38A0")]
	public StreamWriter(Stream stream, Encoding encoding, int bufferSize, bool leaveOpen)
	{
	}

	[Token(Token = "0x6002880")]
	[Address(RVA = "0x3BF3C80", Offset = "0x3BF3C80", VA = "0x3BF3C80")]
	public StreamWriter(string path)
	{
	}

	[Token(Token = "0x6002881")]
	[Address(RVA = "0x3BF3FE0", Offset = "0x3BF3FE0", VA = "0x3BF3FE0")]
	public StreamWriter(string path, bool append)
	{
	}

	[Token(Token = "0x6002882")]
	[Address(RVA = "0x3BF3D50", Offset = "0x3BF3D50", VA = "0x3BF3D50")]
	public StreamWriter(string path, bool append, Encoding encoding, int bufferSize)
	{
	}

	[Token(Token = "0x6002883")]
	[Address(RVA = "0x3BF3B20", Offset = "0x3BF3B20", VA = "0x3BF3B20")]
	private void Init(Stream streamArg, Encoding encodingArg, int bufferSize, bool shouldLeaveOpen)
	{
	}

	[Token(Token = "0x6002884")]
	[Address(RVA = "0x3BF4150", Offset = "0x3BF4150", VA = "0x3BF4150", Slot = "8")]
	public override void Close()
	{
	}

	[Token(Token = "0x6002885")]
	[Address(RVA = "0x3BF41C0", Offset = "0x3BF41C0", VA = "0x3BF41C0", Slot = "9")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002886")]
	[Address(RVA = "0x3BF4420", Offset = "0x3BF4420", VA = "0x3BF4420", Slot = "10")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6002887")]
	[Address(RVA = "0x3BF42B0", Offset = "0x3BF42B0", VA = "0x3BF42B0")]
	private void Flush(bool flushStream, bool flushEncoder)
	{
	}

	[Token(Token = "0x600288C")]
	[Address(RVA = "0x3BF4530", Offset = "0x3BF4530", VA = "0x3BF4530", Slot = "13")]
	public override void Write(char value)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600288D")]
	[Address(RVA = "0x3BF45E0", Offset = "0x3BF45E0", VA = "0x3BF45E0", Slot = "14")]
	public override void Write(char[] buffer)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600288E")]
	[Address(RVA = "0x3BF4630", Offset = "0x3BF4630", VA = "0x3BF4630", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600288F")]
	[Address(RVA = "0x3BF47F0", Offset = "0x3BF47F0", VA = "0x3BF47F0")]
	private void WriteSpan(ReadOnlySpan<char> buffer, bool appendNewLine)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002890")]
	[Address(RVA = "0x3BF4B30", Offset = "0x3BF4B30", VA = "0x3BF4B30", Slot = "18")]
	public override void Write(string value)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002891")]
	[Address(RVA = "0x3BF4B90", Offset = "0x3BF4B90", VA = "0x3BF4B90", Slot = "21")]
	public override void WriteLine(string value)
	{
	}

	[Token(Token = "0x6002892")]
	[Address(RVA = "0x3BF4C40", Offset = "0x3BF4C40", VA = "0x3BF4C40", Slot = "22")]
	public override Task WriteAsync(char value)
	{
		return null;
	}

	[Token(Token = "0x6002893")]
	[Address(RVA = "0x3BF5100", Offset = "0x3BF5100", VA = "0x3BF5100")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__57))]
	private static Task WriteAsyncInternal(StreamWriter _this, char value, char[] charBuffer, int charPos, int charLen, char[] coreNewLine, bool autoFlush, bool appendNewLine)
	{
		return null;
	}

	[Token(Token = "0x6002894")]
	[Address(RVA = "0x3BF5270", Offset = "0x3BF5270", VA = "0x3BF5270", Slot = "23")]
	public override Task WriteAsync(string value)
	{
		return null;
	}

	[Token(Token = "0x6002895")]
	[Address(RVA = "0x3BF57B0", Offset = "0x3BF57B0", VA = "0x3BF57B0")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__59))]
	private static Task WriteAsyncInternal(StreamWriter _this, string value, char[] charBuffer, int charPos, int charLen, char[] coreNewLine, bool autoFlush, bool appendNewLine)
	{
		return null;
	}

	[Token(Token = "0x6002896")]
	[Address(RVA = "0x3BF5940", Offset = "0x3BF5940", VA = "0x3BF5940", Slot = "24")]
	public override Task WriteAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002897")]
	[Address(RVA = "0x3BF5F60", Offset = "0x3BF5F60", VA = "0x3BF5F60")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__62))]
	private static Task WriteAsyncInternal(StreamWriter _this, ReadOnlyMemory<char> source, char[] charBuffer, int charPos, int charLen, char[] coreNewLine, bool autoFlush, bool appendNewLine, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6002898")]
	[Address(RVA = "0x3BF6110", Offset = "0x3BF6110", VA = "0x3BF6110", Slot = "25")]
	public override Task FlushAsync()
	{
		return null;
	}

	[Token(Token = "0x600289B")]
	[Address(RVA = "0x3BF6540", Offset = "0x3BF6540", VA = "0x3BF6540")]
	private Task FlushAsyncInternal(bool flushStream, bool flushEncoder, char[] sCharBuffer, int sCharPos, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600289C")]
	[Address(RVA = "0x3BF6740", Offset = "0x3BF6740", VA = "0x3BF6740")]
	[AsyncStateMachine(typeof(_003CFlushAsyncInternal_003Ed__74))]
	private static Task FlushAsyncInternal(StreamWriter _this, bool flushStream, bool flushEncoder, char[] charBuffer, int charPos, bool haveWrittenPreamble, Encoding encoding, Encoder encoder, byte[] byteBuffer, Stream stream, CancellationToken cancellationToken)
	{
		return null;
	}
}
