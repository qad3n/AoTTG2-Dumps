// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderReplacementFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200027F")]
public sealed class EncoderReplacementFallbackBuffer : EncoderFallbackBuffer
{
	[Token(Token = "0x4000B5C")]
	[FieldOffset(Offset = "0x30")]
	private string _strDefault;

	[Token(Token = "0x4000B5D")]
	[FieldOffset(Offset = "0x38")]
	private int _fallbackCount;

	[Token(Token = "0x4000B5E")]
	[FieldOffset(Offset = "0x3C")]
	private int _fallbackIndex;

	[Token(Token = "0x17000231")]
	public override int Remaining
	{
		[Token(Token = "0x60015CA")]
		[Address(RVA = "0x3B004C0", Offset = "0x3B004C0", VA = "0x3B004C0", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x3B00050", Offset = "0x3B00050", VA = "0x3B00050")]
	public EncoderReplacementFallbackBuffer(EncoderReplacementFallback fallback)
	{
	}

	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x3B00160", Offset = "0x3B00160", VA = "0x3B00160", Slot = "4")]
	public override bool Fallback(char charUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x3B00270", Offset = "0x3B00270", VA = "0x3B00270", Slot = "5")]
	public override bool Fallback(char charUnknownHigh, char charUnknownLow, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x3B00450", Offset = "0x3B00450", VA = "0x3B00450", Slot = "6")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x3B00490", Offset = "0x3B00490", VA = "0x3B00490", Slot = "7")]
	public override bool MovePrevious()
	{
		return default(bool);
	}

	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x3B004D0", Offset = "0x3B004D0", VA = "0x3B004D0", Slot = "9")]
	public override void Reset()
	{
	}
}
