using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000C3")]
internal struct LineInfo
{
	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x0")]
	internal int lineNo;

	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0x4")]
	internal int linePos;

	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x44A8350", Offset = "0x44A8350", VA = "0x44A8350")]
	public LineInfo(int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x44A8360", Offset = "0x44A8360", VA = "0x44A8360")]
	public void Set(int lineNo, int linePos)
	{
	}
}
