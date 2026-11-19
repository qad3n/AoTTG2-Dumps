// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.Decoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/OpusCodec.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000272")]
public abstract class Decoder
{
	[Token(Token = "0x4000ACE")]
	[FieldOffset(Offset = "0x10")]
	internal DecoderFallback _fallback;

	[Token(Token = "0x4000ACF")]
	[FieldOffset(Offset = "0x18")]
	internal DecoderFallbackBuffer _fallbackBuffer;

	[Token(Token = "0x17000210")]
	public DecoderFallback Fallback
	{
		[Token(Token = "0x6001568")]
		[Address(RVA = "0x5551BF0", Offset = "0x5550BF0", VA = "0x5551BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000211")]
	public DecoderFallbackBuffer FallbackBuffer
	{
		[Token(Token = "0x6001569")]
		[Address(RVA = "0x5551200", Offset = "0x5550200", VA = "0x5551200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000212")]
	internal bool InternalHasFallbackBuffer
	{
		[Token(Token = "0x600156A")]
		[Address(RVA = "0x5551C00", Offset = "0x5550C00", VA = "0x5551C00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001567")]
	[Address(RVA = "0x5551BE0", Offset = "0x5550BE0", VA = "0x5551BE0")]
	protected Decoder()
	{
	}

	[Token(Token = "0x600156B")]
	[Address(RVA = "0x5551C10", Offset = "0x5550C10", VA = "0x5551C10", Slot = "4")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x600156C")]
	public abstract int GetCharCount(byte[] bytes, int index, int count);

	[Token(Token = "0x600156D")]
	[Address(RVA = "0x5551D70", Offset = "0x5550D70", VA = "0x5551D70", Slot = "6")]
	public virtual int GetCharCount(byte[] bytes, int index, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600156E")]
	[Address(RVA = "0x5551D90", Offset = "0x5550D90", VA = "0x5551D90", Slot = "7")]
	[CLSCompliant(false)]
	public unsafe virtual int GetCharCount(byte* bytes, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600156F")]
	public abstract int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex);

	[Token(Token = "0x6001570")]
	[Address(RVA = "0x5551EF0", Offset = "0x5550EF0", VA = "0x5551EF0", Slot = "9")]
	public virtual int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001571")]
	[Address(RVA = "0x5551F10", Offset = "0x5550F10", VA = "0x5551F10", Slot = "10")]
	[CLSCompliant(false)]
	public unsafe virtual int GetChars(byte* bytes, int byteCount, char* chars, int charCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001572")]
	[Address(RVA = "0x5552120", Offset = "0x5551120", VA = "0x5552120", Slot = "11")]
	public virtual int GetChars(ReadOnlySpan<byte> bytes, Span<char> chars, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001573")]
	[Address(RVA = "0x5552230", Offset = "0x5551230", VA = "0x5552230", Slot = "12")]
	public virtual void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x6001574")]
	[Address(RVA = "0x5552510", Offset = "0x5551510", VA = "0x5552510", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe virtual void Convert(byte* bytes, int byteCount, char* chars, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}
}
