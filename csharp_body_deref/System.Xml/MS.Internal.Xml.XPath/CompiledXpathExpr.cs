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
			[Address(RVA = "0x607F450", Offset = "0x607E450", VA = "0x607F450", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006E7")]
		public override bool Whitespace
		{
			[Token(Token = "0x6001AB3")]
			[Address(RVA = "0x607F610", Offset = "0x607E610", VA = "0x607F610", Slot = "20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001AAE")]
		[Address(RVA = "0x607F420", Offset = "0x607E420", VA = "0x607F420")]
		public UndefinedXsltContext(IXmlNamespaceResolver nsResolver)
		{
		}

		[Token(Token = "0x6001AB0")]
		[Address(RVA = "0x607F470", Offset = "0x607E470", VA = "0x607F470", Slot = "16")]
		public override string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x6001AB1")]
		[Address(RVA = "0x607F590", Offset = "0x607E590", VA = "0x607F590", Slot = "18")]
		public override IXsltContextVariable ResolveVariable(string prefix, string name)
		{
			return null;
		}

		[Token(Token = "0x6001AB2")]
		[Address(RVA = "0x607F5D0", Offset = "0x607E5D0", VA = "0x607F5D0", Slot = "19")]
		public override IXsltContextFunction ResolveFunction(string prefix, string name, XPathResultType[] ArgTypes)
		{
			return null;
		}

		[Token(Token = "0x6001AB4")]
		[Address(RVA = "0x607F620", Offset = "0x607E620", VA = "0x607F620", Slot = "21")]
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
		[Address(RVA = "0x607F2B0", Offset = "0x607E2B0", VA = "0x607F2B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AAB")]
	[Address(RVA = "0x607F260", Offset = "0x607E260", VA = "0x607F260")]
	internal CompiledXpathExpr(Query query, string expression, bool needContext)
	{
	}

	[Token(Token = "0x6001AAD")]
	[Address(RVA = "0x607F2F0", Offset = "0x607E2F0", VA = "0x607F2F0", Slot = "4")]
	public override void SetContext(IXmlNamespaceResolver nsResolver)
	{
	}
}
