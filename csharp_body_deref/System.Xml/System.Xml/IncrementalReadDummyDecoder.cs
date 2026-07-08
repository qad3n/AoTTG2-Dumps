using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000032")]
internal class IncrementalReadDummyDecoder : IncrementalReadDecoder
{
	[Token(Token = "0x17000044")]
	internal override bool IsFull
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x4456440", Offset = "0x4456440", VA = "0x4456440", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x4456450", Offset = "0x4456450", VA = "0x4456450", Slot = "5")]
	internal override int Decode(char[] chars, int startPos, int len)
	{
		return default(int);
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x4456460", Offset = "0x4456460", VA = "0x4456460")]
	public IncrementalReadDummyDecoder()
	{
	}
}
