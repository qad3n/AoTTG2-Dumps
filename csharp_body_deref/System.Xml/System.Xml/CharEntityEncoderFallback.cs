using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200001C")]
internal class CharEntityEncoderFallback : EncoderFallback
{
	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x10")]
	private CharEntityEncoderFallbackBuffer fallbackBuffer;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x18")]
	private int[] textContentMarks;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x20")]
	private int endMarkPos;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x24")]
	private int curMarkPos;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x28")]
	private int startOffset;

	[Token(Token = "0x17000013")]
	public override int MaxCharCount
	{
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x4355D60", Offset = "0x4355D60", VA = "0x4355D60", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000014")]
	internal int StartOffset
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x4355D70", Offset = "0x4355D70", VA = "0x4355D70")]
		set
		{
		}
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x4355C40", Offset = "0x4355C40", VA = "0x4355C40")]
	internal CharEntityEncoderFallback()
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4355C50", Offset = "0x4355C50", VA = "0x4355C50", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x4355D80", Offset = "0x4355D80", VA = "0x4355D80")]
	internal void Reset(int[] textContentMarks, int endMarkPos)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x4355DB0", Offset = "0x4355DB0", VA = "0x4355DB0")]
	internal bool CanReplaceAt(int index)
	{
		return default(bool);
	}
}
