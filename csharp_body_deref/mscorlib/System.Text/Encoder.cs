using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000275")]
public abstract class Encoder
{
	[Token(Token = "0x4000B3F")]
	[FieldOffset(Offset = "0x10")]
	internal EncoderFallback _fallback;

	[Token(Token = "0x4000B40")]
	[FieldOffset(Offset = "0x18")]
	internal EncoderFallbackBuffer _fallbackBuffer;

	[Token(Token = "0x17000220")]
	public EncoderFallback Fallback
	{
		[Token(Token = "0x6001578")]
		[Address(RVA = "0x506DD50", Offset = "0x506DD50", VA = "0x506DD50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000221")]
	public EncoderFallbackBuffer FallbackBuffer
	{
		[Token(Token = "0x6001579")]
		[Address(RVA = "0x5069F90", Offset = "0x5069F90", VA = "0x5069F90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000222")]
	internal bool InternalHasFallbackBuffer
	{
		[Token(Token = "0x600157A")]
		[Address(RVA = "0x5069F80", Offset = "0x5069F80", VA = "0x5069F80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001577")]
	[Address(RVA = "0x506DD40", Offset = "0x506DD40", VA = "0x506DD40")]
	protected Encoder()
	{
	}

	[Token(Token = "0x600157B")]
	[Address(RVA = "0x506DD60", Offset = "0x506DD60", VA = "0x506DD60", Slot = "4")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x600157C")]
	public abstract int GetByteCount(char[] chars, int index, int count, bool flush);

	[Token(Token = "0x600157D")]
	[Address(RVA = "0x506DE30", Offset = "0x506DE30", VA = "0x506DE30", Slot = "6")]
	[CLSCompliant(false)]
	public unsafe virtual int GetByteCount(char* chars, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600157E")]
	public abstract int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, bool flush);

	[Token(Token = "0x600157F")]
	[Address(RVA = "0x506DF80", Offset = "0x506DF80", VA = "0x506DF80", Slot = "8")]
	[CLSCompliant(false)]
	public unsafe virtual int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001580")]
	[Address(RVA = "0x506E190", Offset = "0x506E190", VA = "0x506E190", Slot = "9")]
	public virtual void Convert(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}

	[Token(Token = "0x6001581")]
	[Address(RVA = "0x506E490", Offset = "0x506E490", VA = "0x506E490", Slot = "10")]
	[CLSCompliant(false)]
	public unsafe virtual void Convert(char* chars, int charCount, byte* bytes, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}
}
