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
		[Address(RVA = "0x1B53230", Offset = "0x1B51830", VA = "0x181B53230", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FA")]
	public override int CodePage
	{
		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "29")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002FB")]
	internal static Encoding UCS4_Littleendian
	{
		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x27467E0", Offset = "0x2744DE0", VA = "0x1827467E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FC")]
	internal static Encoding UCS4_Bigendian
	{
		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x2746710", Offset = "0x2744D10", VA = "0x182746710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FD")]
	internal static Encoding UCS4_2143
	{
		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x2746570", Offset = "0x2744B70", VA = "0x182746570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FE")]
	internal static Encoding UCS4_3412
	{
		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x2746640", Offset = "0x2744C40", VA = "0x182746640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "30")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x2746480", Offset = "0x2744A80", VA = "0x182746480", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "18")]
	public override byte[] GetBytes(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "32")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x27464F0", Offset = "0x2744AF0", VA = "0x1827464F0", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x2746520", Offset = "0x2744B20", VA = "0x182746520", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x2746550", Offset = "0x2744B50", VA = "0x182746550", Slot = "33")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "31")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x2746560", Offset = "0x2744B60", VA = "0x182746560")]
	public Ucs4Encoding()
	{
	}
}
