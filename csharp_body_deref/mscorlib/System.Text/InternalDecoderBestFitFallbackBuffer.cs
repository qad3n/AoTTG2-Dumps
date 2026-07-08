using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200026C")]
internal sealed class InternalDecoderBestFitFallbackBuffer : DecoderFallbackBuffer
{
	[Token(Token = "0x4000B2C")]
	[FieldOffset(Offset = "0x20")]
	private char _cBestFit;

	[Token(Token = "0x4000B2D")]
	[FieldOffset(Offset = "0x24")]
	private int _iCount;

	[Token(Token = "0x4000B2E")]
	[FieldOffset(Offset = "0x28")]
	private int _iSize;

	[Token(Token = "0x4000B2F")]
	[FieldOffset(Offset = "0x30")]
	private System.Text.InternalDecoderBestFitFallback _oFallback;

	[Token(Token = "0x4000B30")]
	[FieldOffset(Offset = "0x0")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x17000213")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x6001537")]
		[Address(RVA = "0x506C0D0", Offset = "0x506C0D0", VA = "0x506C0D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000214")]
	public override int Remaining
	{
		[Token(Token = "0x600153B")]
		[Address(RVA = "0x506C330", Offset = "0x506C330", VA = "0x506C330", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001538")]
	[Address(RVA = "0x506BDF0", Offset = "0x506BDF0", VA = "0x506BDF0")]
	public InternalDecoderBestFitFallbackBuffer(System.Text.InternalDecoderBestFitFallback fallback)
	{
	}

	[Token(Token = "0x6001539")]
	[Address(RVA = "0x506C180", Offset = "0x506C180", VA = "0x506C180", Slot = "4")]
	public override bool Fallback(byte[] bytesUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600153A")]
	[Address(RVA = "0x506C300", Offset = "0x506C300", VA = "0x506C300", Slot = "5")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x600153C")]
	[Address(RVA = "0x506C340", Offset = "0x506C340", VA = "0x506C340", Slot = "7")]
	public override void Reset()
	{
	}

	[Token(Token = "0x600153D")]
	[Address(RVA = "0x506C350", Offset = "0x506C350", VA = "0x506C350", Slot = "9")]
	internal unsafe override int InternalFallback(byte[] bytes, byte* pBytes)
	{
		return default(int);
	}

	[Token(Token = "0x600153E")]
	[Address(RVA = "0x506C1C0", Offset = "0x506C1C0", VA = "0x506C1C0")]
	private char TryBestFit(byte[] bytesCheck)
	{
		return default(char);
	}
}
