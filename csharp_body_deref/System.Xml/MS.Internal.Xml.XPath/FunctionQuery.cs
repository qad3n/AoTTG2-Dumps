// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.FunctionQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x477D640", Offset = "0x477D640", VA = "0x477D640", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B0E")]
	[Address(RVA = "0x477C6C0", Offset = "0x477C6C0", VA = "0x477C6C0")]
	public FunctionQuery(string prefix, string name, List<Query> args)
	{
	}

	[Token(Token = "0x6001B0F")]
	[Address(RVA = "0x477C720", Offset = "0x477C720", VA = "0x477C720")]
	private FunctionQuery(FunctionQuery other)
	{
	}

	[Token(Token = "0x6001B10")]
	[Address(RVA = "0x477C940", Offset = "0x477C940", VA = "0x477C940", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B11")]
	[Address(RVA = "0x477D060", Offset = "0x477D060", VA = "0x477D060", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B13")]
	[Address(RVA = "0x477D6E0", Offset = "0x477D6E0", VA = "0x477D6E0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
