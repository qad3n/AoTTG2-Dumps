// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.SafeAsciiDecoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000DB")]
internal class SafeAsciiDecoder : Decoder
{
	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x47FDFD0", Offset = "0x47FDFD0", VA = "0x47FDFD0")]
	public SafeAsciiDecoder()
	{
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x47FDFE0", Offset = "0x47FDFE0", VA = "0x47FDFE0", Slot = "5")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x47FDFF0", Offset = "0x47FDFF0", VA = "0x47FDFF0", Slot = "8")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x47FE080", Offset = "0x47FE080", VA = "0x47FE080", Slot = "12")]
	public override void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}
}
