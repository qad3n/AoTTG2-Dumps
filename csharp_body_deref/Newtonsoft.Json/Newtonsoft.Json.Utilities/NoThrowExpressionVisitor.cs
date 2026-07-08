using System.Linq.Expressions;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000C0")]
internal class NoThrowExpressionVisitor : ExpressionVisitor
{
	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly object ErrorResult;

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x3AC1A50", Offset = "0x3AC1A50", VA = "0x3AC1A50", Slot = "7")]
	protected override Expression VisitConditional(ConditionalExpression node)
	{
		return null;
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x3AC18A0", Offset = "0x3AC18A0", VA = "0x3AC18A0")]
	public NoThrowExpressionVisitor()
	{
	}
}
