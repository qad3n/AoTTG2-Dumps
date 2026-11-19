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

[Token(Token = "0x2000083")]
public abstract class ExpressionVisitor
{
	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x5DCD4F0", Offset = "0x5DCC4F0", VA = "0x5DCD4F0")]
	protected ExpressionVisitor()
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x5DCFA50", Offset = "0x5DCEA50", VA = "0x5DCFA50", Slot = "4")]
	public virtual Expression Visit(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x5DCFA80", Offset = "0x5DCEA80", VA = "0x5DCFA80")]
	public ReadOnlyCollection<Expression> Visit(ReadOnlyCollection<Expression> nodes)
	{
		return null;
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x5DCFD70", Offset = "0x5DCED70", VA = "0x5DCFD70")]
	private Expression[] VisitArguments(IArgumentProvider nodes)
	{
		return null;
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x5DCFD80", Offset = "0x5DCED80", VA = "0x5DCFD80")]
	private ParameterExpression[] VisitParameters(IParameterProvider nodes, string callerName)
	{
		return null;
	}

	[Token(Token = "0x60003E1")]
	public static ReadOnlyCollection<T> Visit<T>(ReadOnlyCollection<T> nodes, Func<T, T> elementVisitor)
	{
		return null;
	}

	[Token(Token = "0x60003E2")]
	public T VisitAndConvert<T>(T node, string callerName) where T : Expression
	{
		return null;
	}

	[Token(Token = "0x60003E3")]
	public ReadOnlyCollection<T> VisitAndConvert<T>(ReadOnlyCollection<T> nodes, string callerName) where T : Expression
	{
		return null;
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x5DCFD90", Offset = "0x5DCED90", VA = "0x5DCFD90", Slot = "5")]
	protected internal virtual Expression VisitBinary(BinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x5DCFFD0", Offset = "0x5DCEFD0", VA = "0x5DCFFD0", Slot = "6")]
	protected internal virtual Expression VisitBlock(BlockExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x5DD00A0", Offset = "0x5DCF0A0", VA = "0x5DD00A0", Slot = "7")]
	protected internal virtual Expression VisitConditional(ConditionalExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x5DD01C0", Offset = "0x5DCF1C0", VA = "0x5DD01C0", Slot = "8")]
	protected internal virtual Expression VisitConstant(ConstantExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x5DD01D0", Offset = "0x5DCF1D0", VA = "0x5DD01D0", Slot = "9")]
	protected internal virtual Expression VisitDefault(DefaultExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x5DD01E0", Offset = "0x5DCF1E0", VA = "0x5DD01E0", Slot = "10")]
	protected internal virtual Expression VisitExtension(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x5DD0210", Offset = "0x5DCF210", VA = "0x5DD0210", Slot = "11")]
	protected internal virtual Expression VisitGoto(GotoExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x5DD0390", Offset = "0x5DCF390", VA = "0x5DD0390", Slot = "12")]
	protected internal virtual Expression VisitInvocation(InvocationExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x5DD0400", Offset = "0x5DCF400", VA = "0x5DD0400", Slot = "13")]
	protected virtual LabelTarget VisitLabelTarget(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x5DD0410", Offset = "0x5DCF410", VA = "0x5DD0410", Slot = "14")]
	protected internal virtual Expression VisitLabel(LabelExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	protected internal virtual Expression VisitLambda<T>(Expression<T> node)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x5DD0540", Offset = "0x5DCF540", VA = "0x5DD0540", Slot = "16")]
	protected internal virtual Expression VisitLoop(LoopExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x5DD06B0", Offset = "0x5DCF6B0", VA = "0x5DD06B0", Slot = "17")]
	protected internal virtual Expression VisitMember(MemberExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x5DD07D0", Offset = "0x5DCF7D0", VA = "0x5DD07D0", Slot = "18")]
	protected internal virtual Expression VisitIndex(IndexExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x5DD0900", Offset = "0x5DCF900", VA = "0x5DD0900", Slot = "19")]
	protected internal virtual Expression VisitMethodCall(MethodCallExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x5DD09A0", Offset = "0x5DCF9A0", VA = "0x5DD09A0", Slot = "20")]
	protected internal virtual Expression VisitNewArray(NewArrayExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x5DD0B20", Offset = "0x5DCFB20", VA = "0x5DD0B20", Slot = "21")]
	protected internal virtual Expression VisitParameter(ParameterExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x5DD0B30", Offset = "0x5DCFB30", VA = "0x5DD0B30", Slot = "22")]
	protected virtual CatchBlock VisitCatchBlock(CatchBlock node)
	{
		return null;
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x5DD0C50", Offset = "0x5DCFC50", VA = "0x5DD0C50", Slot = "23")]
	protected internal virtual Expression VisitTry(TryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x5DD0E30", Offset = "0x5DCFE30", VA = "0x5DD0E30", Slot = "24")]
	protected internal virtual Expression VisitTypeBinary(TypeBinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x5DD0F00", Offset = "0x5DCFF00", VA = "0x5DD0F00", Slot = "25")]
	protected internal virtual Expression VisitUnary(UnaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x5DD1080", Offset = "0x5DD0080", VA = "0x5DD1080")]
	private static UnaryExpression ValidateUnary(UnaryExpression before, UnaryExpression after)
	{
		return null;
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x5DCFE60", Offset = "0x5DCEE60", VA = "0x5DCFE60")]
	private static BinaryExpression ValidateBinary(BinaryExpression before, BinaryExpression after)
	{
		return null;
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x5DD1180", Offset = "0x5DD0180", VA = "0x5DD1180")]
	private static void ValidateChildType(Type before, Type after, string methodName)
	{
	}
}
