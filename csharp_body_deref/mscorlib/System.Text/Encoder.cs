// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.Encoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/OpusCodec.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x20002A5")]
public abstract class Encoder
{
	[Token(Token = "0x4000B88")]
	[FieldOffset(Offset = "0x10")]
	internal EncoderFallback _fallback;

	[Token(Token = "0x4000B89")]
	[FieldOffset(Offset = "0x18")]
	internal EncoderFallbackBuffer _fallbackBuffer;

	[Token(Token = "0x17000222")]
	public EncoderFallback Fallback
	{
		[Token(Token = "0x60015E4")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000223")]
	public EncoderFallbackBuffer FallbackBuffer
	{
		[Token(Token = "0x60015E5")]
		[Address(RVA = "0x1979D30", Offset = "0x1978330", VA = "0x181979D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000224")]
	internal bool InternalHasFallbackBuffer
	{
		[Token(Token = "0x60015E6")]
		[Address(RVA = "0x1979E60", Offset = "0x1978460", VA = "0x181979E60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected Encoder()
	{
	}

	[Token(Token = "0x60015E7")]
	[Address(RVA = "0x1979C50", Offset = "0x1978250", VA = "0x181979C50", Slot = "4")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60015E8")]
	public abstract int GetByteCount(char[] chars, int index, int count, bool flush);

	[Token(Token = "0x60015E9")]
	[Address(RVA = "0x1979860", Offset = "0x1977E60", VA = "0x181979860", Slot = "6")]
	[CLSCompliant(false)]
	public unsafe virtual int GetByteCount(char* chars, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015EA")]
	public abstract int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, bool flush);

	[Token(Token = "0x60015EB")]
	[Address(RVA = "0x19799E0", Offset = "0x1977FE0", VA = "0x1819799E0", Slot = "8")]
	[CLSCompliant(false)]
	public unsafe virtual int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x1979480", Offset = "0x1977A80", VA = "0x181979480", Slot = "9")]
	public virtual void Convert(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}

	[Token(Token = "0x60015ED")]
	[Address(RVA = "0x1979220", Offset = "0x1977820", VA = "0x181979220", Slot = "10")]
	[CLSCompliant(false)]
	public unsafe virtual void Convert(char* chars, int charCount, byte* bytes, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}
}
