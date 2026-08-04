// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.InternalEncoderBestFitFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000277")]
internal sealed class InternalEncoderBestFitFallbackBuffer : EncoderFallbackBuffer
{
	[Token(Token = "0x4000B43")]
	[FieldOffset(Offset = "0x30")]
	private char _cBestFit;

	[Token(Token = "0x4000B44")]
	[FieldOffset(Offset = "0x38")]
	private System.Text.InternalEncoderBestFitFallback _oFallback;

	[Token(Token = "0x4000B45")]
	[FieldOffset(Offset = "0x40")]
	private int _iCount;

	[Token(Token = "0x4000B46")]
	[FieldOffset(Offset = "0x44")]
	private int _iSize;

	[Token(Token = "0x4000B47")]
	[FieldOffset(Offset = "0x0")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x17000224")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x6001587")]
		[Address(RVA = "0x3AFE300", Offset = "0x3AFE300", VA = "0x3AFE300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000225")]
	public override int Remaining
	{
		[Token(Token = "0x600158D")]
		[Address(RVA = "0x3AFE690", Offset = "0x3AFE690", VA = "0x3AFE690", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001588")]
	[Address(RVA = "0x3AFE010", Offset = "0x3AFE010", VA = "0x3AFE010")]
	public InternalEncoderBestFitFallbackBuffer(System.Text.InternalEncoderBestFitFallback fallback)
	{
	}

	[Token(Token = "0x6001589")]
	[Address(RVA = "0x3AFE3B0", Offset = "0x3AFE3B0", VA = "0x3AFE3B0", Slot = "4")]
	public override bool Fallback(char charUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600158A")]
	[Address(RVA = "0x3AFE4B0", Offset = "0x3AFE4B0", VA = "0x3AFE4B0", Slot = "5")]
	public override bool Fallback(char charUnknownHigh, char charUnknownLow, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600158B")]
	[Address(RVA = "0x3AFE640", Offset = "0x3AFE640", VA = "0x3AFE640", Slot = "6")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x600158C")]
	[Address(RVA = "0x3AFE670", Offset = "0x3AFE670", VA = "0x3AFE670", Slot = "7")]
	public override bool MovePrevious()
	{
		return default(bool);
	}

	[Token(Token = "0x600158E")]
	[Address(RVA = "0x3AFE6A0", Offset = "0x3AFE6A0", VA = "0x3AFE6A0", Slot = "9")]
	public override void Reset()
	{
	}

	[Token(Token = "0x600158F")]
	[Address(RVA = "0x3AFE3E0", Offset = "0x3AFE3E0", VA = "0x3AFE3E0")]
	private char TryBestFit(char cUnknown)
	{
		return default(char);
	}
}
