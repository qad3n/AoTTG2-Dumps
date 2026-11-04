// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.CompiledXpathExpr
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006E7")]
		public override bool Whitespace
		{
			[Token(Token = "0x6001AB3")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001AAE")]
		[Address(RVA = "0x26C42A0", Offset = "0x26C28A0", VA = "0x1826C42A0")]
		public UndefinedXsltContext(IXmlNamespaceResolver nsResolver)
		{
		}

		[Token(Token = "0x6001AB0")]
		[Address(RVA = "0x26C4100", Offset = "0x26C2700", VA = "0x1826C4100", Slot = "16")]
		public override string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x6001AB1")]
		[Address(RVA = "0x26C4260", Offset = "0x26C2860", VA = "0x1826C4260", Slot = "18")]
		public override IXsltContextVariable ResolveVariable(string prefix, string name)
		{
			return null;
		}

		[Token(Token = "0x6001AB2")]
		[Address(RVA = "0x26C4220", Offset = "0x26C2820", VA = "0x1826C4220", Slot = "19")]
		public override IXsltContextFunction ResolveFunction(string prefix, string name, XPathResultType[] ArgTypes)
		{
			return null;
		}

		[Token(Token = "0x6001AB4")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "21")]
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
		[Address(RVA = "0x26B6EC0", Offset = "0x26B54C0", VA = "0x1826B6EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AAB")]
	[Address(RVA = "0x26B6E70", Offset = "0x26B5470", VA = "0x1826B6E70")]
	internal CompiledXpathExpr(Query query, string expression, bool needContext)
	{
	}

	[Token(Token = "0x6001AAD")]
	[Address(RVA = "0x26B6D40", Offset = "0x26B5340", VA = "0x1826B6D40", Slot = "4")]
	public override void SetContext(IXmlNamespaceResolver nsResolver)
	{
	}
}
