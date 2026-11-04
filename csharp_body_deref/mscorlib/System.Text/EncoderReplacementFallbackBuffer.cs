// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderReplacementFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x20002AF")]
public sealed class EncoderReplacementFallbackBuffer : EncoderFallbackBuffer
{
	[Token(Token = "0x4000BA4")]
	[FieldOffset(Offset = "0x30")]
	private string _strDefault;

	[Token(Token = "0x4000BA5")]
	[FieldOffset(Offset = "0x38")]
	private int _fallbackCount;

	[Token(Token = "0x4000BA6")]
	[FieldOffset(Offset = "0x3C")]
	private int _fallbackIndex;

	[Token(Token = "0x17000233")]
	public override int Remaining
	{
		[Token(Token = "0x6001636")]
		[Address(RVA = "0x1978E20", Offset = "0x1977420", VA = "0x181978E20", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001631")]
	[Address(RVA = "0x1978DC0", Offset = "0x19773C0", VA = "0x181978DC0")]
	public EncoderReplacementFallbackBuffer(EncoderReplacementFallback fallback)
	{
	}

	[Token(Token = "0x6001632")]
	[Address(RVA = "0x1978BF0", Offset = "0x19771F0", VA = "0x181978BF0", Slot = "4")]
	public override bool Fallback(char charUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001633")]
	[Address(RVA = "0x19789D0", Offset = "0x1976FD0", VA = "0x1819789D0", Slot = "5")]
	public override bool Fallback(char charUnknownHigh, char charUnknownLow, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001634")]
	[Address(RVA = "0x1978D20", Offset = "0x1977320", VA = "0x181978D20", Slot = "6")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x6001635")]
	[Address(RVA = "0x1978D80", Offset = "0x1977380", VA = "0x181978D80", Slot = "7")]
	public override bool MovePrevious()
	{
		return default(bool);
	}

	[Token(Token = "0x6001637")]
	[Address(RVA = "0x1978DA0", Offset = "0x19773A0", VA = "0x181978DA0", Slot = "9")]
	public override void Reset()
	{
	}
}
