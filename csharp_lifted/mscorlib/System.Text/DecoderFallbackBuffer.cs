// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000279")]
public abstract class DecoderFallbackBuffer
{
	[Token(Token = "0x4000ADC")]
	[FieldOffset(Offset = "0x10")]
	internal unsafe byte* byteStart;

	[Token(Token = "0x4000ADD")]
	[FieldOffset(Offset = "0x18")]
	internal unsafe char* charEnd;

	[Token(Token = "0x1700021B")]
	public abstract int Remaining
	{
		[Token(Token = "0x6001596")]
		get;
	}

	[Token(Token = "0x6001594")]
	public abstract bool Fallback(byte[] bytesUnknown, int index);

	[Token(Token = "0x6001595")]
	public abstract char GetNextChar();

	[Token(Token = "0x6001597")]
	[Address(RVA = "0x5553100", Offset = "0x5552100", VA = "0x5553100", Slot = "7")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6001598")]
	[Address(RVA = "0x55517A0", Offset = "0x55507A0", VA = "0x55517A0")]
	internal void InternalReset()
	{
	}

	[Token(Token = "0x6001599")]
	[Address(RVA = "0x5551250", Offset = "0x5550250", VA = "0x5551250")]
	internal unsafe void InternalInitialize(byte* byteStart, char* charEnd)
	{
	}

	[Token(Token = "0x600159A")]
	[Address(RVA = "0x5553130", Offset = "0x5552130", VA = "0x5553130", Slot = "8")]
	internal unsafe virtual bool InternalFallback(byte[] bytes, byte* pBytes, ref char* chars)
	{
		return default(bool);
	}

	[Token(Token = "0x600159B")]
	[Address(RVA = "0x55532B0", Offset = "0x55522B0", VA = "0x55532B0", Slot = "9")]
	internal unsafe virtual int InternalFallback(byte[] bytes, byte* pBytes)
	{
		return default(int);
	}

	[Token(Token = "0x600159C")]
	[Address(RVA = "0x5553400", Offset = "0x5552400", VA = "0x5553400")]
	internal void ThrowLastBytesRecursive(byte[] bytesUnknown)
	{
	}

	[Token(Token = "0x600159D")]
	[Address(RVA = "0x5552AE0", Offset = "0x5551AE0", VA = "0x5552AE0")]
	protected DecoderFallbackBuffer()
	{
	}
}
