using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000547")]
public class StreamReader : TextReader
{
	[Token(Token = "0x2000548")]
	private class NullStreamReader : StreamReader
	{
		[Token(Token = "0x170005DA")]
		public override Stream BaseStream
		{
			[Token(Token = "0x600286C")]
			[Address(RVA = "0x4F0BDE0", Offset = "0x4F0BDE0", VA = "0x4F0BDE0", Slot = "18")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170005DB")]
		public override Encoding CurrentEncoding
		{
			[Token(Token = "0x600286D")]
			[Address(RVA = "0x4F0BE50", Offset = "0x4F0BE50", VA = "0x4F0BE50", Slot = "17")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600286B")]
		[Address(RVA = "0x4F0BD50", Offset = "0x4F0BD50", VA = "0x4F0BD50")]
		internal NullStreamReader()
		{
		}

		[Token(Token = "0x600286E")]
		[Address(RVA = "0x4F0BE60", Offset = "0x4F0BE60", VA = "0x4F0BE60", Slot = "8")]
		protected override void Dispose(bool disposing)
		{
		}

		[Token(Token = "0x600286F")]
		[Address(RVA = "0x4F0BE70", Offset = "0x4F0BE70", VA = "0x4F0BE70", Slot = "9")]
		public override int Peek()
		{
			return default(int);
		}

		[Token(Token = "0x6002870")]
		[Address(RVA = "0x4F0BE80", Offset = "0x4F0BE80", VA = "0x4F0BE80", Slot = "10")]
		public override int Read()
		{
			return default(int);
		}

		[Token(Token = "0x6002871")]
		[Address(RVA = "0x4F0BE90", Offset = "0x4F0BE90", VA = "0x4F0BE90", Slot = "11")]
		public override int Read(char[] buffer, int index, int count)
		{
			return default(int);
		}

		[Token(Token = "0x6002872")]
		[Address(RVA = "0x4F0BEA0", Offset = "0x4F0BEA0", VA = "0x4F0BEA0", Slot = "14")]
		public override string ReadLine()
		{
			return null;
		}

		[Token(Token = "0x6002873")]
		[Address(RVA = "0x4F0BEB0", Offset = "0x4F0BEB0", VA = "0x4F0BEB0", Slot = "13")]
		public override string ReadToEnd()
		{
			return null;
		}

		[Token(Token = "0x6002874")]
		[Address(RVA = "0x4F0BED0", Offset = "0x4F0BED0", VA = "0x4F0BED0", Slot = "19")]
		internal override int ReadBuffer()
		{
			return default(int);
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000549")]
	[CompilerGenerated]
	private struct _003CReadAsyncInternal_003Ed__66 : IAsyncStateMachine
	{
		[Token(Token = "0x40015F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40015F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncValueTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x40015F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public StreamReader _003C_003E4__this;

		[Token(Token = "0x40015F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Memory<char> buffer;

		[Token(Token = "0x40015F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40015F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003CcharsRead_003E5__2;

		[Token(Token = "0x40015F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private bool _003CreadToUserBuffer_003E5__3;

		[Token(Token = "0x40015F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private byte[] _003CtmpByteBuffer_003E5__4;

		[Token(Token = "0x40015F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private Stream _003CtmpStream_003E5__5;

		[Token(Token = "0x40015FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private int _003Ccount_003E5__6;

		[Token(Token = "0x40015FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40015FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private int _003Cn_003E5__7;

		[Token(Token = "0x40015FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6002875")]
		[Address(RVA = "0x4F0BEE0", Offset = "0x4F0BEE0", VA = "0x4F0BEE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6002876")]
		[Address(RVA = "0x4F0CF70", Offset = "0x4F0CF70", VA = "0x4F0CF70", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200054A")]
	[CompilerGenerated]
	private struct _003CReadBufferAsync_003Ed__69 : IAsyncStateMachine
	{
		[Token(Token = "0x40015FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40015FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4001600")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public StreamReader _003C_003E4__this;

		[Token(Token = "0x4001601")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private byte[] _003CtmpByteBuffer_003E5__2;

		[Token(Token = "0x4001602")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Stream _003CtmpStream_003E5__3;

		[Token(Token = "0x4001603")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredValueTaskAwaitable<int>.ConfiguredValueTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6002877")]
		[Address(RVA = "0x4F0CFC0", Offset = "0x4F0CFC0", VA = "0x4F0CFC0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6002878")]
		[Address(RVA = "0x4F0D9A0", Offset = "0x4F0D9A0", VA = "0x4F0D9A0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40015E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly StreamReader Null;

	[Token(Token = "0x40015E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Stream _stream;

	[Token(Token = "0x40015E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Encoding _encoding;

	[Token(Token = "0x40015E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Decoder _decoder;

	[Token(Token = "0x40015E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private byte[] _byteBuffer;

	[Token(Token = "0x40015E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private char[] _charBuffer;

	[Token(Token = "0x40015E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int _charPos;

	[Token(Token = "0x40015E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private int _charLen;

	[Token(Token = "0x40015E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _byteLen;

	[Token(Token = "0x40015EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int _bytePos;

	[Token(Token = "0x40015EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private int _maxCharsPerBuffer;

	[Token(Token = "0x40015EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private bool _detectEncoding;

	[Token(Token = "0x40015ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
	private bool _checkPreamble;

	[Token(Token = "0x40015EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x56")]
	private bool _isBlocked;

	[Token(Token = "0x40015EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x57")]
	private bool _closable;

	[Token(Token = "0x40015F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Task _asyncReadTask;

	[Token(Token = "0x170005D7")]
	public virtual Encoding CurrentEncoding
	{
		[Token(Token = "0x6002857")]
		[Address(RVA = "0x4F09D90", Offset = "0x4F09D90", VA = "0x4F09D90", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D8")]
	public virtual Stream BaseStream
	{
		[Token(Token = "0x6002858")]
		[Address(RVA = "0x4F09DA0", Offset = "0x4F09DA0", VA = "0x4F09DA0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D9")]
	internal bool LeaveOpen
	{
		[Token(Token = "0x6002859")]
		[Address(RVA = "0x4F09D80", Offset = "0x4F09D80", VA = "0x4F09D80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002847")]
	[Address(RVA = "0x4F09370", Offset = "0x4F09370", VA = "0x4F09370")]
	private void CheckAsyncTaskInProgress()
	{
	}

	[Token(Token = "0x6002848")]
	[Address(RVA = "0x4F093C0", Offset = "0x4F093C0", VA = "0x4F093C0")]
	private static void ThrowAsyncIOInProgress()
	{
	}

	[Token(Token = "0x6002849")]
	[Address(RVA = "0x4F09410", Offset = "0x4F09410", VA = "0x4F09410")]
	internal StreamReader()
	{
	}

	[Token(Token = "0x600284A")]
	[Address(RVA = "0x4F09520", Offset = "0x4F09520", VA = "0x4F09520")]
	public StreamReader(Stream stream)
	{
	}

	[Token(Token = "0x600284B")]
	[Address(RVA = "0x4F09560", Offset = "0x4F09560", VA = "0x4F09560")]
	public StreamReader(Stream stream, bool detectEncodingFromByteOrderMarks)
	{
	}

	[Token(Token = "0x600284C")]
	[Address(RVA = "0x4F09810", Offset = "0x4F09810", VA = "0x4F09810")]
	public StreamReader(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x600284D")]
	[Address(RVA = "0x4F09830", Offset = "0x4F09830", VA = "0x4F09830")]
	public StreamReader(Stream stream, Encoding encoding, bool detectEncodingFromByteOrderMarks)
	{
	}

	[Token(Token = "0x600284E")]
	[Address(RVA = "0x4F095A0", Offset = "0x4F095A0", VA = "0x4F095A0")]
	public StreamReader(Stream stream, Encoding encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen)
	{
	}

	[Token(Token = "0x600284F")]
	[Address(RVA = "0x4F099A0", Offset = "0x4F099A0", VA = "0x4F099A0")]
	public StreamReader(string path)
	{
	}

	[Token(Token = "0x6002850")]
	[Address(RVA = "0x4F099D0", Offset = "0x4F099D0", VA = "0x4F099D0")]
	public StreamReader(string path, bool detectEncodingFromByteOrderMarks)
	{
	}

	[Token(Token = "0x6002851")]
	[Address(RVA = "0x4F09C90", Offset = "0x4F09C90", VA = "0x4F09C90")]
	public StreamReader(string path, Encoding encoding, bool detectEncodingFromByteOrderMarks)
	{
	}

	[Token(Token = "0x6002852")]
	[Address(RVA = "0x4F09A00", Offset = "0x4F09A00", VA = "0x4F09A00")]
	public StreamReader(string path, Encoding encoding, bool detectEncodingFromByteOrderMarks, int bufferSize)
	{
	}

	[Token(Token = "0x6002853")]
	[Address(RVA = "0x4F09850", Offset = "0x4F09850", VA = "0x4F09850")]
	private void Init(Stream stream, Encoding encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen)
	{
	}

	[Token(Token = "0x6002854")]
	[Address(RVA = "0x4F09CA0", Offset = "0x4F09CA0", VA = "0x4F09CA0")]
	internal void Init(Stream stream)
	{
	}

	[Token(Token = "0x6002855")]
	[Address(RVA = "0x4F09CC0", Offset = "0x4F09CC0", VA = "0x4F09CC0", Slot = "7")]
	public override void Close()
	{
	}

	[Token(Token = "0x6002856")]
	[Address(RVA = "0x4F09CE0", Offset = "0x4F09CE0", VA = "0x4F09CE0", Slot = "8")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600285A")]
	[Address(RVA = "0x4F09DB0", Offset = "0x4F09DB0", VA = "0x4F09DB0", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x600285B")]
	[Address(RVA = "0x4F09EB0", Offset = "0x4F09EB0", VA = "0x4F09EB0", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x600285C")]
	[Address(RVA = "0x4F09FB0", Offset = "0x4F09FB0", VA = "0x4F09FB0", Slot = "11")]
	public override int Read(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600285D")]
	[Address(RVA = "0x4F0A3E0", Offset = "0x4F0A3E0", VA = "0x4F0A3E0", Slot = "12")]
	public override int Read(Span<char> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x600285E")]
	[Address(RVA = "0x4F0A120", Offset = "0x4F0A120", VA = "0x4F0A120")]
	private int ReadSpan(Span<char> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x600285F")]
	[Address(RVA = "0x4F0AAF0", Offset = "0x4F0AAF0", VA = "0x4F0AAF0", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}

	[Token(Token = "0x6002860")]
	[Address(RVA = "0x4F0AC40", Offset = "0x4F0AC40", VA = "0x4F0AC40")]
	private void CompressBuffer(int n)
	{
	}

	[Token(Token = "0x6002861")]
	[Address(RVA = "0x4F0AC70", Offset = "0x4F0AC70", VA = "0x4F0AC70")]
	private void DetectEncoding()
	{
	}

	[Token(Token = "0x6002862")]
	[Address(RVA = "0x4F0AF50", Offset = "0x4F0AF50", VA = "0x4F0AF50")]
	private bool IsPreamble()
	{
		return default(bool);
	}

	[Token(Token = "0x6002863")]
	[Address(RVA = "0x4F0B080", Offset = "0x4F0B080", VA = "0x4F0B080", Slot = "19")]
	internal virtual int ReadBuffer()
	{
		return default(int);
	}

	[Token(Token = "0x6002864")]
	[Address(RVA = "0x4F0A790", Offset = "0x4F0A790", VA = "0x4F0A790")]
	private int ReadBuffer(Span<char> userBuffer, out bool readToUserBuffer)
	{
		return default(int);
	}

	[Token(Token = "0x6002865")]
	[Address(RVA = "0x4F0B250", Offset = "0x4F0B250", VA = "0x4F0B250", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x6002866")]
	[Address(RVA = "0x4F0B4E0", Offset = "0x4F0B4E0", VA = "0x4F0B4E0", Slot = "15")]
	public override Task<int> ReadAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002867")]
	[Address(RVA = "0x4F0B9E0", Offset = "0x4F0B9E0", VA = "0x4F0B9E0", Slot = "16")]
	[AsyncStateMachine(typeof(_003CReadAsyncInternal_003Ed__66))]
	internal override ValueTask<int> ReadAsyncInternal(Memory<char> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6002868")]
	[Address(RVA = "0x4F0BBC0", Offset = "0x4F0BBC0", VA = "0x4F0BBC0")]
	[AsyncStateMachine(typeof(_003CReadBufferAsync_003Ed__69))]
	private Task<int> ReadBufferAsync()
	{
		return null;
	}

	[Token(Token = "0x6002869")]
	[Address(RVA = "0x4F0BCD0", Offset = "0x4F0BCD0", VA = "0x4F0BCD0")]
	internal bool DataAvailable()
	{
		return default(bool);
	}
}
