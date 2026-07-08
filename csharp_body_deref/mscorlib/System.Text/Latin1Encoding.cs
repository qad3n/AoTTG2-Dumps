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
	[Address(RVA = "0x4E1BDD0", Offset = "0x4E1BDD0", VA = "0x4E1BDD0")]
	public Latin1Encoding()
	{
	}

	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x4E1BDE0", Offset = "0x4E1BDE0", VA = "0x4E1BDE0")]
	internal Latin1Encoding(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x4E1BE20", Offset = "0x4E1BE20", VA = "0x4E1BE20", Slot = "40")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x4E1BEF0", Offset = "0x4E1BEF0", VA = "0x4E1BEF0", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int charCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x60015E5")]
	[Address(RVA = "0x4E1C2A0", Offset = "0x4E1C2A0", VA = "0x4E1C2A0", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x60015E6")]
	[Address(RVA = "0x4E1C770", Offset = "0x4E1C770", VA = "0x4E1C770", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x60015E7")]
	[Address(RVA = "0x4E1C780", Offset = "0x4E1C780", VA = "0x4E1C780", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x60015E8")]
	[Address(RVA = "0x4E1C840", Offset = "0x4E1C840", VA = "0x4E1C840", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60015E9")]
	[Address(RVA = "0x4E1C930", Offset = "0x4E1C930", VA = "0x4E1C930", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60015EA")]
	[Address(RVA = "0x4E1CA20", Offset = "0x4E1CA20", VA = "0x4E1CA20", Slot = "37")]
	internal override char[] GetBestFitUnicodeToBytesData()
	{
		return null;
	}
}
