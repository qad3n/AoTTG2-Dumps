// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.ExpressionStringBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Reflection;
using System.Text;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000080")]
internal sealed class ExpressionStringBuilder : ExpressionVisitor
{
	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x10")]
	private readonly StringBuilder _out;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<object, int> _ids;

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x44B7350", Offset = "0x44B7350", VA = "0x44B7350")]
	private ExpressionStringBuilder()
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x44B73D0", Offset = "0x44B73D0", VA = "0x44B73D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x44B7400", Offset = "0x44B7400", VA = "0x44B7400")]
	private int GetLabelId(LabelTarget label)
	{
		return default(int);
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x44B7520", Offset = "0x44B7520", VA = "0x44B7520")]
	private int GetParamId(ParameterExpression p)
	{
		return default(int);
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x44B7410", Offset = "0x44B7410", VA = "0x44B7410")]
	private int GetId(object o)
	{
		return default(int);
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x44B7530", Offset = "0x44B7530", VA = "0x44B7530")]
	private void Out(string s)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x44B7550", Offset = "0x44B7550", VA = "0x44B7550")]
	private void Out(char c)
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x44B7570", Offset = "0x44B7570", VA = "0x44B7570")]
	internal static string ExpressionToString(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x44B00A0", Offset = "0x44B00A0", VA = "0x44B00A0")]
	internal static string CatchBlockToString(CatchBlock node)
	{
		return null;
	}

	[Token(Token = "0x60003B9")]
	private void VisitExpressions<T>(char open, ReadOnlyCollection<T> expressions, char close) where T : Expression
	{
	}

	[Token(Token = "0x60003BA")]
	private void VisitExpressions<T>(char open, ReadOnlyCollection<T> expressions, char close, string seperator) where T : Expression
	{
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x44B7640", Offset = "0x44B7640", VA = "0x44B7640", Slot = "5")]
	protected internal override Expression VisitBinary(BinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x44B7E30", Offset = "0x44B7E30", VA = "0x44B7E30", Slot = "21")]
	protected internal override Expression VisitParameter(ParameterExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003BD")]
	protected internal override Expression VisitLambda<T>(Expression<T> node)
	{
		return null;
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x44B7F50", Offset = "0x44B7F50", VA = "0x44B7F50", Slot = "7")]
	protected internal override Expression VisitConditional(ConditionalExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x44B8060", Offset = "0x44B8060", VA = "0x44B8060", Slot = "8")]
	protected internal override Expression VisitConstant(ConstantExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x44B81D0", Offset = "0x44B81D0", VA = "0x44B81D0")]
	private void OutMember(Expression instance, MemberInfo member)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x44B82A0", Offset = "0x44B82A0", VA = "0x44B82A0", Slot = "17")]
	protected internal override Expression VisitMember(MemberExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x44B8310", Offset = "0x44B8310", VA = "0x44B8310", Slot = "12")]
	protected internal override Expression VisitInvocation(InvocationExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x44B8430", Offset = "0x44B8430", VA = "0x44B8430", Slot = "19")]
	protected internal override Expression VisitMethodCall(MethodCallExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x44B8640", Offset = "0x44B8640", VA = "0x44B8640", Slot = "20")]
	protected internal override Expression VisitNewArray(NewArrayExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x44B8780", Offset = "0x44B8780", VA = "0x44B8780", Slot = "24")]
	protected internal override Expression VisitTypeBinary(TypeBinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x44B8890", Offset = "0x44B8890", VA = "0x44B8890", Slot = "25")]
	protected internal override Expression VisitUnary(UnaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x44B8CE0", Offset = "0x44B8CE0", VA = "0x44B8CE0", Slot = "6")]
	protected internal override Expression VisitBlock(BlockExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x44B9080", Offset = "0x44B9080", VA = "0x44B9080", Slot = "9")]
	protected internal override Expression VisitDefault(DefaultExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x44B9130", Offset = "0x44B9130", VA = "0x44B9130", Slot = "14")]
	protected internal override Expression VisitLabel(LabelExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x44B9250", Offset = "0x44B9250", VA = "0x44B9250", Slot = "11")]
	protected internal override Expression VisitGoto(GotoExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x44B93B0", Offset = "0x44B93B0", VA = "0x44B93B0", Slot = "16")]
	protected internal override Expression VisitLoop(LoopExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x44B9400", Offset = "0x44B9400", VA = "0x44B9400", Slot = "22")]
	protected override CatchBlock VisitCatchBlock(CatchBlock node)
	{
		return null;
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x44B9510", Offset = "0x44B9510", VA = "0x44B9510", Slot = "23")]
	protected internal override Expression VisitTry(TryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x44B9560", Offset = "0x44B9560", VA = "0x44B9560", Slot = "18")]
	protected internal override Expression VisitIndex(IndexExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x44B9990", Offset = "0x44B9990", VA = "0x44B9990", Slot = "10")]
	protected internal override Expression VisitExtension(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x44B91B0", Offset = "0x44B91B0", VA = "0x44B91B0")]
	private void DumpLabel(LabelTarget target)
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x44B7D30", Offset = "0x44B7D30", VA = "0x44B7D30")]
	private static bool IsBool(Expression node)
	{
		return default(bool);
	}
}
