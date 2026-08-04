// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderExceptionFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000279")]
public sealed class EncoderExceptionFallbackBuffer : EncoderFallbackBuffer
{
	[Token(Token = "0x17000227")]
	public override int Remaining
	{
		[Token(Token = "0x600159A")]
		[Address(RVA = "0x3AFEC40", Offset = "0x3AFEC40", VA = "0x3AFEC40", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001595")]
	[Address(RVA = "0x3AFE710", Offset = "0x3AFE710", VA = "0x3AFE710")]
	public EncoderExceptionFallbackBuffer()
	{
	}

	[Token(Token = "0x6001596")]
	[Address(RVA = "0x3AFE780", Offset = "0x3AFE780", VA = "0x3AFE780", Slot = "4")]
	public override bool Fallback(char charUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001597")]
	[Address(RVA = "0x3AFE850", Offset = "0x3AFE850", VA = "0x3AFE850", Slot = "5")]
	public override bool Fallback(char charUnknownHigh, char charUnknownLow, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001598")]
	[Address(RVA = "0x3AFEC20", Offset = "0x3AFEC20", VA = "0x3AFEC20", Slot = "6")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x6001599")]
	[Address(RVA = "0x3AFEC30", Offset = "0x3AFEC30", VA = "0x3AFEC30", Slot = "7")]
	public override bool MovePrevious()
	{
		return default(bool);
	}
}
