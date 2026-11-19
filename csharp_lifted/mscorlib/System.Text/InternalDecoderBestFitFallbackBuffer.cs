// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.InternalDecoderBestFitFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000274")]
internal sealed class InternalDecoderBestFitFallbackBuffer : DecoderFallbackBuffer
{
	[Token(Token = "0x4000AD3")]
	[FieldOffset(Offset = "0x20")]
	private char _cBestFit;

	[Token(Token = "0x4000AD4")]
	[FieldOffset(Offset = "0x24")]
	private int _iCount;

	[Token(Token = "0x4000AD5")]
	[FieldOffset(Offset = "0x28")]
	private int _iSize;

	[Token(Token = "0x4000AD6")]
	[FieldOffset(Offset = "0x30")]
	private System.Text.InternalDecoderBestFitFallback _oFallback;

	[Token(Token = "0x4000AD7")]
	[FieldOffset(Offset = "0x0")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x17000214")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x600157A")]
		[Address(RVA = "0x5552A40", Offset = "0x5551A40", VA = "0x5552A40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000215")]
	public override int Remaining
	{
		[Token(Token = "0x600157E")]
		[Address(RVA = "0x5552CB0", Offset = "0x5551CB0", VA = "0x5552CB0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600157B")]
	[Address(RVA = "0x55527B0", Offset = "0x55517B0", VA = "0x55527B0")]
	public InternalDecoderBestFitFallbackBuffer(System.Text.InternalDecoderBestFitFallback fallback)
	{
	}

	[Token(Token = "0x600157C")]
	[Address(RVA = "0x5552AF0", Offset = "0x5551AF0", VA = "0x5552AF0", Slot = "4")]
	public override bool Fallback(byte[] bytesUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600157D")]
	[Address(RVA = "0x5552C90", Offset = "0x5551C90", VA = "0x5552C90", Slot = "5")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x600157F")]
	[Address(RVA = "0x5552CC0", Offset = "0x5551CC0", VA = "0x5552CC0", Slot = "7")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001580")]
	[Address(RVA = "0x5552CD0", Offset = "0x5551CD0", VA = "0x5552CD0", Slot = "9")]
	internal unsafe override int InternalFallback(byte[] bytes, byte* pBytes)
	{
		return default(int);
	}

	[Token(Token = "0x6001581")]
	[Address(RVA = "0x5552B30", Offset = "0x5551B30", VA = "0x5552B30")]
	private char TryBestFit(byte[] bytesCheck)
	{
		return default(char);
	}
}
