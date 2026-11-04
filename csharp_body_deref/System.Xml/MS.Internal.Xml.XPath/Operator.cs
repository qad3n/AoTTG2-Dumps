// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.Operator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002B3")]
internal class Operator : AstNode
{
	[Token(Token = "0x20002B4")]
	public enum Op
	{
		[Token(Token = "0x4000E6F")]
		INVALID,
		[Token(Token = "0x4000E70")]
		OR,
		[Token(Token = "0x4000E71")]
		AND,
		[Token(Token = "0x4000E72")]
		EQ,
		[Token(Token = "0x4000E73")]
		NE,
		[Token(Token = "0x4000E74")]
		LT,
		[Token(Token = "0x4000E75")]
		LE,
		[Token(Token = "0x4000E76")]
		GT,
		[Token(Token = "0x4000E77")]
		GE,
		[Token(Token = "0x4000E78")]
		PLUS,
		[Token(Token = "0x4000E79")]
		MINUS,
		[Token(Token = "0x4000E7A")]
		MUL,
		[Token(Token = "0x4000E7B")]
		DIV,
		[Token(Token = "0x4000E7C")]
		MOD,
		[Token(Token = "0x4000E7D")]
		UNION
	}

	[Token(Token = "0x4000E6A")]
	[FieldOffset(Offset = "0x0")]
	private static Op[] s_invertOp;

	[Token(Token = "0x4000E6B")]
	[FieldOffset(Offset = "0x10")]
	private Op _opType;

	[Token(Token = "0x4000E6C")]
	[FieldOffset(Offset = "0x18")]
	private AstNode _opnd1;

	[Token(Token = "0x4000E6D")]
	[FieldOffset(Offset = "0x20")]
	private AstNode _opnd2;

	[Token(Token = "0x17000714")]
	public override AstType Type
	{
		[Token(Token = "0x6001B86")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x17000715")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001B87")]
		[Address(RVA = "0x26C16C0", Offset = "0x26BFCC0", VA = "0x1826C16C0", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000716")]
	public Op OperatorType
	{
		[Token(Token = "0x6001B88")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(Op);
		}
	}

	[Token(Token = "0x17000717")]
	public AstNode Operand1
	{
		[Token(Token = "0x6001B89")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000718")]
	public AstNode Operand2
	{
		[Token(Token = "0x6001B8A")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B84")]
	[Address(RVA = "0x26C15C0", Offset = "0x26BFBC0", VA = "0x1826C15C0")]
	public static Op InvertOperator(Op op)
	{
		return default(Op);
	}

	[Token(Token = "0x6001B85")]
	[Address(RVA = "0x1522E90", Offset = "0x1521490", VA = "0x181522E90")]
	public Operator(Op op, AstNode opnd1, AstNode opnd2)
	{
	}
}
