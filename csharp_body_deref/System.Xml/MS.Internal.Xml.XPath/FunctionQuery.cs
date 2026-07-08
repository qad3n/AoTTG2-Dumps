using System.Collections.Generic;
using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002A4")]
internal sealed class FunctionQuery : ExtensionQuery
{
	[Token(Token = "0x4000E50")]
	[FieldOffset(Offset = "0x38")]
	private IList<Query> _args;

	[Token(Token = "0x4000E51")]
	[FieldOffset(Offset = "0x40")]
	private IXsltContextFunction _function;

	[Token(Token = "0x17000703")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001B12")]
		[Address(RVA = "0x443FEE0", Offset = "0x443FEE0", VA = "0x443FEE0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B0E")]
	[Address(RVA = "0x443EF60", Offset = "0x443EF60", VA = "0x443EF60")]
	public FunctionQuery(string prefix, string name, List<Query> args)
	{
	}

	[Token(Token = "0x6001B0F")]
	[Address(RVA = "0x443EFC0", Offset = "0x443EFC0", VA = "0x443EFC0")]
	private FunctionQuery(FunctionQuery other)
	{
	}

	[Token(Token = "0x6001B10")]
	[Address(RVA = "0x443F1E0", Offset = "0x443F1E0", VA = "0x443F1E0", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B11")]
	[Address(RVA = "0x443F900", Offset = "0x443F900", VA = "0x443F900", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B13")]
	[Address(RVA = "0x443FF80", Offset = "0x443FF80", VA = "0x443FF80", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
