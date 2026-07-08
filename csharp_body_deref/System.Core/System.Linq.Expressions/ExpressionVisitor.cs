using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000082")]
public abstract class ExpressionVisitor
{
	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x41922C0", Offset = "0x41922C0", VA = "0x41922C0")]
	protected ExpressionVisitor()
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x4194A90", Offset = "0x4194A90", VA = "0x4194A90", Slot = "4")]
	public virtual Expression Visit(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x4194AC0", Offset = "0x4194AC0", VA = "0x4194AC0")]
	public ReadOnlyCollection<Expression> Visit(ReadOnlyCollection<Expression> nodes)
	{
		return null;
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x4194DA0", Offset = "0x4194DA0", VA = "0x4194DA0")]
	private Expression[] VisitArguments(IArgumentProvider nodes)
	{
		return null;
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x4194DB0", Offset = "0x4194DB0", VA = "0x4194DB0")]
	private ParameterExpression[] VisitParameters(IParameterProvider nodes, string callerName)
	{
		return null;
	}

	[Token(Token = "0x60003D7")]
	public static ReadOnlyCollection<T> Visit<T>(ReadOnlyCollection<T> nodes, Func<T, T> elementVisitor)
	{
		return null;
	}

	[Token(Token = "0x60003D8")]
	public T VisitAndConvert<T>(T node, string callerName) where T : Expression
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	public ReadOnlyCollection<T> VisitAndConvert<T>(ReadOnlyCollection<T> nodes, string callerName) where T : Expression
	{
		return null;
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x4194DC0", Offset = "0x4194DC0", VA = "0x4194DC0", Slot = "5")]
	protected internal virtual Expression VisitBinary(BinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x4195000", Offset = "0x4195000", VA = "0x4195000", Slot = "6")]
	protected internal virtual Expression VisitBlock(BlockExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x41950D0", Offset = "0x41950D0", VA = "0x41950D0", Slot = "7")]
	protected internal virtual Expression VisitConditional(ConditionalExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x41951F0", Offset = "0x41951F0", VA = "0x41951F0", Slot = "8")]
	protected internal virtual Expression VisitConstant(ConstantExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x4195200", Offset = "0x4195200", VA = "0x4195200", Slot = "9")]
	protected internal virtual Expression VisitDefault(DefaultExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x4195210", Offset = "0x4195210", VA = "0x4195210", Slot = "10")]
	protected internal virtual Expression VisitExtension(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x4195240", Offset = "0x4195240", VA = "0x4195240", Slot = "11")]
	protected internal virtual Expression VisitGoto(GotoExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x41953C0", Offset = "0x41953C0", VA = "0x41953C0", Slot = "12")]
	protected internal virtual Expression VisitInvocation(InvocationExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x4195430", Offset = "0x4195430", VA = "0x4195430", Slot = "13")]
	protected virtual LabelTarget VisitLabelTarget(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x4195440", Offset = "0x4195440", VA = "0x4195440", Slot = "14")]
	protected internal virtual Expression VisitLabel(LabelExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E4")]
	protected internal virtual Expression VisitLambda<T>(Expression<T> node)
	{
		return null;
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x4195570", Offset = "0x4195570", VA = "0x4195570", Slot = "16")]
	protected internal virtual Expression VisitLoop(LoopExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x41956E0", Offset = "0x41956E0", VA = "0x41956E0", Slot = "17")]
	protected internal virtual Expression VisitMember(MemberExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x4195800", Offset = "0x4195800", VA = "0x4195800", Slot = "18")]
	protected internal virtual Expression VisitIndex(IndexExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x4195970", Offset = "0x4195970", VA = "0x4195970", Slot = "19")]
	protected internal virtual Expression VisitMethodCall(MethodCallExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x4195A10", Offset = "0x4195A10", VA = "0x4195A10", Slot = "20")]
	protected internal virtual Expression VisitNewArray(NewArrayExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x4195B40", Offset = "0x4195B40", VA = "0x4195B40", Slot = "21")]
	protected internal virtual Expression VisitParameter(ParameterExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x4195B50", Offset = "0x4195B50", VA = "0x4195B50", Slot = "22")]
	protected virtual CatchBlock VisitCatchBlock(CatchBlock node)
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x4195C70", Offset = "0x4195C70", VA = "0x4195C70", Slot = "23")]
	protected internal virtual Expression VisitTry(TryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x4195E50", Offset = "0x4195E50", VA = "0x4195E50", Slot = "24")]
	protected internal virtual Expression VisitTypeBinary(TypeBinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x4195F90", Offset = "0x4195F90", VA = "0x4195F90", Slot = "25")]
	protected internal virtual Expression VisitUnary(UnaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x4196110", Offset = "0x4196110", VA = "0x4196110")]
	private static UnaryExpression ValidateUnary(UnaryExpression before, UnaryExpression after)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x4194E90", Offset = "0x4194E90", VA = "0x4194E90")]
	private static BinaryExpression ValidateBinary(BinaryExpression before, BinaryExpression after)
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x4196210", Offset = "0x4196210", VA = "0x4196210")]
	private static void ValidateChildType(Type before, Type after, string methodName)
	{
	}
}
