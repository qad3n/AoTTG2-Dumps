// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.LabelExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000091")]
[DebuggerTypeProxy(typeof(LabelExpressionProxy))]
public sealed class LabelExpression : Expression
{
	[Token(Token = "0x1700009E")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000436")]
		[Address(RVA = "0x5DD2680", Offset = "0x5DD1680", VA = "0x5DD2680", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009F")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000437")]
		[Address(RVA = "0x5DD26A0", Offset = "0x5DD16A0", VA = "0x5DD26A0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000A0")]
	public LabelTarget Target
	{
		[Token(Token = "0x6000438")]
		[Address(RVA = "0x5DD26B0", Offset = "0x5DD16B0", VA = "0x5DD26B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A1")]
	public Expression DefaultValue
	{
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x5DD26C0", Offset = "0x5DD16C0", VA = "0x5DD26C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x5DD2600", Offset = "0x5DD1600", VA = "0x5DD2600")]
	internal LabelExpression(LabelTarget label, Expression defaultValue)
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x5DD26D0", Offset = "0x5DD16D0", VA = "0x5DD26D0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x5DD04D0", Offset = "0x5DCF4D0", VA = "0x5DD04D0")]
	public LabelExpression Update(LabelTarget target, Expression defaultValue)
	{
		return null;
	}
}
