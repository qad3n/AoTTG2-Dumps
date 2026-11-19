// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.InternalEncoderBestFitFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200027F")]
internal sealed class InternalEncoderBestFitFallbackBuffer : EncoderFallbackBuffer
{
	[Token(Token = "0x4000AEA")]
	[FieldOffset(Offset = "0x30")]
	private char _cBestFit;

	[Token(Token = "0x4000AEB")]
	[FieldOffset(Offset = "0x38")]
	private System.Text.InternalEncoderBestFitFallback _oFallback;

	[Token(Token = "0x4000AEC")]
	[FieldOffset(Offset = "0x40")]
	private int _iCount;

	[Token(Token = "0x4000AED")]
	[FieldOffset(Offset = "0x44")]
	private int _iSize;

	[Token(Token = "0x4000AEE")]
	[FieldOffset(Offset = "0x0")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x17000225")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x60015CA")]
		[Address(RVA = "0x55552B0", Offset = "0x55542B0", VA = "0x55552B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000226")]
	public override int Remaining
	{
		[Token(Token = "0x60015D0")]
		[Address(RVA = "0x5555620", Offset = "0x5554620", VA = "0x5555620", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x5555010", Offset = "0x5554010", VA = "0x5555010")]
	public InternalEncoderBestFitFallbackBuffer(System.Text.InternalEncoderBestFitFallback fallback)
	{
	}

	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x5555350", Offset = "0x5554350", VA = "0x5555350", Slot = "4")]
	public override bool Fallback(char charUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x5555450", Offset = "0x5554450", VA = "0x5555450", Slot = "5")]
	public override bool Fallback(char charUnknownHigh, char charUnknownLow, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x55555E0", Offset = "0x55545E0", VA = "0x55555E0", Slot = "6")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x60015CF")]
	[Address(RVA = "0x5555600", Offset = "0x5554600", VA = "0x5555600", Slot = "7")]
	public override bool MovePrevious()
	{
		return default(bool);
	}

	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x5555630", Offset = "0x5554630", VA = "0x5555630", Slot = "9")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x5555380", Offset = "0x5554380", VA = "0x5555380")]
	private char TryBestFit(char cUnknown)
	{
		return default(char);
	}
}
