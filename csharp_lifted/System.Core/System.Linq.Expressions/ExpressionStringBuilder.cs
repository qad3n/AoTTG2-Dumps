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

[Token(Token = "0x2000081")]
internal sealed class ExpressionStringBuilder : ExpressionVisitor
{
	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x10")]
	private readonly StringBuilder _out;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<object, int> _ids;

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x5DCD480", Offset = "0x5DCC480", VA = "0x5DCD480")]
	private ExpressionStringBuilder()
	{
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x5DCD500", Offset = "0x5DCC500", VA = "0x5DCD500", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x5DCD530", Offset = "0x5DCC530", VA = "0x5DCD530")]
	private int GetLabelId(LabelTarget label)
	{
		return default(int);
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x5DCD650", Offset = "0x5DCC650", VA = "0x5DCD650")]
	private int GetParamId(ParameterExpression p)
	{
		return default(int);
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x5DCD540", Offset = "0x5DCC540", VA = "0x5DCD540")]
	private int GetId(object o)
	{
		return default(int);
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x5DCD660", Offset = "0x5DCC660", VA = "0x5DCD660")]
	private void Out(string s)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x5DCD680", Offset = "0x5DCC680", VA = "0x5DCD680")]
	private void Out(char c)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x5DCD6A0", Offset = "0x5DCC6A0", VA = "0x5DCD6A0")]
	internal static string ExpressionToString(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x5DC61B0", Offset = "0x5DC51B0", VA = "0x5DC61B0")]
	internal static string CatchBlockToString(CatchBlock node)
	{
		return null;
	}

	[Token(Token = "0x60003C3")]
	private void VisitExpressions<T>(char open, ReadOnlyCollection<T> expressions, char close) where T : Expression
	{
	}

	[Token(Token = "0x60003C4")]
	private void VisitExpressions<T>(char open, ReadOnlyCollection<T> expressions, char close, string seperator) where T : Expression
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x5DCD760", Offset = "0x5DCC760", VA = "0x5DCD760", Slot = "5")]
	protected internal override Expression VisitBinary(BinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x5DCDD80", Offset = "0x5DCCD80", VA = "0x5DCDD80", Slot = "21")]
	protected internal override Expression VisitParameter(ParameterExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C7")]
	protected internal override Expression VisitLambda<T>(Expression<T> node)
	{
		return null;
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x5DCDE90", Offset = "0x5DCCE90", VA = "0x5DCDE90", Slot = "7")]
	protected internal override Expression VisitConditional(ConditionalExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x5DCDFA0", Offset = "0x5DCCFA0", VA = "0x5DCDFA0", Slot = "8")]
	protected internal override Expression VisitConstant(ConstantExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x5DCE110", Offset = "0x5DCD110", VA = "0x5DCE110")]
	private void OutMember(Expression instance, MemberInfo member)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x5DCE1E0", Offset = "0x5DCD1E0", VA = "0x5DCE1E0", Slot = "17")]
	protected internal override Expression VisitMember(MemberExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x5DCE250", Offset = "0x5DCD250", VA = "0x5DCE250", Slot = "12")]
	protected internal override Expression VisitInvocation(InvocationExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x5DCE360", Offset = "0x5DCD360", VA = "0x5DCE360", Slot = "19")]
	protected internal override Expression VisitMethodCall(MethodCallExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x5DCE5B0", Offset = "0x5DCD5B0", VA = "0x5DCE5B0", Slot = "20")]
	protected internal override Expression VisitNewArray(NewArrayExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x5DCE6F0", Offset = "0x5DCD6F0", VA = "0x5DCE6F0", Slot = "24")]
	protected internal override Expression VisitTypeBinary(TypeBinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x5DCE800", Offset = "0x5DCD800", VA = "0x5DCE800", Slot = "25")]
	protected internal override Expression VisitUnary(UnaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x5DCEC00", Offset = "0x5DCDC00", VA = "0x5DCEC00", Slot = "6")]
	protected internal override Expression VisitBlock(BlockExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x5DCEF40", Offset = "0x5DCDF40", VA = "0x5DCEF40", Slot = "9")]
	protected internal override Expression VisitDefault(DefaultExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x5DCEFF0", Offset = "0x5DCDFF0", VA = "0x5DCEFF0", Slot = "14")]
	protected internal override Expression VisitLabel(LabelExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x5DCF120", Offset = "0x5DCE120", VA = "0x5DCF120", Slot = "11")]
	protected internal override Expression VisitGoto(GotoExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x5DCF280", Offset = "0x5DCE280", VA = "0x5DCF280", Slot = "16")]
	protected internal override Expression VisitLoop(LoopExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x5DCF2D0", Offset = "0x5DCE2D0", VA = "0x5DCF2D0", Slot = "22")]
	protected override CatchBlock VisitCatchBlock(CatchBlock node)
	{
		return null;
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x5DCF3E0", Offset = "0x5DCE3E0", VA = "0x5DCF3E0", Slot = "23")]
	protected internal override Expression VisitTry(TryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x5DCF430", Offset = "0x5DCE430", VA = "0x5DCF430", Slot = "18")]
	protected internal override Expression VisitIndex(IndexExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x5DCF850", Offset = "0x5DCE850", VA = "0x5DCF850", Slot = "10")]
	protected internal override Expression VisitExtension(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x5DCF070", Offset = "0x5DCE070", VA = "0x5DCF070")]
	private void DumpLabel(LabelTarget target)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x5DCDC80", Offset = "0x5DCCC80", VA = "0x5DCDC80")]
	private static bool IsBool(Expression node)
	{
		return default(bool);
	}
}
