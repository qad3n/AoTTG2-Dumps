using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002C4")]
internal sealed class VariableQuery : ExtensionQuery
{
	[Token(Token = "0x4000EA4")]
	[FieldOffset(Offset = "0x38")]
	private IXsltContextVariable _variable;

	[Token(Token = "0x1700072E")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001BF6")]
		[Address(RVA = "0x444C220", Offset = "0x444C220", VA = "0x444C220", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001BF2")]
	[Address(RVA = "0x4448B90", Offset = "0x4448B90", VA = "0x4448B90")]
	public VariableQuery(string name, string prefix)
	{
	}

	[Token(Token = "0x6001BF3")]
	[Address(RVA = "0x444C020", Offset = "0x444C020", VA = "0x444C020")]
	private VariableQuery(VariableQuery other)
	{
	}

	[Token(Token = "0x6001BF4")]
	[Address(RVA = "0x444C060", Offset = "0x444C060", VA = "0x444C060", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001BF5")]
	[Address(RVA = "0x444C120", Offset = "0x444C120", VA = "0x444C120", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BF7")]
	[Address(RVA = "0x444C300", Offset = "0x444C300", VA = "0x444C300", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
