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
		[Address(RVA = "0x3D53870", Offset = "0x3D53870", VA = "0x3D53870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000221")]
	public EncoderFallbackBuffer FallbackBuffer
	{
		[Token(Token = "0x6001579")]
		[Address(RVA = "0x3D4FAB0", Offset = "0x3D4FAB0", VA = "0x3D4FAB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000222")]
	internal bool InternalHasFallbackBuffer
	{
		[Token(Token = "0x600157A")]
		[Address(RVA = "0x3D4FAA0", Offset = "0x3D4FAA0", VA = "0x3D4FAA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001577")]
	[Address(RVA = "0x3D53860", Offset = "0x3D53860", VA = "0x3D53860")]
	protected Encoder()
	{
	}

	[Token(Token = "0x600157B")]
	[Address(RVA = "0x3D53880", Offset = "0x3D53880", VA = "0x3D53880", Slot = "4")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x600157C")]
	public abstract int GetByteCount(char[] chars, int index, int count, bool flush);

	[Token(Token = "0x600157D")]
	[Address(RVA = "0x3D53950", Offset = "0x3D53950", VA = "0x3D53950", Slot = "6")]
	[CLSCompliant(false)]
	public unsafe virtual int GetByteCount(char* chars, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600157E")]
	public abstract int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, bool flush);

	[Token(Token = "0x600157F")]
	[Address(RVA = "0x3D53AA0", Offset = "0x3D53AA0", VA = "0x3D53AA0", Slot = "8")]
	[CLSCompliant(false)]
	public unsafe virtual int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001580")]
	[Address(RVA = "0x3D53CB0", Offset = "0x3D53CB0", VA = "0x3D53CB0", Slot = "9")]
	public virtual void Convert(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}

	[Token(Token = "0x6001581")]
	[Address(RVA = "0x3D53FB0", Offset = "0x3D53FB0", VA = "0x3D53FB0", Slot = "10")]
	[CLSCompliant(false)]
	public unsafe virtual void Convert(char* chars, int charCount, byte* bytes, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}
}
