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
		[Address(RVA = "0x47FE100", Offset = "0x47FE100", VA = "0x47FE100", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FA")]
	public override int CodePage
	{
		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x47FE230", Offset = "0x47FE230", VA = "0x47FE230", Slot = "30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002FB")]
	internal static Encoding UCS4_Littleendian
	{
		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x47FE250", Offset = "0x47FE250", VA = "0x47FE250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FC")]
	internal static Encoding UCS4_Bigendian
	{
		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x47FE340", Offset = "0x47FE340", VA = "0x47FE340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FD")]
	internal static Encoding UCS4_2143
	{
		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x47FE430", Offset = "0x47FE430", VA = "0x47FE430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FE")]
	internal static Encoding UCS4_3412
	{
		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x47FE520", Offset = "0x47FE520", VA = "0x47FE520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x47FE120", Offset = "0x47FE120", VA = "0x47FE120", Slot = "31")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x47FE130", Offset = "0x47FE130", VA = "0x47FE130", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x47FE180", Offset = "0x47FE180", VA = "0x47FE180", Slot = "18")]
	public override byte[] GetBytes(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x47FE190", Offset = "0x47FE190", VA = "0x47FE190", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x47FE1A0", Offset = "0x47FE1A0", VA = "0x47FE1A0", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x47FE1B0", Offset = "0x47FE1B0", VA = "0x47FE1B0", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x47FE1E0", Offset = "0x47FE1E0", VA = "0x47FE1E0", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x47FE210", Offset = "0x47FE210", VA = "0x47FE210", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x47FE240", Offset = "0x47FE240", VA = "0x47FE240", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x47FE610", Offset = "0x47FE610", VA = "0x47FE610")]
	public Ucs4Encoding()
	{
	}
}
