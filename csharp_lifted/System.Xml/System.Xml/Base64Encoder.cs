// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Base64Encoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000008")]
internal abstract class Base64Encoder
{
	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x10")]
	private byte[] leftOverBytes;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x18")]
	private int leftOverBytesCount;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x20")]
	private char[] charsLine;

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x5F8A900", Offset = "0x5F89900", VA = "0x5F8A900")]
	internal Base64Encoder()
	{
	}

	[Token(Token = "0x6000009")]
	internal abstract void WriteChars(char[] chars, int index, int count);

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x5F8A960", Offset = "0x5F89960", VA = "0x5F8A960")]
	internal void Encode(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x5F8ACC0", Offset = "0x5F89CC0", VA = "0x5F8ACC0")]
	internal void Flush()
	{
	}
}
