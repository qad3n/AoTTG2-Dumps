using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x200028D")]
internal sealed class BooleanExpr : ValueQuery
{
	[Token(Token = "0x4000E0B")]
	[FieldOffset(Offset = "0x18")]
	private Query _opnd1;

	[Token(Token = "0x4000E0C")]
	[FieldOffset(Offset = "0x20")]
	private Query _opnd2;

	[Token(Token = "0x4000E0D")]
	[FieldOffset(Offset = "0x28")]
	private bool _isOr;

	[Token(Token = "0x170006DA")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001A79")]
		[Address(RVA = "0x443ADB0", Offset = "0x443ADB0", VA = "0x443ADB0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001A74")]
	[Address(RVA = "0x443AA60", Offset = "0x443AA60", VA = "0x443AA60")]
	public BooleanExpr(Operator.Op op, Query opnd1, Query opnd2)
	{
	}

	[Token(Token = "0x6001A75")]
	[Address(RVA = "0x443ABC0", Offset = "0x443ABC0", VA = "0x443ABC0")]
	private BooleanExpr(BooleanExpr other)
	{
	}

	[Token(Token = "0x6001A76")]
	[Address(RVA = "0x443AC20", Offset = "0x443AC20", VA = "0x443AC20", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001A77")]
	[Address(RVA = "0x443AC70", Offset = "0x443AC70", VA = "0x443AC70", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001A78")]
	[Address(RVA = "0x443AD10", Offset = "0x443AD10", VA = "0x443AD10", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
