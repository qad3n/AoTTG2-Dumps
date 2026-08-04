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
		[Address(RVA = "0x4789980", Offset = "0x4789980", VA = "0x4789980", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001BF2")]
	[Address(RVA = "0x47862F0", Offset = "0x47862F0", VA = "0x47862F0")]
	public VariableQuery(string name, string prefix)
	{
	}

	[Token(Token = "0x6001BF3")]
	[Address(RVA = "0x4789780", Offset = "0x4789780", VA = "0x4789780")]
	private VariableQuery(VariableQuery other)
	{
	}

	[Token(Token = "0x6001BF4")]
	[Address(RVA = "0x47897C0", Offset = "0x47897C0", VA = "0x47897C0", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001BF5")]
	[Address(RVA = "0x4789880", Offset = "0x4789880", VA = "0x4789880", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BF7")]
	[Address(RVA = "0x4789A60", Offset = "0x4789A60", VA = "0x4789A60", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
