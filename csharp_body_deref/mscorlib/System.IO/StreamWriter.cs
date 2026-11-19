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
[Token(Token = "0x200064E")]
public class StreamWriter : TextWriter
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200064F")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInternal_003Ed__57 : IAsyncStateMachine
	{
		[Token(Token = "0x4001954")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001955")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001956")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int charPos;

		[Token(Token = "0x4001957")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public int charLen;

		[Token(Token = "0x4001958")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public StreamWriter _this;

		[Token(Token = "0x4001959")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public char[] charBuffer;

		[Token(Token = "0x400195A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public char value;

		[Token(Token = "0x400195B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
		public bool appendNewLine;

		[Token(Token = "0x400195C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public char[] coreNewLine;

		[Token(Token = "0x400195D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public bool autoFlush;

		[Token(Token = "0x400195E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400195F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x6003132")]
		[Address(RVA = "0x546ED90", Offset = "0x546DD90", VA = "0x546ED90", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6003133")]
		[Address(RVA = "0x546F2A0", Offset = "0x546E2A0", VA = "0x546F2A0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000650")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInternal_003Ed__59 : IAsyncStateMachine
	{
		[Token(Token = "0x4001960")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001961")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001962")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string value;

		[Token(Token = "0x4001963")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int charPos;

		[Token(Token = "0x4001964")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public int charLen;

		[Token(Token = "0x4001965")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public StreamWriter _this;

		[Token(Token = "0x4001966")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public char[] charBuffer;

		[Token(Token = "0x4001967")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool appendNewLine;

		[Token(Token = "0x4001968")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public char[] coreNewLine;

		[Token(Token = "0x4001969")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public bool autoFlush;

		[Token(Token = "0x400196A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		private int _003Ccount_003E5__2;

		[Token(Token = "0x400196B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private int _003Cindex_003E5__3;

		[Token(Token = "0x400196C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400196D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private int _003Ci_003E5__4;

		[Token(Token = "0x6003134")]
		[Address(RVA = "0x546F300", Offset = "0x546E300", VA = "0x546F300", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6003135")]
		[Address(RVA = "0x546F860", Offset = "0x546E860", VA = "0x546F860", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000651")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInternal_003Ed__62 : IAsyncStateMachine
	{
		[Token(Token = "0x400196E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400196F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001970")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int charPos;

		[Token(Token = "0x4001971")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public int charLen;

		[Token(Token = "0x4001972")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public StreamWriter _this;

		[Token(Token = "0x4001973")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public char[] charBuffer;

		[Token(Token = "0x4001974")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4001975")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public ReadOnlyMemory<char> source;

		[Token(Token = "0x4001976")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public bool appendNewLine;

		[Token(Token = "0x4001977")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public char[] coreNewLine;

		[Token(Token = "0x4001978")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public bool autoFlush;

		[Token(Token = "0x4001979")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		private int _003Ccopied_003E5__2;

		[Token(Token = "0x400197A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400197B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x6003136")]
		[Address(RVA = "0x546FC20", Offset = "0x546EC20", VA = "0x546FC20", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6003137")]
		[Address(RVA = "0x54702F0", Offset = "0x546F2F0", VA = "0x54702F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000652")]
	[CompilerGenerated]
	private struct _003CFlushAsyncInternal_003Ed__74 : IAsyncStateMachine
	{
		[Token(Token = "0x400197C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400197D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400197E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool haveWrittenPreamble;

		[Token(Token = "0x400197F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public StreamWriter _this;

		[Token(Token = "0x4001980")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Encoding encoding;

		[Token(Token = "0x4001981")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Stream stream;

		[Token(Token = "0x4001982")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4001983")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Encoder encoder;

		[Token(Token = "0x4001984")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public char[] charBuffer;

		[Token(Token = "0x4001985")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public int charPos;

		[Token(Token = "0x4001986")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public byte[] byteBuffer;

		[Token(Token = "0x4001987")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public bool flushEncoder;

		[Token(Token = "0x4001988")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x69")]
		public bool flushStream;

		[Token(Token = "0x4001989")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400198A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6003138")]
		[Address(RVA = "0x5470350", Offset = "0x546F350", VA = "0x5470350", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6003139")]
		[Address(RVA = "0x5470C40", Offset = "0x546FC40", VA = "0x5470C40", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4001948")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly StreamWriter Null;

	[Token(Token = "0x4001949")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Stream _stream;

	[Token(Token = "0x400194A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Encoding _encoding;

	[Token(Token = "0x400194B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Encoder _encoder;

	[Token(Token = "0x400194C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private byte[] _byteBuffer;

	[Token(Token = "0x400194D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private char[] _charBuffer;

	[Token(Token = "0x400194E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int _charPos;

	[Token(Token = "0x400194F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int _charLen;

	[Token(Token = "0x4001950")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool _autoFlush;

	[Token(Token = "0x4001951")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool _haveWrittenPreamble;

	[Token(Token = "0x4001952")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x62")]
	private bool _closable;

	[Token(Token = "0x4001953")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Task _asyncWriteTask;

	[Token(Token = "0x170007EF")]
	private static Encoding UTF8NoBOM
	{
		[Token(Token = "0x600310F")]
		[Address(RVA = "0x546C890", Offset = "0x546B890", VA = "0x546C890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007F0")]
	public virtual bool AutoFlush
	{
		[Token(Token = "0x600311C")]
		[Address(RVA = "0x546D560", Offset = "0x546C560", VA = "0x546D560", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x170007F1")]
	public virtual Stream BaseStream
	{
		[Token(Token = "0x600311D")]
		[Address(RVA = "0x546D5A0", Offset = "0x546C5A0", VA = "0x546D5A0", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007F2")]
	internal bool LeaveOpen
	{
		[Token(Token = "0x600311E")]
		[Address(RVA = "0x546D5B0", Offset = "0x546C5B0", VA = "0x546D5B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007F3")]
	public override Encoding Encoding
	{
		[Token(Token = "0x600311F")]
		[Address(RVA = "0x546D5C0", Offset = "0x546C5C0", VA = "0x546D5C0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007F4")]
	private int CharPos_Prop
	{
		[Token(Token = "0x600312D")]
		[Address(RVA = "0x546EA60", Offset = "0x546DA60", VA = "0x546EA60")]
		set
		{
		}
	}

	[Token(Token = "0x170007F5")]
	private bool HaveWrittenPreamble_Prop
	{
		[Token(Token = "0x600312E")]
		[Address(RVA = "0x546EA70", Offset = "0x546DA70", VA = "0x546EA70")]
		set
		{
		}
	}

	[Token(Token = "0x600310D")]
	[Address(RVA = "0x546C7A0", Offset = "0x546B7A0", VA = "0x546C7A0")]
	private void CheckAsyncTaskInProgress()
	{
	}

	[Token(Token = "0x600310E")]
	[Address(RVA = "0x546C840", Offset = "0x546B840", VA = "0x546C840")]
	private static void ThrowAsyncIOInProgress()
	{
	}

	[Token(Token = "0x6003110")]
	[Address(RVA = "0x546C8F0", Offset = "0x546B8F0", VA = "0x546C8F0")]
	internal StreamWriter()
	{
	}

	[Token(Token = "0x6003111")]
	[Address(RVA = "0x546C9F0", Offset = "0x546B9F0", VA = "0x546C9F0")]
	public StreamWriter(Stream stream)
	{
	}

	[Token(Token = "0x6003112")]
	[Address(RVA = "0x546CD20", Offset = "0x546BD20", VA = "0x546CD20")]
	public StreamWriter(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6003113")]
	[Address(RVA = "0x546CAC0", Offset = "0x546BAC0", VA = "0x546CAC0")]
	public StreamWriter(Stream stream, Encoding encoding, int bufferSize, bool leaveOpen)
	{
	}

	[Token(Token = "0x6003114")]
	[Address(RVA = "0x546CE90", Offset = "0x546BE90", VA = "0x546CE90")]
	public StreamWriter(string path)
	{
	}

	[Token(Token = "0x6003115")]
	[Address(RVA = "0x546D1F0", Offset = "0x546C1F0", VA = "0x546D1F0")]
	public StreamWriter(string path, bool append)
	{
	}

	[Token(Token = "0x6003116")]
	[Address(RVA = "0x546CF60", Offset = "0x546BF60", VA = "0x546CF60")]
	public StreamWriter(string path, bool append, Encoding encoding, int bufferSize)
	{
	}

	[Token(Token = "0x6003117")]
	[Address(RVA = "0x546CD30", Offset = "0x546BD30", VA = "0x546CD30")]
	private void Init(Stream streamArg, Encoding encodingArg, int bufferSize, bool shouldLeaveOpen)
	{
	}

	[Token(Token = "0x6003118")]
	[Address(RVA = "0x546D2C0", Offset = "0x546C2C0", VA = "0x546D2C0", Slot = "8")]
	public override void Close()
	{
	}

	[Token(Token = "0x6003119")]
	[Address(RVA = "0x546D330", Offset = "0x546C330", VA = "0x546D330", Slot = "9")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600311A")]
	[Address(RVA = "0x546D540", Offset = "0x546C540", VA = "0x546D540", Slot = "10")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600311B")]
	[Address(RVA = "0x546D3D0", Offset = "0x546C3D0", VA = "0x546D3D0")]
	private void Flush(bool flushStream, bool flushEncoder)
	{
	}

	[Token(Token = "0x6003120")]
	[Address(RVA = "0x546D5D0", Offset = "0x546C5D0", VA = "0x546D5D0", Slot = "13")]
	public override void Write(char value)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6003121")]
	[Address(RVA = "0x546D640", Offset = "0x546C640", VA = "0x546D640", Slot = "14")]
	public override void Write(char[] buffer)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6003122")]
	[Address(RVA = "0x546D690", Offset = "0x546C690", VA = "0x546D690", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6003123")]
	[Address(RVA = "0x546D850", Offset = "0x546C850", VA = "0x546D850")]
	private void WriteSpan(ReadOnlySpan<char> buffer, bool appendNewLine)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6003124")]
	[Address(RVA = "0x546DB70", Offset = "0x546CB70", VA = "0x546DB70", Slot = "18")]
	public override void Write(string value)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6003125")]
	[Address(RVA = "0x546DBD0", Offset = "0x546CBD0", VA = "0x546DBD0", Slot = "21")]
	public override void WriteLine(string value)
	{
	}

	[Token(Token = "0x6003126")]
	[Address(RVA = "0x546DC40", Offset = "0x546CC40", VA = "0x546DC40", Slot = "24")]
	public override Task WriteAsync(char value)
	{
		return null;
	}

	[Token(Token = "0x6003127")]
	[Address(RVA = "0x546DDD0", Offset = "0x546CDD0", VA = "0x546DDD0")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__57))]
	private static Task WriteAsyncInternal(StreamWriter _this, char value, char[] charBuffer, int charPos, int charLen, char[] coreNewLine, bool autoFlush, bool appendNewLine)
	{
		return null;
	}

	[Token(Token = "0x6003128")]
	[Address(RVA = "0x546DF40", Offset = "0x546CF40", VA = "0x546DF40", Slot = "25")]
	public override Task WriteAsync(string value)
	{
		return null;
	}

	[Token(Token = "0x6003129")]
	[Address(RVA = "0x546E140", Offset = "0x546D140", VA = "0x546E140")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__59))]
	private static Task WriteAsyncInternal(StreamWriter _this, string value, char[] charBuffer, int charPos, int charLen, char[] coreNewLine, bool autoFlush, bool appendNewLine)
	{
		return null;
	}

	[Token(Token = "0x600312A")]
	[Address(RVA = "0x546E2C0", Offset = "0x546D2C0", VA = "0x546E2C0", Slot = "26")]
	public override Task WriteAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x600312B")]
	[Address(RVA = "0x546E5B0", Offset = "0x546D5B0", VA = "0x546E5B0")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__62))]
	private static Task WriteAsyncInternal(StreamWriter _this, ReadOnlyMemory<char> source, char[] charBuffer, int charPos, int charLen, char[] coreNewLine, bool autoFlush, bool appendNewLine, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600312C")]
	[Address(RVA = "0x546E750", Offset = "0x546D750", VA = "0x546E750", Slot = "27")]
	public override Task FlushAsync()
	{
		return null;
	}

	[Token(Token = "0x600312F")]
	[Address(RVA = "0x546E880", Offset = "0x546D880", VA = "0x546E880")]
	private Task FlushAsyncInternal(bool flushStream, bool flushEncoder, char[] sCharBuffer, int sCharPos, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6003130")]
	[Address(RVA = "0x546EA80", Offset = "0x546DA80", VA = "0x546EA80")]
	[AsyncStateMachine(typeof(_003CFlushAsyncInternal_003Ed__74))]
	private static Task FlushAsyncInternal(StreamWriter _this, bool flushStream, bool flushEncoder, char[] charBuffer, int charPos, bool haveWrittenPreamble, Encoding encoding, Encoder encoder, byte[] byteBuffer, Stream stream, CancellationToken cancellationToken)
	{
		return null;
	}
}
