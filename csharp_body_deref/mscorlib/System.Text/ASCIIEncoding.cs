// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.ASCIIEncoding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000268")]
public class ASCIIEncoding : Encoding
{
	[Token(Token = "0x2000269")]
	internal sealed class ASCIIEncodingSealed : ASCIIEncoding
	{
		[Token(Token = "0x6001523")]
		[Address(RVA = "0x3D50D00", Offset = "0x3D50D00", VA = "0x3D50D00")]
		public ASCIIEncodingSealed()
		{
		}
	}

	[Token(Token = "0x4000B26")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly ASCIIEncodingSealed s_default;

	[Token(Token = "0x600150D")]
	[Address(RVA = "0x3D4E5D0", Offset = "0x3D4E5D0", VA = "0x3D4E5D0")]
	public ASCIIEncoding()
	{
	}

	[Token(Token = "0x600150E")]
	[Address(RVA = "0x3D4E5E0", Offset = "0x3D4E5E0", VA = "0x3D4E5E0", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x600150F")]
	[Address(RVA = "0x3D4E6E0", Offset = "0x3D4E6E0", VA = "0x3D4E6E0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001510")]
	[Address(RVA = "0x3D4E820", Offset = "0x3D4E820", VA = "0x3D4E820", Slot = "11")]
	public override int GetByteCount(string chars)
	{
		return default(int);
	}

	[Token(Token = "0x6001511")]
	[Address(RVA = "0x3D4E8B0", Offset = "0x3D4E8B0", VA = "0x3D4E8B0", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001512")]
	[Address(RVA = "0x3D4E980", Offset = "0x3D4E980", VA = "0x3D4E980", Slot = "19")]
	public override int GetBytes(string chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001513")]
	[Address(RVA = "0x3D4EBF0", Offset = "0x3D4EBF0", VA = "0x3D4EBF0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001514")]
	[Address(RVA = "0x3D4EE70", Offset = "0x3D4EE70", VA = "0x3D4EE70", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001515")]
	[Address(RVA = "0x3D4EF60", Offset = "0x3D4EF60", VA = "0x3D4EF60", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001516")]
	[Address(RVA = "0x3D4F0A0", Offset = "0x3D4F0A0", VA = "0x3D4F0A0", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001517")]
	[Address(RVA = "0x3D4F170", Offset = "0x3D4F170", VA = "0x3D4F170", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001518")]
	[Address(RVA = "0x3D4F3E0", Offset = "0x3D4F3E0", VA = "0x3D4F3E0", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001519")]
	[Address(RVA = "0x3D4F4D0", Offset = "0x3D4F4D0", VA = "0x3D4F4D0", Slot = "36")]
	public override string GetString(byte[] bytes, int byteIndex, int byteCount)
	{
		return null;
	}

	[Token(Token = "0x600151A")]
	[Address(RVA = "0x3D4F620", Offset = "0x3D4F620", VA = "0x3D4F620", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int charCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x600151B")]
	[Address(RVA = "0x3D4FB20", Offset = "0x3D4FB20", VA = "0x3D4FB20", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x600151C")]
	[Address(RVA = "0x3D50150", Offset = "0x3D50150", VA = "0x3D50150", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x600151D")]
	[Address(RVA = "0x3D50460", Offset = "0x3D50460", VA = "0x3D50460", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x600151E")]
	[Address(RVA = "0x3D50930", Offset = "0x3D50930", VA = "0x3D50930", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x600151F")]
	[Address(RVA = "0x3D50A20", Offset = "0x3D50A20", VA = "0x3D50A20", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001520")]
	[Address(RVA = "0x3D50B10", Offset = "0x3D50B10", VA = "0x3D50B10", Slot = "31")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6001521")]
	[Address(RVA = "0x3D50C00", Offset = "0x3D50C00", VA = "0x3D50C00", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}
}
