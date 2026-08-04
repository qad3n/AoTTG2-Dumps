// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.ExpressionVisitor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000082")]
public abstract class ExpressionVisitor
{
	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x44B73C0", Offset = "0x44B73C0", VA = "0x44B73C0")]
	protected ExpressionVisitor()
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x44B9B90", Offset = "0x44B9B90", VA = "0x44B9B90", Slot = "4")]
	public virtual Expression Visit(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x44B9BC0", Offset = "0x44B9BC0", VA = "0x44B9BC0")]
	public ReadOnlyCollection<Expression> Visit(ReadOnlyCollection<Expression> nodes)
	{
		return null;
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x44B9EA0", Offset = "0x44B9EA0", VA = "0x44B9EA0")]
	private Expression[] VisitArguments(IArgumentProvider nodes)
	{
		return null;
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x44B9EB0", Offset = "0x44B9EB0", VA = "0x44B9EB0")]
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
	[Address(RVA = "0x44B9EC0", Offset = "0x44B9EC0", VA = "0x44B9EC0", Slot = "5")]
	protected internal virtual Expression VisitBinary(BinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x44BA100", Offset = "0x44BA100", VA = "0x44BA100", Slot = "6")]
	protected internal virtual Expression VisitBlock(BlockExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x44BA1D0", Offset = "0x44BA1D0", VA = "0x44BA1D0", Slot = "7")]
	protected internal virtual Expression VisitConditional(ConditionalExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x44BA2F0", Offset = "0x44BA2F0", VA = "0x44BA2F0", Slot = "8")]
	protected internal virtual Expression VisitConstant(ConstantExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x44BA300", Offset = "0x44BA300", VA = "0x44BA300", Slot = "9")]
	protected internal virtual Expression VisitDefault(DefaultExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x44BA310", Offset = "0x44BA310", VA = "0x44BA310", Slot = "10")]
	protected internal virtual Expression VisitExtension(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x44BA340", Offset = "0x44BA340", VA = "0x44BA340", Slot = "11")]
	protected internal virtual Expression VisitGoto(GotoExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x44BA4C0", Offset = "0x44BA4C0", VA = "0x44BA4C0", Slot = "12")]
	protected internal virtual Expression VisitInvocation(InvocationExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x44BA530", Offset = "0x44BA530", VA = "0x44BA530", Slot = "13")]
	protected virtual LabelTarget VisitLabelTarget(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x44BA540", Offset = "0x44BA540", VA = "0x44BA540", Slot = "14")]
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
	[Address(RVA = "0x44BA670", Offset = "0x44BA670", VA = "0x44BA670", Slot = "16")]
	protected internal virtual Expression VisitLoop(LoopExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x44BA7E0", Offset = "0x44BA7E0", VA = "0x44BA7E0", Slot = "17")]
	protected internal virtual Expression VisitMember(MemberExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x44BA900", Offset = "0x44BA900", VA = "0x44BA900", Slot = "18")]
	protected internal virtual Expression VisitIndex(IndexExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x44BAA70", Offset = "0x44BAA70", VA = "0x44BAA70", Slot = "19")]
	protected internal virtual Expression VisitMethodCall(MethodCallExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x44BAB10", Offset = "0x44BAB10", VA = "0x44BAB10", Slot = "20")]
	protected internal virtual Expression VisitNewArray(NewArrayExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x44BAC40", Offset = "0x44BAC40", VA = "0x44BAC40", Slot = "21")]
	protected internal virtual Expression VisitParameter(ParameterExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x44BAC50", Offset = "0x44BAC50", VA = "0x44BAC50", Slot = "22")]
	protected virtual CatchBlock VisitCatchBlock(CatchBlock node)
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x44BAD70", Offset = "0x44BAD70", VA = "0x44BAD70", Slot = "23")]
	protected internal virtual Expression VisitTry(TryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x44BAF50", Offset = "0x44BAF50", VA = "0x44BAF50", Slot = "24")]
	protected internal virtual Expression VisitTypeBinary(TypeBinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x44BB090", Offset = "0x44BB090", VA = "0x44BB090", Slot = "25")]
	protected internal virtual Expression VisitUnary(UnaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x44BB210", Offset = "0x44BB210", VA = "0x44BB210")]
	private static UnaryExpression ValidateUnary(UnaryExpression before, UnaryExpression after)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x44B9F90", Offset = "0x44B9F90", VA = "0x44B9F90")]
	private static BinaryExpression ValidateBinary(BinaryExpression before, BinaryExpression after)
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x44BB310", Offset = "0x44BB310", VA = "0x44BB310")]
	private static void ValidateChildType(Type before, Type after, string methodName)
	{
	}
}
