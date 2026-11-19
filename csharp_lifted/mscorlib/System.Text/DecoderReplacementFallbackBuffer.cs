// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderReplacementFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200027C")]
public sealed class DecoderReplacementFallbackBuffer : DecoderFallbackBuffer
{
	[Token(Token = "0x4000AE3")]
	[FieldOffset(Offset = "0x20")]
	private string _strDefault;

	[Token(Token = "0x4000AE4")]
	[FieldOffset(Offset = "0x28")]
	private int _fallbackCount;

	[Token(Token = "0x4000AE5")]
	[FieldOffset(Offset = "0x2C")]
	private int _fallbackIndex;

	[Token(Token = "0x17000220")]
	public override int Remaining
	{
		[Token(Token = "0x60015B7")]
		[Address(RVA = "0x5554600", Offset = "0x5553600", VA = "0x5554600", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x5554490", Offset = "0x5553490", VA = "0x5554490")]
	public DecoderReplacementFallbackBuffer(DecoderReplacementFallback fallback)
	{
	}

	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x5554580", Offset = "0x5553580", VA = "0x5554580", Slot = "4")]
	public override bool Fallback(byte[] bytesUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60015B6")]
	[Address(RVA = "0x55545C0", Offset = "0x55535C0", VA = "0x55545C0", Slot = "5")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x60015B8")]
	[Address(RVA = "0x5554610", Offset = "0x5553610", VA = "0x5554610", Slot = "7")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60015B9")]
	[Address(RVA = "0x5554630", Offset = "0x5553630", VA = "0x5554630", Slot = "9")]
	internal unsafe override int InternalFallback(byte[] bytes, byte* pBytes)
	{
		return default(int);
	}
}
