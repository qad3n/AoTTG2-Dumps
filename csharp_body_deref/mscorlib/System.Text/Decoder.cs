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
[Token(Token = "0x200026A")]
public abstract class Decoder
{
	[Token(Token = "0x4000B27")]
	[FieldOffset(Offset = "0x10")]
	internal DecoderFallback _fallback;

	[Token(Token = "0x4000B28")]
	[FieldOffset(Offset = "0x18")]
	internal DecoderFallbackBuffer _fallbackBuffer;

	[Token(Token = "0x1700020F")]
	public DecoderFallback Fallback
	{
		[Token(Token = "0x6001525")]
		[Address(RVA = "0x3D50D60", Offset = "0x3D50D60", VA = "0x3D50D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000210")]
	public DecoderFallbackBuffer FallbackBuffer
	{
		[Token(Token = "0x6001526")]
		[Address(RVA = "0x3D503E0", Offset = "0x3D503E0", VA = "0x3D503E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000211")]
	internal bool InternalHasFallbackBuffer
	{
		[Token(Token = "0x6001527")]
		[Address(RVA = "0x3D50D70", Offset = "0x3D50D70", VA = "0x3D50D70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001524")]
	[Address(RVA = "0x3D50D50", Offset = "0x3D50D50", VA = "0x3D50D50")]
	protected Decoder()
	{
	}

	[Token(Token = "0x6001528")]
	[Address(RVA = "0x3D50D80", Offset = "0x3D50D80", VA = "0x3D50D80", Slot = "4")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6001529")]
	public abstract int GetCharCount(byte[] bytes, int index, int count);

	[Token(Token = "0x600152A")]
	[Address(RVA = "0x3D50EE0", Offset = "0x3D50EE0", VA = "0x3D50EE0", Slot = "6")]
	public virtual int GetCharCount(byte[] bytes, int index, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600152B")]
	[Address(RVA = "0x3D50F00", Offset = "0x3D50F00", VA = "0x3D50F00", Slot = "7")]
	[CLSCompliant(false)]
	public unsafe virtual int GetCharCount(byte* bytes, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600152C")]
	public abstract int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex);

	[Token(Token = "0x600152D")]
	[Address(RVA = "0x3D51060", Offset = "0x3D51060", VA = "0x3D51060", Slot = "9")]
	public virtual int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600152E")]
	[Address(RVA = "0x3D51080", Offset = "0x3D51080", VA = "0x3D51080", Slot = "10")]
	[CLSCompliant(false)]
	public unsafe virtual int GetChars(byte* bytes, int byteCount, char* chars, int charCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600152F")]
	[Address(RVA = "0x3D51290", Offset = "0x3D51290", VA = "0x3D51290", Slot = "11")]
	public virtual int GetChars(ReadOnlySpan<byte> bytes, Span<char> chars, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001530")]
	[Address(RVA = "0x3D51370", Offset = "0x3D51370", VA = "0x3D51370", Slot = "12")]
	public virtual void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x6001531")]
	[Address(RVA = "0x3D51670", Offset = "0x3D51670", VA = "0x3D51670", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe virtual void Convert(byte* bytes, int byteCount, char* chars, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}
}
