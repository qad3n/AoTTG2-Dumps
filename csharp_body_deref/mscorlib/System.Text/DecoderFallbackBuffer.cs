// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x20002A1")]
public abstract class DecoderFallbackBuffer
{
	[Token(Token = "0x4000B7E")]
	[FieldOffset(Offset = "0x10")]
	internal unsafe byte* byteStart;

	[Token(Token = "0x4000B7F")]
	[FieldOffset(Offset = "0x18")]
	internal unsafe char* charEnd;

	[Token(Token = "0x1700021C")]
	public abstract int Remaining
	{
		[Token(Token = "0x60015BF")]
		get;
	}

	[Token(Token = "0x60015BD")]
	public abstract bool Fallback(byte[] bytesUnknown, int index);

	[Token(Token = "0x60015BE")]
	public abstract char GetNextChar();

	[Token(Token = "0x60015C0")]
	[Address(RVA = "0x1BAE2D0", Offset = "0x1BAC8D0", VA = "0x181BAE2D0", Slot = "7")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60015C1")]
	[Address(RVA = "0x1BAE2B0", Offset = "0x1BAC8B0", VA = "0x181BAE2B0")]
	internal void InternalReset()
	{
	}

	[Token(Token = "0x60015C2")]
	[Address(RVA = "0x1BAE2A0", Offset = "0x1BAC8A0", VA = "0x181BAE2A0")]
	internal unsafe void InternalInitialize(byte* byteStart, char* charEnd)
	{
	}

	[Token(Token = "0x60015C3")]
	[Address(RVA = "0x1BAE090", Offset = "0x1BAC690", VA = "0x181BAE090", Slot = "8")]
	internal unsafe virtual bool InternalFallback(byte[] bytes, byte* pBytes, ref char* chars)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C4")]
	[Address(RVA = "0x1BADEA0", Offset = "0x1BAC4A0", VA = "0x181BADEA0", Slot = "9")]
	internal unsafe virtual int InternalFallback(byte[] bytes, byte* pBytes)
	{
		return default(int);
	}

	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x1BAE300", Offset = "0x1BAC900", VA = "0x181BAE300")]
	internal void ThrowLastBytesRecursive(byte[] bytesUnknown)
	{
	}

	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected DecoderFallbackBuffer()
	{
	}
}
