// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.UTF16Decoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x61002E0", Offset = "0x60FF2E0", VA = "0x61002E0")]
	public UTF16Decoder(bool bigEndian)
	{
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x6100310", Offset = "0x60FF310", VA = "0x6100310", Slot = "5")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x6100330", Offset = "0x60FF330", VA = "0x6100330", Slot = "6")]
	public override int GetCharCount(byte[] bytes, int index, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x6100410", Offset = "0x60FF410", VA = "0x6100410", Slot = "8")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x61005A0", Offset = "0x60FF5A0", VA = "0x61005A0", Slot = "12")]
	public override void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}
}
