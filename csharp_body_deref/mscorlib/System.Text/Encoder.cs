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
[Token(Token = "0x200027D")]
public abstract class Encoder
{
	[Token(Token = "0x4000AE6")]
	[FieldOffset(Offset = "0x10")]
	internal EncoderFallback _fallback;

	[Token(Token = "0x4000AE7")]
	[FieldOffset(Offset = "0x18")]
	internal EncoderFallbackBuffer _fallbackBuffer;

	[Token(Token = "0x17000221")]
	public EncoderFallback Fallback
	{
		[Token(Token = "0x60015BB")]
		[Address(RVA = "0x5554660", Offset = "0x5553660", VA = "0x5554660")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000222")]
	public EncoderFallbackBuffer FallbackBuffer
	{
		[Token(Token = "0x60015BC")]
		[Address(RVA = "0x5550810", Offset = "0x554F810", VA = "0x5550810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000223")]
	internal bool InternalHasFallbackBuffer
	{
		[Token(Token = "0x60015BD")]
		[Address(RVA = "0x5550800", Offset = "0x554F800", VA = "0x5550800")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60015BA")]
	[Address(RVA = "0x5554650", Offset = "0x5553650", VA = "0x5554650")]
	protected Encoder()
	{
	}

	[Token(Token = "0x60015BE")]
	[Address(RVA = "0x5554670", Offset = "0x5553670", VA = "0x5554670", Slot = "4")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60015BF")]
	public abstract int GetByteCount(char[] chars, int index, int count, bool flush);

	[Token(Token = "0x60015C0")]
	[Address(RVA = "0x5554740", Offset = "0x5553740", VA = "0x5554740", Slot = "6")]
	[CLSCompliant(false)]
	public unsafe virtual int GetByteCount(char* chars, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015C1")]
	public abstract int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, bool flush);

	[Token(Token = "0x60015C2")]
	[Address(RVA = "0x55548A0", Offset = "0x55538A0", VA = "0x55548A0", Slot = "8")]
	[CLSCompliant(false)]
	public unsafe virtual int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015C3")]
	[Address(RVA = "0x5554AB0", Offset = "0x5553AB0", VA = "0x5554AB0", Slot = "9")]
	public virtual void Convert(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}

	[Token(Token = "0x60015C4")]
	[Address(RVA = "0x5554D90", Offset = "0x5553D90", VA = "0x5554D90", Slot = "10")]
	[CLSCompliant(false)]
	public unsafe virtual void Convert(char* chars, int charCount, byte* bytes, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}
}
