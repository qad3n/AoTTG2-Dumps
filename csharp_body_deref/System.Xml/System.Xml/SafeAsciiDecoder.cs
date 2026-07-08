using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000DB")]
internal class SafeAsciiDecoder : Decoder
{
	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x44C0870", Offset = "0x44C0870", VA = "0x44C0870")]
	public SafeAsciiDecoder()
	{
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x44C0880", Offset = "0x44C0880", VA = "0x44C0880", Slot = "5")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x44C0890", Offset = "0x44C0890", VA = "0x44C0890", Slot = "8")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x44C0920", Offset = "0x44C0920", VA = "0x44C0920", Slot = "12")]
	public override void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}
}
