using System.Xml;
using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000294")]
internal class CompiledXpathExpr : XPathExpression
{
	[Token(Token = "0x2000295")]
	private class UndefinedXsltContext : XsltContext
	{
		[Token(Token = "0x4000E1B")]
		[FieldOffset(Offset = "0x50")]
		private IXmlNamespaceResolver _nsResolver;

		[Token(Token = "0x170006E6")]
		public override string DefaultNamespace
		{
			[Token(Token = "0x6001AAF")]
			[Address(RVA = "0x443C550", Offset = "0x443C550", VA = "0x443C550", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006E7")]
		public override bool Whitespace
		{
			[Token(Token = "0x6001AB3")]
			[Address(RVA = "0x443C710", Offset = "0x443C710", VA = "0x443C710", Slot = "20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001AAE")]
		[Address(RVA = "0x443C520", Offset = "0x443C520", VA = "0x443C520")]
		public UndefinedXsltContext(IXmlNamespaceResolver nsResolver)
		{
		}

		[Token(Token = "0x6001AB0")]
		[Address(RVA = "0x443C570", Offset = "0x443C570", VA = "0x443C570", Slot = "16")]
		public override string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x6001AB1")]
		[Address(RVA = "0x443C690", Offset = "0x443C690", VA = "0x443C690", Slot = "18")]
		public override IXsltContextVariable ResolveVariable(string prefix, string name)
		{
			return null;
		}

		[Token(Token = "0x6001AB2")]
		[Address(RVA = "0x443C6D0", Offset = "0x443C6D0", VA = "0x443C6D0", Slot = "19")]
		public override IXsltContextFunction ResolveFunction(string prefix, string name, XPathResultType[] ArgTypes)
		{
			return null;
		}

		[Token(Token = "0x6001AB4")]
		[Address(RVA = "0x443C720", Offset = "0x443C720", VA = "0x443C720", Slot = "21")]
		public override bool PreserveWhitespace(XPathNavigator node)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000E18")]
	[FieldOffset(Offset = "0x10")]
	private Query _query;

	[Token(Token = "0x4000E19")]
	[FieldOffset(Offset = "0x18")]
	private string _expr;

	[Token(Token = "0x4000E1A")]
	[FieldOffset(Offset = "0x20")]
	private bool _needContext;

	[Token(Token = "0x170006E5")]
	internal Query QueryTree
	{
		[Token(Token = "0x6001AAC")]
		[Address(RVA = "0x443C3C0", Offset = "0x443C3C0", VA = "0x443C3C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AAB")]
	[Address(RVA = "0x443C370", Offset = "0x443C370", VA = "0x443C370")]
	internal CompiledXpathExpr(Query query, string expression, bool needContext)
	{
	}

	[Token(Token = "0x6001AAD")]
	[Address(RVA = "0x443C400", Offset = "0x443C400", VA = "0x443C400", Slot = "4")]
	public override void SetContext(IXmlNamespaceResolver nsResolver)
	{
	}
}
