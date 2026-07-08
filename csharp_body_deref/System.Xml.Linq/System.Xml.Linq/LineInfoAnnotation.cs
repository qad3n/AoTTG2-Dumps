using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000004")]
internal class LineInfoAnnotation
{
	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x10")]
	internal int lineNumber;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x14")]
	internal int linePosition;

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x433AD00", Offset = "0x433AD00", VA = "0x433AD00")]
	public LineInfoAnnotation(int lineNumber, int linePosition)
	{
	}
}
