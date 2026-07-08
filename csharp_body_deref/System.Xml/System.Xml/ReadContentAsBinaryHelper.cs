using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000036")]
internal class ReadContentAsBinaryHelper
{
	[Token(Token = "0x2000037")]
	private enum State
	{
		[Token(Token = "0x400011D")]
		None,
		[Token(Token = "0x400011E")]
		InReadContent,
		[Token(Token = "0x400011F")]
		InReadElementContent
	}

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x10")]
	private XmlReader reader;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x18")]
	private State state;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x1C")]
	private int valueOffset;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x20")]
	private bool isEnd;

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x44571E0", Offset = "0x44571E0", VA = "0x44571E0")]
	internal void Finish()
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x44573E0", Offset = "0x44573E0", VA = "0x44573E0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x4457310", Offset = "0x4457310", VA = "0x4457310")]
	private bool MoveToNextContentNode(bool moveIfOnContentNode)
	{
		return default(bool);
	}
}
