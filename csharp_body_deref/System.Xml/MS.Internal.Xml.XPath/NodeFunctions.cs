// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.NodeFunctions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x26C0690", Offset = "0x26BEC90", VA = "0x1826C0690", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B61")]
	[Address(RVA = "0x26C0650", Offset = "0x26BEC50", VA = "0x1826C0650")]
	public NodeFunctions(Function.FunctionType funcType, Query arg)
	{
	}

	[Token(Token = "0x6001B62")]
	[Address(RVA = "0x26C05D0", Offset = "0x26BEBD0", VA = "0x1826C05D0", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B63")]
	[Address(RVA = "0x26C02F0", Offset = "0x26BE8F0", VA = "0x1826C02F0")]
	private XPathNavigator EvaluateArg(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001B64")]
	[Address(RVA = "0x26C0360", Offset = "0x26BE960", VA = "0x1826C0360", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001B66")]
	[Address(RVA = "0x26C0260", Offset = "0x26BE860", VA = "0x1826C0260", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
