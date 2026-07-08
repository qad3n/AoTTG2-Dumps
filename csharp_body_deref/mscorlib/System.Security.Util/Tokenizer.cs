using System.IO;
using System.Text;
using Il2CppDummyDll;

namespace System.Security.Util;

[Token(Token = "0x20002AB")]
internal sealed class Tokenizer
{
	[Token(Token = "0x20002AC")]
	private enum TokenSource
	{
		[Token(Token = "0x4000C3A")]
		UnicodeByteArray,
		[Token(Token = "0x4000C3B")]
		UTF8ByteArray,
		[Token(Token = "0x4000C3C")]
		ASCIIByteArray,
		[Token(Token = "0x4000C3D")]
		CharArray,
		[Token(Token = "0x4000C3E")]
		String,
		[Token(Token = "0x4000C3F")]
		NestedStrings,
		[Token(Token = "0x4000C40")]
		Other
	}

	[Serializable]
	[Token(Token = "0x20002AD")]
	internal sealed class StringMaker
	{
		[Token(Token = "0x4000C41")]
		[FieldOffset(Offset = "0x10")]
		private string[] aStrings;

		[Token(Token = "0x4000C42")]
		[FieldOffset(Offset = "0x18")]
		private uint cStringsMax;

		[Token(Token = "0x4000C43")]
		[FieldOffset(Offset = "0x1C")]
		private uint cStringsUsed;

		[Token(Token = "0x4000C44")]
		[FieldOffset(Offset = "0x20")]
		public StringBuilder _outStringBuilder;

		[Token(Token = "0x4000C45")]
		[FieldOffset(Offset = "0x28")]
		public char[] _outChars;

		[Token(Token = "0x4000C46")]
		[FieldOffset(Offset = "0x30")]
		public int _outIndex;

		[Token(Token = "0x60017C7")]
		[Address(RVA = "0x4E3D580", Offset = "0x4E3D580", VA = "0x4E3D580")]
		private static uint HashString(string str)
		{
			return default(uint);
		}

		[Token(Token = "0x60017C8")]
		[Address(RVA = "0x4E3D5D0", Offset = "0x4E3D5D0", VA = "0x4E3D5D0")]
		private static uint HashCharArray(char[] a, int l)
		{
			return default(uint);
		}

		[Token(Token = "0x60017C9")]
		[Address(RVA = "0x4E3D620", Offset = "0x4E3D620", VA = "0x4E3D620")]
		public StringMaker()
		{
		}

		[Token(Token = "0x60017CA")]
		[Address(RVA = "0x4E3D6B0", Offset = "0x4E3D6B0", VA = "0x4E3D6B0")]
		private bool CompareStringAndChars(string str, char[] a, int l)
		{
			return default(bool);
		}

		[Token(Token = "0x60017CB")]
		[Address(RVA = "0x4E36C10", Offset = "0x4E36C10", VA = "0x4E36C10")]
		public string MakeString()
		{
			return null;
		}
	}

	[Token(Token = "0x20002AE")]
	internal interface ITokenReader
	{
		[Token(Token = "0x60017CC")]
		int Read();
	}

	[Token(Token = "0x20002AF")]
	internal class StreamTokenReader : ITokenReader
	{
		[Token(Token = "0x4000C47")]
		[FieldOffset(Offset = "0x10")]
		internal StreamReader _in;

		[Token(Token = "0x4000C48")]
		[FieldOffset(Offset = "0x18")]
		internal int _numCharRead;

		[Token(Token = "0x17000268")]
		internal int NumCharEncountered
		{
			[Token(Token = "0x60017CF")]
			[Address(RVA = "0x4E3D770", Offset = "0x4E3D770", VA = "0x4E3D770")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60017CD")]
		[Address(RVA = "0x4E3D2B0", Offset = "0x4E3D2B0", VA = "0x4E3D2B0")]
		internal StreamTokenReader(StreamReader input)
		{
		}

		[Token(Token = "0x60017CE")]
		[Address(RVA = "0x4E3D730", Offset = "0x4E3D730", VA = "0x4E3D730", Slot = "5")]
		public virtual int Read()
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000C29")]
	[FieldOffset(Offset = "0x10")]
	public int LineNo;

	[Token(Token = "0x4000C2A")]
	[FieldOffset(Offset = "0x14")]
	private int _inProcessingTag;

	[Token(Token = "0x4000C2B")]
	[FieldOffset(Offset = "0x18")]
	private byte[] _inBytes;

	[Token(Token = "0x4000C2C")]
	[FieldOffset(Offset = "0x20")]
	private char[] _inChars;

	[Token(Token = "0x4000C2D")]
	[FieldOffset(Offset = "0x28")]
	private string _inString;

	[Token(Token = "0x4000C2E")]
	[FieldOffset(Offset = "0x30")]
	private int _inIndex;

	[Token(Token = "0x4000C2F")]
	[FieldOffset(Offset = "0x34")]
	private int _inSize;

	[Token(Token = "0x4000C30")]
	[FieldOffset(Offset = "0x38")]
	private int _inSavedCharacter;

	[Token(Token = "0x4000C31")]
	[FieldOffset(Offset = "0x3C")]
	private TokenSource _inTokenSource;

	[Token(Token = "0x4000C32")]
	[FieldOffset(Offset = "0x40")]
	private ITokenReader _inTokenReader;

	[Token(Token = "0x4000C33")]
	[FieldOffset(Offset = "0x48")]
	private StringMaker _maker;

	[Token(Token = "0x4000C34")]
	[FieldOffset(Offset = "0x50")]
	private string[] _searchStrings;

	[Token(Token = "0x4000C35")]
	[FieldOffset(Offset = "0x58")]
	private string[] _replaceStrings;

	[Token(Token = "0x4000C36")]
	[FieldOffset(Offset = "0x60")]
	private int _inNestedIndex;

	[Token(Token = "0x4000C37")]
	[FieldOffset(Offset = "0x64")]
	private int _inNestedSize;

	[Token(Token = "0x4000C38")]
	[FieldOffset(Offset = "0x68")]
	private string _inNestedString;

	[Token(Token = "0x60017C1")]
	[Address(RVA = "0x4E3D1E0", Offset = "0x4E3D1E0", VA = "0x4E3D1E0")]
	internal void BasicInitialization()
	{
	}

	[Token(Token = "0x60017C2")]
	[Address(RVA = "0x4E3D250", Offset = "0x4E3D250", VA = "0x4E3D250")]
	public void Recycle()
	{
	}

	[Token(Token = "0x60017C3")]
	[Address(RVA = "0x4E3D130", Offset = "0x4E3D130", VA = "0x4E3D130")]
	internal Tokenizer(string input)
	{
	}

	[Token(Token = "0x60017C4")]
	[Address(RVA = "0x4E3C570", Offset = "0x4E3C570", VA = "0x4E3C570")]
	internal void ChangeFormat(Encoding encoding)
	{
	}

	[Token(Token = "0x60017C5")]
	[Address(RVA = "0x4E3BBC0", Offset = "0x4E3BBC0", VA = "0x4E3BBC0")]
	internal void GetTokens(System.Security.Util.TokenizerStream stream, int maxNum, bool endAfterKet)
	{
	}

	[Token(Token = "0x60017C6")]
	[Address(RVA = "0x4E3D420", Offset = "0x4E3D420", VA = "0x4E3D420")]
	private string GetStringToken()
	{
		return null;
	}
}
