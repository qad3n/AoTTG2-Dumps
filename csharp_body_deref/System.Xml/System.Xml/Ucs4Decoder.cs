using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000E1")]
internal abstract class Ucs4Decoder : Decoder
{
	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x20")]
	internal byte[] lastBytes;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x28")]
	internal int lastBytesCount;

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x44C1240", Offset = "0x44C1240", VA = "0x44C1240", Slot = "5")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD3")]
	internal abstract int GetFullChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex);

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x44C1260", Offset = "0x44C1260", VA = "0x44C1260", Slot = "8")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x44C1420", Offset = "0x44C1420", VA = "0x44C1420", Slot = "12")]
	public override void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x44C1650", Offset = "0x44C1650", VA = "0x44C1650")]
	internal void Ucs4ToUTF16(uint code, char[] chars, int charIndex)
	{
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x44C16B0", Offset = "0x44C16B0", VA = "0x44C16B0")]
	protected Ucs4Decoder()
	{
	}
}
