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
	[Address(RVA = "0x506C780", Offset = "0x506C780", VA = "0x506C780", Slot = "7")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6001555")]
	[Address(RVA = "0x506ADF0", Offset = "0x506ADF0", VA = "0x506ADF0")]
	internal void InternalReset()
	{
	}

	[Token(Token = "0x6001556")]
	[Address(RVA = "0x506A930", Offset = "0x506A930", VA = "0x506A930")]
	internal unsafe void InternalInitialize(byte* byteStart, char* charEnd)
	{
	}

	[Token(Token = "0x6001557")]
	[Address(RVA = "0x506C7B0", Offset = "0x506C7B0", VA = "0x506C7B0", Slot = "8")]
	internal unsafe virtual bool InternalFallback(byte[] bytes, byte* pBytes, ref char* chars)
	{
		return default(bool);
	}

	[Token(Token = "0x6001558")]
	[Address(RVA = "0x506C930", Offset = "0x506C930", VA = "0x506C930", Slot = "9")]
	internal unsafe virtual int InternalFallback(byte[] bytes, byte* pBytes)
	{
		return default(int);
	}

	[Token(Token = "0x6001559")]
	[Address(RVA = "0x506CA80", Offset = "0x506CA80", VA = "0x506CA80")]
	internal void ThrowLastBytesRecursive(byte[] bytesUnknown)
	{
	}

	[Token(Token = "0x600155A")]
	[Address(RVA = "0x506C170", Offset = "0x506C170", VA = "0x506C170")]
	protected DecoderFallbackBuffer()
	{
	}
}
