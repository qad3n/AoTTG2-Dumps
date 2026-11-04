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

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x2437FB0", Offset = "0x24365B0", VA = "0x182437FB0")]
	private ExpressionStringBuilder()
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0xC8D930", Offset = "0xC8BF30", VA = "0x180C8D930", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x2435CE0", Offset = "0x24342E0", VA = "0x182435CE0")]
	private int GetLabelId(LabelTarget label)
	{
		return default(int);
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x2435CE0", Offset = "0x24342E0", VA = "0x182435CE0")]
	private int GetParamId(ParameterExpression p)
	{
		return default(int);
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x2435BD0", Offset = "0x24341D0", VA = "0x182435BD0")]
	private int GetId(object o)
	{
		return default(int);
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x2435EC0", Offset = "0x24344C0", VA = "0x182435EC0")]
	private void Out(string s)
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x2435EE0", Offset = "0x24344E0", VA = "0x182435EE0")]
	private void Out(char c)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x2435B00", Offset = "0x2434100", VA = "0x182435B00")]
	internal static string ExpressionToString(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x242B040", Offset = "0x2429640", VA = "0x18242B040")]
	internal static string CatchBlockToString(CatchBlock node)
	{
		return null;
	}

	[Token(Token = "0x60003B8")]
	private void VisitExpressions<T>(char open, ReadOnlyCollection<T> expressions, char close) where T : Expression
	{
	}

	[Token(Token = "0x60003B9")]
	private void VisitExpressions<T>(char open, ReadOnlyCollection<T> expressions, char close, string seperator) where T : Expression
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x2435F00", Offset = "0x2434500", VA = "0x182435F00", Slot = "5")]
	protected internal override Expression VisitBinary(BinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x2437830", Offset = "0x2435E30", VA = "0x182437830", Slot = "21")]
	protected internal override Expression VisitParameter(ParameterExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003BC")]
	protected internal override Expression VisitLambda<T>(Expression<T> node)
	{
		return null;
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x24368E0", Offset = "0x2434EE0", VA = "0x1824368E0", Slot = "7")]
	protected internal override Expression VisitConditional(ConditionalExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x2436A00", Offset = "0x2435000", VA = "0x182436A00", Slot = "8")]
	protected internal override Expression VisitConstant(ConstantExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x2435DF0", Offset = "0x24343F0", VA = "0x182435DF0")]
	private void OutMember(Expression instance, MemberInfo member)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x2437410", Offset = "0x2435A10", VA = "0x182437410", Slot = "17")]
	protected internal override Expression VisitMember(MemberExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x24371F0", Offset = "0x24357F0", VA = "0x1824371F0", Slot = "12")]
	protected internal override Expression VisitInvocation(InvocationExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x2437510", Offset = "0x2435B10", VA = "0x182437510", Slot = "19")]
	protected internal override Expression VisitMethodCall(MethodCallExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x2437700", Offset = "0x2435D00", VA = "0x182437700", Slot = "20")]
	protected internal override Expression VisitNewArray(NewArrayExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x2437990", Offset = "0x2435F90", VA = "0x182437990", Slot = "24")]
	protected internal override Expression VisitTypeBinary(TypeBinaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x2437AA0", Offset = "0x24360A0", VA = "0x182437AA0", Slot = "25")]
	protected internal override Expression VisitUnary(UnaryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x2436520", Offset = "0x2434B20", VA = "0x182436520", Slot = "6")]
	protected internal override Expression VisitBlock(BlockExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x2436BB0", Offset = "0x24351B0", VA = "0x182436BB0", Slot = "9")]
	protected internal override Expression VisitDefault(DefaultExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x2437320", Offset = "0x2435920", VA = "0x182437320", Slot = "14")]
	protected internal override Expression VisitLabel(LabelExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x2436E70", Offset = "0x2435470", VA = "0x182436E70", Slot = "11")]
	protected internal override Expression VisitGoto(GotoExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x24373B0", Offset = "0x24359B0", VA = "0x1824373B0", Slot = "16")]
	protected internal override Expression VisitLoop(LoopExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x24367D0", Offset = "0x2434DD0", VA = "0x1824367D0", Slot = "22")]
	protected override CatchBlock VisitCatchBlock(CatchBlock node)
	{
		return null;
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x2437930", Offset = "0x2435F30", VA = "0x182437930", Slot = "23")]
	protected internal override Expression VisitTry(TryExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x2437000", Offset = "0x2435600", VA = "0x182437000", Slot = "18")]
	protected internal override Expression VisitIndex(IndexExpression node)
	{
		return null;
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x2436C70", Offset = "0x2435270", VA = "0x182436C70", Slot = "10")]
	protected internal override Expression VisitExtension(Expression node)
	{
		return null;
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x2435A40", Offset = "0x2434040", VA = "0x182435A40")]
	private void DumpLabel(LabelTarget target)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x2435CF0", Offset = "0x24342F0", VA = "0x182435CF0")]
	private static bool IsBool(Expression node)
	{
		return default(bool);
	}
}
