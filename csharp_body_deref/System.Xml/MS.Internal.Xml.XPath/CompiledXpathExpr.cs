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
			[Address(RVA = "0x4779CB0", Offset = "0x4779CB0", VA = "0x4779CB0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006E7")]
		public override bool Whitespace
		{
			[Token(Token = "0x6001AB3")]
			[Address(RVA = "0x4779E70", Offset = "0x4779E70", VA = "0x4779E70", Slot = "20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001AAE")]
		[Address(RVA = "0x4779C80", Offset = "0x4779C80", VA = "0x4779C80")]
		public UndefinedXsltContext(IXmlNamespaceResolver nsResolver)
		{
		}

		[Token(Token = "0x6001AB0")]
		[Address(RVA = "0x4779CD0", Offset = "0x4779CD0", VA = "0x4779CD0", Slot = "16")]
		public override string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x6001AB1")]
		[Address(RVA = "0x4779DF0", Offset = "0x4779DF0", VA = "0x4779DF0", Slot = "18")]
		public override IXsltContextVariable ResolveVariable(string prefix, string name)
		{
			return null;
		}

		[Token(Token = "0x6001AB2")]
		[Address(RVA = "0x4779E30", Offset = "0x4779E30", VA = "0x4779E30", Slot = "19")]
		public override IXsltContextFunction ResolveFunction(string prefix, string name, XPathResultType[] ArgTypes)
		{
			return null;
		}

		[Token(Token = "0x6001AB4")]
		[Address(RVA = "0x4779E80", Offset = "0x4779E80", VA = "0x4779E80", Slot = "21")]
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
		[Address(RVA = "0x4779B20", Offset = "0x4779B20", VA = "0x4779B20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AAB")]
	[Address(RVA = "0x4779AD0", Offset = "0x4779AD0", VA = "0x4779AD0")]
	internal CompiledXpathExpr(Query query, string expression, bool needContext)
	{
	}

	[Token(Token = "0x6001AAD")]
	[Address(RVA = "0x4779B60", Offset = "0x4779B60", VA = "0x4779B60", Slot = "4")]
	public override void SetContext(IXmlNamespaceResolver nsResolver)
	{
	}
}
