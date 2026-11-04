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

[Token(Token = "0x20002DA")]
internal sealed class Tokenizer
{
	[Token(Token = "0x20002DB")]
	private enum TokenSource
	{
		[Token(Token = "0x4000C47")]
		UnicodeByteArray,
		[Token(Token = "0x4000C48")]
		UTF8ByteArray,
		[Token(Token = "0x4000C49")]
		ASCIIByteArray,
		[Token(Token = "0x4000C4A")]
		CharArray,
		[Token(Token = "0x4000C4B")]
		String,
		[Token(Token = "0x4000C4C")]
		NestedStrings,
		[Token(Token = "0x4000C4D")]
		Other
	}

	[Serializable]
	[Token(Token = "0x20002DC")]
	internal sealed class StringMaker
	{
		[Token(Token = "0x4000C4E")]
		[FieldOffset(Offset = "0x10")]
		private string[] aStrings;

		[Token(Token = "0x4000C4F")]
		[FieldOffset(Offset = "0x18")]
		private uint cStringsMax;

		[Token(Token = "0x4000C50")]
		[FieldOffset(Offset = "0x1C")]
		private uint cStringsUsed;

		[Token(Token = "0x4000C51")]
		[FieldOffset(Offset = "0x20")]
		public StringBuilder _outStringBuilder;

		[Token(Token = "0x4000C52")]
		[FieldOffset(Offset = "0x28")]
		public char[] _outChars;

		[Token(Token = "0x4000C53")]
		[FieldOffset(Offset = "0x30")]
		public int _outIndex;

		[Token(Token = "0x600182F")]
		[Address(RVA = "0x199B680", Offset = "0x1999C80", VA = "0x18199B680")]
		private static uint HashString(string str)
		{
			return default(uint);
		}

		[Token(Token = "0x6001830")]
		[Address(RVA = "0x199B620", Offset = "0x1999C20", VA = "0x18199B620")]
		private static uint HashCharArray(char[] a, int l)
		{
			return default(uint);
		}

		[Token(Token = "0x6001831")]
		[Address(RVA = "0x199BA20", Offset = "0x199A020", VA = "0x18199BA20")]
		public StringMaker()
		{
		}

		[Token(Token = "0x6001832")]
		[Address(RVA = "0x199B5A0", Offset = "0x1999BA0", VA = "0x18199B5A0")]
		private bool CompareStringAndChars(string str, char[] a, int l)
		{
			return default(bool);
		}

		[Token(Token = "0x6001833")]
		[Address(RVA = "0x199B700", Offset = "0x1999D00", VA = "0x18199B700")]
		public string MakeString()
		{
			return null;
		}
	}

	[Token(Token = "0x20002DD")]
	internal interface ITokenReader
	{
		[Token(Token = "0x6001834")]
		int Read();
	}

	[Token(Token = "0x20002DE")]
	internal class StreamTokenReader : ITokenReader
	{
		[Token(Token = "0x4000C54")]
		[FieldOffset(Offset = "0x10")]
		internal StreamReader _in;

		[Token(Token = "0x4000C55")]
		[FieldOffset(Offset = "0x18")]
		internal int _numCharRead;

		[Token(Token = "0x1700026A")]
		internal int NumCharEncountered
		{
			[Token(Token = "0x6001837")]
			[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6001835")]
		[Address(RVA = "0x199B560", Offset = "0x1999B60", VA = "0x18199B560")]
		internal StreamTokenReader(StreamReader input)
		{
		}

		[Token(Token = "0x6001836")]
		[Address(RVA = "0x199B520", Offset = "0x1999B20", VA = "0x18199B520", Slot = "5")]
		public virtual int Read()
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000C36")]
	[FieldOffset(Offset = "0x10")]
	public int LineNo;

	[Token(Token = "0x4000C37")]
	[FieldOffset(Offset = "0x14")]
	private int _inProcessingTag;

	[Token(Token = "0x4000C38")]
	[FieldOffset(Offset = "0x18")]
	private byte[] _inBytes;

	[Token(Token = "0x4000C39")]
	[FieldOffset(Offset = "0x20")]
	private char[] _inChars;

	[Token(Token = "0x4000C3A")]
	[FieldOffset(Offset = "0x28")]
	private string _inString;

	[Token(Token = "0x4000C3B")]
	[FieldOffset(Offset = "0x30")]
	private int _inIndex;

	[Token(Token = "0x4000C3C")]
	[FieldOffset(Offset = "0x34")]
	private int _inSize;

	[Token(Token = "0x4000C3D")]
	[FieldOffset(Offset = "0x38")]
	private int _inSavedCharacter;

	[Token(Token = "0x4000C3E")]
	[FieldOffset(Offset = "0x3C")]
	private TokenSource _inTokenSource;

	[Token(Token = "0x4000C3F")]
	[FieldOffset(Offset = "0x40")]
	private ITokenReader _inTokenReader;

	[Token(Token = "0x4000C40")]
	[FieldOffset(Offset = "0x48")]
	private StringMaker _maker;

	[Token(Token = "0x4000C41")]
	[FieldOffset(Offset = "0x50")]
	private string[] _searchStrings;

	[Token(Token = "0x4000C42")]
	[FieldOffset(Offset = "0x58")]
	private string[] _replaceStrings;

	[Token(Token = "0x4000C43")]
	[FieldOffset(Offset = "0x60")]
	private int _inNestedIndex;

	[Token(Token = "0x4000C44")]
	[FieldOffset(Offset = "0x64")]
	private int _inNestedSize;

	[Token(Token = "0x4000C45")]
	[FieldOffset(Offset = "0x68")]
	private string _inNestedString;

	[Token(Token = "0x6001829")]
	[Address(RVA = "0x199C1F0", Offset = "0x199A7F0", VA = "0x18199C1F0")]
	internal void BasicInitialization()
	{
	}

	[Token(Token = "0x600182A")]
	[Address(RVA = "0x199CF40", Offset = "0x199B540", VA = "0x18199CF40")]
	public void Recycle()
	{
	}

	[Token(Token = "0x600182B")]
	[Address(RVA = "0x199CF90", Offset = "0x199B590", VA = "0x18199CF90")]
	internal Tokenizer(string input)
	{
	}

	[Token(Token = "0x600182C")]
	[Address(RVA = "0x199C270", Offset = "0x199A870", VA = "0x18199C270")]
	internal void ChangeFormat(Encoding encoding)
	{
	}

	[Token(Token = "0x600182D")]
	[Address(RVA = "0x199C520", Offset = "0x199AB20", VA = "0x18199C520")]
	internal void GetTokens(System.Security.Util.TokenizerStream stream, int maxNum, bool endAfterKet)
	{
	}

	[Token(Token = "0x600182E")]
	[Address(RVA = "0x199C500", Offset = "0x199AB00", VA = "0x18199C500")]
	private string GetStringToken()
	{
		return null;
	}
}
