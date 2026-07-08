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
		[Address(RVA = "0x4446390", Offset = "0x4446390", VA = "0x4446390", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x17000711")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001B7E")]
		[Address(RVA = "0x44463A0", Offset = "0x44463A0", VA = "0x44463A0", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000712")]
	public object OperandValue
	{
		[Token(Token = "0x6001B7F")]
		[Address(RVA = "0x44463B0", Offset = "0x44463B0", VA = "0x44463B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B7B")]
	[Address(RVA = "0x44462F0", Offset = "0x44462F0", VA = "0x44462F0")]
	public Operand(string val)
	{
	}

	[Token(Token = "0x6001B7C")]
	[Address(RVA = "0x4446330", Offset = "0x4446330", VA = "0x4446330")]
	public Operand(double val)
	{
	}
}
