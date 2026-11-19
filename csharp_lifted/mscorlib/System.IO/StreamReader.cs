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
[Token(Token = "0x200064A")]
public class StreamReader : TextReader
{
	[Token(Token = "0x200064B")]
	private class NullStreamReader : StreamReader
	{
		[Token(Token = "0x170007ED")]
		public override Stream BaseStream
		{
			[Token(Token = "0x6003100")]
			[Address(RVA = "0x546AEA0", Offset = "0x5469EA0", VA = "0x546AEA0", Slot = "18")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007EE")]
		public override Encoding CurrentEncoding
		{
			[Token(Token = "0x6003101")]
			[Address(RVA = "0x546AF10", Offset = "0x5469F10", VA = "0x546AF10", Slot = "17")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60030FF")]
		[Address(RVA = "0x546AE10", Offset = "0x5469E10", VA = "0x546AE10")]
		internal NullStreamReader()
		{
		}

		[Token(Token = "0x6003102")]
		[Address(RVA = "0x546AF20", Offset = "0x5469F20", VA = "0x546AF20", Slot = "8")]
		protected override void Dispose(bool disposing)
		{
		}

		[Token(Token = "0x6003103")]
		[Address(RVA = "0x546AF30", Offset = "0x5469F30", VA = "0x546AF30", Slot = "9")]
		public override int Peek()
		{
			return default(int);
		}

		[Token(Token = "0x6003104")]
		[Address(RVA = "0x546AF40", Offset = "0x5469F40", VA = "0x546AF40", Slot = "10")]
		public override int Read()
		{
			return default(int);
		}

		[Token(Token = "0x6003105")]
		[Address(RVA = "0x546AF50", Offset = "0x5469F50", VA = "0x546AF50", Slot = "11")]
		public override int Read(char[] buffer, int index, int count)
		{
			return default(int);
		}

		[Token(Token = "0x6003106")]
		[Address(RVA = "0x546AF60", Offset = "0x5469F60", VA = "0x546AF60", Slot = "14")]
		public override string ReadLine()
		{
			return null;
		}

		[Token(Token = "0x6003107")]
		[Address(RVA = "0x546AF70", Offset = "0x5469F70", VA = "0x546AF70", Slot = "13")]
		public override string ReadToEnd()
		{
			return null;
		}

		[Token(Token = "0x6003108")]
		[Address(RVA = "0x546AF90", Offset = "0x5469F90", VA = "0x546AF90", Slot = "19")]
		internal override int ReadBuffer()
		{
			return default(int);
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200064C")]
	[CompilerGenerated]
	private struct _003CReadAsyncInternal_003Ed__66 : IAsyncStateMachine
	{
		[Token(Token = "0x4001935")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001936")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncValueTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4001937")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public StreamReader _003C_003E4__this;

		[Token(Token = "0x4001938")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Memory<char> buffer;

		[Token(Token = "0x4001939")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400193A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003CcharsRead_003E5__2;

		[Token(Token = "0x400193B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private bool _003CreadToUserBuffer_003E5__3;

		[Token(Token = "0x400193C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private byte[] _003CtmpByteBuffer_003E5__4;

		[Token(Token = "0x400193D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private Stream _003CtmpStream_003E5__5;

		[Token(Token = "0x400193E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private int _003Ccount_003E5__6;

		[Token(Token = "0x400193F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4001940")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private int _003Cn_003E5__7;

		[Token(Token = "0x4001941")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6003109")]
		[Address(RVA = "0x546AFA0", Offset = "0x5469FA0", VA = "0x546AFA0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600310A")]
		[Address(RVA = "0x546BD50", Offset = "0x546AD50", VA = "0x546BD50", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200064D")]
	[CompilerGenerated]
	private struct _003CReadBufferAsync_003Ed__69 : IAsyncStateMachine
	{
		[Token(Token = "0x4001942")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001943")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4001944")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public StreamReader _003C_003E4__this;

		[Token(Token = "0x4001945")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private byte[] _003CtmpByteBuffer_003E5__2;

		[Token(Token = "0x4001946")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Stream _003CtmpStream_003E5__3;

		[Token(Token = "0x4001947")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600310B")]
		[Address(RVA = "0x546BDA0", Offset = "0x546ADA0", VA = "0x546BDA0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600310C")]
		[Address(RVA = "0x546C730", Offset = "0x546B730", VA = "0x546C730", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4001925")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly StreamReader Null;

	[Token(Token = "0x4001926")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Stream _stream;

	[Token(Token = "0x4001927")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Encoding _encoding;

	[Token(Token = "0x4001928")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Decoder _decoder;

	[Token(Token = "0x4001929")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private byte[] _byteBuffer;

	[Token(Token = "0x400192A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private char[] _charBuffer;

	[Token(Token = "0x400192B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int _charPos;

	[Token(Token = "0x400192C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private int _charLen;

	[Token(Token = "0x400192D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _byteLen;

	[Token(Token = "0x400192E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int _bytePos;

	[Token(Token = "0x400192F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private int _maxCharsPerBuffer;

	[Token(Token = "0x4001930")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private bool _detectEncoding;

	[Token(Token = "0x4001931")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
	private bool _checkPreamble;

	[Token(Token = "0x4001932")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x56")]
	private bool _isBlocked;

	[Token(Token = "0x4001933")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x57")]
	private bool _closable;

	[Token(Token = "0x4001934")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Task _asyncReadTask;

	[Token(Token = "0x170007EA")]
	public virtual Encoding CurrentEncoding
	{
		[Token(Token = "0x60030EB")]
		[Address(RVA = "0x54695F0", Offset = "0x54685F0", VA = "0x54695F0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007EB")]
	public virtual Stream BaseStream
	{
		[Token(Token = "0x60030EC")]
		[Address(RVA = "0x5469600", Offset = "0x5468600", VA = "0x5469600", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007EC")]
	internal bool LeaveOpen
	{
		[Token(Token = "0x60030ED")]
		[Address(RVA = "0x54695E0", Offset = "0x54685E0", VA = "0x54695E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60030DB")]
	[Address(RVA = "0x5468B90", Offset = "0x5467B90", VA = "0x5468B90")]
	private void CheckAsyncTaskInProgress()
	{
	}

	[Token(Token = "0x60030DC")]
	[Address(RVA = "0x5468C30", Offset = "0x5467C30", VA = "0x5468C30")]
	private static void ThrowAsyncIOInProgress()
	{
	}

	[Token(Token = "0x60030DD")]
	[Address(RVA = "0x5468C80", Offset = "0x5467C80", VA = "0x5468C80")]
	internal StreamReader()
	{
	}

	[Token(Token = "0x60030DE")]
	[Address(RVA = "0x5468D80", Offset = "0x5467D80", VA = "0x5468D80")]
	public StreamReader(Stream stream)
	{
	}

	[Token(Token = "0x60030DF")]
	[Address(RVA = "0x5468DC0", Offset = "0x5467DC0", VA = "0x5468DC0")]
	public StreamReader(Stream stream, bool detectEncodingFromByteOrderMarks)
	{
	}

	[Token(Token = "0x60030E0")]
	[Address(RVA = "0x5469060", Offset = "0x5468060", VA = "0x5469060")]
	public StreamReader(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x60030E1")]
	[Address(RVA = "0x5469080", Offset = "0x5468080", VA = "0x5469080")]
	public StreamReader(Stream stream, Encoding encoding, bool detectEncodingFromByteOrderMarks)
	{
	}

	[Token(Token = "0x60030E2")]
	[Address(RVA = "0x5468E00", Offset = "0x5467E00", VA = "0x5468E00")]
	public StreamReader(Stream stream, Encoding encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen)
	{
	}

	[Token(Token = "0x60030E3")]
	[Address(RVA = "0x54691F0", Offset = "0x54681F0", VA = "0x54691F0")]
	public StreamReader(string path)
	{
	}

	[Token(Token = "0x60030E4")]
	[Address(RVA = "0x5469230", Offset = "0x5468230", VA = "0x5469230")]
	public StreamReader(string path, bool detectEncodingFromByteOrderMarks)
	{
	}

	[Token(Token = "0x60030E5")]
	[Address(RVA = "0x54694F0", Offset = "0x54684F0", VA = "0x54694F0")]
	public StreamReader(string path, Encoding encoding, bool detectEncodingFromByteOrderMarks)
	{
	}

	[Token(Token = "0x60030E6")]
	[Address(RVA = "0x5469260", Offset = "0x5468260", VA = "0x5469260")]
	public StreamReader(string path, Encoding encoding, bool detectEncodingFromByteOrderMarks, int bufferSize)
	{
	}

	[Token(Token = "0x60030E7")]
	[Address(RVA = "0x54690A0", Offset = "0x54680A0", VA = "0x54690A0")]
	private void Init(Stream stream, Encoding encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen)
	{
	}

	[Token(Token = "0x60030E8")]
	[Address(RVA = "0x5469500", Offset = "0x5468500", VA = "0x5469500")]
	internal void Init(Stream stream)
	{
	}

	[Token(Token = "0x60030E9")]
	[Address(RVA = "0x5469520", Offset = "0x5468520", VA = "0x5469520", Slot = "7")]
	public override void Close()
	{
	}

	[Token(Token = "0x60030EA")]
	[Address(RVA = "0x5469540", Offset = "0x5468540", VA = "0x5469540", Slot = "8")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60030EE")]
	[Address(RVA = "0x5469610", Offset = "0x5468610", VA = "0x5469610", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x60030EF")]
	[Address(RVA = "0x54696C0", Offset = "0x54686C0", VA = "0x54696C0", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x60030F0")]
	[Address(RVA = "0x5469770", Offset = "0x5468770", VA = "0x5469770", Slot = "11")]
	public override int Read(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60030F1")]
	[Address(RVA = "0x5469B20", Offset = "0x5468B20", VA = "0x5469B20", Slot = "12")]
	public override int Read(Span<char> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60030F2")]
	[Address(RVA = "0x54698E0", Offset = "0x54688E0", VA = "0x54698E0")]
	private int ReadSpan(Span<char> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60030F3")]
	[Address(RVA = "0x5469EF0", Offset = "0x5468EF0", VA = "0x5469EF0", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}

	[Token(Token = "0x60030F4")]
	[Address(RVA = "0x546A000", Offset = "0x5469000", VA = "0x546A000")]
	private void CompressBuffer(int n)
	{
	}

	[Token(Token = "0x60030F5")]
	[Address(RVA = "0x546A030", Offset = "0x5469030", VA = "0x546A030")]
	private void DetectEncoding()
	{
	}

	[Token(Token = "0x60030F6")]
	[Address(RVA = "0x546A2D0", Offset = "0x54692D0", VA = "0x546A2D0")]
	private bool IsPreamble()
	{
		return default(bool);
	}

	[Token(Token = "0x60030F7")]
	[Address(RVA = "0x546A3F0", Offset = "0x54693F0", VA = "0x546A3F0", Slot = "19")]
	internal virtual int ReadBuffer()
	{
		return default(int);
	}

	[Token(Token = "0x60030F8")]
	[Address(RVA = "0x5469BC0", Offset = "0x5468BC0", VA = "0x5469BC0")]
	private int ReadBuffer(Span<char> userBuffer, out bool readToUserBuffer)
	{
		return default(int);
	}

	[Token(Token = "0x60030F9")]
	[Address(RVA = "0x546A5A0", Offset = "0x54695A0", VA = "0x546A5A0", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x60030FA")]
	[Address(RVA = "0x546A7F0", Offset = "0x54697F0", VA = "0x546A7F0", Slot = "15")]
	public override Task<int> ReadAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60030FB")]
	[Address(RVA = "0x546AAC0", Offset = "0x5469AC0", VA = "0x546AAC0", Slot = "16")]
	[AsyncStateMachine(typeof(_003CReadAsyncInternal_003Ed__66))]
	internal override ValueTask<int> ReadAsyncInternal(Memory<char> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x60030FC")]
	[Address(RVA = "0x546AC90", Offset = "0x5469C90", VA = "0x546AC90")]
	[AsyncStateMachine(typeof(_003CReadBufferAsync_003Ed__69))]
	private Task<int> ReadBufferAsync()
	{
		return null;
	}

	[Token(Token = "0x60030FD")]
	[Address(RVA = "0x546AD90", Offset = "0x5469D90", VA = "0x546AD90")]
	internal bool DataAvailable()
	{
		return default(bool);
	}
}
