using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000DC")]
internal class Ucs4Encoding : Encoding
{
	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x38")]
	internal Ucs4Decoder ucs4Decoder;

	[Token(Token = "0x170002F9")]
	public override string WebName
	{
		[Token(Token = "0x6000BB6")]
		[Address(RVA = "0x44C09A0", Offset = "0x44C09A0", VA = "0x44C09A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FA")]
	public override int CodePage
	{
		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x44C0AD0", Offset = "0x44C0AD0", VA = "0x44C0AD0", Slot = "30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002FB")]
	internal static Encoding UCS4_Littleendian
	{
		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x44C0AF0", Offset = "0x44C0AF0", VA = "0x44C0AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FC")]
	internal static Encoding UCS4_Bigendian
	{
		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x44C0BE0", Offset = "0x44C0BE0", VA = "0x44C0BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FD")]
	internal static Encoding UCS4_2143
	{
		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x44C0CD0", Offset = "0x44C0CD0", VA = "0x44C0CD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FE")]
	internal static Encoding UCS4_3412
	{
		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x44C0DC0", Offset = "0x44C0DC0", VA = "0x44C0DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x44C09C0", Offset = "0x44C09C0", VA = "0x44C09C0", Slot = "31")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x44C09D0", Offset = "0x44C09D0", VA = "0x44C09D0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x44C0A20", Offset = "0x44C0A20", VA = "0x44C0A20", Slot = "18")]
	public override byte[] GetBytes(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x44C0A30", Offset = "0x44C0A30", VA = "0x44C0A30", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x44C0A40", Offset = "0x44C0A40", VA = "0x44C0A40", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x44C0A50", Offset = "0x44C0A50", VA = "0x44C0A50", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x44C0A80", Offset = "0x44C0A80", VA = "0x44C0A80", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x44C0AB0", Offset = "0x44C0AB0", VA = "0x44C0AB0", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x44C0AE0", Offset = "0x44C0AE0", VA = "0x44C0AE0", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x44C0EB0", Offset = "0x44C0EB0", VA = "0x44C0EB0")]
	public Ucs4Encoding()
	{
	}
}
