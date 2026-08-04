// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000271")]
public abstract class DecoderFallbackBuffer
{
	[Token(Token = "0x4000B35")]
	[FieldOffset(Offset = "0x10")]
	internal unsafe byte* byteStart;

	[Token(Token = "0x4000B36")]
	[FieldOffset(Offset = "0x18")]
	internal unsafe char* charEnd;

	[Token(Token = "0x1700021A")]
	public abstract int Remaining
	{
		[Token(Token = "0x6001553")]
		get;
	}

	[Token(Token = "0x6001551")]
	public abstract bool Fallback(byte[] bytesUnknown, int index);

	[Token(Token = "0x6001552")]
	public abstract char GetNextChar();

	[Token(Token = "0x6001554")]
	[Address(RVA = "0x3D522A0", Offset = "0x3D522A0", VA = "0x3D522A0", Slot = "7")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6001555")]
	[Address(RVA = "0x3D50910", Offset = "0x3D50910", VA = "0x3D50910")]
	internal void InternalReset()
	{
	}

	[Token(Token = "0x6001556")]
	[Address(RVA = "0x3D50450", Offset = "0x3D50450", VA = "0x3D50450")]
	internal unsafe void InternalInitialize(byte* byteStart, char* charEnd)
	{
	}

	[Token(Token = "0x6001557")]
	[Address(RVA = "0x3D522D0", Offset = "0x3D522D0", VA = "0x3D522D0", Slot = "8")]
	internal unsafe virtual bool InternalFallback(byte[] bytes, byte* pBytes, ref char* chars)
	{
		return default(bool);
	}

	[Token(Token = "0x6001558")]
	[Address(RVA = "0x3D52450", Offset = "0x3D52450", VA = "0x3D52450", Slot = "9")]
	internal unsafe virtual int InternalFallback(byte[] bytes, byte* pBytes)
	{
		return default(int);
	}

	[Token(Token = "0x6001559")]
	[Address(RVA = "0x3D525A0", Offset = "0x3D525A0", VA = "0x3D525A0")]
	internal void ThrowLastBytesRecursive(byte[] bytesUnknown)
	{
	}

	[Token(Token = "0x600155A")]
	[Address(RVA = "0x3D51C90", Offset = "0x3D51C90", VA = "0x3D51C90")]
	protected DecoderFallbackBuffer()
	{
	}
}
