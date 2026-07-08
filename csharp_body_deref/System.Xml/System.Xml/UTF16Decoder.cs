using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000DA")]
internal class UTF16Decoder : Decoder
{
	[Token(Token = "0x4000582")]
	[FieldOffset(Offset = "0x20")]
	private bool bigEndian;

	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x24")]
	private int lastByte;

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x44C03F0", Offset = "0x44C03F0", VA = "0x44C03F0")]
	public UTF16Decoder(bool bigEndian)
	{
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x44C0420", Offset = "0x44C0420", VA = "0x44C0420", Slot = "5")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x44C0440", Offset = "0x44C0440", VA = "0x44C0440", Slot = "6")]
	public override int GetCharCount(byte[] bytes, int index, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x44C0520", Offset = "0x44C0520", VA = "0x44C0520", Slot = "8")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x44C06A0", Offset = "0x44C06A0", VA = "0x44C06A0", Slot = "12")]
	public override void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}
}
