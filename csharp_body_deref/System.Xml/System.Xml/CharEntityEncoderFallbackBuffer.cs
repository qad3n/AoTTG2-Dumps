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
		[Address(RVA = "0x43563B0", Offset = "0x43563B0", VA = "0x43563B0", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4355D00", Offset = "0x4355D00", VA = "0x4355D00")]
	internal CharEntityEncoderFallbackBuffer(CharEntityEncoderFallback parent)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4355E00", Offset = "0x4355E00", VA = "0x4355E00", Slot = "4")]
	public override bool Fallback(char charUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4356060", Offset = "0x4356060", VA = "0x4356060", Slot = "5")]
	public override bool Fallback(char charUnknownHigh, char charUnknownLow, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x4356350", Offset = "0x4356350", VA = "0x4356350", Slot = "6")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x4356390", Offset = "0x4356390", VA = "0x4356390", Slot = "7")]
	public override bool MovePrevious()
	{
		return default(bool);
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x43563E0", Offset = "0x43563E0", VA = "0x43563E0", Slot = "9")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4356340", Offset = "0x4356340", VA = "0x4356340")]
	private int SurrogateCharToUtf32(char highSurrogate, char lowSurrogate)
	{
		return default(int);
	}
}
