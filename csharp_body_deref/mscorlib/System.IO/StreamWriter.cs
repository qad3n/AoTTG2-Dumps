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
[Token(Token = "0x2000674")]
public class StreamWriter : TextWriter
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000675")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInternal_003Ed__57 : IAsyncStateMachine
	{
		[Token(Token = "0x40019F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40019F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40019F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int charPos;

		[Token(Token = "0x40019F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public int charLen;

		[Token(Token = "0x40019F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public StreamWriter _this;

		[Token(Token = "0x40019F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public char[] charBuffer;

		[Token(Token = "0x40019F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public char value;

		[Token(Token = "0x40019F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
		public bool appendNewLine;

		[Token(Token = "0x40019F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public char[] coreNewLine;

		[Token(Token = "0x40019FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public bool autoFlush;

		[Token(Token = "0x40019FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40019FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x6003173")]
		[Address(RVA = "0x1AFEB20", Offset = "0x1AFD120", VA = "0x181AFEB20", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6003174")]
		[Address(RVA = "0x1AFEFC0", Offset = "0x1AFD5C0", VA = "0x181AFEFC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000676")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInternal_003Ed__59 : IAsyncStateMachine
	{
		[Token(Token = "0x40019FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40019FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40019FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string value;

		[Token(Token = "0x4001A00")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int charPos;

		[Token(Token = "0x4001A01")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public int charLen;

		[Token(Token = "0x4001A02")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public StreamWriter _this;

		[Token(Token = "0x4001A03")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public char[] charBuffer;

		[Token(Token = "0x4001A04")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool appendNewLine;

		[Token(Token = "0x4001A05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public char[] coreNewLine;

		[Token(Token = "0x4001A06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public bool autoFlush;

		[Token(Token = "0x4001A07")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		private int _003Ccount_003E5__2;

		[Token(Token = "0x4001A08")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private int _003Cindex_003E5__3;

		[Token(Token = "0x4001A09")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4001A0A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private int _003Ci_003E5__4;

		[Token(Token = "0x6003175")]
		[Address(RVA = "0x1AFF020", Offset = "0x1AFD620", VA = "0x181AFF020", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6003176")]
		[Address(RVA = "0x1AFF4F0", Offset = "0x1AFDAF0", VA = "0x181AFF4F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000677")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInternal_003Ed__62 : IAsyncStateMachine
	{
		[Token(Token = "0x4001A0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001A0C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001A0D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int charPos;

		[Token(Token = "0x4001A0E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public int charLen;

		[Token(Token = "0x4001A0F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public StreamWriter _this;

		[Token(Token = "0x4001A10")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public char[] charBuffer;

		[Token(Token = "0x4001A11")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4001A12")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public ReadOnlyMemory<char> source;

		[Token(Token = "0x4001A13")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public bool appendNewLine;

		[Token(Token = "0x4001A14")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public char[] coreNewLine;

		[Token(Token = "0x4001A15")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public bool autoFlush;

		[Token(Token = "0x4001A16")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		private int _003Ccopied_003E5__2;

		[Token(Token = "0x4001A17")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4001A18")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x6003177")]
		[Address(RVA = "0x1AFF550", Offset = "0x1AFDB50", VA = "0x181AFF550", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6003178")]
		[Address(RVA = "0x1AFFBB0", Offset = "0x1AFE1B0", VA = "0x181AFFBB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000678")]
	[CompilerGenerated]
	private struct _003CFlushAsyncInternal_003Ed__74 : IAsyncStateMachine
	{
		[Token(Token = "0x4001A19")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001A1A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001A1B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool haveWrittenPreamble;

		[Token(Token = "0x4001A1C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public StreamWriter _this;

		[Token(Token = "0x4001A1D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Encoding encoding;

		[Token(Token = "0x4001A1E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Stream stream;

		[Token(Token = "0x4001A1F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4001A20")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Encoder encoder;

		[Token(Token = "0x4001A21")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public char[] charBuffer;

		[Token(Token = "0x4001A22")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public int charPos;

		[Token(Token = "0x4001A23")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public byte[] byteBuffer;

		[Token(Token = "0x4001A24")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public bool flushEncoder;

		[Token(Token = "0x4001A25")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x69")]
		public bool flushStream;

		[Token(Token = "0x4001A26")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4001A27")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6003179")]
		[Address(RVA = "0x1AFD700", Offset = "0x1AFBD00", VA = "0x181AFD700", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600317A")]
		[Address(RVA = "0x1AFDD10", Offset = "0x1AFC310", VA = "0x181AFDD10", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40019E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly StreamWriter Null;

	[Token(Token = "0x40019E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Stream _stream;

	[Token(Token = "0x40019E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Encoding _encoding;

	[Token(Token = "0x40019E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Encoder _encoder;

	[Token(Token = "0x40019E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private byte[] _byteBuffer;

	[Token(Token = "0x40019EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private char[] _charBuffer;

	[Token(Token = "0x40019EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int _charPos;

	[Token(Token = "0x40019EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int _charLen;

	[Token(Token = "0x40019ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool _autoFlush;

	[Token(Token = "0x40019EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool _haveWrittenPreamble;

	[Token(Token = "0x40019EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x62")]
	private bool _closable;

	[Token(Token = "0x40019F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Task _asyncWriteTask;

	[Token(Token = "0x170007F3")]
	private static Encoding UTF8NoBOM
	{
		[Token(Token = "0x6003150")]
		[Address(RVA = "0x1ADFDF0", Offset = "0x1ADE3F0", VA = "0x181ADFDF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007F4")]
	public virtual bool AutoFlush
	{
		[Token(Token = "0x600315D")]
		[Address(RVA = "0x1ADFE30", Offset = "0x1ADE430", VA = "0x181ADFE30", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x170007F5")]
	public virtual Stream BaseStream
	{
		[Token(Token = "0x600315E")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007F6")]
	internal bool LeaveOpen
	{
		[Token(Token = "0x600315F")]
		[Address(RVA = "0x1ADFDE0", Offset = "0x1ADE3E0", VA = "0x181ADFDE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007F7")]
	public override Encoding Encoding
	{
		[Token(Token = "0x6003160")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007F8")]
	private int CharPos_Prop
	{
		[Token(Token = "0x600316E")]
		[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0")]
		set
		{
		}
	}

	[Token(Token = "0x170007F9")]
	private bool HaveWrittenPreamble_Prop
	{
		[Token(Token = "0x600316F")]
		[Address(RVA = "0x1ADFEC0", Offset = "0x1ADE4C0", VA = "0x181ADFEC0")]
		set
		{
		}
	}

	[Token(Token = "0x600314E")]
	[Address(RVA = "0x1ADD410", Offset = "0x1ADBA10", VA = "0x181ADD410")]
	private void CheckAsyncTaskInProgress()
	{
	}

	[Token(Token = "0x600314F")]
	[Address(RVA = "0x1ADDED0", Offset = "0x1ADC4D0", VA = "0x181ADDED0")]
	private static void ThrowAsyncIOInProgress()
	{
	}

	[Token(Token = "0x6003151")]
	[Address(RVA = "0x1ADFD20", Offset = "0x1ADE320", VA = "0x181ADFD20")]
	internal StreamWriter()
	{
	}

	[Token(Token = "0x6003152")]
	[Address(RVA = "0x1ADFB00", Offset = "0x1ADE100", VA = "0x181ADFB00")]
	public StreamWriter(Stream stream)
	{
	}

	[Token(Token = "0x6003153")]
	[Address(RVA = "0x1ADF810", Offset = "0x1ADDE10", VA = "0x181ADF810")]
	public StreamWriter(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6003154")]
	[Address(RVA = "0x1ADF5E0", Offset = "0x1ADDBE0", VA = "0x181ADF5E0")]
	public StreamWriter(Stream stream, Encoding encoding, int bufferSize, bool leaveOpen)
	{
	}

	[Token(Token = "0x6003155")]
	[Address(RVA = "0x1ADFC70", Offset = "0x1ADE270", VA = "0x181ADFC70")]
	public StreamWriter(string path)
	{
	}

	[Token(Token = "0x6003156")]
	[Address(RVA = "0x1ADFBB0", Offset = "0x1ADE1B0", VA = "0x181ADFBB0")]
	public StreamWriter(string path, bool append)
	{
	}

	[Token(Token = "0x6003157")]
	[Address(RVA = "0x1ADF840", Offset = "0x1ADDE40", VA = "0x181ADF840")]
	public StreamWriter(string path, bool append, Encoding encoding, int bufferSize)
	{
	}

	[Token(Token = "0x6003158")]
	[Address(RVA = "0x1ADDD80", Offset = "0x1ADC380", VA = "0x181ADDD80")]
	private void Init(Stream streamArg, Encoding encodingArg, int bufferSize, bool shouldLeaveOpen)
	{
	}

	[Token(Token = "0x6003159")]
	[Address(RVA = "0x1ADD470", Offset = "0x1ADBA70", VA = "0x181ADD470", Slot = "8")]
	public override void Close()
	{
	}

	[Token(Token = "0x600315A")]
	[Address(RVA = "0x1ADD4D0", Offset = "0x1ADBAD0", VA = "0x181ADD4D0", Slot = "9")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600315B")]
	[Address(RVA = "0x1ADDB50", Offset = "0x1ADC150", VA = "0x181ADDB50", Slot = "10")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600315C")]
	[Address(RVA = "0x1ADDBC0", Offset = "0x1ADC1C0", VA = "0x181ADDBC0")]
	private void Flush(bool flushStream, bool flushEncoder)
	{
	}

	[Token(Token = "0x6003161")]
	[Address(RVA = "0x1ADF150", Offset = "0x1ADD750", VA = "0x181ADF150", Slot = "13")]
	public override void Write(char value)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6003162")]
	[Address(RVA = "0x1ADF210", Offset = "0x1ADD810", VA = "0x181ADF210", Slot = "14")]
	public override void Write(char[] buffer)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6003163")]
	[Address(RVA = "0x1ADF280", Offset = "0x1ADD880", VA = "0x181ADF280", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6003164")]
	[Address(RVA = "0x1ADEE00", Offset = "0x1ADD400", VA = "0x181ADEE00")]
	private void WriteSpan(ReadOnlySpan<char> buffer, bool appendNewLine)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6003165")]
	[Address(RVA = "0x1ADF0D0", Offset = "0x1ADD6D0", VA = "0x181ADF0D0", Slot = "18")]
	public override void Write(string value)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6003166")]
	[Address(RVA = "0x1ADED30", Offset = "0x1ADD330", VA = "0x181ADED30", Slot = "21")]
	public override void WriteLine(string value)
	{
	}

	[Token(Token = "0x6003167")]
	[Address(RVA = "0x1ADE2F0", Offset = "0x1ADC8F0", VA = "0x181ADE2F0", Slot = "24")]
	public override Task WriteAsync(char value)
	{
		return null;
	}

	[Token(Token = "0x6003168")]
	[Address(RVA = "0x1ADE1C0", Offset = "0x1ADC7C0", VA = "0x181ADE1C0")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__57))]
	private static Task WriteAsyncInternal(StreamWriter _this, char value, char[] charBuffer, int charPos, int charLen, char[] coreNewLine, bool autoFlush, bool appendNewLine)
	{
		return null;
	}

	[Token(Token = "0x6003169")]
	[Address(RVA = "0x1ADE5B0", Offset = "0x1ADCBB0", VA = "0x181ADE5B0", Slot = "25")]
	public override Task WriteAsync(string value)
	{
		return null;
	}

	[Token(Token = "0x600316A")]
	[Address(RVA = "0x1ADDF20", Offset = "0x1ADC520", VA = "0x181ADDF20")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__59))]
	private static Task WriteAsyncInternal(StreamWriter _this, string value, char[] charBuffer, int charPos, int charLen, char[] coreNewLine, bool autoFlush, bool appendNewLine)
	{
		return null;
	}

	[Token(Token = "0x600316B")]
	[Address(RVA = "0x1ADE8B0", Offset = "0x1ADCEB0", VA = "0x181ADE8B0", Slot = "26")]
	public override Task WriteAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x600316C")]
	[Address(RVA = "0x1ADE060", Offset = "0x1ADC660", VA = "0x181ADE060")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInternal_003Ed__62))]
	private static Task WriteAsyncInternal(StreamWriter _this, ReadOnlyMemory<char> source, char[] charBuffer, int charPos, int charLen, char[] coreNewLine, bool autoFlush, bool appendNewLine, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600316D")]
	[Address(RVA = "0x1ADD9D0", Offset = "0x1ADBFD0", VA = "0x181ADD9D0", Slot = "27")]
	public override Task FlushAsync()
	{
		return null;
	}

	[Token(Token = "0x6003170")]
	[Address(RVA = "0x1ADD720", Offset = "0x1ADBD20", VA = "0x181ADD720")]
	private Task FlushAsyncInternal(bool flushStream, bool flushEncoder, char[] sCharBuffer, int sCharPos, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6003171")]
	[Address(RVA = "0x1ADD5A0", Offset = "0x1ADBBA0", VA = "0x181ADD5A0")]
	[AsyncStateMachine(typeof(_003CFlushAsyncInternal_003Ed__74))]
	private static Task FlushAsyncInternal(StreamWriter _this, bool flushStream, bool flushEncoder, char[] charBuffer, int charPos, bool haveWrittenPreamble, Encoding encoding, Encoder encoder, byte[] byteBuffer, Stream stream, CancellationToken cancellationToken)
	{
		return null;
	}
}
