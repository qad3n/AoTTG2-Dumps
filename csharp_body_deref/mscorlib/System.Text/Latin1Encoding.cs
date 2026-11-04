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
[Token(Token = "0x20002B2")]
internal class Latin1Encoding : System.Text.EncodingNLS, ISerializable
{
	[Token(Token = "0x4000BA9")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly System.Text.Latin1Encoding s_default;

	[Token(Token = "0x4000BAA")]
	[FieldOffset(Offset = "0x8")]
	private static readonly char[] arrayCharBestFit;

	[Token(Token = "0x600164D")]
	[Address(RVA = "0x197CAD0", Offset = "0x197B0D0", VA = "0x18197CAD0")]
	public Latin1Encoding()
	{
	}

	[Token(Token = "0x600164E")]
	[Address(RVA = "0x197CA80", Offset = "0x197B080", VA = "0x18197CA80")]
	internal Latin1Encoding(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600164F")]
	[Address(RVA = "0x197C8C0", Offset = "0x197AEC0", VA = "0x18197C8C0", Slot = "39")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001650")]
	[Address(RVA = "0x197BF10", Offset = "0x197A510", VA = "0x18197BF10", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int charCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001651")]
	[Address(RVA = "0x197C160", Offset = "0x197A760", VA = "0x18197C160", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001652")]
	[Address(RVA = "0x5691B0", Offset = "0x5677B0", VA = "0x1805691B0", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001653")]
	[Address(RVA = "0x197C5C0", Offset = "0x197ABC0", VA = "0x18197C5C0", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001654")]
	[Address(RVA = "0x197C640", Offset = "0x197AC40", VA = "0x18197C640", Slot = "32")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001655")]
	[Address(RVA = "0x197C780", Offset = "0x197AD80", VA = "0x18197C780", Slot = "33")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001656")]
	[Address(RVA = "0x197BEC0", Offset = "0x197A4C0", VA = "0x18197BEC0", Slot = "36")]
	internal override char[] GetBestFitUnicodeToBytesData()
	{
		return null;
	}
}
