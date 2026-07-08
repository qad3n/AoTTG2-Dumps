using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000020")]
internal class XObjectChangeAnnotation
{
	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x10")]
	internal EventHandler<XObjectChangeEventArgs> changing;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x18")]
	internal EventHandler<XObjectChangeEventArgs> changed;
}
