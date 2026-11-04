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
	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected ExpressionVisitor()
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x24394B0", Offset = "0x2437AB0", VA = "0x1824394B0", Slot = "4")]
	public virtual Expression Visit(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x24394E0", Offset = "0x2437AE0", VA = "0x1824394E0")]
	public ReadOnlyCollection<Expression> Visit(ReadOnlyCollection<Expression> nodes)
	{
		return null;
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x24383A0", Offset = "0x24369A0", VA = "0x1824383A0")]
	private Expression[] VisitArguments(IArgumentProvider nodes)
	{
		return null;
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x2439030", Offset = "0x2437630", VA = "0x182439030")]
	private ParameterExpression[] VisitParameters(IParameterProvider nodes, string callerName)
	{
		return null;
	}

	[Token(Token = "0x60003D6")]
	public static ReadOnlyCollection<T> Visit<T>(ReadOnlyCollection<T> nodes, Func<T, T> elementVisitor)
	{
		return null;
	}

	[Token(Token = "0x60003D7")]
	public T VisitAndConvert<T>(T node, string callerName) where T : Expression
	{
		return null;
	}

	[Token(Token = "0x60003D8")]
	public ReadOnlyCollection<T> VisitAndConvert<T>(ReadOnlyCollection<T> nodes, string callerName) where T : Expression
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x24383B0", Offset = "0x24369B0", VA = "0x1824383B0", Slot = "5")]
	protected internal virtual Expression VisitBinary(BinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x24385F0", Offset = "0x2436BF0", VA = "0x1824385F0", Slot = "6")]
	protected internal virtual Expression VisitBlock(BlockExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x2438800", Offset = "0x2436E00", VA = "0x182438800", Slot = "7")]
	protected internal virtual Expression VisitConditional(ConditionalExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x8E13A0", Offset = "0x8DF9A0", VA = "0x1808E13A0", Slot = "8")]
	protected internal virtual Expression VisitConstant(ConstantExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x8E13A0", Offset = "0x8DF9A0", VA = "0x1808E13A0", Slot = "9")]
	protected internal virtual Expression VisitDefault(DefaultExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x242B930", Offset = "0x2429F30", VA = "0x18242B930", Slot = "10")]
	protected internal virtual Expression VisitExtension(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x2438930", Offset = "0x2436F30", VA = "0x182438930", Slot = "11")]
	protected internal virtual Expression VisitGoto(GotoExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x2438B00", Offset = "0x2437100", VA = "0x182438B00", Slot = "12")]
	protected internal virtual Expression VisitInvocation(InvocationExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x8E13A0", Offset = "0x8DF9A0", VA = "0x1808E13A0", Slot = "13")]
	protected virtual LabelTarget VisitLabelTarget(LabelTarget node)
	{
		return null;
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x2438B90", Offset = "0x2437190", VA = "0x182438B90", Slot = "14")]
	protected internal virtual Expression VisitLabel(LabelExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E3")]
	protected internal virtual Expression VisitLambda<T>(Expression<T> node)
	{
		return null;
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x2438C50", Offset = "0x2437250", VA = "0x182438C50", Slot = "16")]
	protected internal virtual Expression VisitLoop(LoopExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x2438D40", Offset = "0x2437340", VA = "0x182438D40", Slot = "17")]
	protected internal virtual Expression VisitMember(MemberExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x2438A20", Offset = "0x2437020", VA = "0x182438A20", Slot = "18")]
	protected internal virtual Expression VisitIndex(IndexExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x2438DF0", Offset = "0x24373F0", VA = "0x182438DF0", Slot = "19")]
	protected internal virtual Expression VisitMethodCall(MethodCallExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x2438EB0", Offset = "0x24374B0", VA = "0x182438EB0", Slot = "20")]
	protected internal virtual Expression VisitNewArray(NewArrayExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x8E13A0", Offset = "0x8DF9A0", VA = "0x1808E13A0", Slot = "21")]
	protected internal virtual Expression VisitParameter(ParameterExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x24386E0", Offset = "0x2436CE0", VA = "0x1824386E0", Slot = "22")]
	protected virtual CatchBlock VisitCatchBlock(CatchBlock node)
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x2439040", Offset = "0x2437640", VA = "0x182439040", Slot = "23")]
	protected internal virtual Expression VisitTry(TryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x2439200", Offset = "0x2437800", VA = "0x182439200", Slot = "24")]
	protected internal virtual Expression VisitTypeBinary(TypeBinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x24392D0", Offset = "0x24378D0", VA = "0x1824392D0", Slot = "25")]
	protected internal virtual Expression VisitUnary(UnaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x2438280", Offset = "0x2436880", VA = "0x182438280")]
	private static UnaryExpression ValidateUnary(UnaryExpression before, UnaryExpression after)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x2438020", Offset = "0x2436620", VA = "0x182438020")]
	private static BinaryExpression ValidateBinary(BinaryExpression before, BinaryExpression after)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x24381B0", Offset = "0x24367B0", VA = "0x1824381B0")]
	private static void ValidateChildType(Type before, Type after, string methodName)
	{
	}
}
