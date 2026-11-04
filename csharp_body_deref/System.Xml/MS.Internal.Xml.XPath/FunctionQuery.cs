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
		[Address(RVA = "0x26BA6F0", Offset = "0x26B8CF0", VA = "0x1826BA6F0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B0E")]
	[Address(RVA = "0x26BA3B0", Offset = "0x26B89B0", VA = "0x1826BA3B0")]
	public FunctionQuery(string prefix, string name, List<Query> args)
	{
	}

	[Token(Token = "0x6001B0F")]
	[Address(RVA = "0x26BA410", Offset = "0x26B8A10", VA = "0x1826BA410")]
	private FunctionQuery(FunctionQuery other)
	{
	}

	[Token(Token = "0x6001B10")]
	[Address(RVA = "0x26B9F20", Offset = "0x26B8520", VA = "0x1826B9F20", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B11")]
	[Address(RVA = "0x26B9AA0", Offset = "0x26B80A0", VA = "0x1826B9AA0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B13")]
	[Address(RVA = "0x26B9A40", Offset = "0x26B8040", VA = "0x1826B9A40", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
