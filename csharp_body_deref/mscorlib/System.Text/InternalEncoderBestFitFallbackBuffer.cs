// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.InternalEncoderBestFitFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x20002A7")]
internal sealed class InternalEncoderBestFitFallbackBuffer : EncoderFallbackBuffer
{
	[Token(Token = "0x4000B8C")]
	[FieldOffset(Offset = "0x30")]
	private char _cBestFit;

	[Token(Token = "0x4000B8D")]
	[FieldOffset(Offset = "0x38")]
	private System.Text.InternalEncoderBestFitFallback _oFallback;

	[Token(Token = "0x4000B8E")]
	[FieldOffset(Offset = "0x40")]
	private int _iCount;

	[Token(Token = "0x4000B8F")]
	[FieldOffset(Offset = "0x44")]
	private int _iSize;

	[Token(Token = "0x4000B90")]
	[FieldOffset(Offset = "0x0")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x17000226")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x60015F3")]
		[Address(RVA = "0x197BCC0", Offset = "0x197A2C0", VA = "0x18197BCC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000227")]
	public override int Remaining
	{
		[Token(Token = "0x60015F9")]
		[Address(RVA = "0x197BD60", Offset = "0x197A360", VA = "0x18197BD60", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015F4")]
	[Address(RVA = "0x197BB00", Offset = "0x197A100", VA = "0x18197BB00")]
	public InternalEncoderBestFitFallbackBuffer(System.Text.InternalEncoderBestFitFallback fallback)
	{
	}

	[Token(Token = "0x60015F5")]
	[Address(RVA = "0x197B670", Offset = "0x1979C70", VA = "0x18197B670", Slot = "4")]
	public override bool Fallback(char charUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60015F6")]
	[Address(RVA = "0x197B790", Offset = "0x1979D90", VA = "0x18197B790", Slot = "5")]
	public override bool Fallback(char charUnknownHigh, char charUnknownLow, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60015F7")]
	[Address(RVA = "0x197B970", Offset = "0x1979F70", VA = "0x18197B970", Slot = "6")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x60015F8")]
	[Address(RVA = "0x197B9A0", Offset = "0x1979FA0", VA = "0x18197B9A0", Slot = "7")]
	public override bool MovePrevious()
	{
		return default(bool);
	}

	[Token(Token = "0x60015FA")]
	[Address(RVA = "0x197B9C0", Offset = "0x1979FC0", VA = "0x18197B9C0", Slot = "9")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60015FB")]
	[Address(RVA = "0x197B9E0", Offset = "0x1979FE0", VA = "0x18197B9E0")]
	private char TryBestFit(char cUnknown)
	{
		return default(char);
	}
}
