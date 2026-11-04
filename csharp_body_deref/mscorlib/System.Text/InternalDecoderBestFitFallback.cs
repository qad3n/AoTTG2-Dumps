// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.InternalDecoderBestFitFallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x200029B")]
internal sealed class InternalDecoderBestFitFallback : DecoderFallback
{
	[Token(Token = "0x4000B72")]
	[FieldOffset(Offset = "0x10")]
	internal Encoding _encoding;

	[Token(Token = "0x4000B73")]
	[FieldOffset(Offset = "0x18")]
	internal char[] _arrayBestFit;

	[Token(Token = "0x4000B74")]
	[FieldOffset(Offset = "0x20")]
	internal char _cReplacement;

	[Token(Token = "0x17000214")]
	public override int MaxCharCount
	{
		[Token(Token = "0x60015A0")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600159E")]
	[Address(RVA = "0x1BAFE50", Offset = "0x1BAE450", VA = "0x181BAFE50")]
	internal InternalDecoderBestFitFallback(Encoding encoding)
	{
	}

	[Token(Token = "0x600159F")]
	[Address(RVA = "0x1BAFD40", Offset = "0x1BAE340", VA = "0x181BAFD40", Slot = "4")]
	public override DecoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x60015A1")]
	[Address(RVA = "0x1BAFDA0", Offset = "0x1BAE3A0", VA = "0x181BAFDA0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A2")]
	[Address(RVA = "0x197BE90", Offset = "0x197A490", VA = "0x18197BE90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
