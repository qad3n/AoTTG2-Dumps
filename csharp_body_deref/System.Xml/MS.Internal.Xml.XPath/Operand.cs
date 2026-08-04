// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.Operand
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002B1")]
internal class Operand : AstNode
{
	[Token(Token = "0x4000E67")]
	[FieldOffset(Offset = "0x10")]
	private XPathResultType _type;

	[Token(Token = "0x4000E68")]
	[FieldOffset(Offset = "0x18")]
	private object _val;

	[Token(Token = "0x17000710")]
	public override AstType Type
	{
		[Token(Token = "0x6001B7D")]
		[Address(RVA = "0x4783AF0", Offset = "0x4783AF0", VA = "0x4783AF0", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x17000711")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001B7E")]
		[Address(RVA = "0x4783B00", Offset = "0x4783B00", VA = "0x4783B00", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000712")]
	public object OperandValue
	{
		[Token(Token = "0x6001B7F")]
		[Address(RVA = "0x4783B10", Offset = "0x4783B10", VA = "0x4783B10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B7B")]
	[Address(RVA = "0x4783A50", Offset = "0x4783A50", VA = "0x4783A50")]
	public Operand(string val)
	{
	}

	[Token(Token = "0x6001B7C")]
	[Address(RVA = "0x4783A90", Offset = "0x4783A90", VA = "0x4783A90")]
	public Operand(double val)
	{
	}
}
