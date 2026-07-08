using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002B5")]
internal sealed class ParentQuery : CacheAxisQuery
{
	[Token(Token = "0x6001B8C")]
	[Address(RVA = "0x4446560", Offset = "0x4446560", VA = "0x4446560")]
	public ParentQuery(Query qyInput, string Name, string Prefix, XPathNodeType Type)
	{
	}

	[Token(Token = "0x6001B8D")]
	[Address(RVA = "0x4446600", Offset = "0x4446600", VA = "0x4446600")]
	private ParentQuery(ParentQuery other)
	{
	}

	[Token(Token = "0x6001B8E")]
	[Address(RVA = "0x4446610", Offset = "0x4446610", VA = "0x4446610", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001B8F")]
	[Address(RVA = "0x44466C0", Offset = "0x44466C0", VA = "0x44466C0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
