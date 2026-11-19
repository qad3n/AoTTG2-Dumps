// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.BooleanExpr
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x607DC50", Offset = "0x607CC50", VA = "0x607DC50", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001A74")]
	[Address(RVA = "0x607D8F0", Offset = "0x607C8F0", VA = "0x607D8F0")]
	public BooleanExpr(Operator.Op op, Query opnd1, Query opnd2)
	{
	}

	[Token(Token = "0x6001A75")]
	[Address(RVA = "0x607DA50", Offset = "0x607CA50", VA = "0x607DA50")]
	private BooleanExpr(BooleanExpr other)
	{
	}

	[Token(Token = "0x6001A76")]
	[Address(RVA = "0x607DAC0", Offset = "0x607CAC0", VA = "0x607DAC0", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001A77")]
	[Address(RVA = "0x607DB10", Offset = "0x607CB10", VA = "0x607DB10", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001A78")]
	[Address(RVA = "0x607DBB0", Offset = "0x607CBB0", VA = "0x607DBB0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
