// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderReplacementFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x20002A4")]
public sealed class DecoderReplacementFallbackBuffer : DecoderFallbackBuffer
{
	[Token(Token = "0x4000B85")]
	[FieldOffset(Offset = "0x20")]
	private string _strDefault;

	[Token(Token = "0x4000B86")]
	[FieldOffset(Offset = "0x28")]
	private int _fallbackCount;

	[Token(Token = "0x4000B87")]
	[FieldOffset(Offset = "0x2C")]
	private int _fallbackIndex;

	[Token(Token = "0x17000221")]
	public override int Remaining
	{
		[Token(Token = "0x60015E0")]
		[Address(RVA = "0x1976B60", Offset = "0x1975160", VA = "0x181976B60", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015DD")]
	[Address(RVA = "0x1976B10", Offset = "0x1975110", VA = "0x181976B10")]
	public DecoderReplacementFallbackBuffer(DecoderReplacementFallback fallback)
	{
	}

	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x1976A20", Offset = "0x1975020", VA = "0x181976A20", Slot = "4")]
	public override bool Fallback(byte[] bytesUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DF")]
	[Address(RVA = "0x1976A70", Offset = "0x1975070", VA = "0x181976A70", Slot = "5")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x60015E1")]
	[Address(RVA = "0x1976AF0", Offset = "0x19750F0", VA = "0x181976AF0", Slot = "7")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x1976AD0", Offset = "0x19750D0", VA = "0x181976AD0", Slot = "9")]
	internal unsafe override int InternalFallback(byte[] bytes, byte* pBytes)
	{
		return default(int);
	}
}
