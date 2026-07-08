using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000289")]
internal sealed class AttributeQuery : BaseAxisQuery
{
	[Token(Token = "0x4000DEC")]
	[FieldOffset(Offset = "0x54")]
	private bool _onAttribute;

	[Token(Token = "0x6001A54")]
	[Address(RVA = "0x443A240", Offset = "0x443A240", VA = "0x443A240")]
	public AttributeQuery(Query qyParent, string Name, string Prefix, XPathNodeType Type)
	{
	}

	[Token(Token = "0x6001A55")]
	[Address(RVA = "0x443A300", Offset = "0x443A300", VA = "0x443A300")]
	private AttributeQuery(AttributeQuery other)
	{
	}

	[Token(Token = "0x6001A56")]
	[Address(RVA = "0x443A3D0", Offset = "0x443A3D0", VA = "0x443A3D0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A57")]
	[Address(RVA = "0x443A460", Offset = "0x443A460", VA = "0x443A460", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001A58")]
	[Address(RVA = "0x443A560", Offset = "0x443A560", VA = "0x443A560", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
