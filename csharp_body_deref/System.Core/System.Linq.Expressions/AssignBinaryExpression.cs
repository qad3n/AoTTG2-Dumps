using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000046")]
internal class AssignBinaryExpression : BinaryExpression
{
	[Token(Token = "0x17000051")]
	public sealed override Type Type
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x4171B30", Offset = "0x4171B30", VA = "0x4171B30", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000052")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x4171B60", Offset = "0x4171B60", VA = "0x4171B60", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x4171AB0", Offset = "0x4171AB0", VA = "0x4171AB0")]
	internal AssignBinaryExpression(Expression left, Expression right)
	{
	}
}
