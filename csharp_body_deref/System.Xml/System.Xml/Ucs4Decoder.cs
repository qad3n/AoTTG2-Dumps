// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Ucs4Decoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x2745D80", Offset = "0x2744380", VA = "0x182745D80", Slot = "5")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD3")]
	internal abstract int GetFullChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex);

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x2745D90", Offset = "0x2744390", VA = "0x182745D90", Slot = "8")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x2745B70", Offset = "0x2744170", VA = "0x182745B70", Slot = "12")]
	public override void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x2745F10", Offset = "0x2744510", VA = "0x182745F10")]
	internal void Ucs4ToUTF16(uint code, char[] chars, int charIndex)
	{
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x2745360", Offset = "0x2743960", VA = "0x182745360")]
	protected Ucs4Decoder()
	{
	}
}
