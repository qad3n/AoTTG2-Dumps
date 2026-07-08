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
	[Address(RVA = "0x4192250", Offset = "0x4192250", VA = "0x4192250")]
	private ExpressionStringBuilder()
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x41922D0", Offset = "0x41922D0", VA = "0x41922D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x4192300", Offset = "0x4192300", VA = "0x4192300")]
	private int GetLabelId(LabelTarget label)
	{
		return default(int);
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x4192420", Offset = "0x4192420", VA = "0x4192420")]
	private int GetParamId(ParameterExpression p)
	{
		return default(int);
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x4192310", Offset = "0x4192310", VA = "0x4192310")]
	private int GetId(object o)
	{
		return default(int);
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x4192430", Offset = "0x4192430", VA = "0x4192430")]
	private void Out(string s)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x4192450", Offset = "0x4192450", VA = "0x4192450")]
	private void Out(char c)
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x4192470", Offset = "0x4192470", VA = "0x4192470")]
	internal static string ExpressionToString(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x418AFA0", Offset = "0x418AFA0", VA = "0x418AFA0")]
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
	[Address(RVA = "0x4192540", Offset = "0x4192540", VA = "0x4192540", Slot = "5")]
	protected internal override Expression VisitBinary(BinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x4192D30", Offset = "0x4192D30", VA = "0x4192D30", Slot = "21")]
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
	[Address(RVA = "0x4192E50", Offset = "0x4192E50", VA = "0x4192E50", Slot = "7")]
	protected internal override Expression VisitConditional(ConditionalExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x4192F60", Offset = "0x4192F60", VA = "0x4192F60", Slot = "8")]
	protected internal override Expression VisitConstant(ConstantExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x41930D0", Offset = "0x41930D0", VA = "0x41930D0")]
	private void OutMember(Expression instance, MemberInfo member)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x41931A0", Offset = "0x41931A0", VA = "0x41931A0", Slot = "17")]
	protected internal override Expression VisitMember(MemberExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x4193210", Offset = "0x4193210", VA = "0x4193210", Slot = "12")]
	protected internal override Expression VisitInvocation(InvocationExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x4193330", Offset = "0x4193330", VA = "0x4193330", Slot = "19")]
	protected internal override Expression VisitMethodCall(MethodCallExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x4193540", Offset = "0x4193540", VA = "0x4193540", Slot = "20")]
	protected internal override Expression VisitNewArray(NewArrayExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x4193680", Offset = "0x4193680", VA = "0x4193680", Slot = "24")]
	protected internal override Expression VisitTypeBinary(TypeBinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x4193790", Offset = "0x4193790", VA = "0x4193790", Slot = "25")]
	protected internal override Expression VisitUnary(UnaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x4193BE0", Offset = "0x4193BE0", VA = "0x4193BE0", Slot = "6")]
	protected internal override Expression VisitBlock(BlockExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x4193F80", Offset = "0x4193F80", VA = "0x4193F80", Slot = "9")]
	protected internal override Expression VisitDefault(DefaultExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x4194030", Offset = "0x4194030", VA = "0x4194030", Slot = "14")]
	protected internal override Expression VisitLabel(LabelExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x4194150", Offset = "0x4194150", VA = "0x4194150", Slot = "11")]
	protected internal override Expression VisitGoto(GotoExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x41942B0", Offset = "0x41942B0", VA = "0x41942B0", Slot = "16")]
	protected internal override Expression VisitLoop(LoopExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x4194300", Offset = "0x4194300", VA = "0x4194300", Slot = "22")]
	protected override CatchBlock VisitCatchBlock(CatchBlock node)
	{
		return null;
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x4194410", Offset = "0x4194410", VA = "0x4194410", Slot = "23")]
	protected internal override Expression VisitTry(TryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x4194460", Offset = "0x4194460", VA = "0x4194460", Slot = "18")]
	protected internal override Expression VisitIndex(IndexExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x4194890", Offset = "0x4194890", VA = "0x4194890", Slot = "10")]
	protected internal override Expression VisitExtension(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x41940B0", Offset = "0x41940B0", VA = "0x41940B0")]
	private void DumpLabel(LabelTarget target)
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x4192C30", Offset = "0x4192C30", VA = "0x4192C30")]
	private static bool IsBool(Expression node)
	{
		return default(bool);
	}
}
