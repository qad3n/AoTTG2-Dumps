// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.CharEntityEncoderFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200001D")]
internal class CharEntityEncoderFallbackBuffer : EncoderFallbackBuffer
{
	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x30")]
	private CharEntityEncoderFallback parent;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x38")]
	private string charEntity;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x40")]
	private int charEntityIndex;

	[Token(Token = "0x17000015")]
	public override int Remaining
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x5F9A6D0", Offset = "0x5F996D0", VA = "0x5F9A6D0", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x5F99FC0", Offset = "0x5F98FC0", VA = "0x5F99FC0")]
	internal CharEntityEncoderFallbackBuffer(CharEntityEncoderFallback parent)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x5F9A0E0", Offset = "0x5F990E0", VA = "0x5F9A0E0", Slot = "4")]
	public override bool Fallback(char charUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x5F9A360", Offset = "0x5F99360", VA = "0x5F9A360", Slot = "5")]
	public override bool Fallback(char charUnknownHigh, char charUnknownLow, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x5F9A670", Offset = "0x5F99670", VA = "0x5F9A670", Slot = "6")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x5F9A6B0", Offset = "0x5F996B0", VA = "0x5F9A6B0", Slot = "7")]
	public override bool MovePrevious()
	{
		return default(bool);
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x5F9A700", Offset = "0x5F99700", VA = "0x5F9A700", Slot = "9")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x5F9A660", Offset = "0x5F99660", VA = "0x5F9A660")]
	private int SurrogateCharToUtf32(char highSurrogate, char lowSurrogate)
	{
		return default(int);
	}
}
