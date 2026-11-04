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
[Token(Token = "0x200029A")]
public abstract class Decoder
{
	[Token(Token = "0x4000B70")]
	[FieldOffset(Offset = "0x10")]
	internal DecoderFallback _fallback;

	[Token(Token = "0x4000B71")]
	[FieldOffset(Offset = "0x18")]
	internal DecoderFallbackBuffer _fallbackBuffer;

	[Token(Token = "0x17000211")]
	public DecoderFallback Fallback
	{
		[Token(Token = "0x6001591")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000212")]
	public DecoderFallbackBuffer FallbackBuffer
	{
		[Token(Token = "0x6001592")]
		[Address(RVA = "0x1BAF350", Offset = "0x1BAD950", VA = "0x181BAF350")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000213")]
	internal bool InternalHasFallbackBuffer
	{
		[Token(Token = "0x6001593")]
		[Address(RVA = "0x1979E60", Offset = "0x1978460", VA = "0x181979E60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001590")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected Decoder()
	{
	}

	[Token(Token = "0x6001594")]
	[Address(RVA = "0x1BAF220", Offset = "0x1BAD820", VA = "0x181BAF220", Slot = "4")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6001595")]
	public abstract int GetCharCount(byte[] bytes, int index, int count);

	[Token(Token = "0x6001596")]
	[Address(RVA = "0x1BAEEC0", Offset = "0x1BAD4C0", VA = "0x181BAEEC0", Slot = "6")]
	public virtual int GetCharCount(byte[] bytes, int index, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001597")]
	[Address(RVA = "0x1BAED30", Offset = "0x1BAD330", VA = "0x181BAED30", Slot = "7")]
	[CLSCompliant(false)]
	public unsafe virtual int GetCharCount(byte* bytes, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001598")]
	public abstract int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex);

	[Token(Token = "0x6001599")]
	[Address(RVA = "0x1BAEEE0", Offset = "0x1BAD4E0", VA = "0x181BAEEE0", Slot = "9")]
	public virtual int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600159A")]
	[Address(RVA = "0x1BAEF00", Offset = "0x1BAD500", VA = "0x181BAEF00", Slot = "10")]
	[CLSCompliant(false)]
	public unsafe virtual int GetChars(byte* bytes, int byteCount, char* chars, int charCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600159B")]
	[Address(RVA = "0x1BAF140", Offset = "0x1BAD740", VA = "0x181BAF140", Slot = "11")]
	public virtual int GetChars(ReadOnlySpan<byte> bytes, Span<char> chars, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600159C")]
	[Address(RVA = "0x1BAE6F0", Offset = "0x1BACCF0", VA = "0x181BAE6F0", Slot = "12")]
	public virtual void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x600159D")]
	[Address(RVA = "0x1BAEAD0", Offset = "0x1BAD0D0", VA = "0x181BAEAD0", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe virtual void Convert(byte* bytes, int byteCount, char* chars, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}
}
