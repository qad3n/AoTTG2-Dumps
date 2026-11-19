// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Ucs4Encoding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x61008C0", Offset = "0x60FF8C0", VA = "0x61008C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FA")]
	public override int CodePage
	{
		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x61009E0", Offset = "0x60FF9E0", VA = "0x61009E0", Slot = "30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002FB")]
	internal static Encoding UCS4_Littleendian
	{
		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x6100A00", Offset = "0x60FFA00", VA = "0x6100A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FC")]
	internal static Encoding UCS4_Bigendian
	{
		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x6100AF0", Offset = "0x60FFAF0", VA = "0x6100AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FD")]
	internal static Encoding UCS4_2143
	{
		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x6100BE0", Offset = "0x60FFBE0", VA = "0x6100BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FE")]
	internal static Encoding UCS4_3412
	{
		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x6100CD0", Offset = "0x60FFCD0", VA = "0x6100CD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x61008E0", Offset = "0x60FF8E0", VA = "0x61008E0", Slot = "31")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x61008F0", Offset = "0x60FF8F0", VA = "0x61008F0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x6100940", Offset = "0x60FF940", VA = "0x6100940", Slot = "18")]
	public override byte[] GetBytes(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x6100950", Offset = "0x60FF950", VA = "0x6100950", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x6100960", Offset = "0x60FF960", VA = "0x6100960", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x6100970", Offset = "0x60FF970", VA = "0x6100970", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x61009A0", Offset = "0x60FF9A0", VA = "0x61009A0", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x61009D0", Offset = "0x60FF9D0", VA = "0x61009D0", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x61009F0", Offset = "0x60FF9F0", VA = "0x61009F0", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x6100DC0", Offset = "0x60FFDC0", VA = "0x6100DC0")]
	public Ucs4Encoding()
	{
	}
}
