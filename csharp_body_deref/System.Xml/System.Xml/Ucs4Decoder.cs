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
	[Address(RVA = "0x6101150", Offset = "0x6100150", VA = "0x6101150", Slot = "5")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD3")]
	internal abstract int GetFullChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex);

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x6101170", Offset = "0x6100170", VA = "0x6101170", Slot = "8")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x6101330", Offset = "0x6100330", VA = "0x6101330", Slot = "12")]
	public override void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x6101600", Offset = "0x6100600", VA = "0x6101600")]
	internal void Ucs4ToUTF16(uint code, char[] chars, int charIndex)
	{
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x6101660", Offset = "0x6100660", VA = "0x6101660")]
	protected Ucs4Decoder()
	{
	}
}
