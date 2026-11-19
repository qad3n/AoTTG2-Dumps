// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Util.Tokenizer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Text;
using Il2CppDummyDll;

namespace System.Security.Util;

[Token(Token = "0x20002B3")]
internal sealed class Tokenizer
{
	[Token(Token = "0x20002B4")]
	private enum TokenSource
	{
		[Token(Token = "0x4000BA7")]
		UnicodeByteArray,
		[Token(Token = "0x4000BA8")]
		UTF8ByteArray,
		[Token(Token = "0x4000BA9")]
		ASCIIByteArray,
		[Token(Token = "0x4000BAA")]
		CharArray,
		[Token(Token = "0x4000BAB")]
		String,
		[Token(Token = "0x4000BAC")]
		NestedStrings,
		[Token(Token = "0x4000BAD")]
		Other
	}

	[Serializable]
	[Token(Token = "0x20002B5")]
	internal sealed class StringMaker
	{
		[Token(Token = "0x4000BAE")]
		[FieldOffset(Offset = "0x10")]
		private string[] aStrings;

		[Token(Token = "0x4000BAF")]
		[FieldOffset(Offset = "0x18")]
		private uint cStringsMax;

		[Token(Token = "0x4000BB0")]
		[FieldOffset(Offset = "0x1C")]
		private uint cStringsUsed;

		[Token(Token = "0x4000BB1")]
		[FieldOffset(Offset = "0x20")]
		public StringBuilder _outStringBuilder;

		[Token(Token = "0x4000BB2")]
		[FieldOffset(Offset = "0x28")]
		public char[] _outChars;

		[Token(Token = "0x4000BB3")]
		[FieldOffset(Offset = "0x30")]
		public int _outIndex;

		[Token(Token = "0x600180C")]
		[Address(RVA = "0x532D0A0", Offset = "0x532C0A0", VA = "0x532D0A0")]
		private static uint HashString(string str)
		{
			return default(uint);
		}

		[Token(Token = "0x600180D")]
		[Address(RVA = "0x532D0F0", Offset = "0x532C0F0", VA = "0x532D0F0")]
		private static uint HashCharArray(char[] a, int l)
		{
			return default(uint);
		}

		[Token(Token = "0x600180E")]
		[Address(RVA = "0x532D140", Offset = "0x532C140", VA = "0x532D140")]
		public StringMaker()
		{
		}

		[Token(Token = "0x600180F")]
		[Address(RVA = "0x532D1D0", Offset = "0x532C1D0", VA = "0x532D1D0")]
		private bool CompareStringAndChars(string str, char[] a, int l)
		{
			return default(bool);
		}

		[Token(Token = "0x6001810")]
		[Address(RVA = "0x53266C0", Offset = "0x53256C0", VA = "0x53266C0")]
		public string MakeString()
		{
			return null;
		}
	}

	[Token(Token = "0x20002B6")]
	internal interface ITokenReader
	{
		[Token(Token = "0x6001811")]
		int Read();
	}

	[Token(Token = "0x20002B7")]
	internal class StreamTokenReader : ITokenReader
	{
		[Token(Token = "0x4000BB4")]
		[FieldOffset(Offset = "0x10")]
		internal StreamReader _in;

		[Token(Token = "0x4000BB5")]
		[FieldOffset(Offset = "0x18")]
		internal int _numCharRead;

		[Token(Token = "0x17000269")]
		internal int NumCharEncountered
		{
			[Token(Token = "0x6001814")]
			[Address(RVA = "0x532D290", Offset = "0x532C290", VA = "0x532D290")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6001812")]
		[Address(RVA = "0x532CDD0", Offset = "0x532BDD0", VA = "0x532CDD0")]
		internal StreamTokenReader(StreamReader input)
		{
		}

		[Token(Token = "0x6001813")]
		[Address(RVA = "0x532D250", Offset = "0x532C250", VA = "0x532D250", Slot = "5")]
		public virtual int Read()
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000B96")]
	[FieldOffset(Offset = "0x10")]
	public int LineNo;

	[Token(Token = "0x4000B97")]
	[FieldOffset(Offset = "0x14")]
	private int _inProcessingTag;

	[Token(Token = "0x4000B98")]
	[FieldOffset(Offset = "0x18")]
	private byte[] _inBytes;

	[Token(Token = "0x4000B99")]
	[FieldOffset(Offset = "0x20")]
	private char[] _inChars;

	[Token(Token = "0x4000B9A")]
	[FieldOffset(Offset = "0x28")]
	private string _inString;

	[Token(Token = "0x4000B9B")]
	[FieldOffset(Offset = "0x30")]
	private int _inIndex;

	[Token(Token = "0x4000B9C")]
	[FieldOffset(Offset = "0x34")]
	private int _inSize;

	[Token(Token = "0x4000B9D")]
	[FieldOffset(Offset = "0x38")]
	private int _inSavedCharacter;

	[Token(Token = "0x4000B9E")]
	[FieldOffset(Offset = "0x3C")]
	private TokenSource _inTokenSource;

	[Token(Token = "0x4000B9F")]
	[FieldOffset(Offset = "0x40")]
	private ITokenReader _inTokenReader;

	[Token(Token = "0x4000BA0")]
	[FieldOffset(Offset = "0x48")]
	private StringMaker _maker;

	[Token(Token = "0x4000BA1")]
	[FieldOffset(Offset = "0x50")]
	private string[] _searchStrings;

	[Token(Token = "0x4000BA2")]
	[FieldOffset(Offset = "0x58")]
	private string[] _replaceStrings;

	[Token(Token = "0x4000BA3")]
	[FieldOffset(Offset = "0x60")]
	private int _inNestedIndex;

	[Token(Token = "0x4000BA4")]
	[FieldOffset(Offset = "0x64")]
	private int _inNestedSize;

	[Token(Token = "0x4000BA5")]
	[FieldOffset(Offset = "0x68")]
	private string _inNestedString;

	[Token(Token = "0x6001806")]
	[Address(RVA = "0x532CD10", Offset = "0x532BD10", VA = "0x532CD10")]
	internal void BasicInitialization()
	{
	}

	[Token(Token = "0x6001807")]
	[Address(RVA = "0x532CD80", Offset = "0x532BD80", VA = "0x532CD80")]
	public void Recycle()
	{
	}

	[Token(Token = "0x6001808")]
	[Address(RVA = "0x532CC60", Offset = "0x532BC60", VA = "0x532CC60")]
	internal Tokenizer(string input)
	{
	}

	[Token(Token = "0x6001809")]
	[Address(RVA = "0x532C130", Offset = "0x532B130", VA = "0x532C130")]
	internal void ChangeFormat(Encoding encoding)
	{
	}

	[Token(Token = "0x600180A")]
	[Address(RVA = "0x532B820", Offset = "0x532A820", VA = "0x532B820")]
	internal void GetTokens(System.Security.Util.TokenizerStream stream, int maxNum, bool endAfterKet)
	{
	}

	[Token(Token = "0x600180B")]
	[Address(RVA = "0x532CF40", Offset = "0x532BF40", VA = "0x532CF40")]
	private string GetStringToken()
	{
		return null;
	}
}
