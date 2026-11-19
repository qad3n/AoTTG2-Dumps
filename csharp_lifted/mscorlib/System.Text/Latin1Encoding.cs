// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.Latin1Encoding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x200028A")]
internal class Latin1Encoding : System.Text.EncodingNLS, ISerializable
{
	[Token(Token = "0x4000B07")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly System.Text.Latin1Encoding s_default;

	[Token(Token = "0x4000B08")]
	[FieldOffset(Offset = "0x8")]
	private static readonly char[] arrayCharBestFit;

	[Token(Token = "0x6001624")]
	[Address(RVA = "0x530C770", Offset = "0x530B770", VA = "0x530C770")]
	public Latin1Encoding()
	{
	}

	[Token(Token = "0x6001625")]
	[Address(RVA = "0x530C780", Offset = "0x530B780", VA = "0x530C780")]
	internal Latin1Encoding(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001626")]
	[Address(RVA = "0x530C7C0", Offset = "0x530B7C0", VA = "0x530C7C0", Slot = "41")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001627")]
	[Address(RVA = "0x530C890", Offset = "0x530B890", VA = "0x530C890", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int charCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001628")]
	[Address(RVA = "0x530CB60", Offset = "0x530BB60", VA = "0x530CB60", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001629")]
	[Address(RVA = "0x530D0B0", Offset = "0x530C0B0", VA = "0x530D0B0", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x600162A")]
	[Address(RVA = "0x530D0C0", Offset = "0x530C0C0", VA = "0x530D0C0", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x600162B")]
	[Address(RVA = "0x530D190", Offset = "0x530C190", VA = "0x530D190", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x600162C")]
	[Address(RVA = "0x530D280", Offset = "0x530C280", VA = "0x530D280", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x600162D")]
	[Address(RVA = "0x530D370", Offset = "0x530C370", VA = "0x530D370", Slot = "37")]
	internal override char[] GetBestFitUnicodeToBytesData()
	{
		return null;
	}
}
