// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.InternalDecoderBestFitFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200029C")]
internal sealed class InternalDecoderBestFitFallbackBuffer : DecoderFallbackBuffer
{
	[Token(Token = "0x4000B75")]
	[FieldOffset(Offset = "0x20")]
	private char _cBestFit;

	[Token(Token = "0x4000B76")]
	[FieldOffset(Offset = "0x24")]
	private int _iCount;

	[Token(Token = "0x4000B77")]
	[FieldOffset(Offset = "0x28")]
	private int _iSize;

	[Token(Token = "0x4000B78")]
	[FieldOffset(Offset = "0x30")]
	private System.Text.InternalDecoderBestFitFallback _oFallback;

	[Token(Token = "0x4000B79")]
	[FieldOffset(Offset = "0x0")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x17000215")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x60015A3")]
		[Address(RVA = "0x1BAFCA0", Offset = "0x1BAE2A0", VA = "0x181BAFCA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000216")]
	public override int Remaining
	{
		[Token(Token = "0x60015A7")]
		[Address(RVA = "0x1977080", Offset = "0x1975680", VA = "0x181977080", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015A4")]
	[Address(RVA = "0x1BAFA80", Offset = "0x1BAE080", VA = "0x181BAFA80")]
	public InternalDecoderBestFitFallbackBuffer(System.Text.InternalDecoderBestFitFallback fallback)
	{
	}

	[Token(Token = "0x60015A5")]
	[Address(RVA = "0x1BAF820", Offset = "0x1BADE20", VA = "0x181BAF820", Slot = "4")]
	public override bool Fallback(byte[] bytesUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A6")]
	[Address(RVA = "0x1BAF870", Offset = "0x1BADE70", VA = "0x181BAF870", Slot = "5")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x1977060", Offset = "0x1975660", VA = "0x181977060", Slot = "7")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "9")]
	internal unsafe override int InternalFallback(byte[] bytes, byte* pBytes)
	{
		return default(int);
	}

	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x1BAF8A0", Offset = "0x1BADEA0", VA = "0x181BAF8A0")]
	private char TryBestFit(byte[] bytesCheck)
	{
		return default(char);
	}
}
