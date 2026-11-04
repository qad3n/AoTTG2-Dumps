// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.ConditionalExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000077")]
[DebuggerTypeProxy(typeof(ConditionalExpressionProxy))]
public class ConditionalExpression : Expression
{
	[Token(Token = "0x17000072")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x600030A")]
		[Address(RVA = "0x846F50", Offset = "0x845550", VA = "0x180846F50", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000073")]
	public override Type Type
	{
		[Token(Token = "0x600030B")]
		[Address(RVA = "0x24067F0", Offset = "0x2404DF0", VA = "0x1824067F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000074")]
	public Expression Test
	{
		[Token(Token = "0x600030C")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	public Expression IfTrue
	{
		[Token(Token = "0x600030D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000076")]
	public Expression IfFalse
	{
		[Token(Token = "0x600030E")]
		[Address(RVA = "0x209B220", Offset = "0x2099820", VA = "0x18209B220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x242B660", Offset = "0x2429C60", VA = "0x18242B660")]
	internal ConditionalExpression(Expression test, Expression ifTrue)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x242B3A0", Offset = "0x24299A0", VA = "0x18242B3A0")]
	internal static ConditionalExpression Make(Expression test, Expression ifTrue, Expression ifFalse, Type type)
	{
		return null;
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x242B340", Offset = "0x2429940", VA = "0x18242B340", Slot = "10")]
	internal virtual Expression GetFalse()
	{
		return null;
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x242B310", Offset = "0x2429910", VA = "0x18242B310", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x242B5A0", Offset = "0x2429BA0", VA = "0x18242B5A0")]
	public ConditionalExpression Update(Expression test, Expression ifTrue, Expression ifFalse)
	{
		return null;
	}
}
