// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.VariableQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x608EBC0", Offset = "0x608DBC0", VA = "0x608EBC0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001BF2")]
	[Address(RVA = "0x608B730", Offset = "0x608A730", VA = "0x608B730")]
	public VariableQuery(string name, string prefix)
	{
	}

	[Token(Token = "0x6001BF3")]
	[Address(RVA = "0x608E9C0", Offset = "0x608D9C0", VA = "0x608E9C0")]
	private VariableQuery(VariableQuery other)
	{
	}

	[Token(Token = "0x6001BF4")]
	[Address(RVA = "0x608EA00", Offset = "0x608DA00", VA = "0x608EA00", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001BF5")]
	[Address(RVA = "0x608EAC0", Offset = "0x608DAC0", VA = "0x608EAC0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BF7")]
	[Address(RVA = "0x608ECA0", Offset = "0x608DCA0", VA = "0x608ECA0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
