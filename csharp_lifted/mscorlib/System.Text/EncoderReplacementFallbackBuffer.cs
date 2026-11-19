// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderReplacementFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000287")]
public sealed class EncoderReplacementFallbackBuffer : EncoderFallbackBuffer
{
	[Token(Token = "0x4000B02")]
	[FieldOffset(Offset = "0x30")]
	private string _strDefault;

	[Token(Token = "0x4000B03")]
	[FieldOffset(Offset = "0x38")]
	private int _fallbackCount;

	[Token(Token = "0x4000B04")]
	[FieldOffset(Offset = "0x3C")]
	private int _fallbackIndex;

	[Token(Token = "0x17000232")]
	public override int Remaining
	{
		[Token(Token = "0x600160D")]
		[Address(RVA = "0x530B2D0", Offset = "0x530A2D0", VA = "0x530B2D0", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001608")]
	[Address(RVA = "0x530AD90", Offset = "0x5309D90", VA = "0x530AD90")]
	public EncoderReplacementFallbackBuffer(EncoderReplacementFallback fallback)
	{
	}

	[Token(Token = "0x6001609")]
	[Address(RVA = "0x530AE90", Offset = "0x5309E90", VA = "0x530AE90", Slot = "4")]
	public override bool Fallback(char charUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600160A")]
	[Address(RVA = "0x530B020", Offset = "0x530A020", VA = "0x530B020", Slot = "5")]
	public override bool Fallback(char charUnknownHigh, char charUnknownLow, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600160B")]
	[Address(RVA = "0x530B270", Offset = "0x530A270", VA = "0x530B270", Slot = "6")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x600160C")]
	[Address(RVA = "0x530B2B0", Offset = "0x530A2B0", VA = "0x530B2B0", Slot = "7")]
	public override bool MovePrevious()
	{
		return default(bool);
	}

	[Token(Token = "0x600160E")]
	[Address(RVA = "0x530B2E0", Offset = "0x530A2E0", VA = "0x530B2E0", Slot = "9")]
	public override void Reset()
	{
	}
}
