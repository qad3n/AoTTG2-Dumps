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
[Token(Token = "0x2000282")]
internal class Latin1Encoding : System.Text.EncodingNLS, ISerializable
{
	[Token(Token = "0x4000B61")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly System.Text.Latin1Encoding s_default;

	[Token(Token = "0x4000B62")]
	[FieldOffset(Offset = "0x8")]
	private static readonly char[] arrayCharBestFit;

	[Token(Token = "0x60015E1")]
	[Address(RVA = "0x3B018F0", Offset = "0x3B018F0", VA = "0x3B018F0")]
	public Latin1Encoding()
	{
	}

	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x3B01900", Offset = "0x3B01900", VA = "0x3B01900")]
	internal Latin1Encoding(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x3B01940", Offset = "0x3B01940", VA = "0x3B01940", Slot = "40")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x3B01A10", Offset = "0x3B01A10", VA = "0x3B01A10", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int charCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x60015E5")]
	[Address(RVA = "0x3B01DC0", Offset = "0x3B01DC0", VA = "0x3B01DC0", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x60015E6")]
	[Address(RVA = "0x3B02290", Offset = "0x3B02290", VA = "0x3B02290", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x60015E7")]
	[Address(RVA = "0x3B022A0", Offset = "0x3B022A0", VA = "0x3B022A0", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x60015E8")]
	[Address(RVA = "0x3B02360", Offset = "0x3B02360", VA = "0x3B02360", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60015E9")]
	[Address(RVA = "0x3B02450", Offset = "0x3B02450", VA = "0x3B02450", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60015EA")]
	[Address(RVA = "0x3B02540", Offset = "0x3B02540", VA = "0x3B02540", Slot = "37")]
	internal override char[] GetBestFitUnicodeToBytesData()
	{
		return null;
	}
}
