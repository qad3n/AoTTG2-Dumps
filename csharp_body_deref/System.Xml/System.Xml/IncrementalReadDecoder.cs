using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000031")]
internal abstract class IncrementalReadDecoder
{
	[Token(Token = "0x17000043")]
	internal abstract bool IsFull
	{
		[Token(Token = "0x600017A")]
		get;
	}

	[Token(Token = "0x600017B")]
	internal abstract int Decode(char[] chars, int startPos, int len);

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x4456430", Offset = "0x4456430", VA = "0x4456430")]
	protected IncrementalReadDecoder()
	{
	}
}
