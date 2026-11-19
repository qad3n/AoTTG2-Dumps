// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderExceptionFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000281")]
public sealed class EncoderExceptionFallbackBuffer : EncoderFallbackBuffer
{
	[Token(Token = "0x17000228")]
	public override int Remaining
	{
		[Token(Token = "0x60015DD")]
		[Address(RVA = "0x5309940", Offset = "0x5308940", VA = "0x5309940", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x5309400", Offset = "0x5308400", VA = "0x5309400")]
	public EncoderExceptionFallbackBuffer()
	{
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x5309480", Offset = "0x5308480", VA = "0x5309480", Slot = "4")]
	public override bool Fallback(char charUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x5309550", Offset = "0x5308550", VA = "0x5309550", Slot = "5")]
	public override bool Fallback(char charUnknownHigh, char charUnknownLow, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x5309920", Offset = "0x5308920", VA = "0x5309920", Slot = "6")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x5309930", Offset = "0x5308930", VA = "0x5309930", Slot = "7")]
	public override bool MovePrevious()
	{
		return default(bool);
	}
}
