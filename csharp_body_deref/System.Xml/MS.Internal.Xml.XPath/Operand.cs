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
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x17000711")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001B7E")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000712")]
	public object OperandValue
	{
		[Token(Token = "0x6001B7F")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B7B")]
	[Address(RVA = "0x26C1520", Offset = "0x26BFB20", VA = "0x1826C1520")]
	public Operand(string val)
	{
	}

	[Token(Token = "0x6001B7C")]
	[Address(RVA = "0x26C1560", Offset = "0x26BFB60", VA = "0x1826C1560")]
	public Operand(double val)
	{
	}
}
