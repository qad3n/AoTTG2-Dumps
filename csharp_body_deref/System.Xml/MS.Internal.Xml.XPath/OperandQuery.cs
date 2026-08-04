// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.OperandQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002B2")]
internal sealed class OperandQuery : ValueQuery
{
	[Token(Token = "0x4000E69")]
	[FieldOffset(Offset = "0x18")]
	internal object val;

	[Token(Token = "0x17000713")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001B82")]
		[Address(RVA = "0x4783B60", Offset = "0x4783B60", VA = "0x4783B60", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B80")]
	[Address(RVA = "0x4783B20", Offset = "0x4783B20", VA = "0x4783B20")]
	public OperandQuery(object val)
	{
	}

	[Token(Token = "0x6001B81")]
	[Address(RVA = "0x4783B50", Offset = "0x4783B50", VA = "0x4783B50", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B83")]
	[Address(RVA = "0x4783B70", Offset = "0x4783B70", VA = "0x4783B70", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
