using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002AE")]
internal sealed class NodeFunctions : ValueQuery
{
	[Token(Token = "0x4000E5F")]
	[FieldOffset(Offset = "0x18")]
	private Query _arg;

	[Token(Token = "0x4000E60")]
	[FieldOffset(Offset = "0x20")]
	private Function.FunctionType _funcType;

	[Token(Token = "0x4000E61")]
	[FieldOffset(Offset = "0x28")]
	private XsltContext _xsltContext;

	[Token(Token = "0x1700070D")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001B65")]
		[Address(RVA = "0x44455F0", Offset = "0x44455F0", VA = "0x44455F0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B61")]
	[Address(RVA = "0x44451C0", Offset = "0x44451C0", VA = "0x44451C0")]
	public NodeFunctions(Function.FunctionType funcType, Query arg)
	{
	}

	[Token(Token = "0x6001B62")]
	[Address(RVA = "0x44451F0", Offset = "0x44451F0", VA = "0x44451F0", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B63")]
	[Address(RVA = "0x4445260", Offset = "0x4445260", VA = "0x4445260")]
	private XPathNavigator EvaluateArg(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001B64")]
	[Address(RVA = "0x44452C0", Offset = "0x44452C0", VA = "0x44452C0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001B66")]
	[Address(RVA = "0x4445680", Offset = "0x4445680", VA = "0x4445680", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
