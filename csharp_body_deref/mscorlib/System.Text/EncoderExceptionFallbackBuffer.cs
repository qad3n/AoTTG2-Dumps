// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderExceptionFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x20002A9")]
public sealed class EncoderExceptionFallbackBuffer : EncoderFallbackBuffer
{
	[Token(Token = "0x17000229")]
	public override int Remaining
	{
		[Token(Token = "0x6001606")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001601")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public EncoderExceptionFallbackBuffer()
	{
	}

	[Token(Token = "0x6001602")]
	[Address(RVA = "0x1977180", Offset = "0x1975780", VA = "0x181977180", Slot = "4")]
	public override bool Fallback(char charUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001603")]
	[Address(RVA = "0x1977230", Offset = "0x1975830", VA = "0x181977230", Slot = "5")]
	public override bool Fallback(char charUnknownHigh, char charUnknownLow, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001604")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x6001605")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
	public override bool MovePrevious()
	{
		return default(bool);
	}
}
